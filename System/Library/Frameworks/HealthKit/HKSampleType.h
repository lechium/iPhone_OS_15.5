//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKSampleType
{
}

+ (id)_sampleTypeWithCode:(long long)arg1;	// IMP=0x0000000000114050
+ (id)medicalRecordTypesWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000d3be3
+ (id)medicalRecordTypes;	// IMP=0x00000000000d3bc8
- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1;	// IMP=0x0000000000114591
- (_Bool)_validateStartDate:(double)arg1 endDate:(double)arg2 error:(id *)arg3;	// IMP=0x00000000001143bd
- (_Bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001143b5
@property(readonly, nonatomic) _Bool allowsRecalibrationForEstimates;
@property(readonly, nonatomic) _Bool isMaximumDurationRestricted;
@property(readonly, nonatomic) _Bool isMinimumDurationRestricted;
- (double)_minimumAllowedDuration;	// IMP=0x0000000000114325
@property(readonly, nonatomic) double minimumAllowedDuration;
- (double)_maximumAllowedDuration;	// IMP=0x0000000000114197
@property(readonly, nonatomic) double maximumAllowedDuration;

@end
