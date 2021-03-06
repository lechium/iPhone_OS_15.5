//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface TSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;	// 8 = 0x8
    struct __CFArray *mFormatters;	// 16 = 0x10
    NSMutableSet *mFormatStrings;	// 24 = 0x18
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;	// IMP=0x000000000000b688
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2;	// IMP=0x000000000000b53d
- (unsigned short)separator;	// IMP=0x000000000000b533
- (void)dealloc;	// IMP=0x000000000000b4ef
- (id)initWithSeparator:(unsigned short)arg1;	// IMP=0x000000000000b483

@end

