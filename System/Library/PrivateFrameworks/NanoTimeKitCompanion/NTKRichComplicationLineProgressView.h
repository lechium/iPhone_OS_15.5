//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKRichComplicationLineProgressView
{
    long long _progressFillStyle;	// 8 = 0x8
}

@property(readonly, nonatomic) long long progressFillStyle; // @synthesize progressFillStyle=_progressFillStyle;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;	// IMP=0x00000000001d292c
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;	// IMP=0x00000000001d2877
- (void)setProgress:(double)arg1;	// IMP=0x00000000001d27d2
- (id)initForFamily:(long long)arg1 device:(id)arg2 progressFillStyle:(long long)arg3;	// IMP=0x00000000001d265a

@end
