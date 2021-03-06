//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSBundle, NSString, NSURL, UIImageView;

@interface SiriUIDownloadableImageView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    NSURL *_imageURL;	// 16 = 0x10
    _Bool _showingPlaceHolderImage;	// 24 = 0x18
    NSString *_placeHolderImageName;	// 32 = 0x20
    NSBundle *_placeHolderImageBundle;	// 40 = 0x28
    double _placeHolderVerticalOffset;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000249fc
- (void)layoutSubviews;	// IMP=0x00000000000248c7
- (void)_setImage:(id)arg1 isPlaceHolder:(_Bool)arg2;	// IMP=0x00000000000246ba
- (void)setImageURL:(id)arg1;	// IMP=0x00000000000245b1
- (void)showPlaceHolderImage;	// IMP=0x00000000000244dc
- (void)setPlaceHolderVerticalOffset:(double)arg1;	// IMP=0x00000000000244af
- (void)setPlaceHolderImageName:(id)arg1;	// IMP=0x0000000000024436
- (id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3;	// IMP=0x0000000000024304

@end

