//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, PXBadgedThumbnailView, PXInboxTableViewCellLayoutCoordinator, PXRoundedCornerOverlayView, UIImageView, UILabel;
@protocol PXInboxModel;

@interface PXInboxTableViewCell : UITableViewCell
{
    _Bool _unseen;	// 8 = 0x8
    id <PXInboxModel> _model;	// 16 = 0x10
    NSAttributedString *_title;	// 24 = 0x18
    PXInboxTableViewCellLayoutCoordinator *_layoutCoordinator;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    PXRoundedCornerOverlayView *_cornerOverlayView;	// 48 = 0x30
    PXBadgedThumbnailView *_thumbnailView;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UILabel *_subtitleLabel;	// 72 = 0x48
}

+ (void)preloadResources;	// IMP=0x0000000000709915
+ (id)thumbnailBadgeImageForTintColor:(id)arg1;	// IMP=0x000000000070972e
+ (id)unseenHighlightColor;	// IMP=0x00000000007096fe
+ (id)placeholderEmptyImage;	// IMP=0x00000000007096ce
- (void).cxx_destruct;	// IMP=0x000000000070957c
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PXBadgedThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) PXRoundedCornerOverlayView *cornerOverlayView; // @synthesize cornerOverlayView=_cornerOverlayView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) PXInboxTableViewCellLayoutCoordinator *layoutCoordinator; // @synthesize layoutCoordinator=_layoutCoordinator;
@property(nonatomic, getter=isUnseen) _Bool unseen; // @synthesize unseen=_unseen;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(copy, nonatomic) id <PXInboxModel> model; // @synthesize model=_model;
- (void)_updateTitleLabel;	// IMP=0x00000000007093b6
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000007093a4
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000070932c
@property(retain, nonatomic) NSAttributedString *subtitle;
- (void)_updateTitle;	// IMP=0x0000000000708f7f
- (void)layoutSubviews;	// IMP=0x0000000000708e32
- (void)prepareForReuse;	// IMP=0x0000000000708ce5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000007088fc

@end
