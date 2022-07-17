//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsFlightUpdater : NSObject
{
    id <MapsSuggestionsFlightRequester> _flightRequester;	// 8 = 0x8
    id <MapsSuggestionsNetworkRequester> _networkRequester;	// 16 = 0x10
    struct Queue _queue;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000023071
- (void).cxx_destruct;	// IMP=0x0000000000023035
- (BOOL)updateFlightsForEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000229da
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x000000000001ef07
- (id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2;	// IMP=0x000000000001edd0

@end
