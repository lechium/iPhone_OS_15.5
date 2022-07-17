//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceConnectionEndpointInjectorConfiguring-Protocol.h>

@class BSServiceManager, NSArray, NSString, RBSAssertion, RBSTarget;

@interface BSServiceConnectionEndpointInjector : NSObject <BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSServiceManager *_manager;	// 16 = 0x10
    RBSTarget *_target;	// 24 = 0x18
    NSArray *_additionalAttributes;	// 32 = 0x20
    NSString *_domain;	// 40 = 0x28
    NSString *_service;	// 48 = 0x30
    NSString *_instance;	// 56 = 0x38
    NSString *_inheritingEnvironment;	// 64 = 0x40
    RBSAssertion *_assertion;	// 72 = 0x48
    _Bool _invalidated;	// 80 = 0x50
}

+ (id)injectorWithConfigurator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000002e0f
- (void).cxx_destruct;	// IMP=0x0000000000004011
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000003e56
- (void)setAdditionalAttributes:(id)arg1;	// IMP=0x0000000000002c3a
- (void)setInheritingEnvironment:(id)arg1;	// IMP=0x0000000000002a65
- (void)setInstance:(id)arg1;	// IMP=0x0000000000002890
- (void)setService:(id)arg1;	// IMP=0x00000000000026bb
- (void)setDomain:(id)arg1;	// IMP=0x00000000000024e6
- (void)setTarget:(id)arg1;	// IMP=0x0000000000002311
- (void)dealloc;	// IMP=0x0000000000002124
- (id)init;	// IMP=0x0000000000001ef8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
