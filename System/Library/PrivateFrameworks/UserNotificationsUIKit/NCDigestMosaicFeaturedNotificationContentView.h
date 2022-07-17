//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationContentDisplaying-Protocol.h>

@class BSUIFontProvider, CAGradientLayer, MTStylingProvidingSolidColorView, MTVisualStylingProvider, NSArray, NSAttributedString, NSDate, NSString, NSTimeZone, UIColor, UIImage, UIImageConfiguration, UIImageView, UILabel, UIView;

@interface NCDigestMosaicFeaturedNotificationContentView <NCNotificationContentDisplaying>
{
    UIView *_clippingView;	// 8 = 0x8
    UIView *_crossfadingContentView;	// 16 = 0x10
    UILabel *_primaryTextLabel;	// 24 = 0x18
    UILabel *_primarySubtitleTextLabel;	// 32 = 0x20
    UILabel *_secondaryTextLabel;	// 40 = 0x28
    UILabel *_footerTextLabel;	// 48 = 0x30
    UIView *_imageBoundingView;	// 56 = 0x38
    UIImageView *_thumbnailImageView;	// 64 = 0x40
    UIImageView *_iconImageView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
    CAGradientLayer *_backgroundGradientLayer;	// 88 = 0x58
    UIColor *_backgroundColor;	// 96 = 0x60
    MTStylingProvidingSolidColorView *_backgroundColorView;	// 104 = 0x68
    _Bool _hasUpdatedContent;	// 112 = 0x70
    unsigned long long _secondaryTextMaximumNumberOfLines;	// 120 = 0x78
    unsigned long long _contentViewStyle;	// 128 = 0x80
    double _horizontalMarginForContentOverlap;	// 136 = 0x88
    NSString *_sectionIdentifier;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000009abdc
@property(copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(nonatomic) double horizontalMarginForContentOverlap; // @synthesize horizontalMarginForContentOverlap=_horizontalMarginForContentOverlap;
@property(nonatomic) unsigned long long contentViewStyle; // @synthesize contentViewStyle=_contentViewStyle;
@property(nonatomic) unsigned long long secondaryTextMaximumNumberOfLines; // @synthesize secondaryTextMaximumNumberOfLines=_secondaryTextMaximumNumberOfLines;
- (void)_updateTextAttributesForFooterTextLabel;	// IMP=0x000000000009aa94
- (void)_updateTextAttributesForSecondaryTextElement;	// IMP=0x000000000009a94b
- (void)_updateTextAttributesForPrimarySubtitleTextLabel;	// IMP=0x000000000009a7f2
- (void)_updateTextAttributesForPrimaryTextLabel;	// IMP=0x000000000009a699
- (void)_updateTextAttributes;	// IMP=0x000000000009a629
- (unsigned long long)_numberOfLinesForFooterTextInFrame:(struct CGRect)arg1;	// IMP=0x000000000009a5e1
- (unsigned long long)_maximumNumberOfLinesForFooterText;	// IMP=0x000000000009a5a3
- (unsigned long long)_numberOfLinesForSecondaryTextInFrame:(struct CGRect)arg1;	// IMP=0x000000000009a55b
- (unsigned long long)_maximumNumberOfLinesForSecondaryText;	// IMP=0x000000000009a4c9
- (unsigned long long)_numberOfLinesForPrimarySubtitleTextInFrame:(struct CGRect)arg1;	// IMP=0x000000000009a481
- (unsigned long long)_maximumNumberOfLinesForPrimarySubtitleText;	// IMP=0x000000000009a443
- (unsigned long long)_numberOfLinesForPrimaryTextInFrame:(struct CGRect)arg1;	// IMP=0x000000000009a3fb
- (unsigned long long)_maximumNumberOfLinesForPrimaryText;	// IMP=0x000000000009a3bb
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;	// IMP=0x000000000009a282
- (void)_updateVisualStylingProviderForBackgroundColorView;	// IMP=0x000000000009a211
- (void)_updateBackgroundColorForIconImage:(id)arg1;	// IMP=0x0000000000099f9d
- (struct CGRect)_labelSizingBoundsForRect:(struct CGRect)arg1;	// IMP=0x0000000000099ece
- (_Bool)_isContentViewStyleSmall;	// IMP=0x0000000000099eb4
- (_Bool)_isContentViewStyleMedium;	// IMP=0x0000000000099e9b
- (_Bool)_isContentViewStyleLarge;	// IMP=0x0000000000099e81
- (double)_imageHeightForBounds:(struct CGRect)arg1;	// IMP=0x0000000000099e02
- (_Bool)_isAXSize;	// IMP=0x0000000000099dc7
- (void)_configureBackgroundColorViewIfNecessary;	// IMP=0x0000000000099cf2
- (void)_configureBackgroundViewIfNecessary;	// IMP=0x0000000000099b81
- (void)_configureCrossfadingContentViewIfNecessary;	// IMP=0x0000000000099abe
- (void)_configureImageBoundingViewIfNecessary;	// IMP=0x0000000000099a0b
- (void)_configureClippingViewIfNecessary;	// IMP=0x00000000000998f5
- (void)_layoutFooterTextLabel;	// IMP=0x00000000000995a8
- (void)_layoutSecondaryTextLabel;	// IMP=0x0000000000099118
- (void)_layoutPrimarySubtitleTextLabel;	// IMP=0x0000000000098ce9
- (void)_layoutPrimaryTextLabel;	// IMP=0x0000000000098856
- (void)_layoutBackgroundView;	// IMP=0x00000000000985f3
- (void)_layoutIconImageView;	// IMP=0x0000000000098375
- (void)_layoutThumbnailImageView;	// IMP=0x00000000000982d5
- (void)_layoutImageBoundingView;	// IMP=0x000000000009809a
- (void)_layoutSubviews;	// IMP=0x000000000009801e
@property(copy, nonatomic) UIImage *thumbnail;
@property(nonatomic) unsigned long long primarySubtitleTextMaximumNumberOfLines;
@property(nonatomic) unsigned long long primaryTextMaximumNumberOfLines;
@property(copy, nonatomic) UIImage *prominentIcon;
@property(copy, nonatomic) NSString *footerText;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000970d3
- (void)layoutSubviews;	// IMP=0x000000000009702a
@property(readonly, nonatomic) double imageAttachmentSizeRatio;

// Remaining properties
@property(nonatomic) _Bool adjustsFontForContentSizeCategory;
@property(copy, nonatomic) NSDate *date;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(nonatomic) long long dateFormatStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) BSUIFontProvider *fontProvider;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSAttributedString *importantAttributedText;
@property(copy, nonatomic) NSString *importantText;
@property(readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property(copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(copy, nonatomic) UIView *prominentIconView;
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property(copy, nonatomic) UIImage *subordinateIcon;
@property(copy, nonatomic) NSString *summaryText;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSTimeZone *timeZone;

@end
