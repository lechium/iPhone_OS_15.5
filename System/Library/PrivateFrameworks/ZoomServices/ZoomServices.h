//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ZoomServices/AXUIClientDelegate-Protocol.h>

@class AXUIClient, NSMutableArray, NSMutableDictionary, NSString;

@interface ZoomServices : NSObject <AXUIClientDelegate>
{
    NSMutableArray *_zoomListeners;	// 8 = 0x8
    NSMutableDictionary *_zoomAttributeListeners;	// 16 = 0x10
    _Bool _showingZoomLens;	// 24 = 0x18
    _Bool _springBoardReady;	// 25 = 0x19
    _Bool _triedToShowLensBeofreSBReady;	// 26 = 0x1a
    _Bool _registeredForZoomListener;	// 27 = 0x1b
    _Bool _registeredForZoomAttributeListeners;	// 28 = 0x1c
    _Bool _shouldRegisterForZoomListeners;	// 29 = 0x1d
    AXUIClient *_zoomWindowClient;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000000014e7
- (void).cxx_destruct;	// IMP=0x0000000000004a05
@property(nonatomic) _Bool shouldRegisterForZoomListeners; // @synthesize shouldRegisterForZoomListeners=_shouldRegisterForZoomListeners;
@property(nonatomic) _Bool registeredForZoomAttributeListeners; // @synthesize registeredForZoomAttributeListeners=_registeredForZoomAttributeListeners;
@property(nonatomic) _Bool registeredForZoomListener; // @synthesize registeredForZoomListener=_registeredForZoomListener;
@property(nonatomic) _Bool triedToShowLensBeofreSBReady; // @synthesize triedToShowLensBeofreSBReady=_triedToShowLensBeofreSBReady;
@property(nonatomic) _Bool springBoardReady; // @synthesize springBoardReady=_springBoardReady;
@property(nonatomic, getter=isShowingZoomLens) _Bool showingZoomLens; // @synthesize showingZoomLens=_showingZoomLens;
@property(retain, nonatomic) AXUIClient *zoomWindowClient; // @synthesize zoomWindowClient=_zoomWindowClient;
- (_Bool)shouldSuppressKeyCommandHUD;	// IMP=0x000000000000495f
- (_Bool)inStandbyMode;	// IMP=0x0000000000004936
- (id)activeZoomMode;	// IMP=0x0000000000004902
- (void)autoPanZoomUsingLocation:(struct CGPoint)arg1 withPanningStyle:(unsigned long long)arg2;	// IMP=0x00000000000047b7
- (void)panDown;	// IMP=0x000000000000479e
- (void)panUp;	// IMP=0x0000000000004785
- (void)panRight;	// IMP=0x000000000000476c
- (void)panLeft;	// IMP=0x0000000000004753
- (void)_panWithDirection:(id)arg1;	// IMP=0x0000000000004667
@property(nonatomic) double zoomLevel;
- (struct CGRect)zoomFrame;	// IMP=0x00000000000044db
- (double)appSwitcherRevealAnimationStartDelay;	// IMP=0x00000000000044ad
- (double)reachabilityScaleFactor;	// IMP=0x00000000000043e4
- (double)appDeactivationAnimationStartDelay;	// IMP=0x00000000000043b6
- (double)appActivationAnimationStartDelay;	// IMP=0x0000000000004388
- (void)_handleChangedAttributes:(id)arg1;	// IMP=0x0000000000003e26
- (void)registerInterestInZoomAttributes;	// IMP=0x0000000000003ca3
- (_Bool)notifyZoomDragWillEnd;	// IMP=0x0000000000003c39
- (_Bool)notifyZoomDragWillStart;	// IMP=0x0000000000003bcf
- (_Bool)notifyZoomWillHideBrailleInputUI;	// IMP=0x0000000000003b65
- (void)notifyZoomSOSMedicalIDShown;	// IMP=0x0000000000003b07
- (_Bool)notifyZoomWillShowBrailleInputUI;	// IMP=0x0000000000003a9d
- (_Bool)notifyZoomAppDidEnterBackground:(id)arg1;	// IMP=0x0000000000003980
- (_Bool)notifyZoomAppDidBecomeActive:(id)arg1 keyboardFrameIfVisible:(struct CGRect)arg2;	// IMP=0x0000000000003814
- (_Bool)notifyZoomAppActivationAnimationDidFinish;	// IMP=0x00000000000037aa
- (_Bool)notifyZoomFluidSwitcherGestureDidFinishWithDock;	// IMP=0x0000000000003740
- (_Bool)notifyZoomFluidSwitcherGestureDidFinish;	// IMP=0x00000000000036d6
- (_Bool)notifyZoomCarouselLockEnded;	// IMP=0x000000000000366c
- (_Bool)notifyZoomCarouselLockBegan;	// IMP=0x0000000000003602
- (_Bool)notifyZoomReturnedToClockFaceAtIdle;	// IMP=0x0000000000003598
- (_Bool)notifyZoomAppSwitcherRevealAnimationWillBegin;	// IMP=0x000000000000352e
- (_Bool)notifyZoomAppDeactivationAnimationWillBegin;	// IMP=0x00000000000034c4
- (_Bool)notifyZoomAppActivationAnimationWillBegin;	// IMP=0x000000000000345a
- (_Bool)notifyZoomFluidSwitcherGestureWillBegin;	// IMP=0x00000000000033f0
- (_Bool)notifyZoomIdleSlugOpacityChangedTo:(double)arg1;	// IMP=0x00000000000032e1
- (_Bool)notifyZoomDockPositionWasChangedInSettingsTo:(id)arg1;	// IMP=0x00000000000031ea
- (_Bool)notifyZoomLensModeWasChangedInSettingsTo:(id)arg1;	// IMP=0x00000000000030f3
- (_Bool)notifyZoomHomeButtonWasPressed;	// IMP=0x0000000000003089
- (_Bool)notifyZoomDeviceWillWake;	// IMP=0x000000000000301f
- (_Bool)notifyZoomDeviceWasUnlocked;	// IMP=0x0000000000002fb5
- (_Bool)notifyZoomLockButtonWasPressed;	// IMP=0x0000000000002f4b
- (_Bool)notifyZoomKeyboardDidHideInAppWithBundleID:(id)arg1;	// IMP=0x0000000000002e26
- (_Bool)notifyZoomKeyboardWillHideInAppWithBundleID:(id)arg1;	// IMP=0x0000000000002d01
- (_Bool)notifyZoomKeyboardWillBecomeVisibleWithFrame:(struct CGRect)arg1 inAppWithBundleID:(id)arg2;	// IMP=0x0000000000002b8e
- (_Bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3 keyboardFrame:(struct CGRect)arg4;	// IMP=0x000000000000293c
- (_Bool)notifyZoomFocusDidChangeWithType:(long long)arg1 rect:(struct CGRect)arg2 contextId:(unsigned int)arg3;	// IMP=0x0000000000002853
- (void)removeZoomAttributesChangedHandler:(id)arg1;	// IMP=0x0000000000002464
- (id)registerForZoomAttributes:(id)arg1 updatesImmediatelyWithChangedHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002112
- (void)removeCoalescedZoomAttributesChangedHandler:(id)arg1;	// IMP=0x0000000000001fa8
- (id)registerForCoalescedZoomAttributesWithChangedHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001eb6
- (_Bool)_isPrimaryZoomWindowClient;	// IMP=0x0000000000001eac
- (_Bool)_isAllowedMagnifierClient;	// IMP=0x0000000000001e83
- (void)_applicationWillSuspend:(id)arg1;	// IMP=0x0000000000001b7c
- (void)_zoomChanged:(id)arg1;	// IMP=0x0000000000001977
- (void)_checkSpringBoardStarted;	// IMP=0x0000000000001871
- (void)dealloc;	// IMP=0x00000000000017ec
- (id)init;	// IMP=0x000000000000153c
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;	// IMP=0x000000000000545b
- (id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000005442
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000004f22
- (void)startMagnifierChangeTripleClickMenu:(_Bool)arg1;	// IMP=0x0000000000004dfa
- (void)startMagnifier;	// IMP=0x0000000000004de3
- (void)isMagnifierVisibleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004d26
- (void)showMagnifier;	// IMP=0x0000000000004c93
- (void)hideZoomLens;	// IMP=0x0000000000004b92
- (void)showZoomLens;	// IMP=0x0000000000004a38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
