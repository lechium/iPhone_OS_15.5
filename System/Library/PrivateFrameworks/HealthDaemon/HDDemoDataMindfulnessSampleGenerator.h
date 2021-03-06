//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDemoDataMindfulnessSampleGenerator
{
    _Bool _didGenerateMindfulnessMinute;	// 8 = 0x8
    double _nextMindfulSessionSampleTime;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006f98a2
@property(readonly, nonatomic) _Bool didGenerateMindfulnessMinute;
- (void)generateSamplesForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;	// IMP=0x00000000006f98d9
- (void)setupWithDemoDataGenerator:(id)arg1;	// IMP=0x00000000006f98aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006f97f2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006f9751
- (id)init;	// IMP=0x00000000006f9703

@end

