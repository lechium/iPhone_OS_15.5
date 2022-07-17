//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MFHeaderLabelView, NSString;

@interface MFComposeHeaderView : UIView
{
    id _delegate;	// 8 = 0x8
    MFHeaderLabelView *_labelView;	// 16 = 0x10
    UIView *_separator;	// 24 = 0x18
    UIView *_highlightBackgroundView;	// 32 = 0x20
    _Bool _showsHighlightWhenTouched;	// 40 = 0x28
    NSString *_navTitle;	// 48 = 0x30
}

+ (id)defaultSeparatorColor;	// IMP=0x0000000000029d2a
+ (double)_labelTopPaddingSpecification;	// IMP=0x0000000000029c10
+ (double)separatorHeight;	// IMP=0x0000000000029b9d
+ (double)preferredHeight;	// IMP=0x000000000002990c
+ (id)defaultFont;	// IMP=0x000000000002980c
- (void).cxx_destruct;	// IMP=0x000000000002b739
@property(nonatomic) _Bool showsHighlightWhenTouched; // @synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched;
@property(readonly, nonatomic) MFHeaderLabelView *labelView; // @synthesize labelView=_labelView;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (struct CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;	// IMP=0x000000000002b44c
- (struct UIEdgeInsets)_recipientViewEdgeInsets;	// IMP=0x000000000002b278
- (id)_baseAttributes;	// IMP=0x000000000002b093
- (void)refreshPreferredContentSize;	// IMP=0x000000000002afda
- (void)setDelegate:(id)arg1;	// IMP=0x000000000002afc6
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002ad79
- (id)_highlightedBackgroundView;	// IMP=0x000000000002ac37
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002ab7e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002ab36
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002aa7d
- (void)handleTouchesEnded;	// IMP=0x000000000002a9e7
- (_Bool)_canBecomeFirstResponder;	// IMP=0x000000000002a9df
- (struct CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1;	// IMP=0x000000000002a6c8
- (struct CGRect)_contentRect;	// IMP=0x000000000002a631
- (_Bool)_shouldEmbedLabelInTextView;	// IMP=0x000000000002a629
- (void)layoutMarginsDidChange;	// IMP=0x000000000002a5e8
- (void)layoutSubviews;	// IMP=0x000000000002a251
@property(copy, nonatomic) NSString *label; // @dynamic label;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000002a130
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000002a09d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000029de0
- (id)labelColor;	// IMP=0x0000000000029dc3
- (double)labelTopPadding;	// IMP=0x0000000000029d43
- (id)_automationID;	// IMP=0x000000000002b79b

@end
