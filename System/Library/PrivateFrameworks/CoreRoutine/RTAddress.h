//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isIsland;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSArray *_subPremises;	// 24 = 0x18
    NSString *_subThoroughfare;	// 32 = 0x20
    NSString *_thoroughfare;	// 40 = 0x28
    NSString *_subLocality;	// 48 = 0x30
    NSString *_locality;	// 56 = 0x38
    NSString *_subAdministrativeArea;	// 64 = 0x40
    NSString *_administrativeArea;	// 72 = 0x48
    NSString *_administrativeAreaCode;	// 80 = 0x50
    NSString *_postalCode;	// 88 = 0x58
    NSString *_country;	// 96 = 0x60
    NSString *_countryCode;	// 104 = 0x68
    NSString *_inlandWater;	// 112 = 0x70
    NSString *_ocean;	// 120 = 0x78
    NSArray *_areasOfInterest;	// 128 = 0x80
    NSString *_iso3166CountryCode;	// 136 = 0x88
    NSString *_iso3166SubdivisionCode;	// 144 = 0x90
    NSDate *_creationDate;	// 152 = 0x98
    NSDate *_expirationDate;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016033
- (void).cxx_destruct;	// IMP=0x0000000000017d69
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *iso3166SubdivisionCode; // @synthesize iso3166SubdivisionCode=_iso3166SubdivisionCode;
@property(readonly, copy, nonatomic) NSString *iso3166CountryCode; // @synthesize iso3166CountryCode=_iso3166CountryCode;
@property(readonly, nonatomic) _Bool isIsland; // @synthesize isIsland=_isIsland;
@property(readonly, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property(readonly, copy, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property(readonly, copy, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, copy, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property(readonly, copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(readonly, copy, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, copy, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, copy, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(readonly, copy, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(readonly, nonatomic) NSArray *subPremises; // @synthesize subPremises=_subPremises;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *mergedThoroughfare;
- (unsigned long long)hash;	// IMP=0x0000000000017985
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001791d
- (_Bool)isEqualToAddress:(id)arg1;	// IMP=0x000000000001682f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001677a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016591
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001603b
- (id)description;	// IMP=0x0000000000015f95
- (id)initWithIdentifier:(id)arg1 subPremises:(id)arg2 subThoroughfare:(id)arg3 thoroughfare:(id)arg4 subLocality:(id)arg5 locality:(id)arg6 subAdministrativeArea:(id)arg7 administrativeArea:(id)arg8 administrativeAreaCode:(id)arg9 postalCode:(id)arg10 country:(id)arg11 countryCode:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15 isIsland:(_Bool)arg16 creationDate:(id)arg17 expirationDate:(id)arg18 iso3166CountryCode:(id)arg19 iso3166SubdivisionCode:(id)arg20;	// IMP=0x0000000000015aba
- (id)init;	// IMP=0x0000000000015a8b

@end
