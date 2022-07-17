//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MacFooterView, MapsProgressBarModalView, NSString, UGCPOIEnrichmentForm, UGCPOIEnrichmentHeaderView, UGCPOIEnrichmentViewController;
@protocol UGCPOIEnrichmentEditorDelegate;

__attribute__((visibility("hidden")))
@interface MacUGCPOIEnrichmentEditorViewController : UIViewController
{
    UGCPOIEnrichmentHeaderView *_macHeaderView;	// 8 = 0x8
    MacFooterView *_submitButtonsFooterView;	// 16 = 0x10
    UGCPOIEnrichmentViewController *_contentViewController;	// 24 = 0x18
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 32 = 0x20
    MapsProgressBarModalView *_progressView;	// 40 = 0x28
    id <UGCPOIEnrichmentEditorDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002c35c1
@property(nonatomic) __weak id <UGCPOIEnrichmentEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x00100000002c3582
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x00100000002c3570
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000002c356a
- (void)formDidChange:(id)arg1;	// IMP=0x00100000002c34fa
- (void)willBeginSubmissionWithProgress:(id)arg1;	// IMP=0x00100000002c3327
- (void)submissionFinishedWithError:(id)arg1;	// IMP=0x00100000002c317e
- (void)_animteProgressViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c3054
- (void)sendButtonPressed;	// IMP=0x00100000002c2fe5
- (void)cancelButtonPressed;	// IMP=0x00100000002c2f81
- (void)loadView;	// IMP=0x00100000002c2f14
- (void)viewDidLoad;	// IMP=0x00100000002c23bc
- (id)initWithPOIEnrichmentForm:(id)arg1 delegate:(id)arg2 presentationContext:(long long)arg3;	// IMP=0x00100000002c22c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
