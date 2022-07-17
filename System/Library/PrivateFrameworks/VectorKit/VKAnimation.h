//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol VKAnimationRunner;

@interface VKAnimation : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    id <VKAnimationRunner> _runner;	// 32 = 0x20
    long long _state;	// 40 = 0x28
    float _frequency;	// 48 = 0x30
    _Bool _runsForever;	// 52 = 0x34
}

@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool runsForever; // @synthesize runsForever=_runsForever;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTimerFired:(double)arg1;	// IMP=0x00000000000eb951
- (void)resume;	// IMP=0x00000000000eb929
- (void)pause;	// IMP=0x00000000000eb91b
- (void)stop;	// IMP=0x00000000000eb8ff
- (void)stopAnimation:(_Bool)arg1;	// IMP=0x00000000000eb873
- (void)transferToRunner:(id)arg1;	// IMP=0x00000000000eb869
- (void)startWithRunner:(id)arg1;	// IMP=0x00000000000eb850
- (id)description;	// IMP=0x00000000000eb7f0
- (void)dealloc;	// IMP=0x00000000000eb7a6
- (id)initWithPriority:(long long)arg1;	// IMP=0x00000000000eb780
- (id)initWithPriority:(long long)arg1 name:(id)arg2;	// IMP=0x00000000000eb757
- (id)initWithName:(id)arg1;	// IMP=0x00000000000eb71c
@property(readonly, nonatomic) _Bool timed;
@property(readonly, nonatomic) _Bool hasFrequency;
@property(nonatomic) double duration;
@property(readonly, nonatomic) _Bool running;

@end
