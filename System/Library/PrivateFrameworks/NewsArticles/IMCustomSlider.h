//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISlider.h>

@class CALayer, NSMutableDictionary, UIImage;
@protocol IMCustomSliderDelegate;

@interface IMCustomSlider : UISlider
{
    struct CGPoint _offset;	// 8 = 0x8
    _Bool _fineScrubbing;	// 24 = 0x18
    struct CGPoint _previousLocation;	// 32 = 0x20
    struct CGPoint _beginLocation;	// 48 = 0x30
    double _factor;	// 64 = 0x40
    int _speed;	// 72 = 0x48
    UIImage *_thumb;	// 80 = 0x50
    UIImage *_highlightedThumb;	// 88 = 0x58
    float _breadcrumbValue;	// 96 = 0x60
    id <IMCustomSliderDelegate> _delegate;	// 104 = 0x68
    double _fineScrubbingVerticalRange;	// 112 = 0x70
    NSMutableDictionary *_perStateContent;	// 120 = 0x78
    CALayer *_breadcrumbLayer;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000004726
@property(nonatomic) float breadcrumbValue; // @synthesize breadcrumbValue=_breadcrumbValue;
@property(retain, nonatomic) CALayer *breadcrumbLayer; // @synthesize breadcrumbLayer=_breadcrumbLayer;
@property(retain, nonatomic) NSMutableDictionary *perStateContent; // @synthesize perStateContent=_perStateContent;
@property(nonatomic) double fineScrubbingVerticalRange; // @synthesize fineScrubbingVerticalRange=_fineScrubbingVerticalRange;
@property(retain, nonatomic) UIImage *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) UIImage *highlightedThumb; // @synthesize highlightedThumb=_highlightedThumb;
@property(nonatomic) int speed; // @synthesize speed=_speed;
@property(nonatomic) __weak id <IMCustomSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fineScrubbing; // @synthesize fineScrubbing=_fineScrubbing;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (void)_setImage:(id)arg1 key:(id)arg2 forState:(unsigned long long)arg3;	// IMP=0x00000000000043da
- (id)_imageForKey:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000004284
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000004183
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003fc6
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003b07
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000003807
- (void)updateFactor:(double)arg1;	// IMP=0x0000000000003732
- (float)_scaleForVerticalPosition:(double)arg1;	// IMP=0x0000000000003639
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;	// IMP=0x0000000000003560
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;	// IMP=0x0000000000003442
- (void)setTrackBreadcrumbImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000003394
- (id)trackBreadcrumbImageForState:(unsigned long long)arg1;	// IMP=0x0000000000003378
- (void)layoutSubviews;	// IMP=0x0000000000003053
- (void)dealloc;	// IMP=0x0000000000002fc3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000002f69
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002f20

@end

