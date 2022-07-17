//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SASSystemState, SiriContextOverride;

@interface SASOverriddenSystemState
{
    SASSystemState *_systemState;	// 8 = 0x8
    SiriContextOverride *_contextOverride;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004368
@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
@property(retain, nonatomic) SASSystemState *systemState; // @synthesize systemState=_systemState;
- (_Bool)siriIsSupported;	// IMP=0x00000000000042aa
- (_Bool)siriIsRestricted;	// IMP=0x0000000000004236
- (_Bool)siriIsEnabled;	// IMP=0x00000000000041c2
- (_Bool)isConnectedToTrustedCarPlay;	// IMP=0x000000000000414e
- (_Bool)isConnectedToCarPlay;	// IMP=0x00000000000040da
- (_Bool)carDNDActive;	// IMP=0x0000000000004066
- (_Bool)accessibilityShortcutEnabled;	// IMP=0x0000000000003ff2
- (_Bool)smartCoverClosed;	// IMP=0x0000000000003f7e
- (_Bool)isPad;	// IMP=0x0000000000003f0a
- (_Bool)pocketStateShouldPreventVoiceTrigger;	// IMP=0x0000000000003e96
- (_Bool)deviceIsPasscodeLocked;	// IMP=0x0000000000003e22
- (_Bool)deviceIsBlocked;	// IMP=0x0000000000003dae
- (_Bool)hasUnlockedSinceBoot;	// IMP=0x0000000000003d3a
- (id)currentSpokenLanguageCode;	// IMP=0x0000000000003cba
- (void)setLockStateMonitor:(id)arg1;	// IMP=0x0000000000003c48
- (id)lockStateMonitor;	// IMP=0x0000000000003bf8
- (id)initWithSystemState:(id)arg1 contextOverride:(id)arg2;	// IMP=0x0000000000003b5a

@end
