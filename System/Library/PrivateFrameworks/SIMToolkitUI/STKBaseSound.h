//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/STKSound-Protocol.h>

@class BSTimer, NSString;

__attribute__((visibility("hidden")))
@interface STKBaseSound : NSObject <STKSound>
{
    BSTimer *_timer;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    _Bool _playsOnce;	// 24 = 0x18
    _Bool _isPlaying;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000013572
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) _Bool playsOnce; // @synthesize playsOnce=_playsOnce;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)_sync_stopSound;	// IMP=0x0000000000013480
- (void)_sync_playSound;	// IMP=0x0000000000013161
- (void)_reallyStopSound;	// IMP=0x000000000001315b
- (void)_reallyPlaySound;	// IMP=0x0000000000013155
- (void)stopSound;	// IMP=0x0000000000013105
- (void)playSound;	// IMP=0x00000000000130b5
- (void)dealloc;	// IMP=0x0000000000012ff9
- (id)initWithDuration:(double)arg1;	// IMP=0x0000000000012f03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

