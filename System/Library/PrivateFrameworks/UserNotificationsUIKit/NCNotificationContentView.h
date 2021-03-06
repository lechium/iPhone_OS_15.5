//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCNotificationContentDisplaying-Protocol.h>
#import <UserNotificationsUIKit/UITextViewDelegate-Protocol.h>

@class BSUIEmojiLabelView, BSUIFontProvider, MTVisualStylingProvider, NSArray, NSAttributedString, NSDate, NSMutableDictionary, NSString, NSStringDrawingContext, NSTimeZone, UIImage, UIImageConfiguration, UIImageView, UILabel, UITextView;
@protocol NCNotificationContentViewDelegate;

@interface NCNotificationContentView : UIView <UITextViewDelegate, NCNotificationContentDisplaying>
{
    long long _lookStyle;	// 8 = 0x8
    struct UIEdgeInsets _contentInsets;	// 16 = 0x10
    UIView *_contentView;	// 48 = 0x30
    UIImageView *_thumbnailImageView;	// 56 = 0x38
    NSMutableDictionary *_widthToFontToStringToMeasuredNumLines;	// 64 = 0x40
    NSStringDrawingContext *_drawingContext;	// 72 = 0x48
    MTVisualStylingProvider *_visualStylingProvider;	// 80 = 0x50
    _Bool _hasUpdatedContent;	// 88 = 0x58
    _Bool _adjustsFontForContentSizeCategory;	// 89 = 0x59
    _Bool _thumbnailIsContactImage;	// 90 = 0x5a
    _Bool _useSmallTopMargin;	// 91 = 0x5b
    unsigned long long _maximumNumberOfSecondaryTextLines;	// 96 = 0x60
    UILabel *_secondaryLabel;	// 104 = 0x68
    UITextView *_secondaryTextView;	// 112 = 0x70
    BSUIFontProvider *_fontProvider;	// 120 = 0x78
    NSString *_preferredContentSizeCategory;	// 128 = 0x80
    id <NCNotificationContentViewDelegate> _delegate;	// 136 = 0x88
    UIView *_accessoryView;	// 144 = 0x90
    unsigned long long _maximumNumberOfPrimaryTextLines;	// 152 = 0x98
    unsigned long long _maximumNumberOfPrimaryLargeTextLines;	// 160 = 0xa0
    unsigned long long _maximumNumberOfSecondaryLargeTextLines;	// 168 = 0xa8
    UILabel *_primaryLabel;	// 176 = 0xb0
    UILabel *_primarySubtitleLabel;	// 184 = 0xb8
    BSUIEmojiLabelView *_summaryLabel;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000e9011
@property(retain, nonatomic, getter=_summaryLabel, setter=_setSummaryLabel:) BSUIEmojiLabelView *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain, nonatomic, getter=_primarySubtitleLabel, setter=_setPrimarySubtitleLabel:) UILabel *primarySubtitleLabel; // @synthesize primarySubtitleLabel=_primarySubtitleLabel;
@property(retain, nonatomic, getter=_primaryLabel, setter=_setPrimaryLabel:) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(nonatomic) _Bool useSmallTopMargin; // @synthesize useSmallTopMargin=_useSmallTopMargin;
@property(nonatomic) unsigned long long maximumNumberOfSecondaryLargeTextLines; // @synthesize maximumNumberOfSecondaryLargeTextLines=_maximumNumberOfSecondaryLargeTextLines;
@property(nonatomic) unsigned long long maximumNumberOfPrimaryLargeTextLines; // @synthesize maximumNumberOfPrimaryLargeTextLines=_maximumNumberOfPrimaryLargeTextLines;
@property(nonatomic) unsigned long long maximumNumberOfPrimaryTextLines; // @synthesize maximumNumberOfPrimaryTextLines=_maximumNumberOfPrimaryTextLines;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic, getter=isThumbnailContactImage) _Bool thumbnailIsContactImage; // @synthesize thumbnailIsContactImage=_thumbnailIsContactImage;
@property(nonatomic) __weak id <NCNotificationContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(readonly, nonatomic, getter=_secondaryTextView) UITextView *secondaryTextView; // @synthesize secondaryTextView=_secondaryTextView;
@property(readonly, nonatomic, getter=_secondaryLabel) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(nonatomic) unsigned long long maximumNumberOfSecondaryTextLines; // @synthesize maximumNumberOfSecondaryTextLines=_maximumNumberOfSecondaryTextLines;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000e8bd4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000e8b84
@property(readonly, copy) NSString *debugDescription;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000000e8901
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000e88ac
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000e8713
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;	// IMP=0x00000000000e844e
@property(readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x00000000000e841f
- (void)_layoutSubviews;	// IMP=0x00000000000e72ab
- (void)layoutSubviews;	// IMP=0x00000000000e71dd
- (void)_configureThumbnailAsContactImage:(_Bool)arg1;	// IMP=0x00000000000e7118
- (struct CGRect)_frameForThumbnailInRect:(struct CGRect)arg1 withContentViewInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000e7004
@property(retain, nonatomic) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
- (void)_updateStyleForThumbnailImage:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e6d50
- (void)_updateContentModeForThumbnailImage:(id)arg1;	// IMP=0x00000000000e6ce5
@property(nonatomic) unsigned long long secondaryTextMaximumNumberOfLines;
@property(nonatomic) unsigned long long primarySubtitleTextMaximumNumberOfLines;
@property(nonatomic) unsigned long long primaryTextMaximumNumberOfLines;
@property(copy, nonatomic) UIImage *thumbnail;
@property(copy, nonatomic) NSString *summaryText;
- (id)_lazySummaryLabel;	// IMP=0x00000000000e69c7
- (id)_newSummaryLabel;	// IMP=0x00000000000e6988
- (void)_updateStyleForSummaryLabel:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e6929
- (void)_updateTextAttributesForSummaryLabel:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e686e
@property(copy, nonatomic) NSString *secondaryText;
- (id)_lazySecondaryTextSupportingView;	// IMP=0x00000000000e66a7
- (id)_lazySecondaryTextView;	// IMP=0x00000000000e6616
- (id)_lazySecondaryLabel;	// IMP=0x00000000000e6585
- (id)_secondaryTextSupportingView;	// IMP=0x00000000000e6556
- (id)_newSecondaryTextView;	// IMP=0x00000000000e6389
- (id)_newSecondaryLabel;	// IMP=0x00000000000e6309
- (void)_configureTextSupportingView:(id)arg1;	// IMP=0x00000000000e628d
- (void)_updateStyleForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e61e3
- (unsigned long long)_secondaryTextNumberOfLines;	// IMP=0x00000000000e5dde
- (void)_updateTextAttributesForSecondaryTextSupportingView:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e5be7
- (id)_lazyThumbnailImageView;	// IMP=0x00000000000e5b1c
@property(copy, nonatomic) NSString *primarySubtitleText;
- (id)_lazyPrimarySubtitleLabel;	// IMP=0x00000000000e596f
@property(copy, nonatomic) NSString *primaryText;
- (id)_lazyPrimaryLabel;	// IMP=0x00000000000e57c2
- (id)_newPrimaryLabel;	// IMP=0x00000000000e5783
- (void)_updateStyleForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e56e3
- (void)_updateTextAttributesForPrimaryLabel:(id)arg1 withStyle:(long long)arg2;	// IMP=0x00000000000e54f2
- (void)_updateContentInsets;	// IMP=0x00000000000e549b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000e5467
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000e4ebf
- (unsigned long long)_numberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forSize:(struct CGSize)arg3;	// IMP=0x00000000000e4d75
- (unsigned long long)_cachedNumberOfMeasuredLinesForText:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3 scale:(double)arg4;	// IMP=0x00000000000e4b33
- (void)_clearCacheForFont:(id)arg1;	// IMP=0x00000000000e4a45
- (void)_invalidateNumberOfLinesCache;	// IMP=0x00000000000e4a28
- (struct CGRect)_summaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;	// IMP=0x00000000000e488d
- (unsigned long long)_summaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00000000000e487a
- (unsigned long long)_summaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000e4778
- (struct CGRect)_secondaryTextViewBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;	// IMP=0x00000000000e4573
- (unsigned long long)_secondaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00000000000e451e
- (unsigned long long)_secondaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000e441c
- (struct CGRect)_primarySubtitleLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;	// IMP=0x00000000000e42b0
- (unsigned long long)_primarySubtitleTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00000000000e4179
- (unsigned long long)_primarySubtitleTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000e400d
- (struct CGRect)_primaryLabelBoundsForSize:(struct CGSize)arg1 withContentInsets:(struct UIEdgeInsets)arg2 andNumberOfLines:(unsigned long long)arg3;	// IMP=0x00000000000e3f1e
- (unsigned long long)_primaryTextNumberOfLinesWithMeasuredNumberOfLines:(unsigned long long)arg1;	// IMP=0x00000000000e3de7
- (unsigned long long)_primaryTextMeasuredNumberOfLinesForWidth:(double)arg1 scale:(double)arg2;	// IMP=0x00000000000e3c7b
- (double)_summaryTextBaselineOffsetForCurrentStyle;	// IMP=0x00000000000e3be1
- (double)_secondaryTextBaselineOffsetForCurrentStyle;	// IMP=0x00000000000e3b30
- (double)_primarySubtitleTextBaselineOffsetForCurrentStyle;	// IMP=0x00000000000e3a7f
- (double)_primaryTextBaselineOffsetForCurrentStyle;	// IMP=0x00000000000e39de
- (double)topMarginToPrimaryLabelForCurrentStyle;	// IMP=0x00000000000e39a4
- (struct UIEdgeInsets)_contentInsetsForStyle:(long long)arg1;	// IMP=0x00000000000e3973
- (struct UIEdgeInsets)_contentInsetsForLongLook;	// IMP=0x00000000000e38da
- (struct UIEdgeInsets)_contentInsetsForShortLook;	// IMP=0x00000000000e374e
- (struct UIEdgeInsets)_contentInsets;	// IMP=0x00000000000e372e
- (double)_summaryTextBaselineOffsetWithBaseValue:(double)arg1;	// IMP=0x00000000000e3675
- (double)_secondaryTextBaselineOffsetFromBottomWithBaseValue:(double)arg1;	// IMP=0x00000000000e35bc
- (double)_secondaryTextBaselineOffsetWithBaseValue:(double)arg1;	// IMP=0x00000000000e3503
- (double)_primaryTextBaselineOffsetWithBaseValue:(double)arg1;	// IMP=0x00000000000e344a
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000e334e

// Remaining properties
@property(copy, nonatomic) NSDate *date;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(nonatomic) long long dateFormatStyle;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *footerText;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSAttributedString *importantAttributedText;
@property(copy, nonatomic) NSString *importantText;
@property(readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
@property(copy, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property(copy, nonatomic) UIImage *prominentIcon;
@property(copy, nonatomic) UIView *prominentIconView;
@property(copy, nonatomic) UIImage *subordinateIcon;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSTimeZone *timeZone;

@end

