//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>
#import <CoreDuet/_DKKnowledgeSynchronizing-Protocol.h>

@class _DKPrivacyPolicyEnforcer, _DKQueryDispatcher, _DKRateLimitPolicyEnforcer;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;	// 8 = 0x8
    _DKQueryDispatcher *_queryDispatcher;	// 16 = 0x10
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;	// 24 = 0x18
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_defaultQueue;	// 40 = 0x28
}

+ (id)knowledgeStoreWithDirectReadWriteAccess;	// IMP=0x000000000002bf4f
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;	// IMP=0x000000000002bf3d
+ (id)userKnowledgeStoreWithDirectReadWriteAccess;	// IMP=0x000000000002be31
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;	// IMP=0x000000000002bda3
+ (id)knowledgeStoreWithDirectReadOnlyAccess;	// IMP=0x000000000002bd15
+ (id)userKnowledgeStore;	// IMP=0x000000000002bcad
+ (id)knowledgeStore;	// IMP=0x000000000002bc45
- (void).cxx_destruct;	// IMP=0x000000000002d94c
- (id)deviceUUID;	// IMP=0x000000000002d814
- (id)sourceDeviceIdentityWithError:(id *)arg1;	// IMP=0x000000000002d6f9
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d6a6
- (_Bool)deleteRemoteState:(id *)arg1;	// IMP=0x000000000002d5ea
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d38b
- (_Bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002d248
- (_Bool)synchronizeWithError:(id *)arg1;	// IMP=0x000000000002d18c
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cf76
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ceaa
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cdb0
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002cce4
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;	// IMP=0x000000000002cc02
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002cb08
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ca30
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c7da
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c690
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c449
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c320
- (id)init;	// IMP=0x000000000002c0e2
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x000000000002bfa5

@end
