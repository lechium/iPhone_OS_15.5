//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKEmitterNode, SKNode, SKShader, SKSpriteNode, SKTexture, SKUniform;

@interface ETHeartbeatMessage
{
    SKNode *_heartNode;	// 8 = 0x8
    SKSpriteNode *_heartLines;	// 16 = 0x10
    SKSpriteNode *_heart;	// 24 = 0x18
    SKEmitterNode *_heartWisp;	// 32 = 0x20
    SKShader *_linesShader;	// 40 = 0x28
    SKShader *_heartShader;	// 48 = 0x30
    SKUniform *_speedUniform;	// 56 = 0x38
    SKUniform *_warpedTexAtlasUniform;	// 64 = 0x40
    SKUniform *_burTexUniform;	// 72 = 0x48
    SKUniform *_noiseTexUniform;	// 80 = 0x50
    SKUniform *_scaleUniform;	// 88 = 0x58
    SKUniform *_shaderTimeUniform;	// 96 = 0x60
    SKNode *_heartScale;	// 104 = 0x68
    float _hapticLoopPeriod;	// 112 = 0x70
    SKTexture *_heartbreakAtlas;	// 120 = 0x78
    _Bool _broken;	// 128 = 0x80
    float _beatsPerMinute;	// 132 = 0x84
    int _duration;	// 136 = 0x88
    float _scale;	// 140 = 0x8c
    double _rotation;	// 144 = 0x90
    double _heartbreakTime;	// 152 = 0x98
    struct CGPoint _normalizedCenter;	// 160 = 0xa0
}

+ (unsigned short)messageType;	// IMP=0x00000000000277c3
- (void).cxx_destruct;	// IMP=0x000000000002a194
@property(readonly, nonatomic) double heartbreakTime; // @synthesize heartbreakTime=_heartbreakTime;
@property(readonly, nonatomic, getter=isBroken) _Bool broken; // @synthesize broken=_broken;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) float beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
- (double)messageDuration;	// IMP=0x000000000002a090
- (void)_startAudioPlayback;	// IMP=0x000000000002a08a
- (void)_stopAudioPlayback;	// IMP=0x000000000002a084
- (void)setMute:(_Bool)arg1;	// IMP=0x000000000002a02d
- (id)description;	// IMP=0x0000000000029fa5
- (id)messageTypeAsString;	// IMP=0x0000000000029f98
- (void)breakHeart;	// IMP=0x0000000000029adf
- (void)stopPlaying;	// IMP=0x000000000002983d
- (void)startHeartbeat:(id)arg1 fastStart:(_Bool)arg2;	// IMP=0x00000000000297ba
- (void)startHeartbeat:(id)arg1;	// IMP=0x00000000000297a6
- (void)playBeatWithDuration:(double)arg1;	// IMP=0x00000000000293dc
- (void)moveHeartNodeByX:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x000000000002935f
- (void)_displayInScene:(id)arg1 useDuration:(_Bool)arg2 fastStart:(_Bool)arg3;	// IMP=0x0000000000027b0c
- (void)_displayInScene:(id)arg1 useDuration:(_Bool)arg2;	// IMP=0x0000000000027af7
- (void)displayInScene:(id)arg1;	// IMP=0x0000000000027a78
- (id)archiveData;	// IMP=0x0000000000027983
- (id)initWithArchiveData:(id)arg1;	// IMP=0x00000000000277ce

@end
