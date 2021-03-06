//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceGeoIpLookupTicket-Protocol.h>

@class GEOPDPlaceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceGeoIpLookupTicket <GEOMapServiceGeoIpLookupTicket>
{
    GEOPDPlaceRequest *_placeRequest;	// 48 = 0x30
    id _requestToken;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000728148
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
- (void)cancel;	// IMP=0x000000000072806e
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 handlerQueue:(id)arg4;	// IMP=0x0000000000727d6c
- (id)initWithIpAddress:(id)arg1;	// IMP=0x0000000000727c87

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

