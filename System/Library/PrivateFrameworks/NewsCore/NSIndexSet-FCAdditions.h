//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@interface NSIndexSet (FCAdditions)
- (void)fc_enumerateGapsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002bcb00
- (id)fc_indexSetWithGapsInRange:(struct _NSRange)arg1;	// IMP=0x00000000002bca67
- (_Bool)fc_isContiguous;	// IMP=0x00000000002bc9fa
- (struct _NSRange)fc_enclosingRange;	// IMP=0x00000000002bc97c
- (unsigned long long)fc_countOfContiguousIndexesLessThanIndex:(unsigned long long)arg1;	// IMP=0x00000000002bc91e
- (unsigned long long)fc_countOfContiguousIndexesGreaterThanOrEqualToIndex:(unsigned long long)arg1;	// IMP=0x00000000002bc8c0
@end
