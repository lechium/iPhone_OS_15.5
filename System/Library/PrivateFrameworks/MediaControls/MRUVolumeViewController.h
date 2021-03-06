//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/CCUIContentModuleContentViewController-Protocol.h>
#import <MediaControls/CCUIGroupRendering-Protocol.h>
#import <MediaControls/MPVolumeDisplaying-Protocol.h>
#import <MediaControls/MRUSystemOutputDeviceRouteControllerObserver-Protocol.h>
#import <MediaControls/MRUSystemVolumeControllerDelegate-Protocol.h>
#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class MRUSystemVolumeController, MRUVolumeView, NSArray, NSString, UIViewPropertyAnimator, UIWindowScene;
@protocol MRUVolumeViewControllerDelegate;

@interface MRUVolumeViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>
{
    _Bool _primaryInteractionEnabled;	// 8 = 0x8
    _Bool _secondaryInteractionEnabled;	// 9 = 0x9
    id <MRUVolumeViewControllerDelegate> _delegate;	// 16 = 0x10
    MRUSystemVolumeController *_volumeController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007fd13
@property(retain, nonatomic) MRUSystemVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(nonatomic) _Bool secondaryInteractionEnabled; // @synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled;
@property(nonatomic) _Bool primaryInteractionEnabled; // @synthesize primaryInteractionEnabled=_primaryInteractionEnabled;
@property(nonatomic) __weak id <MRUVolumeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateSecondarySliderVolumeValue;	// IMP=0x000000000007fb82
- (void)updatePrimarySliderVolumeValue;	// IMP=0x000000000007f95e
- (void)updateSliderAsset;	// IMP=0x000000000007f7e0
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000007f5ab
- (void)systemVolumeController:(id)arg1 didChangeVolumeAvailable:(_Bool)arg2 effectiveVolumeValue:(float)arg3 forType:(long long)arg4;	// IMP=0x000000000007f4f1
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg1;	// IMP=0x000000000007f4df
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property(readonly, nonatomic) NSArray *punchOutRenderingViews;
@property(readonly, nonatomic, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
- (void)didTransitionToExpandedContentMode:(_Bool)arg1;	// IMP=0x000000000007f265
- (_Bool)shouldExpandModuleOnTouch:(id)arg1;	// IMP=0x000000000007f250
@property(readonly, nonatomic) double preferredExpandedContentWidth;
@property(readonly, nonatomic) double preferredExpandedContentHeight;
@property(readonly, nonatomic) _Bool providesOwnPlatter;
- (void)secondarySliderValueDidChange:(id)arg1;	// IMP=0x000000000007f1f6
- (void)primarySliderValueDidChange:(id)arg1;	// IMP=0x000000000007f06e
- (void)dismiss;	// IMP=0x000000000007f032
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000007ef42
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000007ee7e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000007ee10
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000007eda2
- (void)viewDidLoad;	// IMP=0x000000000007eb86
- (void)loadView;	// IMP=0x000000000007eb19
- (void)dealloc;	// IMP=0x000000000007eaa4
- (id)initWithVolumeController:(id)arg1;	// IMP=0x000000000007ea36
@property(readonly, nonatomic) NSArray *punchOutRootLayers;

// Remaining properties
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property(readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property(readonly, nonatomic) _Bool shouldPerformClickInteraction;
@property(readonly, nonatomic) _Bool shouldPerformHoverInteraction;
@property(readonly) Class superclass;
@property(retain, nonatomic) MRUVolumeView *view; // @dynamic view;
@property(retain, nonatomic) MRUVolumeView *viewIfLoaded; // @dynamic viewIfLoaded;

@end

