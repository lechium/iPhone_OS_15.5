//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsObservers, MapsSuggestionsQueue, WFWeatherConditions;

@interface MapsSuggestionsWeatherConditionsProvider : NSObject
{
    MapsSuggestionsObservers *_observers;	// 8 = 0x8
    WFWeatherConditions *_weatherConditions;	// 16 = 0x10
    MapsSuggestionsQueue *_queue;	// 24 = 0x18
    double _locationRange;	// 32 = 0x20
    struct atomic<bool> _isRequesting;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000353c2
- (void)didUpdateLocation;	// IMP=0x0010000000035386
- (void)didUpdateWeatherConditions:(id)arg1;	// IMP=0x0010000000035341
- (BOOL)requestWeatherAtLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000352de
- (void)_updateWeatherConditionsIfNeeded;	// IMP=0x001000000003472c
- (void)stopProvidingForObserver:(id)arg1;	// IMP=0x0010000000034714
- (void)startProvidingForObserver:(id)arg1;	// IMP=0x0010000000034530
- (id)initWithQueue:(id)arg1 locationRange:(double)arg2;	// IMP=0x001000000003441a

@end

