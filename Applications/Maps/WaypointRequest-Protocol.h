//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, MKMapItem, RAPUserSearchInput;
@protocol GEOMapServiceCancellableTicket><GEOMapServiceCorrectableTicket;

@protocol WaypointRequest <NSObject, NSCopying>
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)recordRAPInformation:(RAPUserSearchInput *)arg1;
- (id <GEOMapServiceCancellableTicket><GEOMapServiceCorrectableTicket>)loadComposedWaypointWithTraits:(GEOMapServiceTraits *)arg1 clientResolvedCompletionHandler:(void (^)(GEOResolvedItem *))arg2 completionHandler:(void (^)(Result *))arg3 networkActivityHandler:(void (^)(_Bool))arg4;
@end

