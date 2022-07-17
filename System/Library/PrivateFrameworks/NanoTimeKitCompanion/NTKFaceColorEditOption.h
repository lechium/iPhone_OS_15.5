//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKPigmentEditOptionConvertible-Protocol.h>

@class NSString;

@interface NTKFaceColorEditOption <NTKPigmentEditOptionConvertible>
{
}

+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x000000000022a227
+ (id)__orderedValuesForDevice:(id)arg1;	// IMP=0x0000000000229db1
+ (id)__allOrderedColors;	// IMP=0x0000000000229d90
+ (id)_orderedValuesForDevice:(id)arg1;	// IMP=0x0000000000229c18
+ (_Bool)value:(long long)arg1 existsInDevice:(id)arg2;	// IMP=0x00000000002297d0
+ (id)standardColorsWithColorClass:(Class)arg1 forDevice:(id)arg2;	// IMP=0x00000000002295cc
+ (id)standardColorValuesForDevice:(id)arg1;	// IMP=0x000000000022941b
+ (id)standardColorEditOptionsForDevice:(id)arg1;	// IMP=0x000000000022909e
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;	// IMP=0x0000000000228e07
+ (id)_thirdPartyValues;	// IMP=0x0000000000228dfa
+ (id)optionByValidatingValueOfInvalidOption:(id)arg1;	// IMP=0x0000000000228de8
+ (id)_optionByValidatingValueOfInvalidOption:(id)arg1;	// IMP=0x0000000000228cac
+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x0000000000228c9a
+ (id)pigmentFaceDomain;	// IMP=0x0000000000228c92
- (id)pigmentEditOption;	// IMP=0x000000000022bee9
- (id)_valueToFaceBundleStringDict;	// IMP=0x000000000022ab14
- (id)localizedName;	// IMP=0x000000000022aac4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022a09e
- (_Bool)optionExistsInDevice:(id)arg1;	// IMP=0x0000000000229bb6
@property(readonly, nonatomic) unsigned long long faceColor;
- (long long)swatchStyle;	// IMP=0x00000000001fe9e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
