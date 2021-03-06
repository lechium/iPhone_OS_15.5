//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOrthography;

@interface NSOrthographyCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSOrthography *_orthography;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018ad12
- (id)orthography;	// IMP=0x000000000018af0f
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x000000000018ae4c
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018ad3b
- (struct _NSRange)range;	// IMP=0x000000000018ad25
- (unsigned long long)resultType;	// IMP=0x000000000018ad1a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018abe1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018ab4b
- (id)description;	// IMP=0x000000000018aab1
- (void)dealloc;	// IMP=0x000000000018aa4c
- (id)initWithRange:(struct _NSRange)arg1 orthography:(id)arg2;	// IMP=0x000000000018a9ad

@end

