//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemIncident
{
    id <GEOTransitRoutingIncidentMessage> _incidentMessage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002e7335
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage; // @synthesize incidentMessage=_incidentMessage;
- (id)initWithIncidentMessage:(id)arg1;	// IMP=0x00100000002e729f

@end

