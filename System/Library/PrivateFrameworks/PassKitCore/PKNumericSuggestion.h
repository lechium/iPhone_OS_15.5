//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface PKNumericSuggestion : NSObject
{
    _Bool _usedMaximumSuggestion;	// 8 = 0x8
    NSDecimalNumber *_value;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_displayValue;	// 32 = 0x20
}

+ (id)suggestionWithValue:(id)arg1 currencyCode:(id)arg2;	// IMP=0x00000000001ce8cc
+ (id)suggestionWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;	// IMP=0x00000000001ce83e
- (void).cxx_destruct;	// IMP=0x00000000001ced8a
@property(nonatomic) _Bool usedMaximumSuggestion; // @synthesize usedMaximumSuggestion=_usedMaximumSuggestion;
@property(copy, nonatomic) NSString *displayValue; // @synthesize displayValue=_displayValue;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSDecimalNumber *value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000001cec89
- (unsigned long long)hash;	// IMP=0x00000000001cec12
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ceb93
- (id)initWithTitle:(id)arg1 value:(id)arg2 currencyCode:(id)arg3;	// IMP=0x00000000001cea24
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2;	// IMP=0x00000000001ce93a

@end

