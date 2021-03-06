//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, PHMomentShare, UIAlertController;

@interface PXCMMPhotoKitPublishMomentShareActionPerformer
{
    UIAlertController *_progressAlertController;	// 8 = 0x8
    int _thumbnailRequestID;	// 16 = 0x10
    int _previewRequestID;	// 20 = 0x14
    PHMomentShare *_momentShare;	// 24 = 0x18
    _Bool _didFinalize;	// 32 = 0x20
    NSDate *_initialStartDate;	// 40 = 0x28
    NSDate *_previewRequestStartDate;	// 48 = 0x30
    NSDate *_creationRequestStartDate;	// 56 = 0x38
    NSDate *_publishStartDate;	// 64 = 0x40
    NSDate *_finishedDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000300ad2
- (void)_performCleanupIfNeeded;	// IMP=0x0000000000300a91
- (void)_handleSharingProgressCancellation;	// IMP=0x00000000003009a2
- (void)_presentAlertControllerForCurrentCPLStateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003005b5
- (void)_finalizePublishWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000030042c
- (void)_acceptSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000030028b
- (void)_publishingMomentShare:(id)arg1 didCompleteWithShareURL:(id)arg2 error:(id)arg3;	// IMP=0x00000000002ffde4
- (void)_publishMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ff97f
- (void)_publishMomentShare:(id)arg1;	// IMP=0x00000000002ff89e
- (void)_setupSharingProgressController;	// IMP=0x00000000002ff745
- (void)_budgetOverridePromptForMomentShare:(id)arg1 completedWithOutcome:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000002ff519
- (void)_presentBudgetOverridePromptForMomentShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ff331
- (void)_creatingMomentShareDidCompleteWithMomentShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000002ff18e
- (void)_createMomentShareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002fe91f
- (void)_createMomentShare;	// IMP=0x00000000002fe8b9
- (void)_presentInternalSharingAlert;	// IMP=0x00000000002fe2c0
- (void)performUserInteractionTask;	// IMP=0x00000000002fe27b
- (void)_requestPreviewImageForAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002fe018

@end

