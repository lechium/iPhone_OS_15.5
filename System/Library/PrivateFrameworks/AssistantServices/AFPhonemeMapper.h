//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSRegularExpression, NSString;

@interface AFPhonemeMapper : NSObject
{
    NSString *_languageCode;	// 8 = 0x8
    NSDictionary *_phonemeMap;	// 16 = 0x10
    NSRegularExpression *_regex;	// 24 = 0x18
}

+ (id)_buildRegexMatchingSubstrings:(id)arg1;	// IMP=0x000000000003a977
+ (id)_mapForLanguageCode:(id)arg1;	// IMP=0x000000000003a8a1
- (void).cxx_destruct;	// IMP=0x000000000003afaa
- (id)stringByReplacingPhonemesInString:(id)arg1;	// IMP=0x000000000003abec
- (id)initWithLanguageCode:(id)arg1;	// IMP=0x000000000003a78c

@end
