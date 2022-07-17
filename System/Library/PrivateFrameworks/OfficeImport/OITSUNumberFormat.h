//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>
#import <OfficeImport/NSMutableCopying-Protocol.h>
#import <OfficeImport/TSUNumberFormatting-Protocol.h>

@class NSArray, NSIndexSet, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface OITSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>
{
    int mValueType;	// 8 = 0x8
    NSString *mFormatString;	// 16 = 0x10
    unsigned short mDecimalPlaces;	// 24 = 0x18
    NSString *mCurrencyCode;	// 32 = 0x20
    _Bool mUseAccountingStyle;	// 40 = 0x28
    int mNegativeStyle;	// 44 = 0x2c
    _Bool mShowThousandsSeparator;	// 48 = 0x30
    int mFractionAccuracy;	// 52 = 0x34
    _Bool mFormatStringRequiresSuppressionOfMinusSign;	// 56 = 0x38
    _Bool mUseScientificFormattingAutomatically;	// 57 = 0x39
    _Bool mIgnoreDecimalPlacesForZeroValue;	// 58 = 0x3a
    NSString *mPrefixString;	// 64 = 0x40
    NSString *mSuffixString;	// 72 = 0x48
    unsigned char mBase;	// 80 = 0x50
    unsigned short mBasePlaces;	// 82 = 0x52
    _Bool mBaseUseMinusSign;	// 84 = 0x54
    _Bool mIsCustom;	// 85 = 0x55
    double mScaleFactor;	// 88 = 0x58
    _Bool mFormatStringContainsTabCharacter;	// 96 = 0x60
    _Bool mFormatContainsSpecialTokens;	// 97 = 0x61
    _Bool mFormatContainsIntegerToken;	// 98 = 0x62
    unsigned char mNumberOfHashDecimalPlaceholders;	// 99 = 0x63
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;	// 100 = 0x64
    _Bool mRequiresFractionReplacement;	// 101 = 0x65
    NSArray *mInterstitialStrings;	// 104 = 0x68
    NSIndexSet *mInterstitialStringInsertionIndexes;	// 112 = 0x70
    unsigned short mIndexFromRightOfLastDigitPlaceholder;	// 120 = 0x78
    _Bool mIsTextFormat;	// 122 = 0x7a
    unsigned char mMinimumIntegerWidth;	// 123 = 0x7b
    unsigned char mDecimalWidth;	// 124 = 0x7c
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;	// 125 = 0x7d
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;	// 126 = 0x7e
    NSString *mFormatName;	// 128 = 0x80
    NSUUID *mCustomFormatKey;	// 136 = 0x88
}

+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 formatName:(id)arg16;	// IMP=0x000000000025fd6d
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;	// IMP=0x000000000025fcec
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026278a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000262653
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026222b
@property(readonly) unsigned long long hash;
- (id)customNumberFormatTokens;	// IMP=0x0000000000262034
- (_Bool)isEquivalent:(id)arg1;	// IMP=0x0000000000261f0c
- (id)stringFromString:(id)arg1;	// IMP=0x0000000000261de1
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4 forceSuppressMinusSign:(_Bool)arg5;	// IMP=0x0000000000260c40
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 decimalPlaces:(unsigned short)arg3 minimumDecimalPlaces:(unsigned short)arg4;	// IMP=0x0000000000260c28
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3;	// IMP=0x0000000000260bce
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(_Bool)arg4;	// IMP=0x0000000000260b70
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;	// IMP=0x0000000000260b20
- (id)stringFromDouble:(double)arg1 locale:(id)arg2 forceSuppressMinusSign:(_Bool)arg3;	// IMP=0x0000000000260ac6
- (_Bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;	// IMP=0x0000000000260aa7
- (_Bool)usesTabs;	// IMP=0x0000000000260a88
- (void)setIgnoreDecimalPlacesForZeroValue:(_Bool)arg1;	// IMP=0x0000000000260a7f
- (_Bool)ignoreDecimalPlacesForZeroValue;	// IMP=0x0000000000260a76
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;	// IMP=0x0000000000260a6d
- (_Bool)useScientificFormattingAutomatically;	// IMP=0x0000000000260a64
- (_Bool)customFormatShouldAutoInsertPercentSymbol;	// IMP=0x00000000002609a3
- (_Bool)hasValidDecimalPlaces;	// IMP=0x0000000000260995
- (_Bool)baseUseMinusSign;	// IMP=0x000000000026098c
- (unsigned short)basePlaces;	// IMP=0x0000000000260982
- (unsigned short)base;	// IMP=0x0000000000260978
- (_Bool)usesTextFormatForValue:(double)arg1;	// IMP=0x000000000026096f
- (_Bool)canFormatText;	// IMP=0x0000000000260966
- (_Bool)isTextFormat;	// IMP=0x000000000026095d
- (double)scaleFactor;	// IMP=0x0000000000260952
- (_Bool)usesAccountingStyle;	// IMP=0x0000000000260949
- (int)fractionAccuracy;	// IMP=0x0000000000260940
- (_Bool)showThousandsSeparator;	// IMP=0x0000000000260937
- (int)negativeStyle;	// IMP=0x000000000026092e
- (id)currencyCode;	// IMP=0x0000000000260924
- (id)formatString;	// IMP=0x000000000026091a
- (id)suffixString;	// IMP=0x0000000000260910
- (id)prefixString;	// IMP=0x0000000000260906
- (unsigned short)decimalPlaces;	// IMP=0x00000000002608f0
- (int)valueType;	// IMP=0x00000000002608e7
- (id)customFormatKey;	// IMP=0x00000000002608da
- (_Bool)isCustom;	// IMP=0x00000000002608d1
- (id)formatName;	// IMP=0x00000000002608c4
- (void)setFormatName:(id)arg1;	// IMP=0x0000000000260895
- (void)dealloc;	// IMP=0x00000000002607ee
- (id)numberFormatBySettingUseAccountingStyle:(_Bool)arg1;	// IMP=0x00000000002606d9
- (id)numberFormatBySettingNegativeStyle:(int)arg1;	// IMP=0x00000000002605c1
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(_Bool)arg14 isCustom:(_Bool)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(_Bool)arg23 formatName:(id)arg24 customFormatKey:(id)arg25;	// IMP=0x00000000002601a2
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9;	// IMP=0x000000000026015e
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 isCustom:(_Bool)arg11;	// IMP=0x00000000002600ab
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(_Bool)arg11;	// IMP=0x000000000025fff0
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8;	// IMP=0x000000000025ffad
- (id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(_Bool)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(_Bool)arg13 formatName:(id)arg14;	// IMP=0x000000000025fed7
- (id)init;	// IMP=0x000000000025fe87
- (id)baseStringFromDouble:(double)arg1;	// IMP=0x00000000002635f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
