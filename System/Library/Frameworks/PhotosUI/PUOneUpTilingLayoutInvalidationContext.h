//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PUOneUpTilingLayoutInvalidationContext
{
    _Bool _invalidatedContentInsets;	// 8 = 0x8
    _Bool _invalidatedCommentsTile;	// 9 = 0x9
    _Bool _invalidatedAccessoryTile;	// 10 = 0xa
    _Bool _invalidatedContentOffset;	// 11 = 0xb
    _Bool _invalidatedVideoPlaceholderTile;	// 12 = 0xc
    unsigned long long _options;	// 16 = 0x10
}

@property(nonatomic, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, setter=_setInvalidatedVideoPlaceholderTile:) _Bool invalidatedVideoPlaceholderTile; // @synthesize invalidatedVideoPlaceholderTile=_invalidatedVideoPlaceholderTile;
@property(nonatomic, setter=_setInvalidatedContentOffset:) _Bool invalidatedContentOffset; // @synthesize invalidatedContentOffset=_invalidatedContentOffset;
@property(nonatomic, setter=_setInvalidatedAccessoryTile:) _Bool invalidatedAccessoryTile; // @synthesize invalidatedAccessoryTile=_invalidatedAccessoryTile;
@property(readonly, nonatomic) _Bool invalidatedCommentsTile; // @synthesize invalidatedCommentsTile=_invalidatedCommentsTile;
@property(nonatomic, setter=_setInvalidatedContentInsets:) _Bool invalidatedContentInsets; // @synthesize invalidatedContentInsets=_invalidatedContentInsets;

@end

