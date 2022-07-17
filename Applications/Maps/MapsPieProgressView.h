//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface MapsPieProgressView : UIView
{
    double _borderLineWidth;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00400000007cc1e9
@property(nonatomic) double borderLineWidth; // @synthesize borderLineWidth=_borderLineWidth;
@property(readonly, nonatomic) double progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007cc956
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000007cc53b
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007cc524
@property(nonatomic) double progress;
- (double)progressLineWidth;	// IMP=0x00100000007cc435
- (void)setProgressLineWidth:(double)arg1;	// IMP=0x00100000007cc3e6
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;	// IMP=0x00100000007cc324
- (void)layoutSubviews;	// IMP=0x00100000007cc2f5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007cc1fa

@end
