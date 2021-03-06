//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHASENumberMetaParameterDefinition;

@interface PHASEWaterProcedureNodeDefinition
{
    double _fallRate;	// 120 = 0x78
    double _averageDropDiameter;	// 128 = 0x80
    double _maxDropDiameter;	// 136 = 0x88
    double _impulseShape;	// 144 = 0x90
    double _impulseGainExponent;	// 152 = 0x98
    double _impulseGain;	// 160 = 0xa0
    double _chirpRiseRate;	// 168 = 0xa8
    double _baseFrequencyMultiplier;	// 176 = 0xb0
    double _bubbleGain;	// 184 = 0xb8
    PHASENumberMetaParameterDefinition *_fallRateMetaParameterDefinition;	// 192 = 0xc0
    PHASENumberMetaParameterDefinition *_averageDropDiameterMetaParameterDefinition;	// 200 = 0xc8
    PHASENumberMetaParameterDefinition *_maxDropDiameterMetaParameterDefinition;	// 208 = 0xd0
    PHASENumberMetaParameterDefinition *_impulseShapeMetaParameterDefinition;	// 216 = 0xd8
    PHASENumberMetaParameterDefinition *_impulseGainExponentMetaParameterDefinition;	// 224 = 0xe0
    PHASENumberMetaParameterDefinition *_impulseGainMetaParameterDefinition;	// 232 = 0xe8
    PHASENumberMetaParameterDefinition *_chirpRiseRateMetaParameterDefinition;	// 240 = 0xf0
    PHASENumberMetaParameterDefinition *_baseFrequencyMultiplierMetaParameterDefinition;	// 248 = 0xf8
    PHASENumberMetaParameterDefinition *_bubbleGainMetaParameterDefinition;	// 256 = 0x100
}

+ (id)new;	// IMP=0x0000000000120d39
- (void).cxx_destruct;	// IMP=0x00000000001217ce
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *bubbleGainMetaParameterDefinition; // @synthesize bubbleGainMetaParameterDefinition=_bubbleGainMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *baseFrequencyMultiplierMetaParameterDefinition; // @synthesize baseFrequencyMultiplierMetaParameterDefinition=_baseFrequencyMultiplierMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *chirpRiseRateMetaParameterDefinition; // @synthesize chirpRiseRateMetaParameterDefinition=_chirpRiseRateMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainMetaParameterDefinition; // @synthesize impulseGainMetaParameterDefinition=_impulseGainMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *impulseGainExponentMetaParameterDefinition; // @synthesize impulseGainExponentMetaParameterDefinition=_impulseGainExponentMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *impulseShapeMetaParameterDefinition; // @synthesize impulseShapeMetaParameterDefinition=_impulseShapeMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *maxDropDiameterMetaParameterDefinition; // @synthesize maxDropDiameterMetaParameterDefinition=_maxDropDiameterMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *averageDropDiameterMetaParameterDefinition; // @synthesize averageDropDiameterMetaParameterDefinition=_averageDropDiameterMetaParameterDefinition;
@property(retain, nonatomic) PHASENumberMetaParameterDefinition *fallRateMetaParameterDefinition; // @synthesize fallRateMetaParameterDefinition=_fallRateMetaParameterDefinition;
@property(nonatomic) double bubbleGain; // @synthesize bubbleGain=_bubbleGain;
@property(nonatomic) double baseFrequencyMultiplier; // @synthesize baseFrequencyMultiplier=_baseFrequencyMultiplier;
@property(nonatomic) double chirpRiseRate; // @synthesize chirpRiseRate=_chirpRiseRate;
@property(nonatomic) double impulseGain; // @synthesize impulseGain=_impulseGain;
@property(nonatomic) double impulseGainExponent; // @synthesize impulseGainExponent=_impulseGainExponent;
@property(nonatomic) double impulseShape; // @synthesize impulseShape=_impulseShape;
@property(nonatomic) double maxDropDiameter; // @synthesize maxDropDiameter=_maxDropDiameter;
@property(nonatomic) double averageDropDiameter; // @synthesize averageDropDiameter=_averageDropDiameter;
@property(nonatomic) double fallRate; // @synthesize fallRate=_fallRate;
- (id)initWithMixerDefinition:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3;	// IMP=0x0000000000120e38
- (id)initWithMixerDefinition:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3 identifier:(id)arg4;	// IMP=0x0000000000120d75
- (id)initWithMixerDefinition:(id)arg1 referenceGainDbSpl:(double)arg2 maxPolyphony:(int)arg3 voiceStealingType:(long long)arg4;	// IMP=0x0000000000120d63
- (id)initWithMixerDefinition:(id)arg1 referenceGainDbSpl:(double)arg2 maxPolyphony:(int)arg3 voiceStealingType:(long long)arg4 uid:(id)arg5;	// IMP=0x0000000000120d51
- (id)init;	// IMP=0x0000000000120cfb

@end

