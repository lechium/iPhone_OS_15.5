//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAttachmentBrickAudioPlayerViewV2Delegate-Protocol.h>

@class ICAttachment, ICAttachmentBrickFrostedView, ICAttachmentBrickTextViewV2, ICSearchResult, NSLayoutConstraint, NSRegularExpression, NSString, UIImage;

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate>
{
    _Bool _forceDefaultBrickSize;	// 8 = 0x8
    _Bool _forManualRendering;	// 9 = 0x9
    _Bool _selected;	// 10 = 0xa
    _Bool _fullHeightText;	// 11 = 0xb
    _Bool _showAsFileIcon;	// 12 = 0xc
    _Bool _frostedViewActive;	// 13 = 0xd
    _Bool _highlightUpdateScheduled;	// 14 = 0xe
    _Bool _usingConstraintsForAXLargerTextSizes;	// 15 = 0xf
    _Bool _layerIsInvertedForAXInvertColors;	// 16 = 0x10
    _Bool _vibrant;	// 17 = 0x11
    _Bool _disableImageUpdates;	// 18 = 0x12
    _Bool _disableTextUpdates;	// 19 = 0x13
    _Bool _disableVibrancy;	// 20 = 0x14
    ICAttachment *_attachment;	// 24 = 0x18
    ICSearchResult *_searchResult;	// 32 = 0x20
    UIView *_accessoryView;	// 40 = 0x28
    NSRegularExpression *_highlightPatternRegex;	// 48 = 0x30
    unsigned long long _defaultBrickSize;	// 56 = 0x38
    unsigned long long _brickSize;	// 64 = 0x40
    UIView *_backgroundView;	// 72 = 0x48
    ICAttachmentBrickFrostedView *_frostedView;	// 80 = 0x50
    NSLayoutConstraint *_widthConstraint;	// 88 = 0x58
    NSLayoutConstraint *_heightConstraint;	// 96 = 0x60
    NSLayoutConstraint *_textViewTopConstraint;	// 104 = 0x68
    NSLayoutConstraint *_textViewTrailingConstraint;	// 112 = 0x70
    NSLayoutConstraint *_accessoryViewWidthConstraint;	// 120 = 0x78
    NSLayoutConstraint *_accessoryViewHeightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_accessoryViewVerticalConstraint;	// 136 = 0x88
    NSLayoutConstraint *_accessoryViewTrailingConstraint;	// 144 = 0x90
    long long _fileSizeCache;	// 152 = 0x98
    NSString *_fileSizeStringCache;	// 160 = 0xa0
    ICAttachmentBrickTextViewV2 *_textView;	// 168 = 0xa8
    unsigned long long _brickType;	// 176 = 0xb0
    unsigned long long _accessoryType;	// 184 = 0xb8
    unsigned long long _imageScaling;	// 192 = 0xc0
    UIImage *_image;	// 200 = 0xc8
    struct CGSize _imageSize;	// 208 = 0xd0
}

+ (struct CGSize)imageSizeForBrickSize:(unsigned long long)arg1;	// IMP=0x0000000000021787
+ (id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3;	// IMP=0x00000000000208b1
+ (id)brickInfoForAttachment:(id)arg1 brickSize:(unsigned long long)arg2 brick:(id)arg3;	// IMP=0x000000000001e37c
+ (double)clampAccessoryViewScale:(double)arg1 forHorizontalSizeClass:(long long)arg2;	// IMP=0x000000000001cf45
+ (struct CGSize)brickSizeWithSize:(unsigned long long)arg1;	// IMP=0x000000000001cee3
+ (unsigned long long)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(unsigned long long)arg2;	// IMP=0x000000000001cdc8
+ (unsigned long long)brickTypeForAttachment:(id)arg1;	// IMP=0x000000000001cc5b
- (void).cxx_destruct;	// IMP=0x00000000000223b5
@property(nonatomic) _Bool disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) _Bool disableTextUpdates; // @synthesize disableTextUpdates=_disableTextUpdates;
@property(nonatomic) _Bool disableImageUpdates; // @synthesize disableImageUpdates=_disableImageUpdates;
@property(nonatomic, getter=isVibrant) _Bool vibrant; // @synthesize vibrant=_vibrant;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) unsigned long long brickType; // @synthesize brickType=_brickType;
@property(retain, nonatomic) ICAttachmentBrickTextViewV2 *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool layerIsInvertedForAXInvertColors; // @synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors;
@property(nonatomic) _Bool usingConstraintsForAXLargerTextSizes; // @synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes;
@property(nonatomic) _Bool highlightUpdateScheduled; // @synthesize highlightUpdateScheduled=_highlightUpdateScheduled;
@property(copy, nonatomic) NSString *fileSizeStringCache; // @synthesize fileSizeStringCache=_fileSizeStringCache;
@property(nonatomic) long long fileSizeCache; // @synthesize fileSizeCache=_fileSizeCache;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint; // @synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint; // @synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTopConstraint; // @synthesize textViewTopConstraint=_textViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isFrostedViewActive) _Bool frostedViewActive; // @synthesize frostedViewActive=_frostedViewActive;
@property(retain, nonatomic) ICAttachmentBrickFrostedView *frostedView; // @synthesize frostedView=_frostedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic, getter=isFullHeightText) _Bool fullHeightText; // @synthesize fullHeightText=_fullHeightText;
@property(nonatomic) unsigned long long brickSize; // @synthesize brickSize=_brickSize;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(nonatomic) unsigned long long defaultBrickSize; // @synthesize defaultBrickSize=_defaultBrickSize;
@property(nonatomic) _Bool forceDefaultBrickSize; // @synthesize forceDefaultBrickSize=_forceDefaultBrickSize;
@property(retain, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
- (_Bool)accessibilityIgnoresInvertColors;	// IMP=0x0000000000021f40
- (void)updateAccessoryViewForAccessibilityInvertColors;	// IMP=0x0000000000021e60
@property(readonly, nonatomic) NSString *typeDescriptionForAccessibility;
- (void)setContentsScale:(double)arg1;	// IMP=0x0000000000021c43
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1;	// IMP=0x00000000000219eb
- (void)updateSearchHighlighting;	// IMP=0x00000000000217ec
- (void)updateSearchHighlightingIfNecessary;	// IMP=0x00000000000217a3
- (void)updateAccessoryViewShadow;	// IMP=0x000000000002137c
- (id)createTextViewTrailingConstraint;	// IMP=0x0000000000021237
- (double)accessoryViewTopMarginWithAccessorySize:(struct CGSize)arg1;	// IMP=0x0000000000021191
- (struct CGSize)computedAccessorySize;	// IMP=0x0000000000020ee0
- (struct CGSize)computedSize;	// IMP=0x0000000000020e6d
- (double)layoutScaling;	// IMP=0x0000000000020e54
- (void)scaleDidChange;	// IMP=0x0000000000020b34
- (double)clampAccessoryViewScale:(double)arg1;	// IMP=0x0000000000020ac2
- (void)updateFileSizeCacheStringIfNeeded;	// IMP=0x00000000000207aa
- (void)updateImage;	// IMP=0x000000000002020a
- (void)clearAccessoryView;	// IMP=0x000000000001ff3a
- (void)updateAccessoryView;	// IMP=0x000000000001f072
- (void)updateText;	// IMP=0x000000000001e121
- (void)updateForAppearanceChange;	// IMP=0x000000000001e0f3
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001e002
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000001dfc1
- (void)layoutSubviews;	// IMP=0x000000000001df80
- (void)layoutAccessoryTypeMapMarker;	// IMP=0x000000000001dd9e
- (void)layoutBackgroundView;	// IMP=0x000000000001db4c
- (void)updateBackgroundImage;	// IMP=0x000000000001d824
- (void)updateStyle;	// IMP=0x000000000001d501
- (void)updateBrickType;	// IMP=0x000000000001d49b
- (void)updateContentFromAttachment;	// IMP=0x000000000001cf98
- (void)initializeBasicViews;	// IMP=0x000000000001c82c
- (id)thumbnailCache;	// IMP=0x000000000001c7d7
- (void)updateConstraints;	// IMP=0x000000000001c617
- (void)didMoveToWindow;	// IMP=0x000000000001c54b
- (id)backgroundColorForCurrentVibrancy;	// IMP=0x000000000001c23c
- (void)updateVibrancyIfNecessary;	// IMP=0x000000000001b35a
- (void)audioPlayerViewStopped:(id)arg1;	// IMP=0x000000000001b1bd
- (void)audioPlayerView:(id)arg1 updateTime:(double)arg2;	// IMP=0x000000000001b0da
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001af42
- (void)accentColorDidChange:(id)arg1;	// IMP=0x000000000001af30
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1;	// IMP=0x000000000001af1e
- (void)mediaDidLoadNotification:(id)arg1;	// IMP=0x000000000001af0c
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;	// IMP=0x000000000001aefa
- (void)attachmentDidLoadNotification:(id)arg1;	// IMP=0x000000000001aee8
- (id)quickLookTransitionView;	// IMP=0x000000000001ae7e
- (void)contentSizeCategoryDidChange;	// IMP=0x000000000001ae0c
- (void)prepareForReuse;	// IMP=0x000000000001ab2d
- (void)prepareForPrinting;	// IMP=0x000000000001aaeb
- (void)setAttachment:(id)arg1 forSearchResult:(id)arg2;	// IMP=0x000000000001a846
- (void)dealloc;	// IMP=0x000000000001a33b
- (id)initWithFrame:(struct CGRect)arg1 defaultBrickSize:(unsigned long long)arg2;	// IMP=0x000000000001a291
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001a27a
- (id)typeDescriptionsForVoiceControl;	// IMP=0x0000000000003836
- (id)accessibilityUserInputLabels;	// IMP=0x00000000000033f3
- (id)accessibilityValue;	// IMP=0x0000000000003252
- (id)accessibilityLabel;	// IMP=0x0000000000003240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

