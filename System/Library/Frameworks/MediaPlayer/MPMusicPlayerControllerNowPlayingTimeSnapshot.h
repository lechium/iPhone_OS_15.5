//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@interface MPMusicPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding>
{
    double _elapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    _Bool _live;	// 32 = 0x20
    float _rate;	// 36 = 0x24
    long long _state;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d402b
+ (id)snapshotWithElapsedTime:(double)arg1 duration:(double)arg2 rate:(float)arg3 atTimestamp:(double)arg4 state:(long long)arg5;	// IMP=0x00000000001d3fbc
+ (id)liveSnapshotWithRate:(float)arg1 state:(long long)arg2;	// IMP=0x00000000001d3f79
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic, getter=isLive) _Bool live; // @synthesize live=_live;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d3e94
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d3d98
@property(readonly, nonatomic) double currentTime;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d3bca
- (unsigned long long)hash;	// IMP=0x00000000001d3b16
- (id)_init;	// IMP=0x00000000001d3ae7

@end
