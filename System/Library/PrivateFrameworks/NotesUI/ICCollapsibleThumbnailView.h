//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICImageAndMovieThumbnailView, UIImage;

@interface ICCollapsibleThumbnailView
{
    _Bool _showAsMovie;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    unsigned long long _imageScaling;	// 24 = 0x18
    ICImageAndMovieThumbnailView *_thumbnailView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000387b2
@property(retain, nonatomic) ICImageAndMovieThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool showAsMovie; // @synthesize showAsMovie=_showAsMovie;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)accessibilityIgnoresInvertColors;	// IMP=0x0000000000038753
- (void)performSetup;	// IMP=0x000000000003849a

@end
