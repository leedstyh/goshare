// Code generated by protoc-gen-go. DO NOT EDIT.
// source: goshare.proto

package pb

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type ReqSSEStockOptionList struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ReqSSEStockOptionList) Reset()         { *m = ReqSSEStockOptionList{} }
func (m *ReqSSEStockOptionList) String() string { return proto.CompactTextString(m) }
func (*ReqSSEStockOptionList) ProtoMessage()    {}
func (*ReqSSEStockOptionList) Descriptor() ([]byte, []int) {
	return fileDescriptor_e07824296bb87a9a, []int{0}
}

func (m *ReqSSEStockOptionList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ReqSSEStockOptionList.Unmarshal(m, b)
}
func (m *ReqSSEStockOptionList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ReqSSEStockOptionList.Marshal(b, m, deterministic)
}
func (m *ReqSSEStockOptionList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ReqSSEStockOptionList.Merge(m, src)
}
func (m *ReqSSEStockOptionList) XXX_Size() int {
	return xxx_messageInfo_ReqSSEStockOptionList.Size(m)
}
func (m *ReqSSEStockOptionList) XXX_DiscardUnknown() {
	xxx_messageInfo_ReqSSEStockOptionList.DiscardUnknown(m)
}

var xxx_messageInfo_ReqSSEStockOptionList proto.InternalMessageInfo

type RspSSEStockOptionList struct {
	List                 []*SSEStockOption `protobuf:"bytes,1,rep,name=list,proto3" json:"list"`
	XXX_NoUnkeyedLiteral struct{}          `json:"-"`
	XXX_unrecognized     []byte            `json:"-"`
	XXX_sizecache        int32             `json:"-"`
}

func (m *RspSSEStockOptionList) Reset()         { *m = RspSSEStockOptionList{} }
func (m *RspSSEStockOptionList) String() string { return proto.CompactTextString(m) }
func (*RspSSEStockOptionList) ProtoMessage()    {}
func (*RspSSEStockOptionList) Descriptor() ([]byte, []int) {
	return fileDescriptor_e07824296bb87a9a, []int{1}
}

func (m *RspSSEStockOptionList) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_RspSSEStockOptionList.Unmarshal(m, b)
}
func (m *RspSSEStockOptionList) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_RspSSEStockOptionList.Marshal(b, m, deterministic)
}
func (m *RspSSEStockOptionList) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RspSSEStockOptionList.Merge(m, src)
}
func (m *RspSSEStockOptionList) XXX_Size() int {
	return xxx_messageInfo_RspSSEStockOptionList.Size(m)
}
func (m *RspSSEStockOptionList) XXX_DiscardUnknown() {
	xxx_messageInfo_RspSSEStockOptionList.DiscardUnknown(m)
}

var xxx_messageInfo_RspSSEStockOptionList proto.InternalMessageInfo

func (m *RspSSEStockOptionList) GetList() []*SSEStockOption {
	if m != nil {
		return m.List
	}
	return nil
}

func init() {
	proto.RegisterType((*ReqSSEStockOptionList)(nil), "pb.ReqSSEStockOptionList")
	proto.RegisterType((*RspSSEStockOptionList)(nil), "pb.RspSSEStockOptionList")
}

func init() { proto.RegisterFile("goshare.proto", fileDescriptor_e07824296bb87a9a) }

var fileDescriptor_e07824296bb87a9a = []byte{
	// 329 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x74, 0x92, 0x4d, 0x4f, 0xf2, 0x40,
	0x10, 0xc7, 0xcb, 0xc3, 0x13, 0x25, 0x03, 0xa2, 0x8c, 0xc1, 0x97, 0x3d, 0x99, 0x3d, 0x18, 0x4f,
	0x04, 0xe1, 0xc0, 0xc5, 0xc4, 0x83, 0x10, 0x2e, 0x10, 0x4d, 0xd7, 0xbb, 0xd9, 0xd6, 0x0d, 0x34,
	0xd0, 0xee, 0xd2, 0x1d, 0x0e, 0x7c, 0x6b, 0x3f, 0x82, 0xe9, 0x52, 0xb5, 0x0d, 0xe5, 0xd6, 0xfe,
	0x5f, 0x76, 0x7e, 0x93, 0x5d, 0x38, 0x5b, 0x68, 0xbb, 0x94, 0xa9, 0xea, 0x99, 0x54, 0x93, 0xc6,
	0x7f, 0x26, 0x60, 0xad, 0x50, 0xc7, 0xb1, 0x4e, 0xf6, 0x0a, 0xeb, 0xc4, 0x32, 0x5d, 0x29, 0xfa,
	0xf8, 0x94, 0x24, 0x73, 0xa9, 0x6d, 0x29, 0x95, 0xa4, 0x16, 0xbb, 0xfd, 0x3f, 0xbf, 0x86, 0xae,
	0xaf, 0x36, 0x42, 0x4c, 0x04, 0xe9, 0x70, 0xf5, 0x6a, 0x28, 0xd2, 0xc9, 0x2c, 0xb2, 0xc4, 0x9f,
	0xa1, 0xeb, 0x5b, 0x73, 0x68, 0xe0, 0x3d, 0xfc, 0x5f, 0x47, 0x96, 0x6e, 0x6a, 0x77, 0xf5, 0x87,
	0xe6, 0x00, 0x7b, 0x26, 0xe8, 0x95, 0x53, 0xbe, 0xf3, 0x07, 0x5f, 0x75, 0x38, 0x9d, 0x6a, 0x91,
	0x01, 0x62, 0x1f, 0x1a, 0x33, 0x69, 0xe9, 0x3d, 0x0a, 0x57, 0x08, 0xae, 0xb1, 0x8b, 0x03, 0xbd,
	0x66, 0x57, 0xd9, 0xf7, 0xdc, 0x41, 0x8e, 0x25, 0x49, 0x91, 0x48, 0x63, 0x97, 0x9a, 0xb8, 0x87,
	0x33, 0xc0, 0x8a, 0xd9, 0xb7, 0x59, 0xbe, 0x92, 0x97, 0xed, 0xad, 0x2a, 0x62, 0xee, 0xe1, 0x1c,
	0x2e, 0xc5, 0x36, 0xb0, 0x61, 0x1a, 0x05, 0xea, 0x6f, 0x1c, 0xb2, 0x9f, 0xe3, 0x0e, 0xbd, 0xe3,
	0x68, 0xfd, 0x1a, 0x8e, 0xa0, 0xf1, 0xb6, 0xb5, 0x4b, 0xb7, 0xce, 0x91, 0x1c, 0xeb, 0x64, 0xfa,
	0x24, 0x36, 0xb4, 0xf3, 0x95, 0x35, 0x3a, 0xb1, 0x8a, 0x7b, 0x38, 0x82, 0xf3, 0xa9, 0x22, 0x91,
	0x5f, 0x81, 0x5b, 0xe9, 0xa2, 0x90, 0xdb, 0x6c, 0x95, 0x25, 0xe6, 0x94, 0x62, 0x86, 0x7b, 0xf8,
	0x08, 0xcd, 0x42, 0x11, 0x31, 0x07, 0x2f, 0x68, 0xac, 0x55, 0xac, 0x71, 0x0f, 0x87, 0xd0, 0x7e,
	0x49, 0x95, 0x24, 0xf5, 0xdb, 0x2a, 0x25, 0xaa, 0x01, 0x9f, 0xa0, 0x3d, 0x56, 0x6b, 0x55, 0x28,
	0x75, 0xf3, 0x51, 0x65, 0xb9, 0xb2, 0x1d, 0x9c, 0xb8, 0x37, 0x35, 0xfc, 0x0e, 0x00, 0x00, 0xff,
	0xff, 0x2e, 0x62, 0xf6, 0x6e, 0x99, 0x02, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// GoShareClient is the client API for GoShare service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type GoShareClient interface {
	// GetLastTick 获取最新行情
	LastTick(ctx context.Context, in *Symbol, opts ...grpc.CallOption) (*MarketDataSnapshot, error)
	// SSEStockOptionList 上证所期权列表
	SSEStockOptionList(ctx context.Context, in *ReqSSEStockOptionList, opts ...grpc.CallOption) (*RspSSEStockOptionList, error)
	// SubscribeMarketData 订阅行情
	SubscribeMarketData(ctx context.Context, in *ReqSubscribeMarketData, opts ...grpc.CallOption) (GoShare_SubscribeMarketDataClient, error)
	// PushTick 推送tick更新
	PushTick(ctx context.Context, in *MarketDataSnapshot, opts ...grpc.CallOption) (*EmptyResponse, error)
	// 策略列表
	GetStrategyList(ctx context.Context, in *EmptyRequest, opts ...grpc.CallOption) (*StrategyList, error)
	// 查询策略
	GetStrategy(ctx context.Context, in *ReqGetStrategy, opts ...grpc.CallOption) (*Strategy, error)
	// 创建策略
	CreateStrategy(ctx context.Context, in *Strategy, opts ...grpc.CallOption) (*EmptyResponse, error)
	// 删除策略
	DeleteStrategy(ctx context.Context, in *ReqDeleteStrategy, opts ...grpc.CallOption) (*EmptyResponse, error)
}

type goShareClient struct {
	cc *grpc.ClientConn
}

func NewGoShareClient(cc *grpc.ClientConn) GoShareClient {
	return &goShareClient{cc}
}

func (c *goShareClient) LastTick(ctx context.Context, in *Symbol, opts ...grpc.CallOption) (*MarketDataSnapshot, error) {
	out := new(MarketDataSnapshot)
	err := c.cc.Invoke(ctx, "/pb.GoShare/LastTick", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) SSEStockOptionList(ctx context.Context, in *ReqSSEStockOptionList, opts ...grpc.CallOption) (*RspSSEStockOptionList, error) {
	out := new(RspSSEStockOptionList)
	err := c.cc.Invoke(ctx, "/pb.GoShare/SSEStockOptionList", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) SubscribeMarketData(ctx context.Context, in *ReqSubscribeMarketData, opts ...grpc.CallOption) (GoShare_SubscribeMarketDataClient, error) {
	stream, err := c.cc.NewStream(ctx, &_GoShare_serviceDesc.Streams[0], "/pb.GoShare/SubscribeMarketData", opts...)
	if err != nil {
		return nil, err
	}
	x := &goShareSubscribeMarketDataClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type GoShare_SubscribeMarketDataClient interface {
	Recv() (*MarketDataSnapshot, error)
	grpc.ClientStream
}

type goShareSubscribeMarketDataClient struct {
	grpc.ClientStream
}

func (x *goShareSubscribeMarketDataClient) Recv() (*MarketDataSnapshot, error) {
	m := new(MarketDataSnapshot)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *goShareClient) PushTick(ctx context.Context, in *MarketDataSnapshot, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/pb.GoShare/PushTick", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) GetStrategyList(ctx context.Context, in *EmptyRequest, opts ...grpc.CallOption) (*StrategyList, error) {
	out := new(StrategyList)
	err := c.cc.Invoke(ctx, "/pb.GoShare/GetStrategyList", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) GetStrategy(ctx context.Context, in *ReqGetStrategy, opts ...grpc.CallOption) (*Strategy, error) {
	out := new(Strategy)
	err := c.cc.Invoke(ctx, "/pb.GoShare/GetStrategy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) CreateStrategy(ctx context.Context, in *Strategy, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/pb.GoShare/CreateStrategy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *goShareClient) DeleteStrategy(ctx context.Context, in *ReqDeleteStrategy, opts ...grpc.CallOption) (*EmptyResponse, error) {
	out := new(EmptyResponse)
	err := c.cc.Invoke(ctx, "/pb.GoShare/DeleteStrategy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// GoShareServer is the server API for GoShare service.
type GoShareServer interface {
	// GetLastTick 获取最新行情
	LastTick(context.Context, *Symbol) (*MarketDataSnapshot, error)
	// SSEStockOptionList 上证所期权列表
	SSEStockOptionList(context.Context, *ReqSSEStockOptionList) (*RspSSEStockOptionList, error)
	// SubscribeMarketData 订阅行情
	SubscribeMarketData(*ReqSubscribeMarketData, GoShare_SubscribeMarketDataServer) error
	// PushTick 推送tick更新
	PushTick(context.Context, *MarketDataSnapshot) (*EmptyResponse, error)
	// 策略列表
	GetStrategyList(context.Context, *EmptyRequest) (*StrategyList, error)
	// 查询策略
	GetStrategy(context.Context, *ReqGetStrategy) (*Strategy, error)
	// 创建策略
	CreateStrategy(context.Context, *Strategy) (*EmptyResponse, error)
	// 删除策略
	DeleteStrategy(context.Context, *ReqDeleteStrategy) (*EmptyResponse, error)
}

// UnimplementedGoShareServer can be embedded to have forward compatible implementations.
type UnimplementedGoShareServer struct {
}

func (*UnimplementedGoShareServer) LastTick(ctx context.Context, req *Symbol) (*MarketDataSnapshot, error) {
	return nil, status.Errorf(codes.Unimplemented, "method LastTick not implemented")
}
func (*UnimplementedGoShareServer) SSEStockOptionList(ctx context.Context, req *ReqSSEStockOptionList) (*RspSSEStockOptionList, error) {
	return nil, status.Errorf(codes.Unimplemented, "method SSEStockOptionList not implemented")
}
func (*UnimplementedGoShareServer) SubscribeMarketData(req *ReqSubscribeMarketData, srv GoShare_SubscribeMarketDataServer) error {
	return status.Errorf(codes.Unimplemented, "method SubscribeMarketData not implemented")
}
func (*UnimplementedGoShareServer) PushTick(ctx context.Context, req *MarketDataSnapshot) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method PushTick not implemented")
}
func (*UnimplementedGoShareServer) GetStrategyList(ctx context.Context, req *EmptyRequest) (*StrategyList, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetStrategyList not implemented")
}
func (*UnimplementedGoShareServer) GetStrategy(ctx context.Context, req *ReqGetStrategy) (*Strategy, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetStrategy not implemented")
}
func (*UnimplementedGoShareServer) CreateStrategy(ctx context.Context, req *Strategy) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method CreateStrategy not implemented")
}
func (*UnimplementedGoShareServer) DeleteStrategy(ctx context.Context, req *ReqDeleteStrategy) (*EmptyResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method DeleteStrategy not implemented")
}

func RegisterGoShareServer(s *grpc.Server, srv GoShareServer) {
	s.RegisterService(&_GoShare_serviceDesc, srv)
}

func _GoShare_LastTick_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Symbol)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).LastTick(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/LastTick",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).LastTick(ctx, req.(*Symbol))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_SSEStockOptionList_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ReqSSEStockOptionList)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).SSEStockOptionList(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/SSEStockOptionList",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).SSEStockOptionList(ctx, req.(*ReqSSEStockOptionList))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_SubscribeMarketData_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(ReqSubscribeMarketData)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(GoShareServer).SubscribeMarketData(m, &goShareSubscribeMarketDataServer{stream})
}

type GoShare_SubscribeMarketDataServer interface {
	Send(*MarketDataSnapshot) error
	grpc.ServerStream
}

type goShareSubscribeMarketDataServer struct {
	grpc.ServerStream
}

func (x *goShareSubscribeMarketDataServer) Send(m *MarketDataSnapshot) error {
	return x.ServerStream.SendMsg(m)
}

func _GoShare_PushTick_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(MarketDataSnapshot)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).PushTick(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/PushTick",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).PushTick(ctx, req.(*MarketDataSnapshot))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_GetStrategyList_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(EmptyRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).GetStrategyList(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/GetStrategyList",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).GetStrategyList(ctx, req.(*EmptyRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_GetStrategy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ReqGetStrategy)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).GetStrategy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/GetStrategy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).GetStrategy(ctx, req.(*ReqGetStrategy))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_CreateStrategy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Strategy)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).CreateStrategy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/CreateStrategy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).CreateStrategy(ctx, req.(*Strategy))
	}
	return interceptor(ctx, in, info, handler)
}

func _GoShare_DeleteStrategy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ReqDeleteStrategy)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(GoShareServer).DeleteStrategy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/pb.GoShare/DeleteStrategy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(GoShareServer).DeleteStrategy(ctx, req.(*ReqDeleteStrategy))
	}
	return interceptor(ctx, in, info, handler)
}

var _GoShare_serviceDesc = grpc.ServiceDesc{
	ServiceName: "pb.GoShare",
	HandlerType: (*GoShareServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "LastTick",
			Handler:    _GoShare_LastTick_Handler,
		},
		{
			MethodName: "SSEStockOptionList",
			Handler:    _GoShare_SSEStockOptionList_Handler,
		},
		{
			MethodName: "PushTick",
			Handler:    _GoShare_PushTick_Handler,
		},
		{
			MethodName: "GetStrategyList",
			Handler:    _GoShare_GetStrategyList_Handler,
		},
		{
			MethodName: "GetStrategy",
			Handler:    _GoShare_GetStrategy_Handler,
		},
		{
			MethodName: "CreateStrategy",
			Handler:    _GoShare_CreateStrategy_Handler,
		},
		{
			MethodName: "DeleteStrategy",
			Handler:    _GoShare_DeleteStrategy_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "SubscribeMarketData",
			Handler:       _GoShare_SubscribeMarketData_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "goshare.proto",
}
