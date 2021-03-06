//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFFaucetActiveStateControlItem
{
    unsigned long long _valveControlMode;	// 8 = 0x8
}

+ (id)na_identity;	// IMP=0x00000000001d4e52
@property(readonly, nonatomic) unsigned long long valveControlMode; // @synthesize valveControlMode=_valveControlMode;
- (id)resultsForBatchReadResponse:(id)arg1;	// IMP=0x00000000001d4cd6
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;	// IMP=0x00000000001d4a81
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;	// IMP=0x00000000001d49d0
- (id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4;	// IMP=0x00000000001d491b
- (id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3;	// IMP=0x00000000001d472e

@end

