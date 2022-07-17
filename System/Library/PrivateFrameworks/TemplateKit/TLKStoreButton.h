//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSString, TLKLabel, TLKProminenceView, TLKRichText, UIFont, UIView;

@interface TLKStoreButton : UIButton
{
    _Bool _useCompactMode;	// 8 = 0x8
    _Bool _isEmphasized;	// 9 = 0x9
    TLKRichText *_richTitle;	// 16 = 0x10
    TLKLabel *_label;	// 24 = 0x18
    UIView *_backgroundView;	// 32 = 0x20
    TLKProminenceView *_highlightView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000025957
@property _Bool isEmphasized; // @synthesize isEmphasized=_isEmphasized;
@property(retain) TLKProminenceView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) TLKLabel *label; // @synthesize label=_label;
@property(copy, nonatomic) TLKRichText *richTitle; // @synthesize richTitle=_richTitle;
@property(nonatomic) _Bool useCompactMode; // @synthesize useCompactMode=_useCompactMode;
- (void)tlk_updateForAppearance:(id)arg1;	// IMP=0x00000000000256e3
- (void)didMoveToWindow;	// IMP=0x00000000000256a2
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000025661
@property(copy, nonatomic) NSString *title;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000002541e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002540c
- (void)layoutSubviews;	// IMP=0x000000000002518f
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000024ea0
@property(nonatomic) double cornerRadius;
@property(copy, nonatomic) UIFont *font;
- (id)init;	// IMP=0x0000000000024a8a

@end
