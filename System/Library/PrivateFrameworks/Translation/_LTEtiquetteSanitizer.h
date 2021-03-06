//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale;

__attribute__((visibility("hidden")))
@interface _LTEtiquetteSanitizer : NSObject
{
    NSDictionary *_replacementTree;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x0000000000009339
- (void).cxx_destruct;	// IMP=0x000000000000abe5
- (id)sanitizedStringForString:(id)arg1;	// IMP=0x000000000000aa7e
- (id)stringByReplacingMatches:(id)arg1 inString:(id)arg2;	// IMP=0x000000000000a78c
- (id)replacementStringForString:(id)arg1 forToken:(id)arg2;	// IMP=0x000000000000a632
- (id)matchesForString:(id)arg1;	// IMP=0x0000000000009ca6
- (id)treeForReplacementTokens:(id)arg1;	// IMP=0x000000000000994e
- (id)initWithModelURL:(id)arg1 language:(id)arg2;	// IMP=0x000000000000983d
- (id)initWithReplacementTokenDictionary:(id)arg1 language:(id)arg2;	// IMP=0x0000000000009721

@end

