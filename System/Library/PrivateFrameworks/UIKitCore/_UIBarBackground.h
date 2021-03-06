//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImageView, UIView, UIVisualEffectView, _UIBarBackgroundLayout, _UIBarBackgroundShadowView;

__attribute__((visibility("hidden")))
@interface _UIBarBackground
{
    UIVisualEffectView *_effectView1;	// 120 = 0x78
    UIImageView *_colorAndImageView1;	// 128 = 0x80
    _UIBarBackgroundShadowView *_shadowView1;	// 136 = 0x88
    UIVisualEffectView *_effectView2;	// 144 = 0x90
    UIImageView *_colorAndImageView2;	// 152 = 0x98
    _UIBarBackgroundShadowView *_shadowView2;	// 160 = 0xa0
    UIView *_topInsetView;	// 168 = 0xa8
    double _bg1LastLayoutHeight;	// 176 = 0xb0
    double _bg2LastLayoutHeight;	// 184 = 0xb8
    struct {
        unsigned int needsTopInsetView:1;
        unsigned int needsEffectView1:1;
        unsigned int needsColorAndImageView1:1;
        unsigned int needsShadowView1:1;
        unsigned int needsEffectView2:1;
        unsigned int needsColorAndImageView2:1;
        unsigned int needsShadowView2:1;
    } _backgroundFlags;	// 192 = 0xc0
    _Bool _topAligned;	// 200 = 0xc8
    NSString *_groupName;	// 208 = 0xd0
    _UIBarBackgroundLayout *_layout;	// 216 = 0xd8
    UIView *_customBackgroundView;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000011628a
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) _UIBarBackgroundLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool topAligned; // @synthesize topAligned=_topAligned;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void)set_shadowView:(id)arg1;	// IMP=0x000000000011621a
- (id)_shadowView;	// IMP=0x00000000001161fa
- (void)set_backgroundEffectView:(id)arg1;	// IMP=0x00000000001161dd
- (id)_backgroundEffectView;	// IMP=0x00000000001161bd
- (void)transitionBackgroundViews;	// IMP=0x000000000011608f
- (void)cleanupBackgroundViews;	// IMP=0x0000000000115db0
- (void)updateBackground;	// IMP=0x0000000000115709
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;	// IMP=0x0000000000115531
- (void)prepareBackgroundViews;	// IMP=0x0000000000114e66
- (struct CGRect)frameForYOrigin:(double)arg1 height:(double)arg2;	// IMP=0x0000000000114dea
- (void)_orderSubviews;	// IMP=0x0000000000114c97
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;	// IMP=0x0000000000114b35
- (void)_updateBackgroundViewVisiblity;	// IMP=0x000000000011483b
- (void)layoutSubviews;	// IMP=0x0000000000113f8c
- (id)_encodableSubviews;	// IMP=0x0000000000113f7f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000113f79
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000113f2d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000113ed0
- (void)_setupBackgroundValues;	// IMP=0x0000000000113e76

@end

