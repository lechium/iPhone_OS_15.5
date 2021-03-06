//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView
{
    NTKColoringLabel *_label;	// 96 = 0x60
    UIView<NTKComplicationImageView> *_imageView;	// 104 = 0x68
}

+ (double)_imageScaleForTemplate:(id)arg1;	// IMP=0x000000000025042b
+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x000000000024ff0f
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000024feb3
- (void).cxx_destruct;	// IMP=0x0000000000250a88
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000250a26
- (void)_updateLabelsForFontChange;	// IMP=0x0000000000250926
- (void)_updateForTemplateChange;	// IMP=0x000000000025077d
- (void)layoutSubviews;	// IMP=0x0000000000250015
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000024ff2b

@end

