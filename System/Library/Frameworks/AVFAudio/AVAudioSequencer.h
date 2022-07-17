//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMusicTrack, NSArray, NSDictionary;

@interface AVAudioSequencer : NSObject
{
    void *_impl;	// 8 = 0x8
}

@property(readonly, nonatomic) AVMusicTrack *tempoTrack;
- (void)setTempoTrack:(id)arg1;	// IMP=0x00000000000bacce
- (id)trackArray;	// IMP=0x00000000000bacc0
- (void)setTrackArray:(id)arg1;	// IMP=0x00000000000bac8f
- (double)beatsForSeconds:(double)arg1;	// IMP=0x00000000000bac78
- (double)secondsForBeats:(double)arg1;	// IMP=0x00000000000bac62
- (id)getTempoTrack;	// IMP=0x00000000000bac3f
@property(readonly, nonatomic) NSArray *tracks;
- (id)dataWithSMPTEResolution:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000babad
- (_Bool)writeToURL:(id)arg1 SMPTEResolution:(long long)arg2 replaceExisting:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000bab5e
- (_Bool)loadFromData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000baadf
- (_Bool)loadFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000baa60
@property(readonly, nonatomic) NSDictionary *userInfo;
- (void)setupTracks;	// IMP=0x00000000000ba67d
- (void)setupTrackArray;	// IMP=0x00000000000ba62d
- (void)cleanTracks;	// IMP=0x00000000000ba5fb
- (unsigned long long)numberOfTracks;	// IMP=0x00000000000ba4b9
- (void)dealloc;	// IMP=0x00000000000ba45e
- (id)initWithImpl:(struct AVAudioSequencerImpl *)arg1;	// IMP=0x00000000000ba400
- (id)initWithAudioEngine:(id)arg1;	// IMP=0x00000000000b9f0e
- (id)init;	// IMP=0x00000000000b9935
- (void)stop;	// IMP=0x00000000000bdae3
- (_Bool)startAndReturnError:(id *)arg1;	// IMP=0x00000000000bdaa3
- (void)prepareToPlay;	// IMP=0x00000000000bd96f
- (double)beatsForHostTime:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000bd825
- (unsigned long long)hostTimeForBeats:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000bd6e2
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(nonatomic) double currentPositionInBeats;
@property(nonatomic) double currentPositionInSeconds;

@end
