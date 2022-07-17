//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONetworkObserver, GEOObserverHashTable, HomeResult, HomeResultCache, HomeResultCacheKey, MISSING_TYPE, NSString, NSTimer;
@protocol GEOMapServiceMapsHomeTicket, HomeResultDataProviderDelegate;

__attribute__((visibility("hidden")))
@interface HomeResultDataProvider : NSObject
{
    GEOObserverHashTable *_observers;	// 8 = 0x8
    MISSING_TYPE *_locationManager;	// 16 = 0x10
    GEONetworkObserver *_networkObserver;	// 24 = 0x18
    HomeResultCache *_cache;	// 32 = 0x20
    HomeResultCacheKey *_resultCacheKey;	// 40 = 0x28
    HomeResult *_result;	// 48 = 0x30
    NSTimer *_resultExpirationTimer;	// 56 = 0x38
    HomeResultCacheKey *_ticketCacheKey;	// 64 = 0x40
    id <GEOMapServiceMapsHomeTicket> _ticket;	// 72 = 0x48
    _Bool _active;	// 80 = 0x50
    id <HomeResultDataProviderDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00200000006f6c4d
@property(readonly, nonatomic) __weak id <HomeResultDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void)countryConfigurationDidChange:(id)arg1;	// IMP=0x00100000006f6bf4
- (void)_networkReachabilityDidChange;	// IMP=0x00100000006f6bba
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00100000006f6bb4
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00100000006f6bae
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00100000006f6ba8
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00100000006f6ba2
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00100000006f6b9a
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00100000006f6b94
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00100000006f6b7d
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00100000006f6b66
- (void)_expirationTimerFired;	// IMP=0x00100000006f6a53
- (void)_createExpirationTimerIfNeeded;	// IMP=0x00100000006f6902
- (void)_cancelExpirationTimer;	// IMP=0x00100000006f68d0
- (id)_currentCacheKey;	// IMP=0x00100000006f681a
- (_Bool)_isNoNetworkError:(id)arg1;	// IMP=0x00100000006f6717
- (void)_handleResult:(id)arg1 error:(id)arg2 cacheKey:(id)arg3;	// IMP=0x00100000006f60f6
- (void)_startTicketWithCacheKey:(id)arg1;	// IMP=0x00100000006f5d5b
- (void)_cancelTicket;	// IMP=0x00100000006f5d11
- (void)_refreshCachedResultAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000006f5bbe
- (void)_updateWithResult:(id)arg1 cacheKey:(id)arg2 notifyObservers:(_Bool)arg3;	// IMP=0x00100000006f583b
@property(readonly, nonatomic) HomeResult *homeResult;
@property(readonly, nonatomic) GEOObserverHashTable *observers;
@property(readonly, nonatomic) _Bool hasInitialData;
- (void)dealloc;	// IMP=0x00100000006f5444
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000006f536b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
