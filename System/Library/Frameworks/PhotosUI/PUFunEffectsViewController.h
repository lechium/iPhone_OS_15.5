//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUMediaProvider, PUObserverRegistry, PUProgressIndicatorView, PUReviewAdjustmentOutput, PUReviewAsset, PUReviewScreenBarsModel, PUReviewScreenControlBar, PUReviewScreenTopBar;

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, PUOneUpAssetTransitionViewController>
{
    _Bool __inputHasKnownAdjustments;	// 8 = 0x8
    _Bool __shouldHideBars;	// 9 = 0x9
    PUReviewAsset *_reviewAsset;	// 16 = 0x10
    PUMediaProvider *_mediaProvider;	// 24 = 0x18
    PUReviewScreenBarsModel *_reviewBarsModel;	// 32 = 0x20
    PUObserverRegistry *__observerRegistry;	// 40 = 0x28
    UIViewController *__effectsViewController;	// 48 = 0x30
    PUReviewScreenTopBar *__topBar;	// 56 = 0x38
    PUReviewScreenControlBar *__controlBar;	// 64 = 0x40
    long long __inputAdjustmentBaseVersion;	// 72 = 0x48
    PUReviewAdjustmentOutput *__exportAdjustmentOutput;	// 80 = 0x50
    unsigned long long __exportCompletion;	// 88 = 0x58
    PUProgressIndicatorView *__progressIndicatorView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000180223
@property(nonatomic, setter=_setShouldHideBars:) _Bool _shouldHideBars; // @synthesize _shouldHideBars=__shouldHideBars;
@property(retain, nonatomic, setter=_setProgressIndicatorView:) PUProgressIndicatorView *_progressIndicatorView; // @synthesize _progressIndicatorView=__progressIndicatorView;
@property(nonatomic) unsigned long long _exportCompletion; // @synthesize _exportCompletion=__exportCompletion;
@property(retain, nonatomic) PUReviewAdjustmentOutput *_exportAdjustmentOutput; // @synthesize _exportAdjustmentOutput=__exportAdjustmentOutput;
@property(readonly, nonatomic) long long _inputAdjustmentBaseVersion; // @synthesize _inputAdjustmentBaseVersion=__inputAdjustmentBaseVersion;
@property(readonly, nonatomic) _Bool _inputHasKnownAdjustments; // @synthesize _inputHasKnownAdjustments=__inputHasKnownAdjustments;
@property(readonly, nonatomic) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property(readonly, nonatomic) PUReviewScreenTopBar *_topBar; // @synthesize _topBar=__topBar;
@property(readonly, nonatomic) UIViewController *_effectsViewController; // @synthesize _effectsViewController=__effectsViewController;
@property(readonly, nonatomic) PUObserverRegistry *_observerRegistry; // @synthesize _observerRegistry=__observerRegistry;
@property(retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel; // @synthesize reviewBarsModel=_reviewBarsModel;
@property(readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PUReviewAsset *reviewAsset; // @synthesize reviewAsset=_reviewAsset;
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000018009d
- (void)registerObserver:(id)arg1;	// IMP=0x000000000018002b
- (void)_signalCompletion:(unsigned long long)arg1 withSavedAsset:(id)arg2;	// IMP=0x000000000017ff66
- (void)_updateProgressIndicatorWithProgress:(double)arg1;	// IMP=0x000000000017fe89
- (void)_dismissProgressIndicator;	// IMP=0x000000000017fd7c
- (void)_showProgressIndicator;	// IMP=0x000000000017fbda
- (void)_finishExportingWithMediaItem:(id)arg1;	// IMP=0x000000000017fad7
- (void)_handleExportFailureWithError:(id)arg1;	// IMP=0x000000000017f862
- (void)_exportWithCompletion:(unsigned long long)arg1;	// IMP=0x000000000017f701
- (void)_handleExportWithCompletion:(unsigned long long)arg1;	// IMP=0x000000000017f6c4
- (void)_handleDismissCompletion;	// IMP=0x000000000017f68f
- (void)_handleCompletion:(unsigned long long)arg1;	// IMP=0x000000000017f5e3
- (void)oneUpAssetTransitionDidEnd:(id)arg1;	// IMP=0x000000000017f5dd
- (void)oneUpAssetTransitionWillBegin:(id)arg1;	// IMP=0x000000000017f5d7
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000017f5c4
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017f5b4
- (void)reviewViewControllerDidShowUserInterface:(id)arg1;	// IMP=0x000000000017f59b
- (void)reviewViewControllerDidHideUserInterface:(id)arg1;	// IMP=0x000000000017f57f
- (void)reviewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2;	// IMP=0x000000000017f579
- (void)reviewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3;	// IMP=0x000000000017f54e
- (void)reviewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3;	// IMP=0x000000000017f53c
- (void)reviewViewControllerEffectsButtonWasTapped:(id)arg1;	// IMP=0x000000000017f525
- (void)_handleDidTapSendButton:(id)arg1;	// IMP=0x000000000017f50e
- (void)_handleDidTapEditButton:(id)arg1;	// IMP=0x000000000017f4f7
- (void)_handleDidTapMarkupButton:(id)arg1;	// IMP=0x000000000017f4e0
- (void)_handleDidTapFunEffectsButton:(id)arg1;	// IMP=0x000000000017f485
- (void)_handleDidTapDoneButton:(id)arg1;	// IMP=0x000000000017f46e
- (void)_handleDidTapRetakeButton:(id)arg1;	// IMP=0x000000000017f45a
- (void)_setShouldHideBars:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000017f2c8
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000017f297
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;	// IMP=0x000000000017f20c
- (void)_updateBars;	// IMP=0x000000000017f078
- (void)_updateLayout;	// IMP=0x000000000017ecc5
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000017e810
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000000017e7cf
- (void)viewWillLayoutSubviews;	// IMP=0x000000000017e78e
- (void)viewDidLoad;	// IMP=0x000000000017e241
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;	// IMP=0x000000000017e0fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
