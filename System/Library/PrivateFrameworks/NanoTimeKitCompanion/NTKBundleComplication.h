//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKCBundleComplication, CLKComplicationDescriptor;

@interface NTKBundleComplication
{
    CLKCBundleComplication *_complication;	// 32 = 0x20
}

+ (id)_revertedBundleComplicationFromJSONDictionary:(id)arg1;	// IMP=0x00000000001a10ec
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a10e4
+ (id)bundledComplicationWithComplication:(id)arg1;	// IMP=0x00000000001a0945
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 complicationDescriptor:(id)arg3;	// IMP=0x00000000001a0846
+ (id)bundledComplicationWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;	// IMP=0x00000000001a0831
- (void).cxx_destruct;	// IMP=0x00000000001a1878
@property(readonly, nonatomic) CLKCBundleComplication *complication; // @synthesize complication=_complication;
- (void)_addKeysToJSONDictionary:(id)arg1;	// IMP=0x00000000001a1632
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a1511
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a134d
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;	// IMP=0x00000000001a119a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a1096
- (id)localizedRichDetailText;	// IMP=0x00000000001a1084
- (id)localizedDetailText;	// IMP=0x00000000001a1072
- (id)localizedRichKeylineLabelText;	// IMP=0x00000000001a1060
- (id)localizedKeylineLabelText;	// IMP=0x00000000001a0f40
- (id)description;	// IMP=0x00000000001a0f10
- (id)customDailySnapshotKeyForFamily:(long long)arg1 device:(id)arg2;	// IMP=0x00000000001a0e76
- (_Bool)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000001a0cdf
- (id)appIdentifier;	// IMP=0x00000000001a0bd9
@property(readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;
- (id)_generateUniqueIdentifier;	// IMP=0x00000000001a09f3
- (id)ntk_sectionIdentifier;	// IMP=0x000000000002c672

@end

