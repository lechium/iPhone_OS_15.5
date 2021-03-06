//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorView
{
    struct CGSize _cachedSize;	// 8 = 0x8
    long long _page;	// 24 = 0x18
}

@property(nonatomic) long long page; // @synthesize page=_page;
- (id)debugDescription;	// IMP=0x00000000006ac900
- (_Bool)isInvalidated;	// IMP=0x00000000006ac8eb
- (void)invalidate;	// IMP=0x00000000006ac8d6
- (struct CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000006ac56f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000006ac4e4
- (void)setImage:(id)arg1;	// IMP=0x00000000006ac338
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000006ac259
- (void)updateSymbolConfigurationForTraitCollection;	// IMP=0x00000000006ac179
- (void)prepare;	// IMP=0x00000000006ac11b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006ac0cf
- (id)initWithImage:(id)arg1;	// IMP=0x00000000006ac083
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006ac026

@end

