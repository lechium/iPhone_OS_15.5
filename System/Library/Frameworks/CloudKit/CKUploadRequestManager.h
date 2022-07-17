//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKSyncEngine, CKUploadRequestManagerInternals, CKUploadRequestPersistentStore, NSString;

@interface CKUploadRequestManager : NSObject
{
    CKUploadRequestManagerInternals *_internals;	// 8 = 0x8
}

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;	// IMP=0x0000000000084002
+ (double)retryableErrorMaxRetryCount;	// IMP=0x0000000000083ff4
+ (double)cancelledErrorRetryTime;	// IMP=0x0000000000083fe6
+ (double)retryableErrorRetryTime;	// IMP=0x0000000000083fd8
+ (double)tryAgainLaterRetryTime;	// IMP=0x0000000000083fca
+ (double)recurringFetchPeriod;	// IMP=0x0000000000083fbc
- (void).cxx_destruct;	// IMP=0x00000000000849d6
@property(readonly, nonatomic) CKUploadRequestManagerInternals *internals; // @synthesize internals=_internals;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;	// IMP=0x0000000000084954
- (void)cancelAllOperations;	// IMP=0x00000000000848ce
- (void)scheduleOrInvokeRepairsNow;	// IMP=0x0000000000084891
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000000847d1
- (void)manuallyTriggerUploadRequests;	// IMP=0x000000000008472a
- (void)unregister;	// IMP=0x00000000000846a1
- (void)registerForItemRequests;	// IMP=0x000000000008461e
@property(readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property(readonly, nonatomic) CKContainer *repairContainer;
@property(readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property(readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property(copy) NSString *machServiceName;
@property(copy) CDUnknownBlockType packageRequestCallback;
@property(copy) CDUnknownBlockType assetRequestCallback;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;	// IMP=0x00000000000841e6
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;	// IMP=0x000000000008413f
- (void)dealloc;	// IMP=0x00000000000840cb

@end
