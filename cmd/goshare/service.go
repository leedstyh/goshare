package main

import (
	"log"

	"github.com/mineralres/goshare/pkg/util/datasource"
	"github.com/mineralres/goshare/pkg/pb"
	"github.com/mineralres/goshare/pkg/service"
	"github.com/mineralres/goshare/pkg/service/dcenter"
	"github.com/mineralres/goshare/pkg/service/dcenter/tdxclient"
	"github.com/mineralres/goshare/pkg/service/ucenter"
	"google.golang.org/grpc"
)

func runSrv(c *config) {
	// 也可以考虑多进程部署
	go runUserManagerSrv()
	go runDCenterSrv(c)
}

// 用户管理
func runUserManagerSrv() {
	list, err := service.Register("srv.ucenter")
	if err != nil {
		panic(err)
	}
	grpcServer := grpc.NewServer()
	pb.RegisterUCenterServer(grpcServer, ucenter.MakeRPCHandler())
	grpcServer.Serve(list)
}

// 行情服务
func runDCenterSrv(c *config) {
	list, err := service.Register("srv.dcenter")
	if err != nil {
		panic(err)
	}
	grpcServer := grpc.NewServer()
	ds1 := tdxclient.MakePool(&c.TDXOptions)
	var dsList []dcenter.DataSource
	dsList = append(dsList, ds1)
	log.Println("使用TDX数据源")
	gsclient := datasource.MakeClient(&datasource.ClientOptions{Host: c.GSHost})
	log.Printf("使用goshare官方推送数据源[%s]", c.GSHost)
	pb.RegisterDCenterServer(grpcServer, dcenter.MakeRPCHandler(dsList, gsclient))
	grpcServer.Serve(list)
}