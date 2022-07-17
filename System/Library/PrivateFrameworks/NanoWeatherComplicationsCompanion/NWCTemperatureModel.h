//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface NWCTemperatureModel : NSObject
{
    double _fraction;	// 8 = 0x8
    NSString *_localizedTemperatureCurrent;	// 16 = 0x10
    NSString *_localizedTemperatureHigh;	// 24 = 0x18
    UIColor *_tintColorHigh;	// 32 = 0x20
    NSString *_localizedTemperatureLow;	// 40 = 0x28
    UIColor *_tintColorLow;	// 48 = 0x30
    NSArray *_spectrum;	// 56 = 0x38
    NSArray *_spectrumTicks;	// 64 = 0x40
}

+ (id)temperatureModelForCurrentObservation:(id)arg1 dailyForecastedConditions:(id)arg2 temperatureFormatter:(id)arg3 shouldUseNoUnitCurrentTemperature:(_Bool)arg4;	// IMP=0x000000000000c4e8
- (void).cxx_destruct;	// IMP=0x000000000000caf9
@property(readonly, nonatomic) NSArray *spectrumTicks; // @synthesize spectrumTicks=_spectrumTicks;
@property(readonly, nonatomic) NSArray *spectrum; // @synthesize spectrum=_spectrum;
@property(readonly, nonatomic) UIColor *tintColorLow; // @synthesize tintColorLow=_tintColorLow;
@property(readonly, nonatomic) NSString *localizedTemperatureLow; // @synthesize localizedTemperatureLow=_localizedTemperatureLow;
@property(readonly, nonatomic) UIColor *tintColorHigh; // @synthesize tintColorHigh=_tintColorHigh;
@property(readonly, nonatomic) NSString *localizedTemperatureHigh; // @synthesize localizedTemperatureHigh=_localizedTemperatureHigh;
@property(readonly, nonatomic) NSString *localizedTemperatureCurrent; // @synthesize localizedTemperatureCurrent=_localizedTemperatureCurrent;
@property(readonly, nonatomic) double fraction; // @synthesize fraction=_fraction;

@end
