//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPTimeChangeListener : NSObject <HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSource>
{
    HDSPEnvironment *environment;	// 8 = 0x8
    HKSPObserverSet *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004f60c
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)handleTimeZoneChange;	// IMP=0x000000000004f3bf
- (void)handleSignificantTimeChange;	// IMP=0x000000000004f1a4
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;	// IMP=0x000000000004f0c8
- (void)environmentDidBecomeReady:(id)arg1;	// IMP=0x000000000004f0c2
- (void)environmentWillBecomeReady:(id)arg1;	// IMP=0x000000000004f073
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004f056
- (void)addObserver:(id)arg1;	// IMP=0x000000000004f039
- (id)initWithEnvironment:(id)arg1;	// IMP=0x000000000004ef6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end
