//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKProgressProvider, NSNumber, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallRingImageComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;	// 128 = 0x80
    CLKProgressProvider *_progressProvider;	// 136 = 0x88
    NSNumber *_progressUpdateToken;	// 144 = 0x90
}

+ (double)_imageScaleForTemplate:(id)arg1;	// IMP=0x000000000024ed1f
+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x000000000024eb33
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000024eaa1
- (void).cxx_destruct;	// IMP=0x000000000024f5cc
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000024f560
- (void)updateRingWithProgressProvider:(id)arg1;	// IMP=0x000000000024f421
- (void)_updateForTemplateChange;	// IMP=0x000000000024f071
- (void)layoutSubviews;	// IMP=0x000000000024eb4f

@end

