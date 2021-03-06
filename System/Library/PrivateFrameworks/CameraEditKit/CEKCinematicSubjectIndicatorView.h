//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CameraEditKit/CAAnimationDelegate-Protocol.h>

@class NSString, UIImageView;

@interface CEKCinematicSubjectIndicatorView : UIView <CAAnimationDelegate>
{
    _Bool __crosshairsVisible;	// 8 = 0x8
    int __activeAnimationToActiveRoundedRectCount;	// 12 = 0xc
    long long _shape;	// 16 = 0x10
    UIImageView *__topLeftCornerView;	// 24 = 0x18
    UIImageView *__topRightCornerView;	// 32 = 0x20
    UIImageView *__bottomLeftCornerView;	// 40 = 0x28
    UIImageView *__bottomRightCornerView;	// 48 = 0x30
    UIImageView *__topCrosshairView;	// 56 = 0x38
    UIImageView *__leftCrosshairView;	// 64 = 0x40
    UIImageView *__bottomCrosshairView;	// 72 = 0x48
    UIImageView *__rightCrosshairView;	// 80 = 0x50
    UIView *__containerView;	// 88 = 0x58
}

+ (struct CGRect)minimumSuggestedBounds;	// IMP=0x0000000000004b27
+ (id)_cornerImageWithResizableCapInsetsNamed:(id)arg1;	// IMP=0x0000000000002b29
- (void).cxx_destruct;	// IMP=0x0000000000004c2b
@property(nonatomic) int _activeAnimationToActiveRoundedRectCount; // @synthesize _activeAnimationToActiveRoundedRectCount=__activeAnimationToActiveRoundedRectCount;
@property(nonatomic) _Bool _crosshairsVisible; // @synthesize _crosshairsVisible=__crosshairsVisible;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(readonly, nonatomic) UIImageView *_rightCrosshairView; // @synthesize _rightCrosshairView=__rightCrosshairView;
@property(readonly, nonatomic) UIImageView *_bottomCrosshairView; // @synthesize _bottomCrosshairView=__bottomCrosshairView;
@property(readonly, nonatomic) UIImageView *_leftCrosshairView; // @synthesize _leftCrosshairView=__leftCrosshairView;
@property(readonly, nonatomic) UIImageView *_topCrosshairView; // @synthesize _topCrosshairView=__topCrosshairView;
@property(readonly, nonatomic) UIImageView *_bottomRightCornerView; // @synthesize _bottomRightCornerView=__bottomRightCornerView;
@property(readonly, nonatomic) UIImageView *_bottomLeftCornerView; // @synthesize _bottomLeftCornerView=__bottomLeftCornerView;
@property(readonly, nonatomic) UIImageView *_topRightCornerView; // @synthesize _topRightCornerView=__topRightCornerView;
@property(readonly, nonatomic) UIImageView *_topLeftCornerView; // @synthesize _topLeftCornerView=__topLeftCornerView;
@property(nonatomic) long long shape; // @synthesize shape=_shape;
- (void)_updateVisibility;	// IMP=0x0000000000004a2c
- (void)_updateCrossHairViewsWithHeight:(double)arg1;	// IMP=0x000000000000441e
- (void)_updateCornerViews;	// IMP=0x0000000000003f4e
- (void)layoutSubviews;	// IMP=0x0000000000003da4
- (void)_performAnimationToActiveRoundedRect;	// IMP=0x0000000000003862
- (void)_performAnimationToActiveCorners;	// IMP=0x00000000000034bc
- (void)_updateCornerImageViewsForThickness:(long long)arg1 duration:(double)arg2 delay:(double)arg3;	// IMP=0x0000000000003034
- (void)setShape:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000002c1b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000274f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

