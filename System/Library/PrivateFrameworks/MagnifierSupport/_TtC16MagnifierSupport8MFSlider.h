//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISlider.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16MagnifierSupport8MFSlider : UISlider
{
    MISSING_TYPE *tickValue;	// 8 = 0x8
    MISSING_TYPE *tickHeight;	// 16 = 0x10
    MISSING_TYPE *lastTickRect;	// 24 = 0x18
    MISSING_TYPE *trackColor;	// 64 = 0x40
    MISSING_TYPE *maxOffsetFromThumbRect;	// 72 = 0x48
    MISSING_TYPE *extraTouchInset;	// 80 = 0x50
    MISSING_TYPE *tickFeedbackGenerator;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002db80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002db20
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000002da00
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x000000000002d930
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002d8c0
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000002d6f0
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000002d590
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000002ce70
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ce50

@end

