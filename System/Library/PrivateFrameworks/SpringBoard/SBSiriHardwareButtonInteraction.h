//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBHardwareButtonInteraction-Protocol.h>

@class NSString, SiriLongPressButtonSource;
@protocol SiriAssertion;

@interface SBSiriHardwareButtonInteraction <SBHardwareButtonInteraction>
{
    double _initialPressDownTime;	// 8 = 0x8
    long long _siriButtonIdentifier;	// 16 = 0x10
    SiriLongPressButtonSource *_siriActivationSource;	// 24 = 0x18
    double _activationInterval;	// 32 = 0x20
    id <SiriAssertion> _siriPreheatAssertion;	// 40 = 0x28
    id <SiriAssertion> _siriButtonDownAssertion;	// 48 = 0x30
}

+ (_Bool)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1;	// IMP=0x00000000003f89bd
+ (id)hardwareButtonInteractionForVoiceCommandButton;	// IMP=0x00000000003f88eb
+ (id)hardwareButtonInteractionForLockButton;	// IMP=0x00000000003f88bd
+ (id)hardwareButtonInteractionForHomeButton;	// IMP=0x00000000003f888f
- (void).cxx_destruct;	// IMP=0x00000000003f9198
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(nonatomic) double activationInterval; // @synthesize activationInterval=_activationInterval;
@property(retain, nonatomic) SiriLongPressButtonSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(nonatomic) long long siriButtonIdentifier; // @synthesize siriButtonIdentifier=_siriButtonIdentifier;
@property(nonatomic) double initialPressDownTime; // @synthesize initialPressDownTime=_initialPressDownTime;
- (id)hardwareButtonGestureParameters;	// IMP=0x00000000003f908f
- (_Bool)consumeLongPress;	// IMP=0x00000000003f8e49
- (_Bool)consumeSinglePressUp;	// IMP=0x00000000000ae9da
- (_Bool)consumeInitialPressDown;	// IMP=0x00000000000ab993
- (void)observeLongPressCanceled;	// IMP=0x000000000009bc79
- (void)observeFinalPressUp;	// IMP=0x00000000000ae50b
- (void)_cancelAllSiriActions;	// IMP=0x00000000003f8dae
- (void)_cancelPreheating;	// IMP=0x00000000003f8d31
- (void)_preheatSiriForPresentationAfterInterval:(double)arg1;	// IMP=0x00000000003f8bc0
- (void)_siriHomeButtonPrefsDidChange:(id)arg1;	// IMP=0x00000000003f8b74
- (id)initWithSiriButton:(long long)arg1;	// IMP=0x00000000003f8919

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

