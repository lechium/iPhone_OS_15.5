//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator
{
    _Bool _forcePEFR;	// 8 = 0x8
    NSMutableDictionary *_nextSpirometrySampleTimes;	// 16 = 0x10
    double _nextAsthmaAttackSampleTime;	// 24 = 0x18
    double _nextAsthmaAttackEndTime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006a022a
- (void).cxx_destruct;	// IMP=0x00000000006a18b7
- (void)generateSamplesForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;	// IMP=0x00000000006a0419
- (void)setupWithDemoDataGenerator:(id)arg1;	// IMP=0x00000000006a0232
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006a0148
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000069ff89
- (id)init;	// IMP=0x000000000069ff10

@end

