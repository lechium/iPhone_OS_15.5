//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class GEOLocationShifter, MapsSuggestionsLimitedDictionary, MapsSuggestionsObservers, NSMutableDictionary, NSString;
@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRoutineConnector;

@interface MapsSuggestionsRoutine : NSObject <MapsSuggestionsObject>
{
    id <MapsSuggestionsRoutineConnector> _connector;	// 8 = 0x8
    id <MapsSuggestionsNetworkRequester> _networkRequester;	// 16 = 0x10
    struct Queue _queue;	// 24 = 0x18
    MapsSuggestionsObservers *_parkedCarObservers;	// 40 = 0x28
    NSMutableDictionary *_loiLocationsForHome;	// 48 = 0x30
    NSMutableDictionary *_loiLocationsForWork;	// 56 = 0x38
    NSMutableDictionary *_loiLocationsForSchool;	// 64 = 0x40
    NSMutableDictionary *_loiVisits;	// 72 = 0x48
    MapsSuggestionsLimitedDictionary *_mapItemCache;	// 80 = 0x50
    MapsSuggestionsLimitedDictionary *_mapItemCacheOrigin;	// 88 = 0x58
    GEOLocationShifter *_locationShifter;	// 96 = 0x60
    _Bool _areFrequentLocationsAvailable;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x00000000000cd0d8
- (void).cxx_destruct;	// IMP=0x00000000000cd044
- (BOOL)predictedExitTimeFromLocation:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc94a
- (void)forgetLocationOfInterest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc659
- (BOOL)fetchLocationsSinceDate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb5b5
- (BOOL)touristBitForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb21d
- (void)removeParkedCarsAllowingFeature:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb0d9
- (void)removeParkedCarObserver:(id)arg1;	// IMP=0x00000000000cae92
- (void)addParkedCarObserver:(id)arg1;	// IMP=0x00000000000ca917
- (BOOL)fetchLastVisitAtMapItem:(id)arg1 withinDistance:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9a3e
- (BOOL)fetchLastVisitAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c939b
- (unsigned long long)countSchoolLOIs;	// IMP=0x00000000000c9339
- (unsigned long long)countWorkLOIs;	// IMP=0x00000000000c92d7
- (unsigned long long)countHomeLOIs;	// IMP=0x00000000000c91b4
- (void)updateFixedLOIs;	// IMP=0x00000000000c7bab
- (BOOL)readMeCardWithMinVisits:(unsigned long long)arg1 maxAge:(double)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6da0
- (BOOL)fetchSuggestedShortcutsForType:(long long)arg1 minVisits:(unsigned long long)arg2 maxAge:(double)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c5f40
- (BOOL)fetchEntriesForLocation:(id)arg1 period:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3e51
- (_Bool)canProduceEntriesOfType:(long long)arg1;	// IMP=0x00000000000c0421
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x00000000000c0080
- (id)initWithRoutineConnector:(id)arg1 networkRequester:(id)arg2;	// IMP=0x00000000000bfbf8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

