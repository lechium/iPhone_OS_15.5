//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface UPTokenizer : NSObject
{
    NSLocale *_locale;	// 8 = 0x8
}

+ (id)nonWhitespaceTokensForTokens:(id)arg1;	// IMP=0x0000000000053691
- (void).cxx_destruct;	// IMP=0x000000000005375d
@property(readonly, copy) NSLocale *locale; // @synthesize locale=_locale;
- (id)tokenizeUtterance:(id)arg1;	// IMP=0x0000000000053240
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000052ea5

@end

