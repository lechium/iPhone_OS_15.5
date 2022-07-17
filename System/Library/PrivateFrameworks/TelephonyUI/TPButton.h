//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton
{
    int _color;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
    _Bool _blursBackground;	// 24 = 0x18
    _Bool _roundsCorners;	// 25 = 0x19
    _Bool _usesOverlayBlendingForContents;	// 26 = 0x1a
}

+ (double)maxWidthForCenterButton;	// IMP=0x000000000001911b
+ (double)defaultWidthForCenterButton;	// IMP=0x000000000001910d
+ (double)defaultWidthForSideButton;	// IMP=0x00000000000190ff
+ (double)defaultHeightForColor:(int)arg1;	// IMP=0x00000000000190f1
+ (double)defaultHeight;	// IMP=0x00000000000190e3
+ (id)defaultStandardFont;	// IMP=0x00000000000190c2
- (void).cxx_destruct;	// IMP=0x000000000001a493
@property(nonatomic) _Bool usesOverlayBlendingForContents; // @synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents;
@property(nonatomic) _Bool roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property(nonatomic) _Bool blursBackground; // @synthesize blursBackground=_blursBackground;
- (void)setDisabledButtonColor:(int)arg1;	// IMP=0x000000000001a45d
- (void)setTitleVerticalOffset:(double)arg1;	// IMP=0x000000000001a457
- (void)setIconVerticalOffset:(double)arg1;	// IMP=0x000000000001a451
- (void)setTitleImagePadding:(double)arg1;	// IMP=0x000000000001a44b
- (void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2;	// IMP=0x000000000001a445
- (void)setMinimumTitleFontSize:(double)arg1;	// IMP=0x000000000001a43f
- (void)setPlusSeparatedTitle:(id)arg1;	// IMP=0x000000000001a439
- (void)_animationDidEnd;	// IMP=0x000000000001a3e1
- (void)_animationWillBegin;	// IMP=0x000000000001a39a
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000001a349
- (void)layoutSubviews;	// IMP=0x0000000000019c7e
- (int)buttonColor;	// IMP=0x0000000000019c6e
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000019c49
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000019c43
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000019c3d
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect)arg4;	// IMP=0x0000000000019900
- (void)setButtonColor:(int)arg1;	// IMP=0x0000000000019681
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000019548
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000001925c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000019129

@end
