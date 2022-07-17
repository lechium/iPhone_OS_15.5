//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFBatteryLevelTrigger
{
    unsigned long long _level;	// 8 = 0x8
    unsigned long long _selection;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000026f7cc
+ (long long)triggerBacking;	// IMP=0x000000000026f7c1
+ (id)displayGlyphHierarchicalColors;	// IMP=0x000000000026f6f8
+ (id)displayGlyphName;	// IMP=0x000000000026f6eb
+ (id)localizedDisplayExplanation;	// IMP=0x000000000026f6da
+ (id)localizedDisplayName;	// IMP=0x000000000026f6c9
+ (_Bool)isAllowedToRunAutomatically;	// IMP=0x000000000026f677
@property(nonatomic) unsigned long long selection; // @synthesize selection=_selection;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026f5b3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026f457
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026f355
- (id)localizedPastTenseDescription;	// IMP=0x000000000026f17d
- (id)localizedDescriptionWithConfigurationSummary;	// IMP=0x000000000026efa5
- (_Bool)hasValidConfiguration;	// IMP=0x000000000026ef69
- (id)init;	// IMP=0x000000000026eefd

@end
