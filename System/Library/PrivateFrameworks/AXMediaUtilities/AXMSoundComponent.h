//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;

@interface AXMSoundComponent
{
    AVAudioEngine *_engine;	// 8 = 0x8
    AVAudioPlayerNode *_oneShotSoundPlayer;	// 16 = 0x10
    NSMutableArray *_activeSounds;	// 24 = 0x18
    id _configChangedObserverToken;	// 32 = 0x20
}

+ (_Bool)isSupported;	// IMP=0x00000000000abee7
- (void).cxx_destruct;	// IMP=0x00000000000acdd2
@property(retain, nonatomic) id configChangedObserverToken; // @synthesize configChangedObserverToken=_configChangedObserverToken;
- (void)_logAudioFileInfo:(id)arg1;	// IMP=0x00000000000acda7
- (void)_stopActiveSound:(id)arg1;	// IMP=0x00000000000acd22
- (_Bool)_startEngineIfNeeded:(id *)arg1;	// IMP=0x00000000000acb59
- (void)_scheduleOneShotSound:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aca24
- (id)_scheduleActiveSound:(id)arg1;	// IMP=0x00000000000ac8f8
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ac1f9
- (_Bool)canHandleRequest:(id)arg1;	// IMP=0x00000000000ac155
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000abeef
- (void)dealloc;	// IMP=0x00000000000abe6a
- (id)init;	// IMP=0x00000000000abd62

@end

