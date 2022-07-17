//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, VibrantLabelView, _SFSiteIconView;

@interface ReadingListTableViewCell
{
    VibrantLabelView *_detailTextLabel;	// 8 = 0x8
    UILabel *_siteNameLabel;	// 16 = 0x10
    UILabel *_textLabel;	// 24 = 0x18
    _Bool _wantsSelectedAppearance;	// 32 = 0x20
    long long _dragState;	// 40 = 0x28
    _SFSiteIconView *_imageView;	// 48 = 0x30
    _Bool _hasImage;	// 56 = 0x38
    int _bookmarkID;	// 60 = 0x3c
    NSString *_siteName;	// 64 = 0x40
    NSString *_previewText;	// 72 = 0x48
    NSString *_fetchingStatusText;	// 80 = 0x50
}

+ (double)minimumCellHeight;	// IMP=0x00000000000bf177
- (void).cxx_destruct;	// IMP=0x00000000000bf21b
@property(copy, nonatomic) NSString *fetchingStatusText; // @synthesize fetchingStatusText=_fetchingStatusText;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(copy, nonatomic) NSString *previewText; // @synthesize previewText=_previewText;
@property(copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
@property(readonly, nonatomic) int bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void)layoutSubviews;	// IMP=0x00000000000bf0cf
- (void)_updateSelectedAnimated:(_Bool)arg1;	// IMP=0x00000000000bf078
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000bf05a
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x00000000000beff4
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;	// IMP=0x00000000000bef7b
- (void)_setFetchingStatusTextForBookmark:(id)arg1;	// IMP=0x00000000000bee83
- (void)setBookmark:(id)arg1 isArchiving:(_Bool)arg2;	// IMP=0x00000000000bedda
- (void)setBookmark:(id)arg1;	// IMP=0x00000000000beb11
- (void)displayThumbnailIconForBookmark:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x00000000000be737
- (void)setReadingListIcon:(id)arg1;	// IMP=0x00000000000be719
- (void)_updateNumberOfLines;	// IMP=0x00000000000be648
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000be459
- (void)_createImageViewIfNeeded;	// IMP=0x00000000000be353
- (void)_initializeAutoLayoutConstraints;	// IMP=0x00000000000bdf9f
- (id)_siteNameFont;	// IMP=0x00000000000bdf81
- (id)_detailLabelFont;	// IMP=0x00000000000bdf60
- (id)_titleLabelFont;	// IMP=0x00000000000bdf3f
- (id)_scaledFontForTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2;	// IMP=0x00000000000bdd7b
- (void)dealloc;	// IMP=0x00000000000bdca1
- (void)prepareForReuse;	// IMP=0x00000000000bdc56
- (void)_updateVibrantEffect;	// IMP=0x00000000000bdb75
- (void)setUsesVibrantEffect:(_Bool)arg1;	// IMP=0x00000000000bdb17
- (void)setAlpha:(double)arg1;	// IMP=0x00000000000bda53
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000bd75b

@end
