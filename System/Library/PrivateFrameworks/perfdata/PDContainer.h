//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PDContainer : NSObject
{
    _Bool _largerBetter;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _version;	// 24 = 0x18
    NSDictionary *_configuration;	// 32 = 0x20
    NSMutableDictionary *_extensions;	// 40 = 0x28
    NSString *_testDescription;	// 48 = 0x30
    NSString *_notes;	// 56 = 0x38
    NSString *_primaryMetricFilter;	// 64 = 0x40
    NSString *_generator;	// 72 = 0x48
    NSDictionary *_variables;	// 80 = 0x50
    NSDictionary *_labels;	// 88 = 0x58
    NSMutableDictionary *_perfdata;	// 96 = 0x60
}

+ (id)containerWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006cc9
+ (id)containerWithJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006294
+ (id)containerWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006163
+ (id)containerWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005fdc
- (void).cxx_destruct;	// IMP=0x0000000000007fc4
@property(retain, nonatomic) NSMutableDictionary *perfdata; // @synthesize perfdata=_perfdata;
@property(nonatomic) _Bool largerBetter; // @synthesize largerBetter=_largerBetter;
@property(retain, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(retain, nonatomic) NSString *generator; // @synthesize generator=_generator;
@property(retain, nonatomic) NSString *primaryMetricFilter; // @synthesize primaryMetricFilter=_primaryMetricFilter;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSString *testDescription; // @synthesize testDescription=_testDescription;
@property(retain, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007c0d
- (_Bool)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000076f1
- (_Bool)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000076d4
- (_Bool)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000076c2
- (_Bool)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000070d3
- (_Bool)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000070c1
- (_Bool)enumerateMeasurementsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000070a7
@property(readonly, nonatomic) unsigned long long measurementCount;
- (_Bool)isLike:(id)arg1;	// IMP=0x0000000000006e5a
- (_Bool)isComparableTo:(id)arg1;	// IMP=0x0000000000006da3
- (id)description;	// IMP=0x0000000000006d25
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000062f0
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000061bf
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006038
- (id)initWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005f7b

@end

