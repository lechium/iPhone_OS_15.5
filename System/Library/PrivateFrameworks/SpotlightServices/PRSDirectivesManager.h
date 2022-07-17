//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, PRSL2FeatureVectorProcessingContext;

@interface PRSDirectivesManager : NSObject
{
    int indexOfAsIs;	// 8 = 0x8
    int indexOfAsIsRange;	// 12 = 0xc
    int indexOfReplaceIf;	// 16 = 0x10
    int indexOfReplaceThenMin;	// 20 = 0x14
    int indexOfIsPopulated;	// 24 = 0x18
    int indexOfIdMapping;	// 28 = 0x1c
    int indexOfResultSetIdMapping;	// 32 = 0x20
    int indexOfResultSetIdScoreMapping;	// 36 = 0x24
    int indexOfValueIfNotExist;	// 40 = 0x28
    int indexOfOneSidedInverse;	// 44 = 0x2c
    int indexOfQuantize;	// 48 = 0x30
    int indexOfFanOutValue;	// 52 = 0x34
    int sizeOfAsIs;	// 56 = 0x38
    int sizeOfAsIsRange;	// 60 = 0x3c
    int sizeOfReplaceIf;	// 64 = 0x40
    int sizeOfReplaceThenMin;	// 68 = 0x44
    int sizeOfIsPopulated;	// 72 = 0x48
    int sizeOfIdMapping;	// 76 = 0x4c
    int sizeOfResultSetIdMapping;	// 80 = 0x50
    int sizeOfResultSetIdScoreMapping;	// 84 = 0x54
    int sizeOfValueIfNotExist;	// 88 = 0x58
    int sizeOfOneSidedInverse;	// 92 = 0x5c
    int sizeOfQuantize;	// 96 = 0x60
    int sizeOfFanOutValue;	// 100 = 0x64
    struct _as_is {
        unsigned long long _field1;
        unsigned long long _field2;
    } *directive_as_is;	// 104 = 0x68
    struct _as_is_range {
        unsigned long long _field1;
        unsigned long long _field2;
        unsigned long long _field3;
    } *directive_as_is_range;	// 112 = 0x70
    struct _replace_if {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[2];
        float _field4[2];
        unsigned long long _field5;
    } *directive_replace_if;	// 120 = 0x78
    struct _replace_then_min {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[5];
        float _field4[5];
        float _field5;
        unsigned long long _field6;
    } *directive_replace_then_min;	// 128 = 0x80
    struct _value_if_not_exist {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3;
    } *directive_value_if_not_exist;	// 136 = 0x88
    struct _is_populated {
        unsigned long long _field1;
        unsigned long long _field2;
        float _field3[5];
        float _field4[5];
        unsigned long long _field5;
    } *directive_is_populated;	// 144 = 0x90
    struct _id_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        char *_field4;
    } *directive_id_mapping;	// 152 = 0x98
    struct _resultset_id_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        char *_field4;
        float *_field5;
    } *directive_resultset_id_mapping;	// 160 = 0xa0
    struct _resultset_id_score_mapping {
        unsigned long long _field1;
        unsigned long long _field2;
        CDUnion_fc2819da _field3;
        struct __CFDictionary *_field4;
        char *_field5;
        float *_field6;
    } *directive_resultset_id_score_mapping;	// 168 = 0xa8
    struct _one_sided_inverse {
        unsigned long long _field1;
        unsigned long long _field2;
    } *directive_one_sided_inverse;	// 176 = 0xb0
    struct _quantize {
        unsigned long long _field1;
        unsigned long long _field2;
        float *_field3;
        unsigned long long _field4;
    } *directive_quantize;	// 184 = 0xb8
    struct fan_out_value *directive_fan_out;	// 192 = 0xc0
    struct _local_resultset_id_values_mapping {
        unsigned long long start_idx;
        unsigned long long end_idx;
        struct __CFDictionary *mapping;
        unsigned long long numPRSRankingBundleFeatures;
        unsigned long long *PRSRankingBundleFeatureOrder;
        CDUnknownBlockType *PRSRankingBundleFeaturePickers;
        float *score_vector;
        unsigned long long mapSize;
    } directive_local_resultset_id_values_mapping;	// 200 = 0xc8
    struct _parsec_resultset_id_values_mapping {
        unsigned long long start_idx;
        unsigned long long end_idx;
        unsigned long long numFeatures;
        struct __CFDictionary *mapping;
        CDUnknownBlockType *PRSRankingBundleFeaturePickers;
        float *score_vector;
        unsigned long long mapSize;
    } directive_parsec_resultset_id_values_mapping;	// 264 = 0x108
    NSMutableIndexSet *disabledFeatureIndices;	// 320 = 0x140
    NSMutableDictionary *mapInflatedIndexToSize;	// 328 = 0x148
    PRSL2FeatureVectorProcessingContext *_processingContext;	// 336 = 0x150
    double _weightX;	// 344 = 0x158
    double _weightY;	// 352 = 0x160
}

+ (void)initialize;	// IMP=0x000000000001624b
- (void).cxx_destruct;	// IMP=0x000000000001bc80
@property(nonatomic) double weightY; // @synthesize weightY=_weightY;
@property(nonatomic) double weightX; // @synthesize weightX=_weightX;
@property(retain, nonatomic) PRSL2FeatureVectorProcessingContext *processingContext; // @synthesize processingContext=_processingContext;
- (void)processL2FeatureVector:(id)arg1 populatingValues:(float *)arg2 scoreValue:(char *)arg3 count:(int)arg4;	// IMP=0x000000000001afd1
- (void)cleanup;	// IMP=0x000000000001af2c
- (void)processResultSetValuesWithMap:(id)arg1 serverFeatures:(id)arg2;	// IMP=0x0000000000019570
- (void)processDirectives:(id)arg1;	// IMP=0x0000000000016938
- (void)getAllDirectivesArraysForTesting:(void *)arg1;	// IMP=0x00000000000166a1
- (unsigned long long)getDirectiveTypeFromString:(id)arg1;	// IMP=0x00000000000165f3
- (void)dealloc;	// IMP=0x00000000000162e9
- (id)init;	// IMP=0x0000000000016292

@end
