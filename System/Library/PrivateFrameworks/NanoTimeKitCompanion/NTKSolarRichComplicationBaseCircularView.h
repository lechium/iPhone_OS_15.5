//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationBaseCircularView
{
    NTKSolarRichComplicationFullColorImageView *_solarImageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bfe30
- (void)_updateWithLocation:(id)arg1 useIdealizedTime:(_Bool)arg2 forceUpdate:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000000000bfe13
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;	// IMP=0x00000000000bfe03
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000bfd83
- (void)updateMonochromeColor;	// IMP=0x00000000000bfd66
- (void)transitionToMonochromeWithFraction:(double)arg1;	// IMP=0x00000000000bfd49
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000000bfc62
- (void)layoutSubviews;	// IMP=0x00000000000bfb0f
- (id)initWithFamily:(long long)arg1;	// IMP=0x00000000000bf9b5

@end
