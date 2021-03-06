//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, PKInAppPaymentService;
@protocol OS_dispatch_queue;

@interface PKAMPEnrollmentManager : NSObject
{
    PKInAppPaymentService *_service;	// 8 = 0x8
    NSMutableDictionary *_promiseMap;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    struct os_unfair_lock_s _lockObservers;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000000001cc71e
- (void).cxx_destruct;	// IMP=0x00000000001ce159
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cdf65
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000001cdf0c
- (void)registerObserver:(id)arg1;	// IMP=0x00000000001cdeb3
- (id)_bag;	// IMP=0x00000000001cde8c
- (id)performEnrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2;	// IMP=0x00000000001cd863
- (_Bool)shouldOfferAMPEnrollmentForPaymentPass:(id)arg1;	// IMP=0x00000000001cd573
- (void)enrollPaymentPass:(id)arg1 isDefault:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cd0cc
- (id)performCanEnrollPaymentPass:(id)arg1;	// IMP=0x00000000001ccf4a
- (void)canEnrollPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ccd3a
- (void)enrollmentStatusForPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x00000000001cc84c
- (id)init;	// IMP=0x00000000001cc773

@end

