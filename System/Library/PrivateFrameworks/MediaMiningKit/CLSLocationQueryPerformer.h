//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryPerformerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol GEOMapServiceTicket, OS_os_log;

@interface CLSLocationQueryPerformer : NSObject <CLSQueryPerformerProtocol>
{
    _Bool _isCancelled;	// 8 = 0x8
    NSArray *_geoLocations;	// 16 = 0x10
    id <GEOMapServiceTicket> _ticket;	// 24 = 0x18
    NSArray *_regions;	// 32 = 0x20
    double _precision;	// 40 = 0x28
    NSObject<OS_os_log> *_loggingConnection;	// 48 = 0x30
    CDStruct_95c2efd7 _statistics;	// 56 = 0x38
}

+ (double)defaultPrecision;	// IMP=0x0000000000016463
+ (unsigned long long)numberOfRegionsPerBatch;	// IMP=0x0000000000016458
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;	// IMP=0x00000000000163be
- (void).cxx_destruct;	// IMP=0x0000000000016334
@property(nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) CDStruct_95c2efd7 statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) id <GEOMapServiceTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) NSArray *geoLocations; // @synthesize geoLocations=_geoLocations;
- (void)logGeoLookupFailureResult;	// IMP=0x00000000000161fe
- (void)logGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;	// IMP=0x000000000001611a
- (_Bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;	// IMP=0x0000000000015f59
- (void)cancel;	// IMP=0x0000000000015f34
- (void)submitWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ee2
- (unsigned long long)cacheItems:(id)arg1;	// IMP=0x00000000000159ec
- (id)initWithRegions:(id)arg1 precision:(double)arg2;	// IMP=0x00000000000155ad
- (id)init;	// IMP=0x0000000000015520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
