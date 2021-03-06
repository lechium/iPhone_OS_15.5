//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView
{
    UIView *_previewView;	// 8 = 0x8
    UIBezierPath *_previewClippingPath;	// 16 = 0x10
    UIImage *_finalImage;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000027155
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *finalImage; // @synthesize finalImage=_finalImage;
@property(retain, nonatomic) UIBezierPath *previewClippingPath; // @synthesize previewClippingPath=_previewClippingPath;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000267f3

@end

