//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKSpectrumAnalogColorEditOption
{
}

+ (id)domain;	// IMP=0x00000000000355b8
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x0000000000034e32
+ (id)__orderedValuesForDevice:(id)arg1;	// IMP=0x0000000000034a40
+ (id)_orderedValuesForDevice:(id)arg1;	// IMP=0x00000000000348c0
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000000347d4
- (id)pigmentEditOption;	// IMP=0x000000000003534f
- (long long)swatchStyle;	// IMP=0x0000000000035347
- (id)_valueToFaceBundleStringDict;	// IMP=0x0000000000034ff0
- (id)localizedName;	// IMP=0x0000000000034fa0
- (_Bool)optionExistsInDevice:(id)arg1;	// IMP=0x0000000000034814
- (_Bool)isPrideOption;	// IMP=0x00000000000347f8
@property(readonly, nonatomic) unsigned long long color;

@end

