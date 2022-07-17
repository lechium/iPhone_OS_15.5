//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFLowPowerModeTrigger
{
    _Bool _onEnable;	// 8 = 0x8
    _Bool _onDisable;	// 9 = 0x9
}

+ (id)yellowBatteryHierarchicalColors;	// IMP=0x00000000003100a5
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000031009d
+ (id)offLabel;	// IMP=0x000000000031008c
+ (id)onLabel;	// IMP=0x000000000031007b
+ (id)offIcon;	// IMP=0x000000000030ff78
+ (id)onIcon;	// IMP=0x000000000030ff0e
+ (long long)triggerBacking;	// IMP=0x000000000030ff03
+ (id)displayGlyphHierarchicalColors;	// IMP=0x000000000030fef1
+ (id)displayGlyphName;	// IMP=0x000000000030fee4
+ (id)localizedDisplayExplanation;	// IMP=0x000000000030fed3
+ (id)localizedDisplayName;	// IMP=0x000000000030fec2
+ (_Bool)isSupportedOnThisDevice;	// IMP=0x000000000030feb1
+ (_Bool)isUserInitiated;	// IMP=0x000000000030fea9
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x000000000030fea1
@property(nonatomic) _Bool onDisable; // @synthesize onDisable=_onDisable;
@property(nonatomic) _Bool onEnable; // @synthesize onEnable=_onEnable;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030fde1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030fcbf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030fbbd
- (id)localizedPastTenseDescription;	// IMP=0x000000000030fa8e
- (id)localizedDescriptionWithConfigurationSummary;	// IMP=0x000000000030f95f
- (_Bool)hasValidConfiguration;	// IMP=0x000000000030f926
- (id)init;	// IMP=0x000000000030f8c2

@end
