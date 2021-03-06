//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate;

@interface NTKSolarTimeModel : NSObject
{
    _Bool _usePlaceholderData;	// 8 = 0x8
    _Bool _dependentValuesNeedUpdate;	// 9 = 0x9
    CLLocation *_referenceLocation;	// 16 = 0x10
    NSDate *_referenceDate;	// 24 = 0x18
    NSDate *_startDateForReferenceDate;	// 32 = 0x20
    NSDate *_endDateForReferenceDate;	// 40 = 0x28
    NSDate *_localSolarMidnightDate;	// 48 = 0x30
    double _effectiveSolarDayLength;	// 56 = 0x38
    NSDate *_localSunriseDate;	// 64 = 0x40
    NSDate *_localSunsetDate;	// 72 = 0x48
    NSDate *_localDawnDate;	// 80 = 0x50
    NSDate *_localDuskDate;	// 88 = 0x58
    NSDate *_localSolarNoonDate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000223c8c
@property(retain, nonatomic) NSDate *localSolarNoonDate; // @synthesize localSolarNoonDate=_localSolarNoonDate;
@property(retain, nonatomic) NSDate *localDuskDate; // @synthesize localDuskDate=_localDuskDate;
@property(retain, nonatomic) NSDate *localDawnDate; // @synthesize localDawnDate=_localDawnDate;
@property(retain, nonatomic) NSDate *localSunsetDate; // @synthesize localSunsetDate=_localSunsetDate;
@property(retain, nonatomic) NSDate *localSunriseDate; // @synthesize localSunriseDate=_localSunriseDate;
@property(nonatomic) _Bool dependentValuesNeedUpdate; // @synthesize dependentValuesNeedUpdate=_dependentValuesNeedUpdate;
@property(nonatomic) double effectiveSolarDayLength; // @synthesize effectiveSolarDayLength=_effectiveSolarDayLength;
@property(retain, nonatomic) NSDate *localSolarMidnightDate; // @synthesize localSolarMidnightDate=_localSolarMidnightDate;
@property(retain, nonatomic) NSDate *endDateForReferenceDate; // @synthesize endDateForReferenceDate=_endDateForReferenceDate;
@property(retain, nonatomic) NSDate *startDateForReferenceDate; // @synthesize startDateForReferenceDate=_startDateForReferenceDate;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(nonatomic) _Bool usePlaceholderData; // @synthesize usePlaceholderData=_usePlaceholderData;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (id)ntkCacheableKey;	// IMP=0x0000000000223aa1
- (void)updateForTimeZoneChange;	// IMP=0x0000000000223764
- (void)updateModelWithDate:(id)arg1;	// IMP=0x0000000000223752
- (void)_updateDependentValues;	// IMP=0x000000000022321d
- (id)_nextEvent:(id)arg1 ofType:(unsigned int)arg2;	// IMP=0x00000000002231bf
- (id)dateForPercentageThroughPeriod:(double)arg1;	// IMP=0x00000000002230f3
- (double)percentageThroughPeriodForDate:(id)arg1;	// IMP=0x000000000022300a
- (double)percentageThroughPeriodInCurrentSolarDayForDate:(id)arg1;	// IMP=0x0000000000222f7f
- (id)normalizeDateIntervalForDate:(id)arg1;	// IMP=0x0000000000222e8f
- (double)percentageThroughPeriodForIdealizedTimeInCurrentSolarDay;	// IMP=0x0000000000222e42
- (_Bool)includesDate:(id)arg1;	// IMP=0x0000000000222d63
- (id)initWithReferenceDate:(id)arg1 referenceLocation:(id)arg2;	// IMP=0x0000000000222c7d
- (id)init;	// IMP=0x0000000000222c67

@end

