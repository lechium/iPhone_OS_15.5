//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXOnboardingStatusUIView, PXOnboardingWelcomeUIView, PXPhotoAnalysisStatusController;
@protocol PXMemoriesOnboardingViewControllerDelegate;

@interface PXMemoriesOnboardingUIViewController : UIViewController <PXChangeObserver>
{
    struct {
        _Bool views;
        _Bool stage;
        _Bool progress;
    } _needsUpdateFlags;	// 8 = 0x8
    id <PXMemoriesOnboardingViewControllerDelegate> _delegate;	// 16 = 0x10
    PXPhotoAnalysisStatusController *__statusController;	// 24 = 0x18
    unsigned long long __stage;	// 32 = 0x20
    PXOnboardingWelcomeUIView *__welcomeView;	// 40 = 0x28
    PXOnboardingStatusUIView *__statusView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004e4850
@property(nonatomic, setter=_setStatusView:) PXOnboardingStatusUIView *_statusView; // @synthesize _statusView=__statusView;
@property(nonatomic, setter=_setWelcomeView:) PXOnboardingWelcomeUIView *_welcomeView; // @synthesize _welcomeView=__welcomeView;
@property(nonatomic, setter=_setStage:) unsigned long long _stage; // @synthesize _stage=__stage;
@property(readonly, nonatomic) PXPhotoAnalysisStatusController *_statusController; // @synthesize _statusController=__statusController;
@property(nonatomic) __weak id <PXMemoriesOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000004e46ef
- (void)_updateProgressIfNeeded;	// IMP=0x00000000004e4630
- (void)_invalidateProgress;	// IMP=0x00000000004e4612
- (void)_updateStageIfNeeded;	// IMP=0x00000000004e44a5
- (void)_invalidateStage;	// IMP=0x00000000004e4487
- (_Bool)_needsUpdate;	// IMP=0x00000000004e4469
- (void)_setNeedsUpdate;	// IMP=0x00000000004e4410
- (void)_updateIfNeeded;	// IMP=0x00000000004e43ad
- (void)startButtonTapped:(id)arg1;	// IMP=0x00000000004e4285
- (void)_updateViews;	// IMP=0x00000000004e3d4a
- (void)_tearDownViews;	// IMP=0x00000000004e3cab
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000004e3c7d
- (void)viewWillLayoutSubviews;	// IMP=0x00000000004e3c3c
- (id)_constraintsForMaximizingView:(id)arg1;	// IMP=0x00000000004e39b4
- (void)viewDidLoad;	// IMP=0x00000000004e3862

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
