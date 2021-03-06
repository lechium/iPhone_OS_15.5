//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@class NSString;

@interface WFWeatherAlmanacParserV3 : NSObject <WFForecastDataParser>
{
}

- (id)parseAlmanacForecastDataFromJson:(id)arg1 location:(id)arg2 date:(id)arg3;	// IMP=0x000000000001f1ba
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;	// IMP=0x000000000001eefa
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001eece

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

