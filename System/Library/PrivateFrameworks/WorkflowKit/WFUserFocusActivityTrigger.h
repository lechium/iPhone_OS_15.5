//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WFColor;

@interface WFUserFocusActivityTrigger
{
    _Bool _onEnable;	// 8 = 0x8
    _Bool _onDisable;	// 9 = 0x9
    NSString *_activityName;	// 16 = 0x10
    NSString *_activityUniqueIdentifier;	// 24 = 0x18
    NSString *_activitySemanticIdentifier;	// 32 = 0x20
    NSString *_activityGlyphName;	// 40 = 0x28
    WFColor *_activityTintColor;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000252d03
+ (id)offLabel;	// IMP=0x0000000000252cf2
+ (id)onLabel;	// IMP=0x0000000000252ce1
+ (id)tintColor;	// IMP=0x0000000000252c98
+ (id)offIconTintColor;	// IMP=0x0000000000252c86
+ (id)onIconTintColor;	// IMP=0x0000000000252c74
+ (id)displayGlyphTintColor;	// IMP=0x0000000000252c62
+ (id)offIcon;	// IMP=0x0000000000252c40
+ (id)onIcon;	// IMP=0x0000000000252c1e
+ (long long)triggerBacking;	// IMP=0x0000000000252c13
+ (id)displayGlyphName;	// IMP=0x0000000000252c06
+ (id)localizedDisplayExplanation;	// IMP=0x0000000000252bf5
+ (id)localizedDisplayName;	// IMP=0x0000000000252be4
+ (_Bool)isUserInitiated;	// IMP=0x0000000000252bdc
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x0000000000252bd4
- (void).cxx_destruct;	// IMP=0x00000000002528c9
@property(nonatomic) _Bool onDisable; // @synthesize onDisable=_onDisable;
@property(nonatomic) _Bool onEnable; // @synthesize onEnable=_onEnable;
@property(retain, nonatomic) WFColor *activityTintColor; // @synthesize activityTintColor=_activityTintColor;
@property(retain, nonatomic) NSString *activityGlyphName; // @synthesize activityGlyphName=_activityGlyphName;
@property(retain, nonatomic) NSString *activitySemanticIdentifier; // @synthesize activitySemanticIdentifier=_activitySemanticIdentifier;
@property(retain, nonatomic) NSString *activityUniqueIdentifier; // @synthesize activityUniqueIdentifier=_activityUniqueIdentifier;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025265b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025236f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000252159
- (id)localizedPastTenseDescription;	// IMP=0x0000000000251fb0
- (id)localizedDescriptionWithConfigurationSummary;	// IMP=0x0000000000251e07
- (_Bool)hasValidConfiguration;	// IMP=0x0000000000251da5
- (id)init;	// IMP=0x0000000000251d41
- (id)description;	// IMP=0x0000000000251c12
- (id)displayGlyphTintColor;	// IMP=0x0000000000251b88
- (id)displayGlyph;	// IMP=0x0000000000251b23
- (id)displayGlyphName;	// IMP=0x0000000000251b11
- (id)localizedDisplayExplanation;	// IMP=0x0000000000251a7a
- (id)localizedDisplayName;	// IMP=0x0000000000251a68
- (id)initWithActivity:(id)arg1;	// IMP=0x0000000000251870

@end

