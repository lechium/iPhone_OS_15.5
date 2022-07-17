//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class SiriUISashItem, SiriUITextContainerView, UIButton, UIImageView, UIVisualEffectView;

@interface SiriUISashView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    SiriUITextContainerView *_textContainerView;	// 24 = 0x18
    _Bool _requestsExtraPadding;	// 32 = 0x20
    UIVisualEffectView *_vibrantButtonBackgroundView;	// 40 = 0x28
    UIVisualEffectView *_vibrantTextBackgroundView;	// 48 = 0x30
    _Bool _navigating;	// 56 = 0x38
    SiriUISashItem *_sashItem;	// 64 = 0x40
    UIButton *_backNavigationButton;	// 72 = 0x48
}

+ (CDStruct_c3b3c0f9)_textContainerStyleForSashItem:(id)arg1;	// IMP=0x000000000002ef2d
+ (id)_font;	// IMP=0x000000000002ed64
- (void).cxx_destruct;	// IMP=0x000000000002efdb
@property(nonatomic, getter=isNavigating) _Bool navigating; // @synthesize navigating=_navigating;
@property(readonly, nonatomic) SiriUISashItem *sashItem; // @synthesize sashItem=_sashItem;
- (void)_setupBackNavigationButton;	// IMP=0x000000000002eb0d
@property(readonly, nonatomic) UIButton *backNavigationButton; // @synthesize backNavigationButton=_backNavigationButton;
- (void)setSashItem:(id)arg1 locale:(id)arg2;	// IMP=0x000000000002e7c4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002e6d6
- (void)layoutSubviews;	// IMP=0x000000000002e2bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002deeb

@end
