//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserManagement/NSXPCListenerDelegate-Protocol.h>

@class NSMutableSet, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface UMPersonaCallbackListener : NSObject <NSXPCListenerDelegate>
{
    NSString *_machServiceName;	// 8 = 0x8
    NSMutableSet *_xpcConnections;	// 16 = 0x10
    NSXPCListener *_xpcListener;	// 24 = 0x18
    CDUnknownBlockType _personaUpdateCallbackHandler;	// 32 = 0x20
}

+ (id)sharedServer;	// IMP=0x0000000000012fcc
- (void).cxx_destruct;	// IMP=0x00000000000144ad
@property(copy, nonatomic) CDUnknownBlockType personaUpdateCallbackHandler; // @synthesize personaUpdateCallbackHandler=_personaUpdateCallbackHandler;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) NSMutableSet *xpcConnections; // @synthesize xpcConnections=_xpcConnections;
@property(retain, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
- (void)_tearDownConnectionToUMServerWithConnection:(id)arg1;	// IMP=0x0000000000014391
- (void)_setUpUMServerXPCConnectionIfNeeded:(id)arg1;	// IMP=0x0000000000013f33
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000013da7
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013adb
- (void)personaListDidUpdateCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000139ba
- (void)bubbleDidPop;	// IMP=0x0000000000013913
- (void)uploadContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000137f2
- (void)deviceLoginSessionStateDidUpdate;	// IMP=0x000000000001374b
- (void)userSwitchTaskListDidUpdate;	// IMP=0x00000000000136a4
- (void)readyToSwitchToLoginSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013583
- (void)readyToSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013462
- (void)willSwitchToUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013341
- (id)setupPersonaCallbackMachService:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000130b7
- (id)init;	// IMP=0x0000000000013051

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
