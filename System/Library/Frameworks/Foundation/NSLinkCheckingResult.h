//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface NSLinkCheckingResult
{
    struct _NSRange _range;	// 8 = 0x8
    NSURL *_url;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018d327
- (id)URL;	// IMP=0x000000000018d524
- (_Bool)_adjustRangesWithOffset:(long long)arg1;	// IMP=0x000000000018d461
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;	// IMP=0x000000000018d350
- (struct _NSRange)range;	// IMP=0x000000000018d33a
- (unsigned long long)resultType;	// IMP=0x000000000018d32f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018d1f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018d160
- (id)description;	// IMP=0x000000000018d0c6
- (void)dealloc;	// IMP=0x000000000018d061
- (id)initWithRange:(struct _NSRange)arg1 URL:(id)arg2;	// IMP=0x000000000018cfc2

@end
