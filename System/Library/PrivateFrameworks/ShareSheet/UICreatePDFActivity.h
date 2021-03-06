//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/QLPreviewControllerDataSource-Protocol.h>
#import <ShareSheet/QLPreviewControllerDelegate-Protocol.h>
#import <ShareSheet/UIDocumentPickerDelegate-Protocol.h>

@class NSString, QLPreviewController, UICreatePDFActivityItem;

@interface UICreatePDFActivity <QLPreviewControllerDelegate, QLPreviewControllerDataSource, UIDocumentPickerDelegate>
{
    QLPreviewController *_previewController;	// 8 = 0x8
    UICreatePDFActivityItem *_previewURLItem;	// 16 = 0x10
}

+ (unsigned long long)_xpcAttributes;	// IMP=0x000000000004661d
- (void).cxx_destruct;	// IMP=0x0000000000047b03
@property(retain, nonatomic) UICreatePDFActivityItem *previewURLItem; // @synthesize previewURLItem=_previewURLItem;
@property(retain, nonatomic) QLPreviewController *previewController; // @synthesize previewController=_previewController;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0000000000047aa2
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000047a8e
- (id)dismissActionsForPreviewController:(id)arg1;	// IMP=0x0000000000047682
- (_Bool)shouldPresentDismissActionsWithoutEditedItemsForPreviewController:(id)arg1;	// IMP=0x000000000004767a
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;	// IMP=0x0000000000047672
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x000000000004762a
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x000000000004761f
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x0000000000047594
- (_Bool)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2;	// IMP=0x000000000004758c
- (_Bool)previewController:(id)arg1 canEditItem:(id)arg2;	// IMP=0x0000000000047584
- (void)_cleanup;	// IMP=0x000000000004751d
- (void)performActivity;	// IMP=0x0000000000047517
- (id)activityViewController;	// IMP=0x0000000000047502
- (id)_embeddedActivityViewController;	// IMP=0x00000000000474fa
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x0000000000046d85
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000046cfa
- (void)_setupQuickLookWithURL:(id)arg1 activityItems:(id)arg2 isPreview:(_Bool)arg3;	// IMP=0x00000000000466c7
- (id)activityTitle;	// IMP=0x000000000004666b
- (id)_systemImageName;	// IMP=0x000000000004665e
- (id)activityType;	// IMP=0x000000000004664a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

