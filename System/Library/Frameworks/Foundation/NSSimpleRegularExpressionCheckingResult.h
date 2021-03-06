//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult
{
    NSRegularExpression *_regularExpression;	// 8 = 0x8
    struct _NSRange _ranges[3];	// 16 = 0x10
}

- (id)rangeArray;	// IMP=0x000000000018ea4b
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018e9a3
- (unsigned long long)numberOfRanges;	// IMP=0x000000000018e93b
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x000000000018e864
- (struct _NSRange)range;	// IMP=0x000000000018e84e
- (id)regularExpression;	// IMP=0x000000000018e83d
- (void)dealloc;	// IMP=0x000000000018e7d8
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;	// IMP=0x000000000018e6ec
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;	// IMP=0x000000000018e5a8

@end

