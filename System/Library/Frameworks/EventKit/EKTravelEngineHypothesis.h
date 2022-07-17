//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/NSCopying-Protocol.h>
#import <EventKit/NSMutableCopying-Protocol.h>
#import <EventKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface EKTravelEngineHypothesis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    int _transportType;	// 8 = 0x8
    NSDate *_conservativeDepartureDate;	// 16 = 0x10
    double _conservativeTravelTime;	// 24 = 0x18
    NSDate *_suggestedDepartureDate;	// 32 = 0x20
    double _estimatedTravelTime;	// 40 = 0x28
    NSDate *_aggressiveDepartureDate;	// 48 = 0x30
    double _aggressiveTravelTime;	// 56 = 0x38
    NSString *_routeName;	// 64 = 0x40
    _Bool _supportsLiveTraffic;	// 72 = 0x48
    unsigned long long _currentTrafficDensity;	// 80 = 0x50
    NSString *_trafficDensityDescription;	// 88 = 0x58
    long long _travelState;	// 96 = 0x60
}

+ (id)syntheticHypothesisWithStartDate:(id)arg1 conservativeTravelTime:(double)arg2 estimatedTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4;	// IMP=0x000000000007ebcb
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e507
- (void).cxx_destruct;	// IMP=0x000000000007ed69
@property(readonly, nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(readonly, copy, nonatomic) NSString *trafficDensityDescription; // @synthesize trafficDensityDescription=_trafficDensityDescription;
@property(readonly, nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(readonly, nonatomic) _Bool supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(readonly, copy, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(readonly, nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property(readonly, copy, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property(readonly, nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(readonly, copy, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e85e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007e50f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e360
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007e355
- (unsigned long long)hash;	// IMP=0x000000000007e0f2
- (_Bool)isEqualToHypothesis:(id)arg1;	// IMP=0x000000000007dd92
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007dd34
- (id)description;	// IMP=0x000000000007d991
- (id)initWithTransportType:(int)arg1 conservativeDepartureDate:(id)arg2 conservativeTravelTime:(double)arg3 suggestedDepartureDate:(id)arg4 estimatedTravelTime:(double)arg5 aggressiveDepartureDate:(id)arg6 aggressiveTravelTime:(double)arg7 routeName:(id)arg8 supportsLiveTraffic:(_Bool)arg9 currentTrafficDensity:(unsigned long long)arg10 trafficDensityDescription:(id)arg11 travelState:(long long)arg12;	// IMP=0x000000000007d80c

@end
