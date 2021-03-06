//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSMagSafeAccessory, CSMagSafeAccessoryView;

@interface CSMagSafeAccessoryViewController
{
    _Bool _isAnimatingPresentation;	// 8 = 0x8
    CSMagSafeAccessory *_accessory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011fe02
@property(retain, nonatomic) CSMagSafeAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) _Bool isAnimatingPresentation; // @synthesize isAnimatingPresentation=_isAnimatingPresentation;
@property(readonly, nonatomic) double animationDurationBeforeDismissal;
@property(readonly, nonatomic) CSMagSafeAccessoryView *accessoryView;
- (long long)presentationStyle;	// IMP=0x000000000011fdc2
- (long long)presentationPriority;	// IMP=0x000000000011fdb7
- (long long)presentationType;	// IMP=0x000000000011fdac
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000000011fcce
- (void)aggregateBehavior:(id)arg1;	// IMP=0x000000000011fb8b
- (void)aggregateAppearance:(id)arg1;	// IMP=0x000000000011f731
- (void)transitionChargingViewVisible:(_Bool)arg1 chargingInfo:(id)arg2;	// IMP=0x000000000011f72b
@property(readonly, nonatomic) double chargingAnimationDuration;
@property(readonly, nonatomic) _Bool showingChargingAnimation;
@property(readonly, nonatomic) _Bool hasChargingAnimation;
@property(readonly, nonatomic) _Bool isStatic;
- (void)performDismissalAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f67e
- (id)initWithAccessory:(id)arg1;	// IMP=0x000000000011f610

@end

