//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MapsScrollableStackView, NSArray, NSString, UGCLegalAttributionSectionController, UGCPOIEnrichmentForm, UGCPhotosSectionController, UGCRatingsSectionController, UGCUserInformationSectionController;
@protocol UGCPOIEnrichmentEditorDelegate;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentViewController : UIViewController
{
    MapsScrollableStackView *_containerView;	// 8 = 0x8
    UGCRatingsSectionController *_ratingsSectionController;	// 16 = 0x10
    UGCPhotosSectionController *_photosSectionController;	// 24 = 0x18
    UGCLegalAttributionSectionController *_legalAttributionSectionController;	// 32 = 0x20
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 40 = 0x28
    UGCUserInformationSectionController *_userInfoSectionController;	// 48 = 0x30
    id <UGCPOIEnrichmentEditorDelegate> _delegate;	// 56 = 0x38
    long long _presentationContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00100000006638da
@property(readonly, nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
- (id)delegate;	// IMP=0x00100000006638b0
- (void)captureUserAction:(int)arg1 withValue:(id)arg2;	// IMP=0x0010000000663849
- (void)captureUserAction:(int)arg1;	// IMP=0x0010000000663835
- (int)currentTarget;	// IMP=0x001000000066380d
- (struct CGSize)preferredContentSize;	// IMP=0x00100000006637cc
- (void)submissionFinishedWithError:(id)arg1;	// IMP=0x0010000000663696
- (void)willBeginSubmissionWithProgress:(id)arg1;	// IMP=0x0010000000663690
- (void)formDidChange:(id)arg1;	// IMP=0x00100000006635e7
- (void)viewDidLoad;	// IMP=0x001000000066357f
- (void)_setupConstraints;	// IMP=0x00100000006632dd
- (void)_setupSubviews;	// IMP=0x0010000000662d82
- (id)initWithPOIEnrichmentForm:(id)arg1 presentationContext:(long long)arg2;	// IMP=0x0010000000662cbe
@property(readonly, nonatomic) NSArray *sectionControllers;
- (void)logDoneAction;	// IMP=0x0010000000663975
- (void)logCancelAction;	// IMP=0x001000000066395e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

