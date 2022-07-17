//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBFluidDismissalState, SBPresentationObservationToken, SBTransientOverlayBackgroundWindow, SBTransientOverlayViewController, SBTransientOverlayWindow;
@protocol BSInvalidatable;

@interface _SBTransientOverlayPresentedEntity : NSObject
{
    _Bool _rotating;	// 8 = 0x8
    _Bool _dismissing;	// 9 = 0x9
    _Bool _hasFinishedWindowInitialization;	// 10 = 0xa
    _Bool _hasPreservedInputViews;	// 11 = 0xb
    double _baseWindowLevel;	// 16 = 0x10
    SBTransientOverlayViewController *_viewController;	// 24 = 0x18
    SBTransientOverlayBackgroundWindow *_backgroundWindow;	// 32 = 0x20
    SBTransientOverlayWindow *_window;	// 40 = 0x28
    id <BSInvalidatable> _disableAutoUnlockAssertion;	// 48 = 0x30
    id <BSInvalidatable> _proximityEnabledAssertion;	// 56 = 0x38
    id <BSInvalidatable> _wallpaperAnimationSuspensionAssertion;	// 64 = 0x40
    SBFluidDismissalState *_fluidDismissalState;	// 72 = 0x48
    SBPresentationObservationToken *_bannerLongLookPresentationObservationToken;	// 80 = 0x50
    id <BSInvalidatable> _bannerLongLookWindowLevelAssertion;	// 88 = 0x58
    SBPresentationObservationToken *_controlCenterPresentationObservationToken;	// 96 = 0x60
    id <BSInvalidatable> _controlCenterWindowLevelAssertion;	// 104 = 0x68
    SBPresentationObservationToken *_siriPresentationObservationToken;	// 112 = 0x70
    id <BSInvalidatable> _siriWindowLevelAssertion;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000397c42
@property(retain, nonatomic) id <BSInvalidatable> siriWindowLevelAssertion; // @synthesize siriWindowLevelAssertion=_siriWindowLevelAssertion;
@property(retain, nonatomic) SBPresentationObservationToken *siriPresentationObservationToken; // @synthesize siriPresentationObservationToken=_siriPresentationObservationToken;
@property(retain, nonatomic) id <BSInvalidatable> controlCenterWindowLevelAssertion; // @synthesize controlCenterWindowLevelAssertion=_controlCenterWindowLevelAssertion;
@property(retain, nonatomic) SBPresentationObservationToken *controlCenterPresentationObservationToken; // @synthesize controlCenterPresentationObservationToken=_controlCenterPresentationObservationToken;
@property(retain, nonatomic) id <BSInvalidatable> bannerLongLookWindowLevelAssertion; // @synthesize bannerLongLookWindowLevelAssertion=_bannerLongLookWindowLevelAssertion;
@property(retain, nonatomic) SBPresentationObservationToken *bannerLongLookPresentationObservationToken; // @synthesize bannerLongLookPresentationObservationToken=_bannerLongLookPresentationObservationToken;
@property(retain, nonatomic) SBFluidDismissalState *fluidDismissalState; // @synthesize fluidDismissalState=_fluidDismissalState;
@property(retain, nonatomic) id <BSInvalidatable> wallpaperAnimationSuspensionAssertion; // @synthesize wallpaperAnimationSuspensionAssertion=_wallpaperAnimationSuspensionAssertion;
@property(retain, nonatomic) id <BSInvalidatable> proximityEnabledAssertion; // @synthesize proximityEnabledAssertion=_proximityEnabledAssertion;
@property(retain, nonatomic) id <BSInvalidatable> disableAutoUnlockAssertion; // @synthesize disableAutoUnlockAssertion=_disableAutoUnlockAssertion;
@property(nonatomic) _Bool hasPreservedInputViews; // @synthesize hasPreservedInputViews=_hasPreservedInputViews;
@property(nonatomic) _Bool hasFinishedWindowInitialization; // @synthesize hasFinishedWindowInitialization=_hasFinishedWindowInitialization;
@property(nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(readonly, nonatomic) SBTransientOverlayWindow *window; // @synthesize window=_window;
@property(nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(retain, nonatomic) SBTransientOverlayBackgroundWindow *backgroundWindow; // @synthesize backgroundWindow=_backgroundWindow;
@property(readonly, nonatomic) SBTransientOverlayViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) double baseWindowLevel; // @synthesize baseWindowLevel=_baseWindowLevel;
- (id)initWithViewController:(id)arg1 window:(id)arg2 baseWindowLevel:(double)arg3;	// IMP=0x00000000003979c7

@end
