//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, TPSURLSessionItem, UIColor, UIImage, UIImageView;
@protocol TPSImageAssetViewDelegate;

@interface TPSImageAssetView : UIView
{
    UIView *_highlightView;	// 8 = 0x8
    _Bool _respectLoadingStatus;	// 16 = 0x10
    _Bool _hideImageWhenNil;	// 17 = 0x11
    _Bool _roundedCorner;	// 18 = 0x12
    _Bool _aspectFillAsset;	// 19 = 0x13
    double _roundedCornerRadius;	// 24 = 0x18
    id <TPSImageAssetViewDelegate> _delegate;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
    UIImageView *_backgroundImageView;	// 48 = 0x30
    UIColor *_defaultBackgroundColor;	// 56 = 0x38
    UIColor *_noImageBackgroundColor;	// 64 = 0x40
    UIColor *_overlayColor;	// 72 = 0x48
    NSString *_currentImagePath;	// 80 = 0x50
    NSString *_currentDisplayIdentifier;	// 88 = 0x58
    unsigned long long _status;	// 96 = 0x60
    TPSURLSessionItem *_imageURLSessionItem;	// 104 = 0x68
}

+ (_Bool)cacheImageAvailableForIdentifier:(id)arg1;	// IMP=0x0000000000006e2d
+ (id)defaultBackgroundColor;	// IMP=0x0000000000006e14
- (void).cxx_destruct;	// IMP=0x00000000000084d3
@property(retain, nonatomic) TPSURLSessionItem *imageURLSessionItem; // @synthesize imageURLSessionItem=_imageURLSessionItem;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *currentDisplayIdentifier; // @synthesize currentDisplayIdentifier=_currentDisplayIdentifier;
@property(retain, nonatomic) NSString *currentImagePath; // @synthesize currentImagePath=_currentImagePath;
@property(retain, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(retain, nonatomic) UIColor *noImageBackgroundColor; // @synthesize noImageBackgroundColor=_noImageBackgroundColor;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <TPSImageAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
@property(nonatomic) _Bool aspectFillAsset; // @synthesize aspectFillAsset=_aspectFillAsset;
@property(nonatomic) _Bool roundedCorner; // @synthesize roundedCorner=_roundedCorner;
@property(nonatomic) _Bool hideImageWhenNil; // @synthesize hideImageWhenNil=_hideImageWhenNil;
@property(nonatomic) _Bool respectLoadingStatus; // @synthesize respectLoadingStatus=_respectLoadingStatus;
- (void)layoutSubviews;	// IMP=0x000000000000824d
- (void)showHighlight:(_Bool)arg1;	// IMP=0x0000000000008113
- (void)animateImageView:(_Bool)arg1;	// IMP=0x0000000000007ff4
- (void)fetchImageWithIdentifier:(id)arg1 path:(id)arg2;	// IMP=0x00000000000076b0
- (void)updateBackgroundColor;	// IMP=0x0000000000007561
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)cancel;	// IMP=0x0000000000007335
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000071fc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000719f
- (id)init;	// IMP=0x0000000000007153
- (id)initWithDefaultBackgroundColor:(id)arg1 noImageBackgroundColor:(id)arg2;	// IMP=0x00000000000070a1
- (void)commonInit;	// IMP=0x0000000000006f3f

@end
