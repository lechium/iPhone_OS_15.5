//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSCFAttributedString
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000000001c02a
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001c476
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000001c42f
- (void)addAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001c3f7
- (void)setAttributedString:(id)arg1;	// IMP=0x000000000001c3b2
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000001c381
- (void)appendAttributedString:(id)arg1;	// IMP=0x000000000001c33c
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000001c308
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x000000000001c2d6
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000001c29b
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000001c112
- (Class)classForCoder;	// IMP=0x000000000001c0ec
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c0db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c0cc
- (_Bool)isEqualToAttributedString:(id)arg1;	// IMP=0x000000000001c0b1
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x000000000001c096
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x000000000001c07d
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000001c066
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x000000000001c056
- (unsigned long long)length;	// IMP=0x000000000001c04c
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x000000000001c03c
- (id)string;	// IMP=0x000000000001c032
- (_Bool)_isDeallocating;	// IMP=0x000000000001c01a
- (_Bool)_tryRetain;	// IMP=0x000000000001c009
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001bfee
- (unsigned long long)retainCount;	// IMP=0x000000000001bfe4
- (oneway void)release;	// IMP=0x000000000001bfda
- (id)retain;	// IMP=0x000000000001bfc2

@end
