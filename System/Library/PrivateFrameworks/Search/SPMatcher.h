//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SPMatcher : NSObject
{
    void *_matcher;	// 8 = 0x8
}

+ (id)transcriptionForString:(id)arg1 withLanguage:(id)arg2;	// IMP=0x000000000000cd73
- (_Bool)matchesUTF8String:(const char *)arg1;	// IMP=0x000000000000cd60
- (_Bool)matches:(id)arg1;	// IMP=0x000000000000cd4d
- (_Bool)matchesUTF8String:(const char *)arg1 outMatchBits:(unsigned long long *)arg2;	// IMP=0x000000000000cd39
- (_Bool)matches:(id)arg1 outMatchBits:(unsigned long long *)arg2;	// IMP=0x000000000000cd25
- (unsigned long long)wordCount;	// IMP=0x000000000000cd17
- (void)dealloc;	// IMP=0x000000000000ccdd
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(unsigned long long)arg3;	// IMP=0x000000000000cc4d

@end

