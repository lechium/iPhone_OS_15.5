//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceConnectionListenerConfiguring-Protocol.h>
#import <BoardServices/BSServiceListener-Protocol.h>

@class BSServiceConnectionEndpoint, BSServiceManager, NSString;
@protocol BSInvalidatable, BSServiceConnectionListenerDelegate;

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable>
{
    BSServiceManager *_manager;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    id <BSServiceConnectionListenerDelegate> _lock_delegate;	// 24 = 0x18
    _Bool _lock_activated;	// 32 = 0x20
    _Bool _lock_invalidated;	// 33 = 0x21
    struct os_unfair_lock_s _registrationLock;	// 36 = 0x24
    id <BSInvalidatable> _registrationLock_assertion;	// 40 = 0x28
    NSString *_domain;	// 48 = 0x30
    NSString *_service;	// 56 = 0x38
    NSString *_instance;	// 64 = 0x40
    BSServiceConnectionEndpoint *_endpoint;	// 72 = 0x48
}

+ (id)extendBootstrap;	// IMP=0x0000000000030c29
+ (id)listenerWithConfigurator:(CDUnknownBlockType)arg1;	// IMP=0x000000000002faea
- (void).cxx_destruct;	// IMP=0x0000000000031bc1
@property(readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *instance; // @synthesize instance=_instance;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *description;
- (void)didReceiveConnection:(id)arg1;	// IMP=0x000000000003185e
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000031697
- (void)setInstance:(id)arg1;	// IMP=0x000000000003133b
- (void)setService:(id)arg1;	// IMP=0x0000000000030fdf
- (void)setDomain:(id)arg1;	// IMP=0x0000000000030c83
- (void)invalidate;	// IMP=0x0000000000030b03
- (void)activate;	// IMP=0x0000000000030450
- (void)dealloc;	// IMP=0x000000000002f8e8
- (id)init;	// IMP=0x000000000002f770

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

