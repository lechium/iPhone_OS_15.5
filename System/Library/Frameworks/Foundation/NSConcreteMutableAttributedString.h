//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableRLEArray, NSMutableString;

@interface NSConcreteMutableAttributedString
{
    NSMutableString *mutableString;	// 8 = 0x8
    NSMutableRLEArray *mutableAttributes;	// 16 = 0x10
    struct {
        unsigned int attributeFixingDisabled:8;
        unsigned int mayNeedIntentResolution:8;
        unsigned int :16;
    } fields;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010fee
+ (Class)_mutableStringClass;	// IMP=0x000000000000ffd8
- (void)_markIntentsResolved;	// IMP=0x000000000001101d
- (void)_markRequiringIntentResolution;	// IMP=0x000000000001100b
- (_Bool)_mayRequireIntentResolution;	// IMP=0x0000000000010ff6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010fb2
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;	// IMP=0x0000000000010fac
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000010de7
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000010d1c
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000010ab9
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x0000000000010880
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000000106c0
- (id)_runArrayHoldingAttributes;	// IMP=0x00000000000106af
- (id)string;	// IMP=0x000000000001069e
- (unsigned long long)length;	// IMP=0x0000000000010681
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000001063f
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0000000000010622
- (void)dealloc;	// IMP=0x00000000000105a7
- (id)init;	// IMP=0x000000000001058e
- (id)initWithString:(id)arg1;	// IMP=0x0000000000010485
- (id)initWithString:(id)arg1 attributes:(id)arg2;	// IMP=0x00000000000102f2
- (id)initWithAttributedString:(id)arg1;	// IMP=0x000000000000ffe5

@end

