//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceSpatialPlaceLookupTicket-Protocol.h>

@class GEOMapRegion, NSError, NSString;
@protocol GEOMapServiceSpatialPlaceLookupTicket;

__attribute__((visibility("hidden")))
@interface _MKSpatialPlaceLookupTicket : NSObject <MKMapServiceSpatialPlaceLookupTicket>
{
    id <GEOMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    GEOMapRegion *_resultBoundingRegion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fbab7
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;	// IMP=0x00000000000fb7a1
- (void)cancel;	// IMP=0x00000000000fb78b
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
- (id)traits;	// IMP=0x00000000000fb767
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000fb6fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

