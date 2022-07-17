//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBUIPowerDownViewInterface-Protocol.h>
#import <SpringBoardUIServices/_UIActionSliderDelegate-Protocol.h>

@class NSString, NSTimer, SBUIShapeView, SPBeaconManager, UIButton, UILabel, _UIActionSlider, _UIVibrantSettings;
@protocol SBUIPowerDownViewDelegate;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;	// 8 = 0x8
    UIView *_backdropView;	// 16 = 0x10
    SBUIShapeView *_darkeningUnderlayView;	// 24 = 0x18
    UIView *_darkeningOverlayView;	// 32 = 0x20
    _UIActionSlider *_actionSlider;	// 40 = 0x28
    UIButton *_cancelButton;	// 48 = 0x30
    UILabel *_cancelLabel;	// 56 = 0x38
    UIButton *_findMyButton;	// 64 = 0x40
    _UIVibrantSettings *_vibrantSettings;	// 72 = 0x48
    _Bool _deviceSupportsFindMy;	// 80 = 0x50
    _Bool _shouldPowerDownViewShowFindMyAlert;	// 81 = 0x51
    id <SBUIPowerDownViewDelegate> _delegate;	// 88 = 0x58
    SPBeaconManager *_beaconManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000924d
@property(retain, nonatomic) SPBeaconManager *beaconManager; // @synthesize beaconManager=_beaconManager;
@property(nonatomic) _Bool shouldPowerDownViewShowFindMyAlert; // @synthesize shouldPowerDownViewShowFindMyAlert=_shouldPowerDownViewShowFindMyAlert;
@property(nonatomic) _Bool deviceSupportsFindMy; // @synthesize deviceSupportsFindMy=_deviceSupportsFindMy;
@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_readShouldPowerDownViewShowFindMyAlert;	// IMP=0x0000000000009051
- (void)_readIODeviceSupportsFindMy;	// IMP=0x0000000000008ec0
- (void)_prepareViewsForAlert;	// IMP=0x0000000000008cc2
- (id)_createActionSlider;	// IMP=0x00000000000089ef
- (void)_animatePowerDown;	// IMP=0x00000000000088fb
- (void)didSuppressFindMy;	// IMP=0x00000000000088db
- (void)didAcknowledgeFindMyInfo;	// IMP=0x00000000000088c7
- (void)_notifyDelegateCancelled;	// IMP=0x000000000000888b
- (void)_notifyDelegatePowerDown;	// IMP=0x000000000000884f
- (void)_idleTimerFired;	// IMP=0x000000000000883d
- (void)_cancelButtonTapped;	// IMP=0x000000000000882b
- (void)_didTapFindMy;	// IMP=0x0000000000008825
- (void)_updateSliderExclusionPath;	// IMP=0x00000000000086c5
- (void)_resetAutoDismissTimer;	// IMP=0x0000000000008660
- (void)_cancelAutoDismissTimer;	// IMP=0x0000000000008628
- (_Bool)_isLandscapeAspectRatio;	// IMP=0x00000000000085f5
- (void)_powerDownSliderDidCancelSlide;	// IMP=0x00000000000085e3
- (void)_powerDownSliderDidCompleteSlide;	// IMP=0x00000000000085d1
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;	// IMP=0x0000000000008598
- (void)_powerDownSliderDidBeginSlide;	// IMP=0x0000000000008586
- (void)_willAnimateOut;	// IMP=0x000000000000853a
- (void)_willAnimateIn;	// IMP=0x00000000000084ee
- (void)actionSliderDidCancelSlide:(id)arg1;	// IMP=0x00000000000084dc
- (void)actionSliderDidCompleteSlide:(id)arg1;	// IMP=0x00000000000084ca
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;	// IMP=0x00000000000084b8
- (void)actionSliderDidBeginSlide:(id)arg1;	// IMP=0x00000000000084a6
- (void)layoutSubviews;	// IMP=0x00000000000080b8
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007d62
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007979
- (void)_createFindMyUI;	// IMP=0x0000000000007146
- (void)dealloc;	// IMP=0x00000000000070f7
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;	// IMP=0x000000000000667f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000666b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
