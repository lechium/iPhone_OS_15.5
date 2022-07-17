//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel;

@interface NTKCircularSmallStackTextComplicationView
{
    NTKColoringLabel *_firstLineLabel;	// 96 = 0x60
    NTKColoringLabel *_secondLineLabel;	// 104 = 0x68
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x000000000024f66a
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000024f60e
- (void).cxx_destruct;	// IMP=0x000000000024fe82
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000024fe20
- (void)_updateLabelsForFontChange;	// IMP=0x000000000024fc77
- (void)setUsesMultiColor:(_Bool)arg1;	// IMP=0x000000000024fc36
- (void)setForegroundColor:(id)arg1;	// IMP=0x000000000024fbf5
- (void)_updateLabelColors;	// IMP=0x000000000024fba9
- (void)_updateForTemplateChange;	// IMP=0x000000000024fab2
- (void)layoutSubviews;	// IMP=0x000000000024f7af
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000024f686

@end
