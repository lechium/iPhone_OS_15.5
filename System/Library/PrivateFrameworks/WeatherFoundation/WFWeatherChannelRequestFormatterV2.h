//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastRequestFormatter-Protocol.h>

@class NSString;

@interface WFWeatherChannelRequestFormatterV2 : NSObject <WFForecastRequestFormatter>
{
}

+ (id)aqiRequestForScaleNamed:(id)arg1 language:(id)arg2;	// IMP=0x000000000000bff3
+ (id)forecastRequestForURL:(id)arg1 queryItems:(id)arg2;	// IMP=0x000000000000bf29
+ (id)forecastRequestForRequest:(id)arg1 queryItems:(id)arg2 forLocation:(id)arg3 rules:(id)arg4;	// IMP=0x000000000000bdca
+ (id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2;	// IMP=0x000000000000ba3f
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 withUnits:(int)arg3 locale:(id)arg4 date:(id)arg5 rules:(id)arg6 options:(id)arg7;	// IMP=0x000000000000b81c
+ (id)forecastRequest:(unsigned long long)arg1 forLocation:(id)arg2 locale:(id)arg3 date:(id)arg4;	// IMP=0x000000000000b7ec
+ (id)hostURLForService;	// IMP=0x000000000000b7cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

