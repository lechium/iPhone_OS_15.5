//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFChildServiceFilter, HMService;

@interface HFChildServiceControlItem
{
    HMService *_parentService;	// 8 = 0x8
    HFChildServiceFilter *_childServiceFilter;	// 16 = 0x10
}

+ (Class)valueClass;	// IMP=0x00000000000de2a3
- (void).cxx_destruct;	// IMP=0x00000000000dea9b
@property(readonly, nonatomic) HFChildServiceFilter *childServiceFilter; // @synthesize childServiceFilter=_childServiceFilter;
@property(readonly, nonatomic) HMService *parentService; // @synthesize parentService=_parentService;
- (_Bool)supportsItemRepresentingServices:(id)arg1;	// IMP=0x00000000000dea02
- (id)normalizedValueForValue:(id)arg1;	// IMP=0x00000000000de9ec
- (id)characteristicValuesForValue:(id)arg1;	// IMP=0x00000000000de9df
- (id)valueForCharacteristicValues:(id)arg1;	// IMP=0x00000000000de9c6
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000de626
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000000de514
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;	// IMP=0x00000000000de369
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;	// IMP=0x00000000000de2b4

@end
