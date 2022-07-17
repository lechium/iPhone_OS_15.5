//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@interface SKStarRatingControl : UIControl
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    UILabel *_explanationLabel;	// 16 = 0x10
    UIImageView *_foregroundImageView;	// 24 = 0x18
    struct CGSize _hitPadding;	// 32 = 0x20
    double _starWidth;	// 48 = 0x30
    struct CGPoint _trackingLastPoint;	// 56 = 0x38
    struct CGPoint _trackingStartPoint;	// 72 = 0x48
    float _value;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000035bdf
@property(nonatomic) double starWidth; // @synthesize starWidth=_starWidth;
- (void)_updateValueForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000035a7c
- (id)_newExplanationLabel;	// IMP=0x00000000000359aa
- (struct CGRect)_foregroundImageClipBounds;	// IMP=0x000000000003591d
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000358ce
- (struct CGRect)hitRect;	// IMP=0x000000000003584e
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000357da
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000035748
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000035710
- (_Bool)canHandleSwipes;	// IMP=0x0000000000035708
- (_Bool)_alwaysHandleScrollerMouseEvent;	// IMP=0x0000000000035700
@property(nonatomic) float value;
@property(copy, nonatomic) NSString *explanationText;
- (void)setHitPadding:(struct CGSize)arg1;	// IMP=0x00000000000355a3
- (void)sizeToFit;	// IMP=0x0000000000035500
- (void)layoutSubviews;	// IMP=0x000000000003539f
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;	// IMP=0x0000000000035203

@end
