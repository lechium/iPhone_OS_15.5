//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationBaseCircularClosedGaugeTextView
{
    NTKColoringLabel *_centerLabel;	// 8 = 0x8
    NTKRichComplicationRingProgressView *_progressView;	// 16 = 0x10
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x0000000000090a17
- (void).cxx_destruct;	// IMP=0x0000000000090b30
@property(retain, nonatomic) NTKRichComplicationRingProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NTKColoringLabel *centerLabel; // @synthesize centerLabel=_centerLabel;
- (void)updateMonochromeColor;	// IMP=0x0000000000090aa0
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x0000000000090a48
- (void)_editingDidEnd;	// IMP=0x0000000000090a2b
- (void)layoutSubviews;	// IMP=0x0000000000090711
- (id)initWithFamily:(long long)arg1;	// IMP=0x00000000000903fe

@end
