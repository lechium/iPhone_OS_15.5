//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PFVideoAdjustments
{
    float _slowMotionRate;	// 8 = 0x8
    CDStruct_e83c9415 _slowMotionTimeRange;	// 12 = 0xc
}

+ (id)defaultVideoAdjustmentsURLForVideoURL:(id)arg1;	// IMP=0x000000000006dd42
+ (_Bool)isRecognizedSlowMotionFormatWithIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x000000000006e35a
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg1;	// IMP=0x000000000006e326
+ (CDStruct_e83c9415)defaultSlowMotionTimeRangeForDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000006e212
+ (id)defaultSlowMotionAdjustmentsForAsset:(id)arg1;	// IMP=0x000000000006e0c5
@property(nonatomic) CDStruct_e83c9415 slowMotionTimeRange; // @synthesize slowMotionTimeRange=_slowMotionTimeRange;
@property(nonatomic) float slowMotionRate; // @synthesize slowMotionRate=_slowMotionRate;
- (id)_adjustmentsObjectFromNSKeyedArchiverData:(id)arg1;	// IMP=0x000000000006db00
- (id)_dictionaryFromSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x000000000006d938
- (_Bool)_parseAppleVideoDataBlobDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;	// IMP=0x000000000006d624
- (_Bool)_parseVersionedDataForSlowMotionTimeRange:(CDStruct_e83c9415 *)arg1 rate:(float *)arg2;	// IMP=0x000000000006d3f8
- (_Bool)_parseLegacySLMDictionary:(id)arg1 forSlowMotionTimeRange:(CDStruct_e83c9415 *)arg2 rate:(float *)arg3;	// IMP=0x000000000006d10e
- (void)_updateDerivedPropertiesFromVersionedData;	// IMP=0x000000000006d04a
- (_Bool)isRecognizedFormat;	// IMP=0x000000000006cfc8
- (id)description;	// IMP=0x000000000006ce6c
- (id)initWithPropertyListDictionary:(id)arg1;	// IMP=0x000000000006cd6f
- (_Bool)hasSlowMotionAdjustments;	// IMP=0x000000000006dfdb
- (_Bool)_isValidSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x000000000006df97
- (id)initWithSlowMotionTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2;	// IMP=0x000000000006de77
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x000000000006e0ad
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;	// IMP=0x000000000006e095
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampOut;
@property(readonly, nonatomic) CDStruct_e83c9415 slowMotionRampIn;

@end
