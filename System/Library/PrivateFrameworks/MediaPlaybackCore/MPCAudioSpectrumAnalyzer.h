//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSMutableArray, _MPCAudioSpectrumAnalyzerStorage;

@interface MPCAudioSpectrumAnalyzer : NSObject
{
    struct opaqueMTAudioProcessingTap *_audioProcessingTap;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    _MPCAudioSpectrumAnalyzerStorage *_storage;	// 24 = 0x18
    NSMutableArray *_observers;	// 32 = 0x20
    MPCAudioSpectrumAnalyzer *_selfRef;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000140908
@property(retain, nonatomic) MPCAudioSpectrumAnalyzer *selfRef; // @synthesize selfRef=_selfRef;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) _MPCAudioSpectrumAnalyzerStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)_prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;	// IMP=0x000000000014076e
- (void)_analyzeSamples:(struct AudioBufferList *)arg1 numberFrames:(long long)arg2;	// IMP=0x0000000000140615
- (void)_destroyAudioTap;	// IMP=0x00000000001405ef
- (void)_createAudioTap;	// IMP=0x0000000000140565
- (_Bool)_shouldAttachAudioTap;	// IMP=0x00000000001404c6
- (void)_itemInsertedNotification:(id)arg1;	// IMP=0x0000000000140441
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001403c5
- (void)addObserver:(id)arg1;	// IMP=0x0000000000140311
- (void)configurePlayerItem:(id)arg1;	// IMP=0x00000000001402c6
- (void)dealloc;	// IMP=0x0000000000140271
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001401a8

@end

