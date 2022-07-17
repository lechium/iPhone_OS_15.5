//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSUDateParser : NSObject
{
    NSMutableArray *mFormatCategories;	// 8 = 0x8
    struct __CFLocale *mLocale;	// 16 = 0x10
    _Bool mIsJapaneseLocale;	// 24 = 0x18
    struct __CFDateFormatter *mSpecialCaseFormatter;	// 32 = 0x20
}

+ (id)parserForDefaultLocale;	// IMP=0x0000000000009fa1
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;	// IMP=0x000000000000abe7
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(_Bool)arg4;	// IMP=0x000000000000a882
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;	// IMP=0x000000000000a644
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;	// IMP=0x000000000000a5b3
- (void)dealloc;	// IMP=0x000000000000a56a
- (id)initWithLocale:(struct __CFLocale *)arg1;	// IMP=0x000000000000a203
- (void)datePreferencesChanged:(id)arg1;	// IMP=0x000000000000b005
- (void)parseFormat:(id)arg1 initialPattern:(id *)arg2 separator:(unsigned short *)arg3;	// IMP=0x000000000000acdc
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2 formatCategoryMap:(id)arg3;	// IMP=0x000000000000ac01

@end
