//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SSSCropOverlayView : UIView
{
    NSArray *_cornerViews;	// 8 = 0x8
    NSArray *_grabberViews;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    NSArray *_lineViews;	// 32 = 0x20
    double _cornerGrabberAlpha;	// 40 = 0x28
    double;	// 48 = 0x30
    double _lineGrabberAlpha;	// 56 = 0x38
}

+ (double)_outsetAmountForHandles;	// IMP=0x0040000000035816
- (void).cxx_destruct;	// IMP=0x0020000000036929
@property(nonatomic) double lineGrabberAlpha; // @synthesize lineGrabberAlpha=_lineGrabberAlpha;
@property(nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property(nonatomic) double cornerGrabberAlpha; // @synthesize cornerGrabberAlpha=_cornerGrabberAlpha;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000036293
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000036068
- (id)_viewsToHitTest;	// IMP=0x001000000003603d
- (struct SSSCropOverlayGrabPosition)grabPositionForLocation:(struct CGPoint)arg1;	// IMP=0x0010000000035f96
- (void)layoutSubviews;	// IMP=0x0010000000035b3d
- (struct CGRect)_frameForGrabberAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x0010000000035a40
- (struct CGRect)_frameForLineAtEdge:(unsigned long long)arg1 inSize:(struct CGSize)arg2 dimension:(double)arg3;	// IMP=0x0010000000035921
- (struct CGRect)_frameForViewInCorner:(unsigned long long)arg1 inSize:(struct CGSize)arg2 cornerSize:(struct CGSize)arg3;	// IMP=0x001000000003582f
- (id)_orderedRectEdges;	// IMP=0x0010000000035809
- (id)_orderedRectCorners;	// IMP=0x00100000000357fc
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0010000000035795
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000035050

@end
