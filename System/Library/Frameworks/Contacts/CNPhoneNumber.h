//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    NSString *_initialCountryCode;	// 8 = 0x8
    NSString *_stringValue;	// 16 = 0x10
    struct os_unfair_lock_s _stateLock;	// 24 = 0x18
    struct __CFPhoneNumber *_phoneNumberRef;	// 32 = 0x20
}

+ (CDUnknownBlockType)StringValue;	// IMP=0x000000000010d889
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;	// IMP=0x000000000010c3ca
+ (id)_countryCodesForNorthAmericanDialingPlan;	// IMP=0x000000000010c299
+ (_Bool)_isCountryCodeForNorthAmericanDialingPlan:(id)arg1;	// IMP=0x000000000010c226
+ (id)dialingCodeForISOCountryCode:(id)arg1;	// IMP=0x000000000010bf7a
+ (id)unsupportedCountryCodes;	// IMP=0x000000000010bf2a
+ (struct __CFPhoneNumber *)createCFPhoneNumberForStringValue:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000010ac0d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010ac05
+ (id)defaultCountryCode;	// IMP=0x000000000010abec
+ (id)phoneNumberWithCopiedStringValue:(id)arg1;	// IMP=0x000000000010ab62
+ (id)phoneNumberWithStringValue:(id)arg1;	// IMP=0x000000000010ab08
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000010aa9c
+ (id)new;	// IMP=0x000000000010a921
- (void).cxx_destruct;	// IMP=0x000000000010d8bf
@property(readonly, copy, nonatomic) NSString *initialCountryCode; // @synthesize initialCountryCode=_initialCountryCode;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)formattedStringValueRemovingDialingCode;	// IMP=0x000000000010c178
- (id)digitsRemovingDialingCode;	// IMP=0x000000000010c0ca
- (id)fullyQualifiedDigits;	// IMP=0x000000000010c033
- (_Bool)isFullyQualified;	// IMP=0x000000000010bfe8
@property(readonly, copy, nonatomic) NSString *countryCode;
- (id)_countryCodeFromPhoneNumberRef;	// IMP=0x000000000010be88
@property(readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property(readonly, copy, nonatomic) NSString *formattedStringValue;
@property(readonly, copy, nonatomic) NSString *digits;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)arg1;	// IMP=0x000000000010bdad
- (_Bool)isValid:(id *)arg1;	// IMP=0x000000000010bb32
- (struct __CFPhoneNumber *)nts_lazyPhoneNumberRef;	// IMP=0x000000000010ba9c
- (struct __CFPhoneNumber *)phoneNumberRef;	// IMP=0x000000000010ba63
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010b96c
- (id)lastFourDigits;	// IMP=0x000000000010b909
- (_Bool)isLikePhoneNumber:(id)arg1;	// IMP=0x000000000010b882
- (_Bool)isLikePhoneNumberForSamePerson:(id)arg1;	// IMP=0x000000000010b297
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010ae63
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010adb5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010acf0
- (void)dealloc;	// IMP=0x000000000010abad
- (id)initWithStringValue:(id)arg1;	// IMP=0x000000000010aa88
- (id)primitiveInitWithStringValue:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000010a9b2
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;	// IMP=0x000000000010a929
- (id)init;	// IMP=0x000000000010a913

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
