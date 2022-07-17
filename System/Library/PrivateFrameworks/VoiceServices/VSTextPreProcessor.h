//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject
{
    NSArray *_rules;	// 8 = 0x8
    NSString *_languageID;	// 16 = 0x10
    struct __CFStringTokenizer *_tokenizer;	// 24 = 0x18
}

- (id)processedTextFromString:(id)arg1;	// IMP=0x000000000002c45a
- (void)dealloc;	// IMP=0x000000000002c402
- (id)initWithContentsOfPath:(id)arg1 languageIdentifier:(id)arg2;	// IMP=0x000000000002c1a3

@end
