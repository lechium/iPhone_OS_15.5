//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray;

__attribute__((visibility("hidden")))
@interface REGainRampingAudioUnit : AUAudioUnit
{
    AUAudioUnitBus *_inputBus;	// 8 = 0x8
    AUAudioUnitBusArray *_inputBusArray;	// 16 = 0x10
    AUAudioUnitBus *_outputBus;	// 24 = 0x18
    AUAudioUnitBusArray *_outputBusArray;	// 32 = 0x20
    struct unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> _rampGainQueue;	// 40 = 0x28
    float _targetGain;	// 48 = 0x30
    unsigned int _remainingRampFrames;	// 52 = 0x34
    float _currentGain;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x00000000002f0695
- (void).cxx_destruct;	// IMP=0x00000000002f0631
@property(readonly) float currentGain; // @synthesize currentGain=_currentGain;
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x00000000002f0286
- (void)fadeToGain:(float)arg1 duration:(double)arg2;	// IMP=0x00000000002f0193
- (id)channelCapabilities;	// IMP=0x00000000002f0186
- (id)outputBusses;	// IMP=0x00000000002f0171
- (id)inputBusses;	// IMP=0x00000000002f015c
- (void)deallocateRenderResources;	// IMP=0x00000000002f012d
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x00000000002f00fe
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000002efcc6

@end
