//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell
{
    VUIFavoriteBannerView *_bannerView;	// 8 = 0x8
    VUIFavoriteBannerLayout *_bannerLayout;	// 16 = 0x10
    double _width;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000111f85
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property(retain, nonatomic) VUIFavoriteBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)prepareForReuse;	// IMP=0x0000000000111ec9
- (void)registerForInAppMessaging:(_Bool)arg1;	// IMP=0x0000000000111e76
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000111e25
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000111dee
- (void)layoutSubviews;	// IMP=0x0000000000111d1e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000111a69

@end

