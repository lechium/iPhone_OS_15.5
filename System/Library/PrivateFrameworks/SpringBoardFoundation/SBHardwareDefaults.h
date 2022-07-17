//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBHardwareDefaults
{
}

- (_Bool)isNaturalVolumeButtonOrientationEnabled;	// IMP=0x00000000000753ab
- (_Bool)_deviceRequiresNaturalVolumeButtonArrangement;	// IMP=0x00000000000753a3
- (void)_bindAndRegisterDefaults;	// IMP=0x00000000000750ee

// Remaining properties
@property(readonly, nonatomic) _Bool disableHomeButton; // @dynamic disableHomeButton;
@property(readonly, nonatomic) _Bool disableHomeButtonDoublePress; // @dynamic disableHomeButtonDoublePress;
@property(nonatomic) _Bool disableNaturalVolumeButtonOrientation; // @dynamic disableNaturalVolumeButtonOrientation;
@property(readonly, nonatomic) _Bool disableProximitySensor; // @dynamic disableProximitySensor;
@property(nonatomic) _Bool hasSeenACaseLatchCoverOnce; // @dynamic hasSeenACaseLatchCoverOnce;
@property(nonatomic) long long homeButtonHapticType; // @dynamic homeButtonHapticType;
@property(readonly, nonatomic) _Bool useHardwareSwitchAsOrientationLock; // @dynamic useHardwareSwitchAsOrientationLock;

@end
