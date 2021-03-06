//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIMathSymbolPunctuationController : NSObject
{
    unsigned long long _state;	// 8 = 0x8
    long long _location;	// 16 = 0x10
    unsigned short _replacementCharacter;	// 24 = 0x18
    _Bool _replaceAfterNumerals;	// 26 = 0x1a
    _Bool _enabled;	// 27 = 0x1b
    _Bool _converted;	// 28 = 0x1c
    NSString *_decimalSeparator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000094562
@property(readonly, nonatomic) _Bool converted; // @synthesize converted=_converted;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool replaceAfterNumerals; // @synthesize replaceAfterNumerals=_replaceAfterNumerals;
@property(copy, nonatomic) NSString *decimalSeparator; // @synthesize decimalSeparator=_decimalSeparator;
- (id)mathSymbolPunctuationedStringForInputString:(id)arg1;	// IMP=0x0000000000094018
- (_Bool)updateInputString:(id)arg1;	// IMP=0x0000000000093e40
- (void)setInputString:(id)arg1;	// IMP=0x0000000000093dee
- (void)reset;	// IMP=0x0000000000093ddc
- (id)init;	// IMP=0x0000000000093d44

@end

