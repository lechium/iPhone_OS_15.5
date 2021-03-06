//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VUIPlaybackReporter : NSObject
{
    _Bool _enforceSinglePlaybackSession;	// 8 = 0x8
    NSMutableArray *_sessions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000033797
@property(retain, nonatomic) NSMutableArray *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) _Bool enforceSinglePlaybackSession; // @synthesize enforceSinglePlaybackSession=_enforceSinglePlaybackSession;
- (id)_createSessionForPlayer:(id)arg1;	// IMP=0x00000000000336b3
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;	// IMP=0x00000000000335f4
- (_Bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;	// IMP=0x000000000003354a
- (void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4;	// IMP=0x0000000000033019
- (void)_playerCurrentMediaItemWillChange:(id)arg1;	// IMP=0x0000000000032e7a
- (void)_playerStateWillChange:(id)arg1;	// IMP=0x0000000000032d41
- (void)_beginSession:(id)arg1;	// IMP=0x0000000000032cb6
- (void)_endSession:(id)arg1;	// IMP=0x0000000000032c2b
- (void)_endSessions:(id)arg1;	// IMP=0x0000000000032bb2
- (id)_sessionForPlayer:(id)arg1;	// IMP=0x0000000000032a11
- (void)_removeObservers;	// IMP=0x00000000000329be
- (void)_registerObservers;	// IMP=0x0000000000032935
- (void)_logWithFormat:(id)arg1;	// IMP=0x000000000003279d
- (void)dealloc;	// IMP=0x000000000003275f
- (id)init;	// IMP=0x00000000000326f5

@end

