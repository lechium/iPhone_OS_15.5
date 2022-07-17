//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>
#import <MapsSuggestions/MapsSuggestionsLocationVisitUpdaterDelegate-Protocol.h>

@class CLLocation, CLVisit, MapsSuggestionsObservers, NSString;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate>
{
    struct Queue _queue;	// 8 = 0x8
    id <MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;	// 24 = 0x18
    CLLocation *_latestLocation;	// 32 = 0x20
    CLVisit *_currentVisit;	// 40 = 0x28
    MapsSuggestionsObservers *_locationObservers;	// 48 = 0x30
    MapsSuggestionsObservers *_visitObservers;	// 56 = 0x38
    double _distanceBuffer;	// 64 = 0x40
}

+ (_Bool)_isDefinitelyOutsideOfVisit:(id)arg1 location:(id)arg2 allowingBuffer:(double)arg3;	// IMP=0x00000000000d0a57
- (id).cxx_construct;	// IMP=0x00000000000d0ce3
- (void).cxx_destruct;	// IMP=0x00000000000d0c87
- (void)awaitQueue;	// IMP=0x00000000000d0c5e
- (void)didLeaveVisit:(id)arg1;	// IMP=0x00000000000d065c
- (void)didEnterVisit:(id)arg1;	// IMP=0x00000000000d020f
- (void)didLoseLocationPermission;	// IMP=0x00000000000cfecb
- (void)didUpdateLocation:(id)arg1;	// IMP=0x00000000000cfa31
- (void)stopLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000cf5a6
- (id)startLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000cf065
- (id)restartLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000ceff5
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dealloc;	// IMP=0x00000000000cef6c
- (id)initDecoratingLocationUpdater:(id)arg1;	// IMP=0x00000000000ced91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
