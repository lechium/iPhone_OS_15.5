//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADIDManager.h>

#import <AdID/BackgroundTaskDelegate-Protocol.h>

@class NSString;

@interface ADIDManager (Private) <BackgroundTaskDelegate>
+ (void)initialize;	// IMP=0x000000000000d80f
- (void)checkForLateReconcile;	// IMP=0x00000000000118ec
- (void)setReconcileOperations:(id)arg1;	// IMP=0x00000000000118c3
- (id)reconcileOperations;	// IMP=0x00000000000118b2
- (_Bool)reconcileInProgress;	// IMP=0x000000000001187a
- (void)checkOnTask:(id)arg1 activity:(id)arg2;	// IMP=0x0000000000011748
- (_Bool)runTask:(id)arg1;	// IMP=0x0000000000011399
- (_Bool)scheduleReconciliation:(double)arg1;	// IMP=0x0000000000011096
- (void)cancelPendingReconcile;	// IMP=0x000000000001104b
- (void)handleAccountChange:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010aff
- (void)reconcile:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010215
- (void)updateAccountData:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fa20
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x000000000000f1f8
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f166
- (void)performOperationWhenNotReconciling:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f090
- (id)saveAndNotifyIfNecessary;	// IMP=0x000000000000efd5
- (id)save;	// IMP=0x000000000000e759
- (void)incrementMonthlyResetCount;	// IMP=0x000000000000e505
- (void)notifyActiveRecordChanged;	// IMP=0x000000000000e460
- (void)deleteRecords:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e25d
- (void)prepareForPushNotification;	// IMP=0x000000000000e21b
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000db7d
- (id)init;	// IMP=0x000000000000d83f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

