//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSString, NUIContainerGridView, NUIContainerStackView, TLKEmbossedLabel, TLKImage, TLKImageView, TLKLabel, TLKMultilineText, TLKSplitTitleContainer;

@interface TLKSplitHeaderView <NUIContainerViewDelegate>
{
    _Bool _useLargeTitle;	// 8 = 0x8
    _Bool _shouldBadgeSubtitle;	// 9 = 0x9
    _Bool _useCompactWidth;	// 10 = 0xa
    TLKMultilineText *_title;	// 16 = 0x10
    TLKMultilineText *_centerLeadingTitle;	// 24 = 0x18
    TLKMultilineText *_centerTrailingTitle;	// 32 = 0x20
    TLKMultilineText *_subtitle1;	// 40 = 0x28
    TLKMultilineText *_subtitle2;	// 48 = 0x30
    TLKImage *_leadingImage;	// 56 = 0x38
    TLKMultilineText *_leadingTitle;	// 64 = 0x40
    TLKMultilineText *_leadingSubtitle;	// 72 = 0x48
    TLKImage *_trailingImage;	// 80 = 0x50
    TLKMultilineText *_trailingTitle;	// 88 = 0x58
    TLKMultilineText *_trailingSubtitle;	// 96 = 0x60
    TLKImageView *_leadingImageView;	// 104 = 0x68
    TLKLabel *_leadingTitleLabel;	// 112 = 0x70
    TLKLabel *_leadingSubtitleLabel;	// 120 = 0x78
    TLKImageView *_trailingImageView;	// 128 = 0x80
    TLKLabel *_trailingTitleLabel;	// 136 = 0x88
    TLKLabel *_trailingSubtitleLabel;	// 144 = 0x90
    TLKSplitTitleContainer *_titleContainerView;	// 152 = 0x98
    NUIContainerStackView *_subtitleStackView;	// 160 = 0xa0
    TLKLabel *_subtitle1Label;	// 168 = 0xa8
    TLKEmbossedLabel *_subtitle2Label;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x0000000000014d29
@property(retain, nonatomic) TLKEmbossedLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) TLKLabel *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property(retain, nonatomic) NUIContainerStackView *subtitleStackView; // @synthesize subtitleStackView=_subtitleStackView;
@property(retain, nonatomic) TLKSplitTitleContainer *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) TLKLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain, nonatomic) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain, nonatomic) TLKLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property(retain, nonatomic) TLKLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain, nonatomic) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain, nonatomic) TLKMultilineText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain, nonatomic) TLKMultilineText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(retain, nonatomic) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) TLKMultilineText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(retain, nonatomic) TLKMultilineText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(retain, nonatomic) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(nonatomic) _Bool useCompactWidth; // @synthesize useCompactWidth=_useCompactWidth;
@property(nonatomic) _Bool shouldBadgeSubtitle; // @synthesize shouldBadgeSubtitle=_shouldBadgeSubtitle;
@property(nonatomic) _Bool useLargeTitle; // @synthesize useLargeTitle=_useLargeTitle;
@property(retain, nonatomic) TLKMultilineText *subtitle2; // @synthesize subtitle2=_subtitle2;
@property(retain, nonatomic) TLKMultilineText *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(retain, nonatomic) TLKMultilineText *centerTrailingTitle; // @synthesize centerTrailingTitle=_centerTrailingTitle;
@property(retain, nonatomic) TLKMultilineText *centerLeadingTitle; // @synthesize centerLeadingTitle=_centerLeadingTitle;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
- (id)trailingImageInView;	// IMP=0x0000000000014a2e
- (id)leadingImageInView;	// IMP=0x00000000000149b4
- (_Bool)secondRowIsHidden;	// IMP=0x0000000000014941
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;	// IMP=0x000000000001470e
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x0000000000014658
- (_Bool)usesDefaultLayoutMargins;	// IMP=0x0000000000014650
- (void)observedPropertiesChanged;	// IMP=0x0000000000013806
- (id)titleLabel;	// IMP=0x00000000000137b6
- (id)centerTrailingTitleLabel;	// IMP=0x0000000000013766
- (id)centerLeadingTitleLabel;	// IMP=0x0000000000013716
- (id)subtitleLabel;	// IMP=0x000000000001366f
- (id)thirdRowOfViews;	// IMP=0x0000000000013545
- (id)secondRowOfViews;	// IMP=0x00000000000132d8
- (id)firstRowOfViews;	// IMP=0x0000000000013108
- (id)grid;	// IMP=0x0000000000013026
- (id)setupContentView;	// IMP=0x0000000000010b68

// Remaining properties
@property(retain, nonatomic) NUIContainerGridView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
