//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, PlatformController;

__attribute__((visibility("hidden")))
@interface RouteGeniusSession : NSObject
{
    PlatformController *_platformController;	// 8 = 0x8
    GEOObserverHashTable *_observers;	// 16 = 0x10
    unsigned long long _sessionState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000089397f
@property(nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) GEOObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak PlatformController *platformController; // @synthesize platformController=_platformController;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000008938c1
- (void)addObserver:(id)arg1;	// IMP=0x001000000089384f
- (void)cleanupStateReplay;	// IMP=0x0010000000893812
- (void)replayCurrentState;	// IMP=0x0010000000893757
- (void)prepareToReplayCurrentState;	// IMP=0x001000000089371a
- (void)suspend;	// IMP=0x00100000008936dc
- (void)resume;	// IMP=0x001000000089369e
@property(readonly, nonatomic) unsigned long long sessionInitiator;
- (id)init;	// IMP=0x00100000008935b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
