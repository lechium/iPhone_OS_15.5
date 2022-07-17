//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSXPCConnection;

@interface VCPMADRemoteActivityClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    struct atomic<unsigned int> _taskID;	// 16 = 0x10
    struct atomic<double> _progress;	// 24 = 0x18
}

+ (void)notifyServicePID;	// IMP=0x004000000006ea9e
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x001000000006e985
+ (id)serviceName;	// IMP=0x001000000006e5c4
- (void).cxx_destruct;	// IMP=0x00200000000700eb
- (void)cancelActivity;	// IMP=0x001000000006ffc7
- (void)startActivityWithType:(unsigned long long)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000006ed15
- (void)handleLostConnection;	// IMP=0x001000000006e9ea
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000006e5d8

@end
