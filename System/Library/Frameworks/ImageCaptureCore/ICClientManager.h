//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICClientManager : NSObject
{
    _Bool _clientAdded;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
    struct os_unfair_lock_s _clientsLock;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (id)allClientConnections;	// IMP=0x0000000000014be3
- (id)clientConnectionsMonitoringObjectID:(id)arg1;	// IMP=0x00000000000148c0
- (id)clientConnectionsMonitoringNotification:(id)arg1;	// IMP=0x000000000001460c
- (void)setClientWithPID:(id)arg1 usingObjectHandle:(id)arg2;	// IMP=0x00000000000145ae
- (void)setClientWithPID:(id)arg1 usingDevice:(_Bool)arg2;	// IMP=0x00000000000143ce
- (int)clientUsingDevice;	// IMP=0x0000000000014255
- (unsigned long long)removeClientWithPID:(id)arg1;	// IMP=0x0000000000014093
- (void)remNotifications:(id)arg1 toClientWithPID:(id)arg2;	// IMP=0x0000000000013f24
- (void)addNotifications:(id)arg1 toClientWithPID:(id)arg2;	// IMP=0x0000000000013db5
- (void)sendMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x0000000000013daf
- (void)sendMessage:(id)arg1 forClientWithPID:(id)arg2;	// IMP=0x0000000000013c31
- (id)findClientWithPID:(id)arg1;	// IMP=0x0000000000013ab3
- (unsigned long long)currentClientCount;	// IMP=0x0000000000013a79
- (id)copyClientsArray;	// IMP=0x0000000000013a3f
- (void)addClientWithConnection:(id)arg1;	// IMP=0x00000000000134f4
- (void)dealloc;	// IMP=0x000000000001348c
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000001342e

@end
