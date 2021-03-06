//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface HAMenstrualAlgorithmsHistoricalCycle : NSObject
{
    _Bool _isDeterminant;	// 8 = 0x8
    unsigned int _julianDayOfMenstruationStart;	// 12 = 0xc
    unsigned int _julianDayOfMenstruationEnd;	// 16 = 0x10
    NSNumber *_fertilityStartJulianDay;	// 24 = 0x18
    NSNumber *_fertilityEndJulianDay;	// 32 = 0x20
    NSArray *_phases;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000263f6
@property(retain, nonatomic) NSArray *phases; // @synthesize phases=_phases;
@property(nonatomic) _Bool isDeterminant; // @synthesize isDeterminant=_isDeterminant;
@property(nonatomic) unsigned int julianDayOfMenstruationEnd; // @synthesize julianDayOfMenstruationEnd=_julianDayOfMenstruationEnd;
@property(nonatomic) unsigned int julianDayOfMenstruationStart; // @synthesize julianDayOfMenstruationStart=_julianDayOfMenstruationStart;
@property(retain, nonatomic) NSNumber *fertilityEndJulianDay; // @synthesize fertilityEndJulianDay=_fertilityEndJulianDay;
@property(retain, nonatomic) NSNumber *fertilityStartJulianDay; // @synthesize fertilityStartJulianDay=_fertilityStartJulianDay;

@end

