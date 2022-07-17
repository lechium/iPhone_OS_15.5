//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKSpendingSummary, UIImage, UIImageView;

@interface PKSpendingSummaryChartBarView : UIView
{
    UIImageView *_bar;	// 8 = 0x8
    UIView *_placeholder;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    double _barHeight;	// 32 = 0x20
    double _maximumHeight;	// 40 = 0x28
    PKSpendingSummary *_summary;	// 48 = 0x30
    CDUnknownBlockType _imageCompletion;	// 56 = 0x38
    _Atomic unsigned long long _generationCounter;	// 64 = 0x40
    _Bool _showPlaceholder;	// 72 = 0x48
    _Bool _blurDisabled;	// 73 = 0x49
    double _minimumHeight;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000041c3be
@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic, getter=isBlurDisabled) _Bool blurDisabled; // @synthesize blurDisabled=_blurDisabled;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
- (void)_updatePlaceholder;	// IMP=0x000000000041c1ae
- (void)_generateImageForSummary:(id)arg1 barHeight:(double)arg2 maximumHeight:(double)arg3 synchronous:(_Bool)arg4;	// IMP=0x000000000041b476
- (void)_callCompletion;	// IMP=0x000000000041b418
- (void)_updateImageWithImage:(id)arg1;	// IMP=0x000000000041b37b
- (void)layoutSubviews;	// IMP=0x000000000041b27c
- (void)configureWithSummary:(id)arg1 maximumHeight:(double)arg2 barHeight:(double)arg3 synchronous:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000041b0c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000041aee7

@end
