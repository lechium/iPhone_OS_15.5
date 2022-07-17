//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOAlert, NSArray, NSString;
@protocol GEOTransitRoutingIncidentMessage;

@interface GEODirectionsError : NSObject <NSSecureCoding>
{
    GEOAlert *_alert;	// 8 = 0x8
    struct GEOProblemDetail *_problemDetails;	// 16 = 0x10
    unsigned long long _problemDetailsCount;	// 24 = 0x18
    id <GEOTransitRoutingIncidentMessage> _routingIncidentMessage;	// 32 = 0x20
    NSArray *_internalServerErrors;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003091f6
- (void).cxx_destruct;	// IMP=0x0000000000309e23
@property(readonly, nonatomic) NSArray *internalServerErrors; // @synthesize internalServerErrors=_internalServerErrors;
- (_Bool)hasError:(long long)arg1;	// IMP=0x0000000000309db8
- (_Bool)_errorCode:(long long)arg1 toProblem:(out int *)arg2;	// IMP=0x0000000000309d8c
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail)arg1;	// IMP=0x0000000000309b50
@property(readonly, nonatomic) long long firstDirectionsErrorCode;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;
- (id)description;	// IMP=0x00000000003099ea
- (void)dealloc;	// IMP=0x00000000003099ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030980f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000309452
- (id)initWithWaypointIndex:(unsigned long long)arg1;	// IMP=0x00000000003093e5
- (id)initWithResponse:(id)arg1;	// IMP=0x0000000000309260
- (void)_copyProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003091fe

@end
