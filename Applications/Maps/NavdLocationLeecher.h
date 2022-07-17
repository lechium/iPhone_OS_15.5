//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, GEOLocationShifter, NSArray, NSDate, NSMutableArray, NSString;
@protocol NavdLocationProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NavdLocationLeecher : NSObject
{
    id <NavdLocationProvider> _locationProvider;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool _leechingLocations;	// 24 = 0x18
    _Bool _leechingPaused;	// 25 = 0x19
    GEOLocationShifter *_locationShifter;	// 32 = 0x20
    CLLocation *_lastLeechedLocation;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSMutableArray *_leechedLocations;	// 56 = 0x38
    NSDate *_lastRecordDate;	// 64 = 0x40
    double _maxLeechingTimeInterval;	// 72 = 0x48
}

+ (id)sharedLeecher;	// IMP=0x00200000000d8aa8
- (void).cxx_destruct;	// IMP=0x00200000000da55c
- (void)locationProvider:(id)arg1 didChangeCoarseMode:(_Bool)arg2;	// IMP=0x00100000000da37a
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;	// IMP=0x00100000000da374
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;	// IMP=0x00100000000da1a8
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x00100000000d9f2f
- (void)_handleShiftedCoordinate:(CDStruct_c3b9c2ee)arg1 fromClientLocation:(CDStruct_7cf4616f)arg2;	// IMP=0x00100000000d9d82
- (void)_handleLeechedLocation:(id)arg1;	// IMP=0x00100000000d9a69
- (void)_notifyObserversAboutPrecision;	// IMP=0x00100000000d98d9
- (void)_notifyObserversAboutError:(id)arg1;	// IMP=0x00100000000d977a
- (void)_notifyObserversAboutLocation:(id)arg1;	// IMP=0x00100000000d961b
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000d9570
- (void)addObserver:(id)arg1;	// IMP=0x00100000000d94c5
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) NSArray *leechedLocations;
- (id)lastLeechedLocation;	// IMP=0x00100000000d932a
- (void)_recordLeechedLocation:(id)arg1;	// IMP=0x00100000000d9188
- (void)_clearLeachedLocations;	// IMP=0x00100000000d9172
- (void)_pruneLeachedLocations;	// IMP=0x00100000000d8feb
- (void)stopLeeching;	// IMP=0x00100000000d8f06
- (void)resumeLeeching;	// IMP=0x00100000000d8e3a
- (void)pauseLeeching;	// IMP=0x00100000000d8d6e
- (void)startLeeching;	// IMP=0x00100000000d8c89
- (id)init;	// IMP=0x00100000000d8afd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
