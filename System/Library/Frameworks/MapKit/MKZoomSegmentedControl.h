//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CALayer;

__attribute__((visibility("hidden")))
@interface MKZoomSegmentedControl : UIView
{
    struct CGImage *_backgroundUnselectedImage;	// 8 = 0x8
    struct CGImage *_backgroundMinusSelectedImage;	// 16 = 0x10
    struct CGImage *_backgroundPlusSelectedImage;	// 24 = 0x18
    struct CGImage *_maskImage;	// 32 = 0x20
    CALayer *_displayLayer;	// 40 = 0x28
    CABackdropLayer *_blurLayer;	// 48 = 0x30
    CALayer *_maskLayer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001cd0a7
- (void)touchEnded:(id)arg1;	// IMP=0x00000000001cd07f
- (void)plusPressed:(id)arg1;	// IMP=0x00000000001cd057
- (void)minusPressed:(id)arg1;	// IMP=0x00000000001cd02f
- (void)updateAppearance;	// IMP=0x00000000001ccdd6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001ccd95
- (void)_unloadResources;	// IMP=0x00000000001ccd0a
- (void)dealloc;	// IMP=0x00000000001ccccc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001cca20

@end
