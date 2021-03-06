//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HFColorProfile;

@interface HUQuickControlColorViewProfile
{
    _Bool _supportsRGBColor;	// 56 = 0x38
    _Bool _supportsNaturalLighting;	// 57 = 0x39
    _Bool _naturalLightingEnabled;	// 58 = 0x3a
    id <HFColorProfile> _colorProfile;	// 64 = 0x40
    unsigned long long _mode;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000046250e
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) id <HFColorProfile> colorProfile; // @synthesize colorProfile=_colorProfile;
@property(nonatomic) _Bool naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property(nonatomic) _Bool supportsNaturalLighting; // @synthesize supportsNaturalLighting=_supportsNaturalLighting;
@property(nonatomic) _Bool supportsRGBColor; // @synthesize supportsRGBColor=_supportsRGBColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000462378
- (id)init;	// IMP=0x0000000000462301

@end

