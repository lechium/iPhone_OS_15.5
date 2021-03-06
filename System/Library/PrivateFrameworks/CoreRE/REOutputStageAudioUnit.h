//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AVAudioPCMBuffer;

__attribute__((visibility("hidden")))
@interface REOutputStageAudioUnit : AUAudioUnit
{
    AVAudioPCMBuffer *_inputBuffer;	// 8 = 0x8
    AUAudioUnitBus *_inputBus;	// 16 = 0x10
    AUAudioUnitBusArray *_inputBusArray;	// 24 = 0x18
    AUAudioUnitBus *_outputBus;	// 32 = 0x20
    AUAudioUnitBusArray *_outputBusArray;	// 40 = 0x28
    struct atomic<int> _clipCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002fe094
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x00000000002fde5a
- (id)channelCapabilities;	// IMP=0x00000000002fde4d
- (id)outputBusses;	// IMP=0x00000000002fde38
- (id)inputBusses;	// IMP=0x00000000002fde23
- (void)deallocateRenderResources;	// IMP=0x00000000002fddd9
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x00000000002fdd09
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000002fdaca

@end

