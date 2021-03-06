//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSOperationQueue, SKUIMediaSocialProfile;
@protocol OS_dispatch_queue;

@interface SKUIMediaSocialProfileCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSDate *_lastAuthenticationAttempt;	// 24 = 0x18
    SKUIMediaSocialProfile *_lastKnownProfile;	// 32 = 0x20
    NSDate *_lastRequestDate;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSMutableArray *_profileBlocks;	// 56 = 0x38
    _Bool _waitingForAuthentication;	// 64 = 0x40
}

+ (id)sharedCoordinator;	// IMP=0x0000000000358e01
- (void).cxx_destruct;	// IMP=0x0000000000359d24
- (void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2;	// IMP=0x0000000000359a8e
- (void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000003597fc
- (void)_requestProfile;	// IMP=0x00000000003595ad
- (void)_queueProfileBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000359528
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000035926c
- (void)_accountStoreChangeNotification:(id)arg1;	// IMP=0x0000000000359181
- (void)reset;	// IMP=0x00000000003590f5
- (void)getProfileWithOptions:(id)arg1 profileBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000358e86
- (void)dealloc;	// IMP=0x0000000000358d40
- (id)init;	// IMP=0x0000000000358c3e

@end

