//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HFTemperatureUnitControlItem
{
    NSString *_temperatureUnitCharacteristicType;	// 8 = 0x8
}

+ (Class)valueClass;	// IMP=0x0000000000047252
- (void).cxx_destruct;	// IMP=0x00000000000473b5
@property(readonly, copy, nonatomic) NSString *temperatureUnitCharacteristicType; // @synthesize temperatureUnitCharacteristicType=_temperatureUnitCharacteristicType;
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x00000000000472e6
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x0000000000047263
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x0000000000047171
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000000470bc
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;	// IMP=0x0000000000046f93

@end

