//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MDLPhysicallyPlausibleLight
{
    float _lumens;	// 40 = 0x28
    float _innerConeAngle;	// 44 = 0x2c
    float _outerConeAngle;	// 48 = 0x30
    float _attenuationStartDistance;	// 52 = 0x34
    float _attenuationEndDistance;	// 56 = 0x38
    float _attenuationFalloffExponent;	// 60 = 0x3c
}

@property(nonatomic) float attenuationFalloffExponent; // @synthesize attenuationFalloffExponent=_attenuationFalloffExponent;
@property(nonatomic) float attenuationEndDistance; // @synthesize attenuationEndDistance=_attenuationEndDistance;
@property(nonatomic) float attenuationStartDistance; // @synthesize attenuationStartDistance=_attenuationStartDistance;
@property(nonatomic) float outerConeAngle; // @synthesize outerConeAngle=_outerConeAngle;
@property(nonatomic) float innerConeAngle; // @synthesize innerConeAngle=_innerConeAngle;
@property(nonatomic) float lumens; // @synthesize lumens=_lumens;
- (void)setColorByTemperature:(float)arg1;	// IMP=0x0000000000339145
@property(nonatomic) struct CGColor *color;
- (id)init;	// IMP=0x0000000000338f54

@end

