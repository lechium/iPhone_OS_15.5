//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
{
}

+ (id)internetServicesRegion;	// IMP=0x0000000000137fe0
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;	// IMP=0x0000000000137fba
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;	// IMP=0x0000000000137fb2
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;	// IMP=0x0000000000137faa
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;	// IMP=0x0000000000137f8c
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;	// IMP=0x0000000000137f6d
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;	// IMP=0x0000000000137f4e
+ (id)localeIdentifierFromComponents:(id)arg1;	// IMP=0x0000000000137f2f
+ (id)componentsFromLocaleIdentifier:(id)arg1;	// IMP=0x0000000000137f10
+ (id)preferredLanguages;	// IMP=0x0000000000137efe
+ (id)commonISOCurrencyCodes;	// IMP=0x0000000000137eec
+ (id)ISOCurrencyCodes;	// IMP=0x0000000000137eda
+ (id)ISOCountryCodes;	// IMP=0x0000000000137ec8
+ (id)ISOLanguageCodes;	// IMP=0x0000000000137eb6
+ (id)availableLocaleIdentifiers;	// IMP=0x0000000000137ea4
+ (id)localeWithLocaleIdentifier:(id)arg1;	// IMP=0x0000000000137e75
+ (id)currentLocale;	// IMP=0x0000000000137e63
+ (id)systemLocale;	// IMP=0x0000000000137e5e
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000137b54
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137a22
- (id)_prefs;	// IMP=0x0000000000137fdd
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;	// IMP=0x0000000000137fc2
- (id)initWithLocaleIdentifier:(id)arg1;	// IMP=0x000000000019e092
- (id)identifier;	// IMP=0x0000000000137e51
- (_Bool)usesMetricSystem;	// IMP=0x0000000000137e1f
- (id)exemplarCharacterSet;	// IMP=0x0000000000137e0b
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;	// IMP=0x0000000000137df4
- (id)alternateQuotationEndDelimiter;	// IMP=0x0000000000137de0
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;	// IMP=0x0000000000137dc9
- (id)alternateQuotationBeginDelimiter;	// IMP=0x0000000000137db5
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;	// IMP=0x0000000000137d9e
- (id)quotationEndDelimiter;	// IMP=0x0000000000137d8a
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;	// IMP=0x0000000000137d73
- (id)quotationBeginDelimiter;	// IMP=0x0000000000137d5f
- (id)localizedStringForCollatorIdentifier:(id)arg1;	// IMP=0x0000000000137d48
- (id)collatorIdentifier;	// IMP=0x0000000000137d34
- (id)localizedStringForCurrencyCode:(id)arg1;	// IMP=0x0000000000137d1d
- (id)currencyCode;	// IMP=0x0000000000137d09
- (id)localizedStringForCurrencySymbol:(id)arg1;	// IMP=0x0000000000137cf2
- (id)currencySymbol;	// IMP=0x0000000000137cde
- (id)localizedStringForGroupingSeparator:(id)arg1;	// IMP=0x0000000000137cc7
- (id)groupingSeparator;	// IMP=0x0000000000137cb3
- (id)localizedStringForDecimalSeparator:(id)arg1;	// IMP=0x0000000000137c9c
- (id)decimalSeparator;	// IMP=0x0000000000137c88
- (id)localizedStringForCollationIdentifier:(id)arg1;	// IMP=0x0000000000137c71
- (id)collationIdentifier;	// IMP=0x0000000000137c5d
- (id)localizedStringForCalendarIdentifier:(id)arg1;	// IMP=0x0000000000137c46
- (id)calendarIdentifier;	// IMP=0x0000000000137c32
- (id)localizedStringForVariantCode:(id)arg1;	// IMP=0x0000000000137c1b
- (id)variantCode;	// IMP=0x0000000000137c07
- (id)localizedStringForScriptCode:(id)arg1;	// IMP=0x0000000000137bf0
- (id)scriptCode;	// IMP=0x0000000000137bdc
- (id)localizedStringForCountryCode:(id)arg1;	// IMP=0x0000000000137bc5
- (id)countryCode;	// IMP=0x0000000000137bb1
- (id)localizedStringForLanguageCode:(id)arg1;	// IMP=0x0000000000137b9a
- (id)languageCode;	// IMP=0x0000000000137b86
- (id)localizedStringForLocaleIdentifier:(id)arg1;	// IMP=0x0000000000137b6f
- (id)localeIdentifier;	// IMP=0x0000000000137b5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000137b5a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000137b57
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137b4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000137acc
- (unsigned long long)hash;	// IMP=0x0000000000137aa1
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000137a9c
- (void)_setDoesNotRequireSpecialCaseHandling;	// IMP=0x0000000000137a9b
- (unsigned char)_doesNotRequireSpecialCaseHandling;	// IMP=0x0000000000137a98
- (id)init;	// IMP=0x0000000000137a89
- (id)displayNameForKey:(id)arg1 value:(id)arg2;	// IMP=0x000000000019e064
- (id)objectForKey:(id)arg1;	// IMP=0x000000000019e036

@end

