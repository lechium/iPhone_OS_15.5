//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI30TVRootShowcaseCarouselItemCell
{
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *itemInfo;	// 1680752942 = 0x642e412e
    MISSING_TYPE *onElementAppearance;	// 0 = 0x0
    MISSING_TYPE *onElementDisappearance;	// 12 = 0xc
    MISSING_TYPE *onVisibleBoundsChange;	// 24 = 0x18
    MISSING_TYPE *onImpressionableBoundsChange;	// 85948417 = 0x51f7801
    MISSING_TYPE *layout;	// 1920169263 = 0x7273752f
    MISSING_TYPE *carouselItemDelegate;	// 1651076143 = 0x62696c2f
    MISSING_TYPE *artworkView;	// 1110338917 = 0x422e6d65
    MISSING_TYPE *avPlayer;	// 25193 = 0x6269
    MISSING_TYPE *avPlayerLayer;	// 12 = 0xc
    MISSING_TYPE *blurView;	// 24 = 0x18
    MISSING_TYPE *buttonStackView;	// 65536 = 0x10000
    MISSING_TYPE *textStackView;	// 1937330991 = 0x7379532f
    MISSING_TYPE *captionLabel;	// 1919052108 = 0x7262694c
    MISSING_TYPE *titleLabel;	// 1835102790 = 0x6d617246
    MISSING_TYPE *subtitleLabel;	// 1093628779 = 0x412f736b
    MISSING_TYPE *focusContainerGuide;	// 779053412 = 0x2e6f6964
    MISSING_TYPE *buttonWidthConstraint;	// 1919907685 = 0x726f7765
    MISSING_TYPE *buttons;	// 1685406022 = 0x64754146
    MISSING_TYPE *buttonActions;	// 12 = 0xc
}

- (void).cxx_destruct;	// IMP=0x000000000030e200
@property(nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property(nonatomic, readonly) UILabel *accessibilityCaptionLabel;
- (void)restartVideo;	// IMP=0x000000000030db90
- (void)handleTappedButton:(id)arg1;	// IMP=0x000000000030db40
- (void)layoutSubviews;	// IMP=0x000000000030c800
- (void)didMoveToWindow;	// IMP=0x000000000030c7d0
- (void)prepareForReuse;	// IMP=0x000000000030c390
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030c370
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000030c340
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

