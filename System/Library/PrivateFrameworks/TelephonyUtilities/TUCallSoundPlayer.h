//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUSoundPlayer;

@interface TUCallSoundPlayer : NSObject
{
    long long _currentlyPlayingSoundType;	// 8 = 0x8
    TUSoundPlayer *_player;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008b821
@property(retain, nonatomic) TUSoundPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long currentlyPlayingSoundType; // @synthesize currentlyPlayingSoundType=_currentlyPlayingSoundType;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)stopPlaying;	// IMP=0x000000000008b754
- (_Bool)attemptToPlayDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b58a
- (_Bool)attemptToPlayDescriptor:(id)arg1;	// IMP=0x000000000008b576
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008b44e
- (_Bool)attemptToPlaySoundType:(long long)arg1 forCall:(id)arg2;	// IMP=0x000000000008b439
- (void)dealloc;	// IMP=0x000000000008b3fb
- (id)init;	// IMP=0x000000000008b390

@end
