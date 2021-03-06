//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol GEOMapServiceSpatialEventLookupTicket, OS_dispatch_queue;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    _Bool _isCancelled;	// 8 = 0x8
    NSArray *_timeLocationTuples;	// 16 = 0x10
    double _radius;	// 24 = 0x18
    NSDictionary *_parametersByTimeLocationTupleIdentifier;	// 32 = 0x20
    id <GEOMapServiceSpatialEventLookupTicket> _ticket;	// 40 = 0x28
    NSDictionary *_resolvedPublicEventsForTimeLocationTuples;	// 48 = 0x30
    NSDictionary *_invalidationTokens;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_geoQueue;	// 64 = 0x40
}

+ (unsigned long long)maximumBatchSize;	// IMP=0x000000000004ba13
- (void).cxx_destruct;	// IMP=0x000000000004b2f4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // @synthesize geoQueue=_geoQueue;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSDictionary *invalidationTokens; // @synthesize invalidationTokens=_invalidationTokens;
@property(retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples; // @synthesize resolvedPublicEventsForTimeLocationTuples=_resolvedPublicEventsForTimeLocationTuples;
@property(readonly, nonatomic) id <GEOMapServiceSpatialEventLookupTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) NSDictionary *parametersByTimeLocationTupleIdentifier; // @synthesize parametersByTimeLocationTupleIdentifier=_parametersByTimeLocationTupleIdentifier;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) NSArray *timeLocationTuples; // @synthesize timeLocationTuples=_timeLocationTuples;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1;	// IMP=0x000000000004af10
- (id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2;	// IMP=0x0000000000049fc4
- (void)prepareForRetry;	// IMP=0x0000000000049f36
- (void)cancel;	// IMP=0x0000000000049f1c
- (void)submitWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049e7b
- (id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2;	// IMP=0x0000000000049c20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

