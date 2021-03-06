//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CEKSubjectIndicatorView;

__attribute__((visibility("hidden")))
@interface VKKeyboardCameraReticleView : UIView
{
    CEKSubjectIndicatorView *_reticleView;	// 8 = 0x8
    UIView *_spotlightView;	// 16 = 0x10
    _Bool _hasSetReticleRect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000003ebf2
@property(nonatomic) double reticleAlpha;
- (void)collapseReticleRect;	// IMP=0x000000000003eaeb
- (void)setReticleRect:(struct CGRect)arg1 angle:(double)arg2;	// IMP=0x000000000003e78f
@property(nonatomic) double invertedShadowAlpha;
@property(nonatomic) double spotlightBlurRadius;
- (void)layoutSubviews;	// IMP=0x000000000003e56d
- (id)init;	// IMP=0x000000000003e47b

@end

