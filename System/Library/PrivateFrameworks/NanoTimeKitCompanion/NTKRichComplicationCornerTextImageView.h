//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerTextImageView
{
    NTKRichComplicationImageView *_imageView;	// 8 = 0x8
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;	// IMP=0x000000000002d01d
+ (_Bool)handlesComplicationTemplate:(id)arg1;	// IMP=0x000000000002cfd2
- (void).cxx_destruct;	// IMP=0x000000000002d219
- (void)updateMonochromeColor;	// IMP=0x000000000002d1b4
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x000000000002d140
- (void)_editingDidEnd;	// IMP=0x000000000002d103
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x000000000002d02a
- (long long)tritiumUpdateMode;	// IMP=0x000000000002cf40
- (void)setPaused:(_Bool)arg1;	// IMP=0x000000000002ceea
- (id)_outerView;	// IMP=0x000000000002ce24

@end
