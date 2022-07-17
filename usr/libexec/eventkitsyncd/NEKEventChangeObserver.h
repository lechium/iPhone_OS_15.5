//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEKEventStore, NSObject;
@protocol OS_dispatch_queue;

@interface NEKEventChangeObserver
{
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _sawSeqnoFailure;	// 40 = 0x28
    int _lastSequenceNumber;	// 44 = 0x2c
    NEKEventStore *_weakEventDatabaseController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000063274
@property(nonatomic) __weak NEKEventStore *weakEventDatabaseController; // @synthesize weakEventDatabaseController=_weakEventDatabaseController;
- (void)_sendChangesIfAvailable;	// IMP=0x0010000000063235
- (void)setPreviousDefaultEventCalendar:(id)arg1;	// IMP=0x0010000000063184
- (void)setPreviousDefaultTaskCalendar:(id)arg1;	// IMP=0x0010000000063010
- (id)previousDefaultEventCalendar;	// IMP=0x0010000000062f67
- (id)previousDefaultTaskCalendar;	// IMP=0x0010000000062dfd
- (void)setLastSequenceNumber:(int)arg1;	// IMP=0x0010000000062ce0
- (int)lastSequenceNumber;	// IMP=0x0010000000062c3e
- (id)_sequenceKey;	// IMP=0x0010000000062c31
- (void)moveChangeNumber:(long long)arg1 store:(id)arg2;	// IMP=0x0010000000062ada
- (void)_fetchChangesInto:(id)arg1 from:(int)arg2 inside:(id)arg3;	// IMP=0x0010000000061a67
- (id)fetchEventChangeSet;	// IMP=0x0010000000061846
- (_Bool)allRemindersInto:(id)arg1 filter:(CDUnknownBlockType)arg2 window:(id)arg3;	// IMP=0x0010000000061340
- (_Bool)allEventsInto:(id)arg1 filter:(CDUnknownBlockType)arg2 window:(id)arg3;	// IMP=0x0010000000060cf5
- (id)_masterEventsToSync;	// IMP=0x0010000000060c18
- (_Bool)allCalendarsInto:(id)arg1;	// IMP=0x00100000000602c1
- (_Bool)allSourcesInto:(id)arg1;	// IMP=0x001000000005fc94
- (void)notifyForDatabaseUpdates;	// IMP=0x001000000005fc48
- (void)notifyForDatabaseUpdatesIfNeeded;	// IMP=0x001000000005fc36
- (void)databaseDidChange;	// IMP=0x001000000005fa73
- (void)stopObservingChanges;	// IMP=0x001000000005f98e
- (void)beginObservingChanges;	// IMP=0x001000000005f894
- (void)_changeTrackingWasPurged:(id)arg1;	// IMP=0x001000000005f75b
- (void)_defaultCalendarChanged:(id)arg1;	// IMP=0x001000000005f6e6
- (id)_eventCalendarKey;	// IMP=0x001000000005f6d9
- (id)_taskCalendarKey;	// IMP=0x001000000005f6cc
- (id)eventDatabaseController;	// IMP=0x001000000005f6ba
- (void)dealloc;	// IMP=0x001000000005f67c
- (id)freshStoreAndChangeNumber:(long long *)arg1;	// IMP=0x001000000005f56d
- (id)initWithQueue:(id)arg1 environment:(id)arg2;	// IMP=0x001000000005f4c3
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000005f4b5

@end
