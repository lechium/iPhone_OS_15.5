//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFAPIConfigurationProtocol-Protocol.h>

@class NSString;
@protocol WFForecastDataParser;

@interface WFWeatherDataServiceAPIConfiguration : NSObject <WFAPIConfigurationProtocol>
{
    Class _forecastRequestFormatterClass;	// 8 = 0x8
    id <WFForecastDataParser> _forecastParser;	// 16 = 0x10
    NSString *_environment;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003eb4f
@property(readonly, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <WFForecastDataParser> forecastParser; // @synthesize forecastParser=_forecastParser;
@property(retain, nonatomic) Class forecastRequestFormatterClass; // @synthesize forecastRequestFormatterClass=_forecastRequestFormatterClass;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ea91
- (id)parseAQIScaleNamed:(id)arg1 data:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003e9f2
- (id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;	// IMP=0x000000000003e969
- (id)parseForecast:(unsigned long long)arg1 data:(id)arg2 location:(id)arg3 units:(int)arg4 locale:(id)arg5 date:(id)arg6 error:(id *)arg7 rules:(id)arg8;	// IMP=0x000000000003e858
- (id)forecastRequestForTypes:(unsigned long long)arg1 location:(id)arg2 units:(int)arg3 date:(id)arg4 error:(id *)arg5 rules:(id)arg6 options:(id)arg7;	// IMP=0x000000000003e757
- (id)hostUrl;	// IMP=0x000000000003e6b7
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithVersion:(id)arg1 environment:(id)arg2;	// IMP=0x000000000003e5bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

