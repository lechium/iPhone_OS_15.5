//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <Widgets/MTMaterialGrouping-Protocol.h>

@class BSUIFontProvider, MTMaterialView, NSString, UILabel;

@interface WGShortLookStyleButton : UIControl <MTMaterialGrouping>
{
    MTMaterialView *_backgroundView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    BSUIFontProvider *_fontProvider;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
    _Bool _backgroundBlurred;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000579dc
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000005791b
@property(copy, nonatomic) NSString *materialGroupNameBase;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000057798
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000057769
- (void)_updateTouchInsetsIfNecessary;	// IMP=0x00000000000576dc
- (void)layoutSubviews;	// IMP=0x000000000005761f
- (void)_layoutTitleLabel;	// IMP=0x000000000005756b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000005753d
- (void)invalidateCachedGeometry;	// IMP=0x00000000000574f7
- (struct CGSize)_size;	// IMP=0x0000000000057198
@property(copy, nonatomic) NSString *title;
- (void)_configureMaskIfNecessary;	// IMP=0x00000000000570a0
- (void)_setBackgroundViewCornerRadius:(double)arg1;	// IMP=0x0000000000057083
- (double)_backgroundViewCornerRadius;	// IMP=0x0000000000057066
- (void)_configureTitleLabelIfNecessary;	// IMP=0x0000000000056f71
- (void)_updateTitleLabelFont;	// IMP=0x0000000000056eee
- (void)_configureBackgroundViewIfNecessary;	// IMP=0x0000000000056e4e
- (id)fontForTitle:(id)arg1;	// IMP=0x0000000000056cf3
- (id)_fontProvider;	// IMP=0x0000000000056ca2
- (void)_updateHighlight;	// IMP=0x0000000000056be0
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000056b33
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000056ad1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

