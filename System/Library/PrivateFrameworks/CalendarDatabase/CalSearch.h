//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CalSearchDataSink;

@interface CalSearch : NSObject
{
    struct CalDatabase *_database;	// 8 = 0x8
    struct CalFilter *_filter;	// 16 = 0x10
    struct __CFString *_searchString;	// 24 = 0x18
    int _seed;	// 32 = 0x20
    id <CalSearchDataSink> _dataSink;	// 40 = 0x28
    _Bool _dateToStartShowingResultsSentToDataSink;	// 48 = 0x30
    _Bool _moreResultsAvailable;	// 49 = 0x31
    struct __CFArray *_partialResults;	// 56 = 0x38
    struct __CFArray *_partialCachedOccurrences;	// 64 = 0x40
    struct __CFArray *_partialCachedDays;	// 72 = 0x48
    struct __CFArray *_partialCachedDaysIndexes;	// 80 = 0x50
    struct __CFSet *_matchedEventsSet;	// 88 = 0x58
    struct __CFSet *_matchedParticipantsSet;	// 96 = 0x60
    struct __CFSet *_matchedLocationsSet;	// 104 = 0x68
    _Bool _stopLoadingResults;	// 112 = 0x70
    struct _opaque_pthread_mutex_t _dataSourceDeallocLock;	// 120 = 0x78
    _Bool _implementsCancellationCallback;	// 184 = 0xb8
    _Bool _searchParticipants;	// 185 = 0xb9
    _Bool _searchLocations;	// 186 = 0xba
    _Bool _searchAttendees;	// 187 = 0xbb
    _Bool _shouldMatchLocationsOnlyForEventSearch;	// 188 = 0xbc
}

- (void).cxx_destruct;	// IMP=0x0000000000027e27
@property _Bool shouldMatchLocationsOnlyForEventSearch; // @synthesize shouldMatchLocationsOnlyForEventSearch=_shouldMatchLocationsOnlyForEventSearch;
@property _Bool searchAttendees; // @synthesize searchAttendees=_searchAttendees;
@property _Bool searchLocations; // @synthesize searchLocations=_searchLocations;
@property _Bool searchParticipants; // @synthesize searchParticipants=_searchParticipants;
- (void)_deleteSearchContext:(struct CalEventOccurrenceSearchContext *)arg1;	// IMP=0x0000000000027db2
- (struct CalEventOccurrenceSearchContext *)_createSearchContext;	// IMP=0x0000000000027bd7
- (void)_getApplicationSearchResults:(struct CalEventOccurrenceSearchContext *)arg1;	// IMP=0x0000000000027a72
- (void)_deleteEventIdsSearchContext:(struct CalEventIdsSearchContext *)arg1;	// IMP=0x0000000000027a53
- (struct CalEventIdsSearchContext *)_createEventIdsSearchContext;	// IMP=0x0000000000027a0b
- (void)_getEventsSearchResults:(struct CalEventIdsSearchContext *)arg1;	// IMP=0x0000000000027958
- (void)_getAttendeesSearchResults:(struct CalEventIdsSearchContext *)arg1;	// IMP=0x00000000000278b0
- (void)_getLocationSearchResults:(struct CalLocationIdsSearchContext *)arg1;	// IMP=0x0000000000027804
- (void)_addMatchedLocationIds:(struct __CFArray *)arg1;	// IMP=0x00000000000277b9
- (void)_deleteLocationIdsSearchContext:(struct CalLocationIdsSearchContext *)arg1;	// IMP=0x000000000002779a
- (struct CalLocationIdsSearchContext *)_createLocationIdsSearchContext;	// IMP=0x0000000000027753
- (void)_deleteParticipantIdsSearchContext:(struct CalParticipantIdsSearchContext *)arg1;	// IMP=0x0000000000027734
- (struct CalParticipantIdsSearchContext *)_createParticipantIdsSearchContext;	// IMP=0x00000000000276ed
- (void)_getParticipantsSearchResults:(struct CalParticipantIdsSearchContext *)arg1;	// IMP=0x0000000000027641
- (void)_addMatchedParticipantIds:(struct __CFArray *)arg1;	// IMP=0x00000000000275f6
- (void)_addMatchedEventIds:(struct __CFArray *)arg1;	// IMP=0x00000000000275ab
- (void)_startLoadingResults;	// IMP=0x00000000000273e3
- (int)seed;	// IMP=0x00000000000273da
- (_Bool)moreResultsAvailable;	// IMP=0x00000000000273d1
- (void)stopSearching;	// IMP=0x00000000000273b2
- (void)startSearching;	// IMP=0x0000000000027319
- (void)dealloc;	// IMP=0x000000000002722d
- (id)initWithDatabase:(struct CalDatabase *)arg1 filter:(struct CalFilter *)arg2 dataSink:(id)arg3;	// IMP=0x00000000000270c9

@end

