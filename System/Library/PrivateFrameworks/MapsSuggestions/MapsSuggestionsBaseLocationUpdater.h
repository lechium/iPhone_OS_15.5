//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsLocationUpdater-Protocol.h>

@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater>
{
    NSString *_name;	// 8 = 0x8
    struct Queue _queue;	// 16 = 0x10
    MapsSuggestionsObservers *_locationObservers;	// 32 = 0x20
    MapsSuggestionsObservers *_visitObservers;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000000b5168
- (void).cxx_destruct;	// IMP=0x00000000000b5121
- (unsigned long long)countLocationObservers;	// IMP=0x00000000000b510b
- (void)awaitQueue;	// IMP=0x00000000000b50e2
- (id)dispatchQueue;	// IMP=0x00000000000b50d4
- (id)restartLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000b5064
- (void)stopLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000b4d68
- (id)startLocationUpdatesForDelegate:(id)arg1;	// IMP=0x00000000000b4964
- (void)considerMyAllowanceAsLimited:(_Bool)arg1;	// IMP=0x00000000000b45e8
- (void)considerMyNewVisit:(id)arg1;	// IMP=0x00000000000b3f86
- (void)considerMyNewLocation:(id)arg1;	// IMP=0x00000000000b3c8c
- (void)onStopImplementation;	// IMP=0x00000000000b3c76
- (void)onStartImplementation;	// IMP=0x00000000000b3c60
- (_Bool)hasObservers;	// IMP=0x00000000000b3c43
- (void)dealloc;	// IMP=0x00000000000b3bea
- (id)initWithName:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000b381f
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
