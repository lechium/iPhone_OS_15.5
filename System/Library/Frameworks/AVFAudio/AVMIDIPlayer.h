//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVMIDIPlayer : NSObject
{
    void *_impl;	// 8 = 0x8
}

@property(nonatomic) double currentPosition;
@property(readonly, nonatomic) double duration;
@property(nonatomic) float rate;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stop;	// IMP=0x000000000006fe91
- (void)play:(CDUnknownBlockType)arg1;	// IMP=0x000000000006fd41
- (void)prepareToPlay;	// IMP=0x000000000006fc03
- (double)beatsForHostTime:(unsigned long long)arg1;	// IMP=0x000000000006fbc1
- (unsigned long long)hostTimeForBeats:(double)arg1;	// IMP=0x000000000006fb7d
- (id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006fac2
- (id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006f9fb
- (void)dealloc;	// IMP=0x000000000006f8ec
- (void)finalize;	// IMP=0x000000000006f8ae
- (void)destroyBase;	// IMP=0x0000000000071919
- (id)initBase;	// IMP=0x000000000007170a
- (struct MIDIPlayerImpl *)impl;	// IMP=0x0000000000071700

@end

