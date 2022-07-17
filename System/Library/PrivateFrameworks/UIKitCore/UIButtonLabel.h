//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel
{
    _Bool _reverseShadow;	// 120 = 0x78
    UIButton *_button;	// 128 = 0x80
    _Bool _externallySetNumberOfLines;	// 136 = 0x88
    _Bool _fontIsDefaultForIdiom;	// 137 = 0x89
}

- (void).cxx_destruct;	// IMP=0x000000000055fc1f
@property(readonly, nonatomic) _Bool _fontIsDefaultForIdiom; // @synthesize _fontIsDefaultForIdiom;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000055fb9d
- (_Bool)_textColorFollowsTintColor;	// IMP=0x000000000055f9e5
- (void)_contentDidChange:(long long)arg1 fromContent:(id)arg2;	// IMP=0x000000000055f8a2
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000055f77b
- (void)setReverseShadow:(_Bool)arg1;	// IMP=0x000000000055f710
- (struct CGSize)shadowOffset;	// IMP=0x000000000055f6c5
- (void)setShadowOffset:(struct CGSize)arg1;	// IMP=0x000000000055f67c
- (void)setFont:(id)arg1;	// IMP=0x000000000055f668
- (void)_setFont:(id)arg1 isDefaultForIdiom:(_Bool)arg2;	// IMP=0x000000000055f62f
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;	// IMP=0x000000000055f5a0
- (void)_setWantsAutolayout;	// IMP=0x000000000055f55d
- (void)_updateTextColorWithFallbackColorIfNeeded;	// IMP=0x000000000055f557
- (void)_internallySetNumberOfLines:(long long)arg1;	// IMP=0x000000000055f51b
- (void)setNumberOfLines:(long long)arg1;	// IMP=0x000000000055f4e1
- (double)_paddingForBaselineSpacingFromEdge:(int)arg1 toNeighborEdge:(int)arg2;	// IMP=0x000000000055fc30

@end
