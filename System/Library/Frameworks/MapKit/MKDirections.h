//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, GEORouteAttributes, MKDirectionsRequest, NSError;
@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject
{
    MKDirectionsRequest *_request;	// 8 = 0x8
    GEODirectionsRequest *_geoRequest;	// 16 = 0x10
    GEOQuickETARequest *_etaRequest;	// 24 = 0x18
    GEOQuickETARequester *_etaRequester;	// 32 = 0x20
    id <MKLocationManagerOperation> _locationOperation;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;	// 48 = 0x30
    GEORouteAttributes *_routeAttributes;	// 56 = 0x38
    NSError *_previousError;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000023175e
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002312cb
- (void)_issueETARequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000230c7b
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230a66
- (void)_issueDirectionsRequestForOrigin:(id)arg1 destination:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002304e8
- (void)_calculateDirectionsWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002300e7
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000230039
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(_Bool)arg1 traits:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022f8a2
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000022f5cd
@property(readonly, nonatomic, getter=isCalculating) _Bool calculating;
- (void)cancel;	// IMP=0x000000000022f488
- (void)dealloc;	// IMP=0x000000000022f44a
- (void)_cleanupLocationOperation;	// IMP=0x000000000022f418
- (id)initWithRequest:(id)arg1;	// IMP=0x000000000022f2fc
- (id)init;	// IMP=0x000000000022f2e8

@end

