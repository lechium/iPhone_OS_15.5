//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSTTableStyle
{
}

+ (void)p_populateParagraphStyle:(id)arg1;	// IMP=0x00000000003da8ca
+ (void)initDefaultPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;	// IMP=0x00000000003da818
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3;	// IMP=0x00000000003da7d5
+ (id)styleIDForPreset:(unsigned long long)arg1;	// IMP=0x00000000003da363
+ (id)nonEmphasisTableProperties;	// IMP=0x00000000003da0db
+ (id)propertiesAllowingNSNull;	// IMP=0x00000000003d9f4d
+ (id)properties;	// IMP=0x00000000003d9e44
- (SEL)mapThemePropertyMapSelector;	// IMP=0x00000000003dac75
- (void)validate;	// IMP=0x00000000003dab0d
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;	// IMP=0x00000000003daad7
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;	// IMP=0x00000000003daaa1
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;	// IMP=0x00000000003daa6b
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;	// IMP=0x00000000003daa35
- (id)strokeForStrokePreset:(unsigned long long)arg1;	// IMP=0x00000000003da9ff
- (void)dealloc;	// IMP=0x00000000003da9d0
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(_Bool)arg4;	// IMP=0x00000000003da9a1

@end
