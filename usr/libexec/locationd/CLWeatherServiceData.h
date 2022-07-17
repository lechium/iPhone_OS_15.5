//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLWeatherServiceData : NSObject
{
    float _weatherPressure;	// 8 = 0x8
    float _temperature;	// 12 = 0xc
    float _feelsLikeTemperature;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    NSString *_precipitationType;	// 32 = 0x20
}

@property(nonatomic) float feelsLikeTemperature; // @synthesize feelsLikeTemperature=_feelsLikeTemperature;
@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) NSString *precipitationType; // @synthesize precipitationType=_precipitationType;
@property(nonatomic) float weatherPressure; // @synthesize weatherPressure=_weatherPressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005eda07

@end
