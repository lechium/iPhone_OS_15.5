//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBSOSDefaults
{
}

- (_Bool)isAutomaticCallCountdownEnabled;	// IMP=0x000000000009925a
- (_Bool)clawCanTriggerSOS;	// IMP=0x000000000009923f
- (long long)lockButtonSOSTriggerCount;	// IMP=0x00000000000991c8
- (void)_bindAndRegisterDefaults;	// IMP=0x0000000000099100

// Remaining properties
@property(readonly, nonatomic) _Bool disablesForAccessibility; // @dynamic disablesForAccessibility;
@property(nonatomic) _Bool performedCheckForTripleClickSOSMigrationAlert; // @dynamic performedCheckForTripleClickSOSMigrationAlert;

@end

