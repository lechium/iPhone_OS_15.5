//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface TTRNLTextSlotParser : NSObject
{
    NSLocale *_locale;	// 8 = 0x8
    void *_parser;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002223
@property(nonatomic) void *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)parseString:(id)arg1 referenceTimeZone:(id)arg2;	// IMP=0x0000000000002148
- (void)dealloc;	// IMP=0x000000000000210e
- (id)initWithLocale:(id)arg1 now:(id)arg2;	// IMP=0x0000000000001f9b

@end

