//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (IC)
- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0000000000020f85
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0000000000020f04
- (void)ic_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020d39
- (void)ic_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020b4d
- (void)ic_enumerateAttributesInClampedRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020904
- (id)ic_attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x000000000002086a
- (struct _NSRange)ic_rangeByTrimmingCharactersInSet:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000206be
- (id)ic_componentRangesSeparatedByPredicate:(CDUnknownBlockType)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000020501
@property(readonly, nonatomic) struct _NSRange ic_range;
@end
