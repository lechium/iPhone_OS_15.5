//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDefaultCity : NSObject
{
    float _longitude;	// 8 = 0x8
    float _latitude;	// 12 = 0xc
    NSString *_localeCode;	// 16 = 0x10
    NSString *_timeZone;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_unlocalizedName;	// 40 = 0x28
    NSString *_countryName;	// 48 = 0x30
    NSString *_unlocalizedCountryName;	// 56 = 0x38
    NSString *_countryOverride;	// 64 = 0x40
    NSString *_unlocalizedCountryOverride;	// 72 = 0x48
}

+ (id)cityFromAlCity:(id)arg1;	// IMP=0x000000000000398a
- (void).cxx_destruct;	// IMP=0x0000000000003d8d
@property(copy, nonatomic) NSString *unlocalizedCountryOverride; // @synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride;
@property(copy, nonatomic) NSString *countryOverride; // @synthesize countryOverride=_countryOverride;
@property(copy, nonatomic) NSString *unlocalizedCountryName; // @synthesize unlocalizedCountryName=_unlocalizedCountryName;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *unlocalizedName; // @synthesize unlocalizedName=_unlocalizedName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSString *localeCode; // @synthesize localeCode=_localeCode;
- (id)description;	// IMP=0x0000000000003b84

@end

