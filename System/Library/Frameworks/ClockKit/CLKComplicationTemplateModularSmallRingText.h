//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallRingText
{
    float _fillFraction;	// 64 = 0x40
    CLKTextProvider *_textProvider;	// 72 = 0x48
    long long _ringStyle;	// 80 = 0x50
}

+ (id)templateWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;	// IMP=0x000000000000fb44
- (void).cxx_destruct;	// IMP=0x000000000000fca6
@property(nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property(nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fc02
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fbd8
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fbae
- (long long)compatibleFamily;	// IMP=0x000000000000fba6
- (id)initWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;	// IMP=0x000000000000faa6

@end
