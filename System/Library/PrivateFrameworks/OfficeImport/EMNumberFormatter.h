//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EMNumberFormatter : NSObject
{
    struct __CFNumberFormatter *_genericFormatter;	// 8 = 0x8
    struct __CFNumberFormatter *_doubleFormatter;	// 16 = 0x10
    struct __CFNumberFormatter *_percentFormatter;	// 24 = 0x18
    struct __CFNumberFormatter *_bigNumberFormatter;	// 32 = 0x20
    struct __CFNumberFormatter *_currencyFormatter;	// 40 = 0x28
    struct __CFDateFormatter *_dateFormatter;	// 48 = 0x30
    NSString *_excelFormatString;	// 56 = 0x38
    NSString *_baseICUFormatString;	// 64 = 0x40
    _Bool _isNegativeRed;	// 72 = 0x48
    _Bool _hasLocales;	// 73 = 0x49
    int _formatType;	// 76 = 0x4c
}

+ (id)formatterForFormat:(id)arg1;	// IMP=0x0000000000136000
- (void).cxx_destruct;	// IMP=0x0000000000473550
- (id)formatValue:(double)arg1 inWorkbook:(id)arg2;	// IMP=0x0000000000473390
- (void)_parseExcelFormatString:(id)arg1;	// IMP=0x0000000000472f57
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;	// IMP=0x0000000000472ed2
- (void)convertGenericNumberFormat:(id)arg1;	// IMP=0x0000000000472b81
- (id)formatDate:(id)arg1;	// IMP=0x00000000001405bb
- (id)formatCurrency:(double)arg1;	// IMP=0x000000000013632a
- (id)formatDefault:(double)arg1;	// IMP=0x000000000013670f
- (id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2;	// IMP=0x0000000000472a84
- (_Bool)useBigNumberFormatterForValue:(double)arg1;	// IMP=0x00000000004729f9
- (unsigned long long)optimalNumberOfDigitsForValue:(double)arg1;	// IMP=0x00000000004729cf
- (id)formatPercent:(double)arg1;	// IMP=0x00000000001364da
- (id)formatDoubleValue:(double)arg1;	// IMP=0x00000000001475d1
- (id)_icuFormatStringForCurrencyFormat;	// IMP=0x000000000047289f
- (id)formatFraction:(double)arg1;	// IMP=0x0000000000233035
- (id)formatPhoneNumber:(double)arg1;	// IMP=0x000000000024b728
- (id)_icuFormatStringForDateFormat;	// IMP=0x0000000000471f7a
- (_Bool)isNegativeRed;	// IMP=0x0000000000136259
- (int)formatType;	// IMP=0x0000000000136250
- (struct __CFNumberFormatter *)_currencyFormatter;	// IMP=0x00000000001363cb
- (struct __CFDateFormatter *)_dateFormatter;	// IMP=0x000000000014066f
- (struct __CFNumberFormatter *)_percentFormatter;	// IMP=0x0000000000471e83
- (struct __CFNumberFormatter *)_doubleFormatter;	// IMP=0x0000000000471d8f
- (struct __CFNumberFormatter *)_bigNumberFormatter;	// IMP=0x00000000001e2a9c
- (struct __CFNumberFormatter *)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1;	// IMP=0x0000000000471a47
- (void)dealloc;	// IMP=0x0000000000137ced
- (id)initForGeneralFormatting;	// IMP=0x00000000004719ec
- (id)initWithExcelFormatString:(id)arg1;	// IMP=0x0000000000136190

@end

