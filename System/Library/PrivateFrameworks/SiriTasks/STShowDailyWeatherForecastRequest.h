//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest
{
    STWeatherAttributes *_currentAttributes;	// 8 = 0x8
    NSArray *_dailyAttributes;	// 16 = 0x10
    STCity *_city;	// 24 = 0x18
    long long _startWeekday;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000089de
- (void).cxx_destruct;	// IMP=0x0000000000008ca2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008abf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000089e6
- (long long)startWeekday;	// IMP=0x00000000000089cd
- (id)city;	// IMP=0x00000000000089b8
- (id)dailyAttributes;	// IMP=0x00000000000089a3
- (id)currentAttributes;	// IMP=0x000000000000898e
- (id)createResponse;	// IMP=0x0000000000008958
- (id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4;	// IMP=0x000000000000886a

@end
