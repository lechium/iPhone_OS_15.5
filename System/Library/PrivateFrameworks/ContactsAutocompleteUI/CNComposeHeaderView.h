//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CNComposeHeaderLabelView, NSString, UILabel;
@protocol CNComposeHeaderViewDelegate;

@interface CNComposeHeaderView : UIView
{
    _Bool _showsHighlightWhenTouched;	// 8 = 0x8
    NSString *_navTitle;	// 16 = 0x10
    CNComposeHeaderLabelView *_labelView;	// 24 = 0x18
    id <CNComposeHeaderViewDelegate> _delegate;	// 32 = 0x20
    NSString *_composeFieldInfoText;	// 40 = 0x28
    id <CNComposeHeaderViewDelegate> _internalDelegate;	// 48 = 0x30
    UILabel *_composeFieldInfoLabel;	// 56 = 0x38
    UIView *_separator;	// 64 = 0x40
    UIView *_highlightedBackgroundView;	// 72 = 0x48
    struct NSDirectionalEdgeInsets _separatorDirectionalEdgeInsets;	// 80 = 0x50
}

+ (id)defaultSeparatorColor;	// IMP=0x00000000000389c1
+ (double)_labelTopPaddingSpecification;	// IMP=0x00000000000387e2
+ (double)separatorHeight;	// IMP=0x0000000000038783
+ (double)preferredHeight;	// IMP=0x00000000000384be
+ (id)supplimentalMessageFont;	// IMP=0x00000000000383e9
+ (id)defaultFont;	// IMP=0x0000000000038311
- (void).cxx_destruct;	// IMP=0x000000000003b13b
@property(retain, nonatomic) UIView *highlightedBackgroundView; // @synthesize highlightedBackgroundView=_highlightedBackgroundView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *composeFieldInfoLabel; // @synthesize composeFieldInfoLabel=_composeFieldInfoLabel;
@property(nonatomic) __weak id <CNComposeHeaderViewDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) struct NSDirectionalEdgeInsets separatorDirectionalEdgeInsets; // @synthesize separatorDirectionalEdgeInsets=_separatorDirectionalEdgeInsets;
@property(copy, nonatomic) NSString *composeFieldInfoText; // @synthesize composeFieldInfoText=_composeFieldInfoText;
@property(nonatomic) __weak id <CNComposeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsHighlightWhenTouched; // @synthesize showsHighlightWhenTouched=_showsHighlightWhenTouched;
@property(retain, nonatomic) CNComposeHeaderLabelView *labelView; // @synthesize labelView=_labelView;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
- (struct CGRect)_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;	// IMP=0x000000000003ad8d
- (struct UIEdgeInsets)_recipientViewEdgeInsets;	// IMP=0x000000000003ab65
- (id)_baseAttributes;	// IMP=0x000000000003a97f
- (void)refreshPreferredContentSize;	// IMP=0x000000000003a8c0
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000003a68a
- (id)_highlightedBackgroundView;	// IMP=0x000000000003a55a
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003a4fe
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003a4b2
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000003a456
- (void)handleTouchesEnded;	// IMP=0x000000000003a2b0
- (_Bool)_canBecomeFirstResponder;	// IMP=0x000000000003a2a8
- (struct CGRect)titleLabelBaselineAlignmentRectForLabel:(id)arg1;	// IMP=0x0000000000039f5e
- (void)_notifyDelegateOfSizeChange;	// IMP=0x0000000000039f58
- (double)_additionalContentHeight;	// IMP=0x0000000000039e8a
- (struct CGRect)_contentRect;	// IMP=0x0000000000039d4f
- (_Bool)_shouldEmbedLabelInTextView;	// IMP=0x0000000000039d47
- (id)headerViewDelegates;	// IMP=0x0000000000039bdf
- (void)layoutMarginsDidChange;	// IMP=0x0000000000039b9e
- (void)layoutSubviews;	// IMP=0x00000000000396ca
- (void)layoutComposeFieldInfoLabelWithContentRect:(struct CGRect)arg1 labelRect:(struct CGRect)arg2;	// IMP=0x00000000000394d0
- (void)createComposeFieldInfoLabelIfNeeded;	// IMP=0x0000000000038f99
@property(copy, nonatomic) NSString *label; // @dynamic label;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000038e0f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000038d7c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000038b27
- (id)labelColor;	// IMP=0x0000000000038ad7
- (double)labelTopPadding;	// IMP=0x00000000000389da
- (id)_automationID;	// IMP=0x000000000003b1ce

@end

