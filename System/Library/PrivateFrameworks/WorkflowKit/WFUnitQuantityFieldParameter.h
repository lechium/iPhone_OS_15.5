//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, NSUnit;

@interface WFUnitQuantityFieldParameter
{
    _Bool _fallbackToAllSupportedUnits;	// 8 = 0x8
    NSArray *_possibleUnits;	// 16 = 0x10
    NSString *_unitType;	// 24 = 0x18
    NSUnit *_defaultUnit;	// 32 = 0x20
    NSDictionary *_unitSymbolMap;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000352aff
@property(retain, nonatomic) NSDictionary *unitSymbolMap; // @synthesize unitSymbolMap=_unitSymbolMap;
@property(nonatomic) _Bool fallbackToAllSupportedUnits; // @synthesize fallbackToAllSupportedUnits=_fallbackToAllSupportedUnits;
@property(retain, nonatomic) NSUnit *defaultUnit; // @synthesize defaultUnit=_defaultUnit;
@property(copy, nonatomic) NSString *unitType; // @synthesize unitType=_unitType;
- (void)setPossibleUnits:(id)arg1;	// IMP=0x0000000000352a97
- (id)possibleUnits;	// IMP=0x0000000000352a86
- (id)defaultSerializedRepresentation;	// IMP=0x000000000035278c
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000003526db
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x0000000000352369
- (void)updatePossibleUnits;	// IMP=0x0000000000351d40
- (id)availableUnitForStringValue:(id)arg1;	// IMP=0x0000000000351cbd
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000003519a3

@end
