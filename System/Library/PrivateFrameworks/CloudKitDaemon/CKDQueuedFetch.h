//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDContainer, CKDOperation, NSDate, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_os_activity;

@interface CKDQueuedFetch : NSObject
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _isCancelled;	// 9 = 0x9
    NSDate *_queuedDate;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    CKDQueuedFetch *_equivalentRunningFetch;	// 32 = 0x20
    NSObject<OS_os_activity> *_osActivity;	// 40 = 0x28
    NSMutableDictionary *_completionHandlersByItemID;	// 48 = 0x30
    unsigned long long _lastCompletionHandlerCount;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
    NSDate *_lastRequestDate;	// 72 = 0x48
    CKDContainer *_container;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    long long _scope;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 104 = 0x68
    long long _highestQOS;	// 112 = 0x70
    NSString *_runningOperationID;	// 120 = 0x78
    NSMutableSet *_dependentOperationIDs;	// 128 = 0x80
    NSMutableDictionary *_dependentOperationIDsByItemID;	// 136 = 0x88
    NSMutableDictionary *_unitTestOverrides;	// 144 = 0x90
    CKDOperation *_initialOperation;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000075288
@property(retain, nonatomic) CKDOperation *initialOperation; // @synthesize initialOperation=_initialOperation;
@property(retain, nonatomic) NSMutableDictionary *unitTestOverrides; // @synthesize unitTestOverrides=_unitTestOverrides;
@property(retain, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID; // @synthesize dependentOperationIDsByItemID=_dependentOperationIDsByItemID;
@property(retain, nonatomic) NSMutableSet *dependentOperationIDs; // @synthesize dependentOperationIDs=_dependentOperationIDs;
@property(retain, nonatomic) NSString *runningOperationID; // @synthesize runningOperationID=_runningOperationID;
@property(nonatomic) long long highestQOS; // @synthesize highestQOS=_highestQOS;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak CKDContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long lastCompletionHandlerCount; // @synthesize lastCompletionHandlerCount=_lastCompletionHandlerCount;
@property(retain, nonatomic) NSMutableDictionary *completionHandlersByItemID; // @synthesize completionHandlersByItemID=_completionHandlersByItemID;
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(nonatomic) __weak CKDQueuedFetch *equivalentRunningFetch; // @synthesize equivalentRunningFetch=_equivalentRunningFetch;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
- (void)start;	// IMP=0x00000000000742d7
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007425d
- (_Bool)dependentOperationListContainsOperationID:(id)arg1;	// IMP=0x00000000000741a5
- (_Bool)dependentOperationListContainsRunningFetch:(id)arg1;	// IMP=0x0000000000074034
- (_Bool)canBeUsedForPendingFetch:(id)arg1;	// IMP=0x0000000000073f6a
- (_Bool)canBeUsedForOperation:(id)arg1;	// IMP=0x0000000000073eb9
- (id)description;	// IMP=0x0000000000073ea7
- (id)CKPropertiesDescription;	// IMP=0x0000000000073d78
- (void)cancelFetchOperation;	// IMP=0x0000000000073cdf
- (void)finishFetchOperationWithError:(id)arg1;	// IMP=0x0000000000073825
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;	// IMP=0x00000000000733e1
- (id)allItemIDs;	// IMP=0x000000000007331d
- (id)callbacksForItemWithID:(id)arg1;	// IMP=0x000000000007322a
- (void)removeCallbacksForItemWithID:(id)arg1;	// IMP=0x0000000000072f2b
- (void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000072b70
- (int)numberOfCallbacks;	// IMP=0x0000000000072983
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (id)initWithOperation:(id)arg1 container:(id)arg2 operationQueue:(id)arg3;	// IMP=0x0000000000072306
- (id)init;	// IMP=0x00000000000722a6

@end
