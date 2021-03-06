//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAFilter, UIColor;

@interface SSMaterial : NSObject
{
    CAFilter *_filter;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

+ (id)cropHandle;	// IMP=0x0000000000015400
+ (id)vellumOpacitySliderTrack;	// IMP=0x0000000000015381
+ (id)vellumOpacitySliderValueImage;	// IMP=0x0000000000015353
- (void).cxx_destruct;	// IMP=0x0000000000015587
- (void)applyToView:(id)arg1;	// IMP=0x000000000001547f
@property(readonly, nonatomic) double colorAlpha;
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) CAFilter *filter;
- (id)_initWithFilterType:(id)arg1 color:(id)arg2;	// IMP=0x0000000000015226

@end

