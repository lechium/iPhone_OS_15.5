//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIFontTextStyleCacheKey
{
    _Bool _textLegibility;	// 16 = 0x10
    NSString *_textStyle;	// 24 = 0x18
    NSString *_contentSizeCategory;	// 32 = 0x20
}

@property(nonatomic) _Bool textLegibility; // @synthesize textLegibility=_textLegibility;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (id)description;	// IMP=0x00000000000c2b83
- (_Bool)_isEqualToKey:(id)arg1;	// IMP=0x00000000000c2b08
- (unsigned long long)_hash;	// IMP=0x00000000000c2aad
- (void)dealloc;	// IMP=0x00000000000c2a55

@end
