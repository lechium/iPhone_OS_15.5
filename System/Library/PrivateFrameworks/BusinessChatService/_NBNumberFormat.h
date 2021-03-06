//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _NBNumberFormat : NSObject
{
    _Bool _nationalPrefixOptionalWhenFormatting;	// 8 = 0x8
    NSString *_pattern;	// 16 = 0x10
    NSString *_format;	// 24 = 0x18
    NSArray *_leadingDigitsPatterns;	// 32 = 0x20
    NSString *_nationalPrefixFormattingRule;	// 40 = 0x28
    NSString *_domesticCarrierCodeFormattingRule;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005ff8f
@property(retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // @synthesize domesticCarrierCodeFormattingRule=_domesticCarrierCodeFormattingRule;
@property(nonatomic) _Bool nationalPrefixOptionalWhenFormatting; // @synthesize nationalPrefixOptionalWhenFormatting=_nationalPrefixOptionalWhenFormatting;
@property(retain, nonatomic) NSString *nationalPrefixFormattingRule; // @synthesize nationalPrefixFormattingRule=_nationalPrefixFormattingRule;
@property(retain, nonatomic) NSArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns=_leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005fddb
- (id)description;	// IMP=0x000000000005fc9f
- (id)initWithEntry:(id)arg1;	// IMP=0x000000000005fb3c
- (id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(_Bool)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6;	// IMP=0x000000000005fa31

@end

