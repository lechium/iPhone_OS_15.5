//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLSeasonsUtilities : NSObject
{
}

+ (_Bool)isCountryCodePartOfSouthernHemisphere:(id)arg1;	// IMP=0x00000000002d633f
+ (_Bool)isCountryCodePartOfNorthernHemisphere:(id)arg1;	// IMP=0x00000000002d62a3
+ (id)_seasonCountryCodesDictionary;	// IMP=0x00000000002d6240
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;	// IMP=0x00000000002d6154
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;	// IMP=0x00000000002d6065
+ (id)_seasonKeyForMonthNumber:(unsigned long long)arg1 locale:(id)arg2;	// IMP=0x00000000002d5f6a
+ (id)_seasonNameForKey:(id)arg1;	// IMP=0x00000000002d5eea
+ (id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3;	// IMP=0x00000000002d5e3d

@end

