//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>

@class EKEventStore, NSString, SGSqlEntityStore;

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver>
{
    EKEventStore *_externalEKStore;	// 8 = 0x8
    SGSqlEntityStore *_store;	// 16 = 0x10
}

+ (id)defaultEKStore;	// IMP=0x00000000002a8169
- (void).cxx_destruct;	// IMP=0x00000000002a7d78
@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void)_removeEKEvent:(id)arg1 store:(id)arg2 commit:(_Bool)arg3;	// IMP=0x00000000002a7b8e
- (void)_updateEventMetadataInModifiedEvent:(id)arg1 withExistingCheckInShortcutInOriginalEvent:(id)arg2 ifTeamIdentifierIsDifferentInStorageEvent:(id)arg3;	// IMP=0x00000000002a74c7
- (void)_removeEvent:(id)arg1 commit:(_Bool)arg2;	// IMP=0x00000000002a7255
- (_Bool)_isEKEventFromNLEventsCalendar:(id)arg1 ekStore:(id)arg2;	// IMP=0x00000000002a720e
- (_Bool)_isEKEventFromSuggestedCalendar:(id)arg1 ekStore:(id)arg2;	// IMP=0x00000000002a71c7
- (_Bool)_cancelEKEvent:(id)arg1 ekStore:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002a712f
- (_Bool)_updateEKEvent:(id)arg1 withEvent:(id)arg2 ekStore:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002a7079
- (void)_addEKEventToCalendar:(id)arg1 storageEvent:(id)arg2 ekStore:(id)arg3 commit:(_Bool)arg4;	// IMP=0x00000000002a68e9
- (id)_eventsAssociatedWithStorageEvent:(id)arg1 store:(id)arg2;	// IMP=0x00000000002a64c7
- (void)calendarDeleted;	// IMP=0x00000000002a64c1
- (void)orphanEvent:(id)arg1;	// IMP=0x00000000002a5fd5
- (void)rejectEventFromOtherDevice:(id)arg1;	// IMP=0x00000000002a5f55
- (void)rejectEventFromThisDevice:(id)arg1;	// IMP=0x00000000002a5ed5
- (void)confirmEventFromOtherDevice:(id)arg1;	// IMP=0x00000000002a5e55
- (void)confirmEventFromThisDevice:(id)arg1;	// IMP=0x00000000002a5dd5
- (void)cancelEvents:(id)arg1;	// IMP=0x00000000002a59ad
- (void)cancelEvent:(id)arg1;	// IMP=0x00000000002a592d
- (void)cancelEvent:(id)arg1 commit:(_Bool)arg2;	// IMP=0x00000000002a5292
- (void)_updateEvent:(id)arg1 withValuesFrom:(id)arg2 ekStore:(id)arg3;	// IMP=0x00000000002a4c76
- (void)addEvents:(id)arg1;	// IMP=0x00000000002a491c
- (void)addEvent:(id)arg1;	// IMP=0x00000000002a489c
- (void)addEvent:(id)arg1 commit:(_Bool)arg2;	// IMP=0x00000000002a3bb4
- (id)ekStore;	// IMP=0x00000000002a3b7a
- (id)initWithSGSqlEntityStore:(id)arg1 andEKStore:(id)arg2;	// IMP=0x00000000002a3ae8
- (id)initWithSGSqlEntityStore:(id)arg1;	// IMP=0x00000000002a3ad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

