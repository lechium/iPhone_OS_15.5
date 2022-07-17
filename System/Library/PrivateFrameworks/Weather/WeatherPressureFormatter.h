//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface WeatherPressureFormatter : NSFormatter
{
    NSLocale *_locale;	// 8 = 0x8
}

+ (id)convenienceFormatter;	// IMP=0x000000000006081c
- (void).cxx_destruct;	// IMP=0x0000000000061149
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x0000000000061130
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0000000000061098
- (float)convertInchesHGPressure:(float)arg1 toUnit:(int)arg2;	// IMP=0x0000000000061070
- (float)convertMBarPressure:(float)arg1 toUnit:(int)arg2;	// IMP=0x0000000000061048
- (int)pressureUnit;	// IMP=0x0000000000060f24
- (void *)createNumberFormatter;	// IMP=0x0000000000060e36
- (id)fallbackStringForPressure:(float)arg1;	// IMP=0x0000000000060d6a
- (id)formatStringForPressure:(float)arg1 inUnit:(int)arg2;	// IMP=0x0000000000060b63
- (id)stringFromInchesHG:(float)arg1;	// IMP=0x0000000000060aca
- (id)stringFromMillibars:(float)arg1;	// IMP=0x0000000000060a46
- (id)stringFromPressure:(float)arg1 isDataMetric:(_Bool)arg2;	// IMP=0x0000000000060a14
- (void)resetFormatter;	// IMP=0x0000000000060999
- (void)dealloc;	// IMP=0x000000000006095c
- (id)init;	// IMP=0x000000000006087d

@end
