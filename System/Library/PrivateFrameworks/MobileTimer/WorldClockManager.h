//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, WorldClockPreferences;

@interface WorldClockManager : NSObject
{
    _Bool _dirty;	// 8 = 0x8
    NSMutableArray *_cities;	// 16 = 0x10
    WorldClockPreferences *_defaults;	// 24 = 0x18
    NSDate *lastModified;	// 32 = 0x20
}

+ (id)sharedManagerWithPreferences:(id)arg1;	// IMP=0x000000000003e4ec
+ (id)sharedManager;	// IMP=0x000000000003e49f
- (void).cxx_destruct;	// IMP=0x000000000003ff8b
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, nonatomic) NSArray *cities; // @synthesize cities=_cities;
- (id)citiesMatchingName:(id)arg1;	// IMP=0x000000000003fc7a
- (id)citiesMatchingIdentifiers:(id)arg1;	// IMP=0x000000000003fa4a
- (void)_notifyNano;	// IMP=0x000000000003f6c5
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x000000000003f64e
- (void)removeAllCities;	// IMP=0x000000000003f629
- (void)removeCityAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003f604
- (void)removeCity:(id)arg1;	// IMP=0x000000000003f5df
- (unsigned long long)addCity:(id)arg1;	// IMP=0x000000000003f546
- (_Bool)canAddCity;	// IMP=0x000000000003f4fd
- (id)cityWithIdUrl:(id)arg1;	// IMP=0x000000000003f338
- (_Bool)checkIfCitiesModified;	// IMP=0x000000000003f270
- (id)fixUpCityProperties:(id)arg1;	// IMP=0x000000000003f153
- (void)pushCityPropertiesToPreferences;	// IMP=0x000000000003ef3f
- (void)addDefaultCitiesIfNeeded;	// IMP=0x000000000003ec78
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;	// IMP=0x000000000003ebb8
- (id)worldClockCityFromPersistenceArray:(id)arg1;	// IMP=0x000000000003eb07
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;	// IMP=0x000000000003ea7a
- (id)allCities;	// IMP=0x000000000003e912
- (void)saveCities;	// IMP=0x000000000003e80e
- (void)loadCities;	// IMP=0x000000000003e5e5
- (id)initWithPreferences:(id)arg1;	// IMP=0x000000000003e567

@end

