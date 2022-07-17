//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsNetworkRequester-Protocol.h>

@class NSString;

@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>
{
}

- (_Bool)routeFromWaypoint:(id)arg1 destination:(id)arg2 currentLocation:(id)arg3 routeAttributes:(id)arg4 feedback:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000066915
- (_Bool)ETAFromWaypoint:(id)arg1 toWaypoint:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000066269
- (_Bool)composedWaypointForAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065f46
- (_Bool)composedWaypointForCurrentLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065c2b
- (_Bool)composedWaypointForLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065909
- (_Bool)composedWaypointForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006548f
- (_Bool)resolveMapItemHandleData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000065150
- (_Bool)searchWithAirportCode:(id)arg1 terminal:(id)arg2 gate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064e0c
- (_Bool)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000064942
- (_Bool)searchString:(id)arg1 maxResults:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000645f2
- (_Bool)reverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006425d
- (_Bool)canonicalLocalSearchPostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063dfc
- (_Bool)forwardGeocodeAddressString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000063ab4
- (_Bool)forwardGeocodePostalAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006376c
@property(readonly, nonatomic) NSString *uniqueName;
- (id)initFromResourceDepot:(id)arg1;	// IMP=0x0000000000063723

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
