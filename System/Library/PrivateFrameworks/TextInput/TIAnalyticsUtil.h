//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TIAnalyticsUtil : NSObject
{
}

+ (_Bool)hasNonWhitespaceNonPunctuationText:(id)arg1;	// IMP=0x0000000000068b7b
+ (_Bool)isStylizedString:(id)arg1 equalToString:(id)arg2;	// IMP=0x0000000000068afe
+ (id)createStringByReplacingStylizedQuotesToStraightQuotes:(id)arg1;	// IMP=0x0000000000068adb
+ (id)indexesForValidRatiosInArray:(id)arg1;	// IMP=0x0000000000068a38
+ (int)computeCommonExtentForArrays:(id)arg1;	// IMP=0x00000000000688be
+ (id)bucketPercentageWithValue:(double)arg1;	// IMP=0x00000000000688a0
+ (id)bucketPercentageWithNumerator:(id)arg1 andDenominator:(id)arg2;	// IMP=0x0000000000068881
+ (id)bucketPercentageWithNumber:(id)arg1;	// IMP=0x0000000000068863
+ (id)bucketRatioWithValue:(double)arg1 bucketCount:(int)arg2;	// IMP=0x00000000000687ff
+ (id)bucketRatioWithNumerator:(id)arg1 andDenominator:(id)arg2 bucketCount:(int)arg3;	// IMP=0x0000000000068733
+ (id)bucketRatioWithNumber:(id)arg1 bucketCount:(int)arg2;	// IMP=0x00000000000686ef
+ (id)bucketNumber:(id)arg1 bucketThresholds:(id)arg2 bucketValues:(id)arg3;	// IMP=0x000000000006851f
+ (id)constrainInteger:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3;	// IMP=0x0000000000068467
+ (id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2;	// IMP=0x0000000000068309
+ (id)roundCount:(id)arg1 toSignificantDigits:(long long)arg2;	// IMP=0x0000000000068273
+ (id)toFloat:(id)arg1;	// IMP=0x000000000006823e
+ (id)toInteger:(id)arg1;	// IMP=0x0000000000068207
+ (_Bool)isDictionary:(id)arg1;	// IMP=0x00000000000681bc
+ (_Bool)isArray:(id)arg1;	// IMP=0x0000000000068171
+ (_Bool)isBoolean:(id)arg1;	// IMP=0x0000000000068116
+ (_Bool)isNumber:(id)arg1;	// IMP=0x00000000000680bd
+ (_Bool)isFloat:(id)arg1;	// IMP=0x0000000000068034
+ (_Bool)isInteger:(id)arg1;	// IMP=0x0000000000067fab
+ (_Bool)isString:(id)arg1;	// IMP=0x0000000000067f60

@end

