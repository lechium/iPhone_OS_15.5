//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimeZone;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>
{
    CLLocation *_geoLocation;	// 8 = 0x8
    NSString *_weatherDisplayName;	// 16 = 0x10
    NSString *_weatherLocationName;	// 24 = 0x18
    NSString *_city;	// 32 = 0x20
    NSString *_county;	// 40 = 0x28
    NSString *_state;	// 48 = 0x30
    NSString *_stateAbbreviation;	// 56 = 0x38
    NSString *_country;	// 64 = 0x40
    NSString *_countryAbbreviation;	// 72 = 0x48
    NSTimeZone *_timeZone;	// 80 = 0x50
    NSDate *_creationDate;	// 88 = 0x58
    long long _archiveVersion;	// 96 = 0x60
    NSString *_locationID;	// 104 = 0x68
    NSString *_displayName;	// 112 = 0x70
}

+ (id)locationsByConsolidatingDuplicatesInBucket:(id)arg1;	// IMP=0x000000000004b6ea
+ (id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;	// IMP=0x000000000004b1e8
+ (id)locationsByFilteringDuplicates:(id)arg1;	// IMP=0x000000000004af24
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004ab5a
+ (id)knownKeys;	// IMP=0x000000000004a1bc
+ (long long)currentArchiveVersion;	// IMP=0x0000000000049ab8
- (void).cxx_destruct;	// IMP=0x000000000004c662
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *locationID; // @synthesize locationID=_locationID;
@property long long archiveVersion; // @synthesize archiveVersion=_archiveVersion;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *countryAbbreviation; // @synthesize countryAbbreviation=_countryAbbreviation;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *stateAbbreviation; // @synthesize stateAbbreviation=_stateAbbreviation;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *weatherLocationName; // @synthesize weatherLocationName=_weatherLocationName;
@property(copy, nonatomic) NSString *weatherDisplayName; // @synthesize weatherDisplayName=_weatherDisplayName;
@property(copy, nonatomic) CLLocation *geoLocation; // @synthesize geoLocation=_geoLocation;
- (id)initWithCloudDictionaryRepresentation:(id)arg1;	// IMP=0x000000000004c295
- (id)cloudDictionaryRepresentation;	// IMP=0x000000000004c138
- (id)initWithLocalDataRepresentation:(id)arg1;	// IMP=0x000000000004c04b
- (id)localDataRepresentation;	// IMP=0x000000000004c027
@property(readonly, nonatomic) _Bool shouldQueryForAirQualityData;
- (id)sunsetForDate:(id)arg1;	// IMP=0x000000000004bcad
- (id)sunriseForDate:(id)arg1;	// IMP=0x000000000004bc5d
- (void)sunrise:(id *)arg1 andSunset:(id *)arg2 forDate:(id)arg3;	// IMP=0x000000000004bbb8
- (id)_sunAlmanacForDate:(id)arg1;	// IMP=0x000000000004bae9
- (_Bool)isDayForDate:(id)arg1;	// IMP=0x000000000004ba0e
- (_Bool)isDay;	// IMP=0x000000000004b9b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ab62
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a81d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004a50d
- (id)description;	// IMP=0x000000000004a4f6
- (id)summary;	// IMP=0x000000000004a4e2
@property(readonly, nonatomic) _Bool needsGeocoding;
- (id)summaryThatIsCompact:(_Bool)arg1;	// IMP=0x000000000004a1c9
- (unsigned long long)hash;	// IMP=0x000000000004a178
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049fbf
- (id)initWithPlacemark:(id)arg1;	// IMP=0x0000000000049ce9
- (id)initWithMapItem:(id)arg1 isCurrentLocation:(_Bool)arg2;	// IMP=0x0000000000049b57
- (id)initWithMapItem:(id)arg1;	// IMP=0x0000000000049b43
- (id)initWithSearchResponse:(id)arg1;	// IMP=0x0000000000049ac3
@property(readonly, nonatomic) NSString *wf_weatherChannelGeocodeValue;

@end

