//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject
{
    CDUnknownBlockType _connectionHandler;	// 8 = 0x8
    NSString *_serviceBundleIdentifier;	// 16 = 0x10
    _UIRemoteViewService *_service;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _isCancelled;	// 40 = 0x28
    NSError *_cancellationError;	// 48 = 0x30
    _UIAsyncInvocation *_cancellationInvocation;	// 56 = 0x38
    int _sessionRequestNotifyToken;	// 64 = 0x40
    BKSProcessAssertion *_serviceProcessAssertion;	// 72 = 0x48
    NSXPCConnection *_serviceSessionConnection;	// 80 = 0x50
    _Bool _serviceSessionConnectionResumed;	// 88 = 0x58
    int __automatic_invalidation_retainCount;	// 92 = 0x5c
    _Bool __automatic_invalidation_invalidated;	// 96 = 0x60
}

+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000011320b0
+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001131994
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000113197d
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;	// IMP=0x0000000001132dfd
- (void)_cancelWithError:(id)arg1;	// IMP=0x0000000001132dc9
- (void)_didConnectToService;	// IMP=0x0000000001132d20
- (void)_establishConnection;	// IMP=0x0000000001132b53
- (void)_createAndEstablishConnection;	// IMP=0x0000000001132a5f
- (void)_createPlugInProcessAssertion;	// IMP=0x00000000011328ae
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000001132723
- (void)_createProcessAssertion;	// IMP=0x0000000001132576
- (void)_launchService;	// IMP=0x0000000001132227
- (void)dealloc;	// IMP=0x00000000011320ca
- (_Bool)_isDeallocating;	// IMP=0x0000000001131961
- (_Bool)_tryRetain;	// IMP=0x000000000113192c
- (unsigned long long)retainCount;	// IMP=0x000000000113191b
- (oneway void)release;	// IMP=0x0000000001131898
- (id)retain;	// IMP=0x000000000113187e
- (int)__automatic_invalidation_logic;	// IMP=0x00000000011317dc

@end
