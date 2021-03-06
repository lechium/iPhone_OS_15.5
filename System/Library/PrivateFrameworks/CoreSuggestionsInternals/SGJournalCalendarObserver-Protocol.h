//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class NSArray, SGStorageEvent;

@protocol SGJournalCalendarObserver <SGJournalBaseObserver>
- (void)cancelEvents:(NSArray *)arg1;
- (void)addEvents:(NSArray *)arg1;
- (void)calendarDeleted;
- (void)orphanEvent:(SGStorageEvent *)arg1;
- (void)rejectEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)rejectEventFromThisDevice:(SGStorageEvent *)arg1;
- (void)confirmEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)confirmEventFromThisDevice:(SGStorageEvent *)arg1;
- (void)cancelEvent:(SGStorageEvent *)arg1;
- (void)addEvent:(SGStorageEvent *)arg1;
@end

