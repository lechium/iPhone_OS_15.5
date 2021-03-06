//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKProgressProvider, NSNumber, UIView;
@protocol NTKComplicationImageView;

@interface NTKUtilitySmallRingImageComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;	// 280 = 0x118
    CLKProgressProvider *_progressProvider;	// 288 = 0x120
    NSNumber *_progressUpdateToken;	// 296 = 0x128
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x00000000002ce1af
- (void).cxx_destruct;	// IMP=0x00000000002ceabc
- (id)ringColor;	// IMP=0x00000000002cea1f
- (void)_enumerateColoringStackedImagesViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ce9c3
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ce957
- (void)updateRingWithProgressProvider:(id)arg1;	// IMP=0x00000000002ce7b9
- (void)_updateForTemplateChange;	// IMP=0x00000000002ce4be
- (void)_updateWithImageProvider:(id)arg1;	// IMP=0x00000000002ce36f
- (void)layoutSubviews;	// IMP=0x00000000002ce20b

@end

