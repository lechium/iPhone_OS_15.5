//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristicMetadata.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class HFNumberValueConstraints, NSString;

@interface HMCharacteristicMetadata (HFDebugging) <HFStateDumpBuildable>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000077479
- (id)hf_percentageForCharacteristicValue:(id)arg1;	// IMP=0x000000000016a1c5
- (id)hf_characteristicValueForPercentage:(double)arg1;	// IMP=0x0000000000169fb6
@property(readonly, nonatomic) _Bool hf_isNumeric;
- (_Bool)hf_isInteger;	// IMP=0x0000000000169d8c
- (_Bool)hf_isValidValue:(id)arg1;	// IMP=0x0000000000169bc0
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;	// IMP=0x0000000000169af6
- (id)hf_normalizedValueForValue:(id)arg1;	// IMP=0x0000000000169a2c
- (_Bool)hf_isEqualToMetadata:(id)arg1;	// IMP=0x000000000016959c
@property(readonly, nonatomic) HFNumberValueConstraints *hf_numericValueConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

