//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PXCollageView, UIImage, UIImageView;

@interface PXBadgedThumbnailView : UIView
{
    _Bool _showBadge;	// 8 = 0x8
    UIImage *_badgeImage;	// 16 = 0x10
    UIImageView *_placeholderImageView;	// 24 = 0x18
    PXCollageView *_collageView;	// 32 = 0x20
    UIImageView *_badgeView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000080e1bb
@property(retain, nonatomic) UIImageView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXCollageView *collageView; // @synthesize collageView=_collageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(nonatomic, getter=shouldShowLikeBadge) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
- (void)setImageHidden:(_Bool)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000080e0dc
- (id)imageViewForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000080e043
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000080dfcb
- (_Bool)shouldShowBadge;	// IMP=0x000000000080df88
@property(nonatomic) long long numberOfItems;
- (void)layoutSubviews;	// IMP=0x000000000080d871
- (id)initWithplaceholderImageView:(id)arg1;	// IMP=0x000000000080d687

@end
