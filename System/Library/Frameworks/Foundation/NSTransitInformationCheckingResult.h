//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface NSTransitInformationCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSDictionary *_components;	// 24 = 0x18
    id _underlyingResult;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018fdee
@property(readonly) void *underlyingResult;
- (id)components;	// IMP=0x0000000000190001
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x000000000018ff3e
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018fe17
- (struct _NSRange)range;	// IMP=0x000000000018fe01
- (unsigned long long)resultType;	// IMP=0x000000000018fdf6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018fc7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018fbe7
- (void)dealloc;	// IMP=0x000000000018fb6c
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2;	// IMP=0x000000000018fb57
- (id)initWithRange:(struct _NSRange)arg1 components:(id)arg2 underlyingResult:(void *)arg3;	// IMP=0x000000000018fa9d

@end
