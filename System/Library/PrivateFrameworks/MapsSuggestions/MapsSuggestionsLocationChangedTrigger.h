//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsLocationUpdaterDelegate-Protocol.h>

@class CLLocation, MapsSuggestionsCanKicker, NSString;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsLocationChangedTrigger <MapsSuggestionsLocationUpdaterDelegate>
{
    CLLocation *_previousLocation;	// 8 = 0x8
    double _minDistance;	// 16 = 0x10
    id <MapsSuggestionsLocationUpdater> _locationUpdater;	// 24 = 0x18
    MapsSuggestionsCanKicker *_locationForceUpdate;	// 32 = 0x20
    id <MapsSuggestionsLocationUpdater> _forcingLocationUpdater;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000108d7c
- (void)didLoseLocationPermission;	// IMP=0x0000000000108d76
- (void)didUpdateLocation:(id)arg1;	// IMP=0x0000000000108b3e
- (void)didRemoveLastObserver;	// IMP=0x0000000000108b2c
- (void)didAddFirstObserver;	// IMP=0x0000000000108b26
- (void)stop;	// IMP=0x0000000000108a86
- (void)startWithMinimumDistance:(double)arg1;	// IMP=0x0000000000108946
- (void)startWithMinimumUpdateTime:(double)arg1 minimumDistance:(double)arg2;	// IMP=0x00000000001087e0
- (void)restartWithUpdateTime:(double)arg1;	// IMP=0x000000000010865a
- (void)changeMinDistance:(double)arg1;	// IMP=0x0000000000108563
- (void)_forceLocationUpdate;	// IMP=0x000000000010853a
- (id)initWithLocationUpdater:(id)arg1 forcingLocationUpdater:(id)arg2;	// IMP=0x00000000001080ae
- (id)initWithLocationUpdater:(id)arg1;	// IMP=0x0000000000107f49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

