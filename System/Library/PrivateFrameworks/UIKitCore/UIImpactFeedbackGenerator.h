//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator
{
    long long _style;	// 8 = 0x8
}

+ (Class)_configurationClass;	// IMP=0x000000000063c65b
- (id)_stats_key;	// IMP=0x000000000063ca3e
- (id)_styleString;	// IMP=0x000000000063c9fa
- (id)_ui_descriptionBuilder;	// IMP=0x000000000063c957
- (void)impactOccurredWithIntensity:(double)arg1;	// IMP=0x000000000063c92d
- (void)impactOccurred;	// IMP=0x000000000063c913
- (void)_impactOccurredWithIntensity:(double)arg1;	// IMP=0x000000000063c78e
@property(readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;	// IMP=0x000000000063c6cc
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000000063c66c

@end

