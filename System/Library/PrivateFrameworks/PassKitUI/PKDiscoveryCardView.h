//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKDiscoveryArticleLayout, PKDiscoveryCallToActionFooterView, PKDiscoveryCard, PKDiscoveryCardViewTemplateInformation, PKDiscoveryMedia, PKMiniDiscoveryCard, UIColor, UIImageView, UILabel, UITapGestureRecognizer;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCardView : UIView
{
    PKDiscoveryCard *_card;	// 8 = 0x8
    PKMiniDiscoveryCard *_miniCard;	// 16 = 0x10
    PKDiscoveryMedia *_largeCardMedia;	// 24 = 0x18
    PKDiscoveryMedia *_miniCardMedia;	// 32 = 0x20
    UIImageView *_backgroundImageView;	// 40 = 0x28
    UIView *_miniCardBackgroundColorView;	// 48 = 0x30
    UIColor *_backgroundColor;	// 56 = 0x38
    UILabel *_headingLabel;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UIImageView *_shadowView;	// 80 = 0x50
    UIImageView *_maskImageView;	// 88 = 0x58
    PKDiscoveryCallToActionFooterView *_ctaFooterView;	// 96 = 0x60
    UITapGestureRecognizer *_tapRecognizer;	// 104 = 0x68
    PKContinuousButton *_dismissButton;	// 112 = 0x70
    _Bool _shouldDisplayAsLarge;	// 120 = 0x78
    long long _displayType;	// 128 = 0x80
    long long _currentCardSize;	// 136 = 0x88
    _Bool _removing;	// 144 = 0x90
    _Bool _hasSafeAreaInsetOverride;	// 145 = 0x91
    PKDiscoveryArticleLayout *_articleLayout;	// 152 = 0x98
    long long _priority;	// 160 = 0xa0
    id <PKDiscoveryCardViewDelegate> _delegate;	// 168 = 0xa8
    PKDiscoveryCardViewTemplateInformation *_cardTemplateInformation;	// 176 = 0xb0
    CDUnknownBlockType _callToActionTappedOverride;	// 184 = 0xb8
    CDUnknownBlockType _dismissAction;	// 192 = 0xc0
    struct UIEdgeInsets _safeAreaOverrideInsets;	// 200 = 0xc8
}

+ (double)cornerRadius;	// IMP=0x000000000034888c
+ (struct CGSize)miniCompressedSize;	// IMP=0x0000000000348871
+ (struct CGSize)compressedSize;	// IMP=0x000000000034882f
+ (double)compressedHeight;	// IMP=0x000000000034880f
+ (double)compressedWidth;	// IMP=0x00000000003487ef
+ (struct CGSize)expandedSize;	// IMP=0x00000000003487ad
+ (double)expandedHeight;	// IMP=0x000000000034878d
+ (double)expandedWidth;	// IMP=0x0000000000348764
- (void).cxx_destruct;	// IMP=0x000000000034beb2
@property(copy, nonatomic) CDUnknownBlockType dismissAction; // @synthesize dismissAction=_dismissAction;
@property(copy, nonatomic) CDUnknownBlockType callToActionTappedOverride; // @synthesize callToActionTappedOverride=_callToActionTappedOverride;
@property(nonatomic) struct UIEdgeInsets safeAreaOverrideInsets; // @synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets;
@property(nonatomic) _Bool hasSafeAreaInsetOverride; // @synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride;
@property(retain, nonatomic) PKDiscoveryCardViewTemplateInformation *cardTemplateInformation; // @synthesize cardTemplateInformation=_cardTemplateInformation;
@property(nonatomic, getter=isRemoving) _Bool removing; // @synthesize removing=_removing;
@property(nonatomic) __weak id <PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PKDiscoveryArticleLayout *articleLayout; // @synthesize articleLayout=_articleLayout;
- (id)_dismissButtonTintColor;	// IMP=0x000000000034bcf3
- (id)_headingLabelTextColor;	// IMP=0x000000000034bbd9
- (id)_titleLabelTextColor;	// IMP=0x000000000034bb0e
- (void)_updateForDisplayType;	// IMP=0x000000000034b1c8
- (struct CGSize)_miniCardImageSize;	// IMP=0x000000000034b13c
- (void)loadAndUploadImageData;	// IMP=0x000000000034aa19
- (double)_yOffsetToHeadingLabel;	// IMP=0x000000000034a9fa
- (struct UIEdgeInsets)_currentContentInsets;	// IMP=0x000000000034a893
- (void)tapGestureRecognized:(id)arg1;	// IMP=0x000000000034a837
- (void)_dismissButtonPressed:(id)arg1;	// IMP=0x000000000034a7ab
- (id)_titleLabelFont;	// IMP=0x000000000034a727
- (id)_headingLabelFont;	// IMP=0x000000000034a6a3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000034a504
- (void)layoutSubviews;	// IMP=0x0000000000349552
- (void)setCardSize:(long long)arg1;	// IMP=0x000000000034941d
- (void)setDisplayType:(long long)arg1;	// IMP=0x00000000003493b2
- (id)initWithArticleLayout:(id)arg1 dismissImage:(id)arg2 cardTemplateInformation:(id)arg3 callToActionTappedOverride:(CDUnknownBlockType)arg4;	// IMP=0x00000000003488af
- (id)initWithArticleLayout:(id)arg1 dismissImage:(id)arg2 cardTemplateInformation:(id)arg3;	// IMP=0x000000000034889a

@end
