//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NSSecureCoding-Protocol.h>

@class NSArray, WFAirQualityConditions, WFWeatherConditions;

@interface NWCEntryModel : NSObject <NSSecureCoding>
{
    WFWeatherConditions *_conditions;	// 8 = 0x8
    WFAirQualityConditions *_airQualityConditions;	// 16 = 0x10
    NSArray *_hourlyEntryModels;	// 24 = 0x18
    WFWeatherConditions *_dailyConditions;	// 32 = 0x20
    unsigned long long _timeOfDay;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014212
- (void).cxx_destruct;	// IMP=0x00000000000146c9
@property(readonly) unsigned long long timeOfDay; // @synthesize timeOfDay=_timeOfDay;
@property(readonly) WFWeatherConditions *dailyConditions; // @synthesize dailyConditions=_dailyConditions;
@property(readonly) NSArray *hourlyEntryModels; // @synthesize hourlyEntryModels=_hourlyEntryModels;
@property(readonly) WFAirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
@property(readonly) WFWeatherConditions *conditions; // @synthesize conditions=_conditions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014481
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001421a
- (id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 hourlyEntryModels:(id)arg3 dailyConditions:(id)arg4 timeOfDay:(unsigned long long)arg5;	// IMP=0x0000000000014128
- (id)initWithConditions:(id)arg1 airQualityConditions:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4;	// IMP=0x00000000000140fc
- (id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(unsigned long long)arg4;	// IMP=0x00000000000140d2
- (id)initWithConditions:(id)arg1 dailyConditions:(id)arg2 timeOfDay:(unsigned long long)arg3;	// IMP=0x00000000000140a7
- (id)initWithConditions:(id)arg1 hourlyEntryModels:(id)arg2 timeOfDay:(unsigned long long)arg3;	// IMP=0x000000000001407d
- (id)initWithConditions:(id)arg1 timeOfDay:(unsigned long long)arg2;	// IMP=0x0000000000014052

@end
