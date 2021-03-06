//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UIView (TSDUIView)
@property(copy, nonatomic) UIColor *tsdBackgroundColor;
@property(nonatomic) double tsdAlpha;
- (id)ts_windowForView;	// IMP=0x00000000003e4616
- (id)childAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000003e4488
- (void)translateToView:(id)arg1 belowSubview:(id)arg2;	// IMP=0x00000000003e446e
- (void)translateToView:(id)arg1 aboveSubview:(id)arg2;	// IMP=0x00000000003e4451
- (void)translateToView:(id)arg1;	// IMP=0x00000000003e4437
- (void)translateAndScaleToView:(id)arg1 belowSubview:(id)arg2;	// IMP=0x00000000003e441a
- (void)translateAndScaleToView:(id)arg1 aboveSubview:(id)arg2;	// IMP=0x00000000003e43fa
- (void)translateAndScaleToView:(id)arg1;	// IMP=0x00000000003e43dd
- (void)p_translateToView:(id)arg1 above:(_Bool)arg2 siblingView:(id)arg3 shouldScale:(_Bool)arg4;	// IMP=0x00000000003e41f7
@end

