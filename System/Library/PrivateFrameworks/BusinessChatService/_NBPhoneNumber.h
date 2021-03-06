//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/NSCoding-Protocol.h>
#import <BusinessChatService/NSCopying-Protocol.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NBPhoneNumber : NSObject <NSCopying, NSCoding>
{
    _Bool _italianLeadingZero;	// 8 = 0x8
    NSNumber *_countryCode;	// 16 = 0x10
    NSNumber *_nationalNumber;	// 24 = 0x18
    NSString *_extension;	// 32 = 0x20
    NSNumber *_numberOfLeadingZeros;	// 40 = 0x28
    NSString *_rawInput;	// 48 = 0x30
    NSNumber *_countryCodeSource;	// 56 = 0x38
    NSString *_preferredDomesticCarrierCode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003f46e
@property(retain, nonatomic) NSString *preferredDomesticCarrierCode; // @synthesize preferredDomesticCarrierCode=_preferredDomesticCarrierCode;
@property(retain, nonatomic) NSNumber *countryCodeSource; // @synthesize countryCodeSource=_countryCodeSource;
@property(retain, nonatomic) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(retain, nonatomic) NSNumber *numberOfLeadingZeros; // @synthesize numberOfLeadingZeros=_numberOfLeadingZeros;
@property(nonatomic) _Bool italianLeadingZero; // @synthesize italianLeadingZero=_italianLeadingZero;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *nationalNumber; // @synthesize nationalNumber=_nationalNumber;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;	// IMP=0x000000000003f21d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f01e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003edee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003eb7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e8bc
- (unsigned long long)hash;	// IMP=0x000000000003e77d
- (long long)getCountryCodeSourceOrDefault;	// IMP=0x000000000003e6ff
- (void)clearCountryCodeSource;	// IMP=0x000000000003e6eb
- (id)init;	// IMP=0x000000000003e665

@end

