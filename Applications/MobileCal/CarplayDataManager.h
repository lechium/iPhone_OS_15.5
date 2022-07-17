//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalendarOccurrencesCollection, EKEventStore;
@protocol OS_dispatch_queue;

@interface CarplayDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *_eventLoadingQueue;	// 8 = 0x8
    CalendarOccurrencesCollection *_loadedEventCollection;	// 16 = 0x10
    CalendarOccurrencesCollection *_tomorrowLoadedEventCollection;	// 24 = 0x18
    EKEventStore *_eventStore;	// 32 = 0x20
    _Bool _hasEverCompletedFetch;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003d517
@property(nonatomic) _Bool hasEverCompletedFetch; // @synthesize hasEverCompletedFetch=_hasEverCompletedFetch;
- (void)_timeZoneChanged:(id)arg1;	// IMP=0x001000000003d349
- (id)_calendarOccurrencesCollectionFromPredicate:(id)arg1;	// IMP=0x001000000003d07c
- (void)_fetchUpcomingOccurrences:(id)arg1;	// IMP=0x001000000003c953
- (void)reloadEvents:(id)arg1;	// IMP=0x001000000003c7d8
@property(readonly, nonatomic) CalendarOccurrencesCollection *tomorrowLoadedEventCollection;
@property(readonly, nonatomic) CalendarOccurrencesCollection *loadedEventCollection;
- (id)_selectedCalendars;	// IMP=0x001000000003c4bc
- (id)collectionForDayType:(long long)arg1;	// IMP=0x001000000003c489
- (id)initWithEventStore:(id)arg1;	// IMP=0x001000000003c3a9

@end
