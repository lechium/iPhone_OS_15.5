//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_street;	// 8 = 0x8
    NSString *_subLocality;	// 16 = 0x10
    NSString *_city;	// 24 = 0x18
    NSString *_subAdministrativeArea;	// 32 = 0x20
    NSString *_state;	// 40 = 0x28
    NSString *_postalCode;	// 48 = 0x30
    NSString *_country;	// 56 = 0x38
    NSString *_isoCountryCode;	// 64 = 0x40
}

+ (id)components:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;	// IMP=0x00000000000299a6
+ (id)components:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5;	// IMP=0x00000000000298cd
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000298c5
- (void).cxx_destruct;	// IMP=0x000000000002985b
@property(readonly, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
- (id)description;	// IMP=0x00000000000297a6
- (unsigned long long)hash;	// IMP=0x000000000002972f
- (_Bool)isEqualToPostalAddressComponents:(id)arg1;	// IMP=0x0000000000029607
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002959f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000294ba
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000292b0
- (id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8;	// IMP=0x0000000000029151
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029146

@end
