//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationImageView;

@interface NTKRichComplicationBaseCircularClosedGaugeImageView
{
    NTKRichComplicationImageView *_imageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002d498e
@property(retain, nonatomic) NTKRichComplicationImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateMonochromeColor;	// IMP=0x00000000002d491d
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x00000000002d48c7
- (long long)tritiumUpdateMode;	// IMP=0x00000000002d4835
- (void)setPaused:(_Bool)arg1;	// IMP=0x00000000002d47df
- (id)gaugeProviderFromTemplate:(id)arg1;	// IMP=0x00000000002d47ca
- (id)innerView;	// IMP=0x00000000002d4701

@end

