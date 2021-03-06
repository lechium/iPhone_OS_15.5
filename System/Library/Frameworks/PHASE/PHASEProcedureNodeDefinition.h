//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHASEProcedureNodeDefinition
{
    int _maxPolyphony;	// 80 = 0x50
    long long _cullOption;	// 88 = 0x58
    long long _playbackMode;	// 96 = 0x60
    long long _voiceStealingType;	// 104 = 0x68
    double _referenceGainDbSpl;	// 112 = 0x70
}

+ (id)new;	// IMP=0x0000000000120974
@property(nonatomic) double referenceGainDbSpl; // @synthesize referenceGainDbSpl=_referenceGainDbSpl;
@property(nonatomic) long long voiceStealingType; // @synthesize voiceStealingType=_voiceStealingType;
@property(readonly, nonatomic) int maxPolyphony; // @synthesize maxPolyphony=_maxPolyphony;
@property(nonatomic) long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(nonatomic) long long cullOption; // @synthesize cullOption=_cullOption;
- (id)initInternal:(id)arg1 maxPolyphony:(int)arg2 voiceStealingType:(long long)arg3;	// IMP=0x000000000012098c
- (id)init;	// IMP=0x0000000000120936

@end

