//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSNumberFormatter, NSUserDefaults;
@protocol FMDistanceCalculatorLocalizationDelegate, OS_dispatch_queue;

@interface FMDistanceCalculator : NSObject
{
    NSObject<FMDistanceCalculatorLocalizationDelegate> *_localizationDelegate;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSLocale *_measurementSystemLocale;	// 24 = 0x18
    NSUserDefaults *_userDefaults;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_calculationQueue;	// 40 = 0x28
    NSNumberFormatter *_formatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000003212
@property(retain, nonatomic) NSNumberFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue; // @synthesize calculationQueue=_calculationQueue;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSLocale *measurementSystemLocale; // @synthesize measurementSystemLocale=_measurementSystemLocale;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) __weak NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate; // @synthesize localizationDelegate=_localizationDelegate;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;	// IMP=0x0000000000002f31
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000002f18
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x0000000000002a1c
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3;	// IMP=0x0000000000002976
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;	// IMP=0x00000000000026b0
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x00000000000023f6
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x000000000000218b
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x0000000000002062
@property(nonatomic) long long measurementSystem;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 measurementSystemLocale:(id)arg3;	// IMP=0x00000000000019df
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;	// IMP=0x00000000000019ca
- (id)initWithDefaultsSuiteName:(id)arg1;	// IMP=0x00000000000019b6
- (id)init;	// IMP=0x00000000000019a2

@end

