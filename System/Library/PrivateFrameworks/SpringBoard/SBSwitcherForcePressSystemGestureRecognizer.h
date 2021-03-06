//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>
#import <SpringBoard/UIInteractionProgressObserver-Protocol.h>

@class NSString, SBAppSwitcherSettings, SBTouchHistory, UIPreviewForceInteractionProgress;

@interface SBSwitcherForcePressSystemGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding>
{
    UIPreviewForceInteractionProgress *_forceObserver;	// 8 = 0x8
    SBAppSwitcherSettings *_settings;	// 16 = 0x10
    double _forcePercent;	// 24 = 0x18
    SBTouchHistory *_touchHistory;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005bce16
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(readonly, nonatomic) double forcePercent; // @synthesize forcePercent=_forcePercent;
- (double)peakSpeed;	// IMP=0x00000000005bcdc2
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;	// IMP=0x00000000005bcda5
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;	// IMP=0x00000000005bcd88
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;	// IMP=0x00000000005bcd82
- (void)interactionProgressDidUpdate:(id)arg1;	// IMP=0x00000000005bcd24
- (void)reset;	// IMP=0x00000000005bcca6
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005bcb6c
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005bca32
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000005bc8f8
- (void)setState:(long long)arg1;	// IMP=0x00000000005bc79b
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000005bc762
- (void)dealloc;	// IMP=0x00000000005bc716
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000005bc4f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

