//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface CAMCameraViewControllerContainerView : UIView
{
    UIView *_viewfinderView;	// 8 = 0x8
    UIView *_customOverlayView;	// 16 = 0x10
    UIView *_additionalContentView;	// 24 = 0x18
}

+ (Class)layerClass;	// IMP=0x000000000017d054
- (void).cxx_destruct;	// IMP=0x000000000017d52e
@property(retain, nonatomic) UIView *additionalContentView; // @synthesize additionalContentView=_additionalContentView;
@property(retain, nonatomic) UIView *customOverlayView; // @synthesize customOverlayView=_customOverlayView;
@property(retain, nonatomic) UIView *viewfinderView; // @synthesize viewfinderView=_viewfinderView;
- (void)verifyViewOrdering;	// IMP=0x000000000017d3f4
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000017d22d
- (void)layoutSubviews;	// IMP=0x000000000017d138
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017d0da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017d06b
- (void)_commonCAMCameraViewControllerContainerViewInitialization;	// IMP=0x000000000017d065

@end
