//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRouteAnnotation, GEOComposedTrafficCamera, GEOComposedTrafficSignal, GEOEnrouteNotice, GEOLatLng, NSArray, NSString;

@interface GEOComposedEnrouteNotice : NSObject <NSSecureCoding>
{
    GEOEnrouteNotice *_enrouteNotice;	// 8 = 0x8
    NSArray *_guidanceEvents;	// 16 = 0x10
    CDStruct_3f2a7a20 _routeCoordinate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000374e26
- (void).cxx_destruct;	// IMP=0x00000000003750ff
@property(readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property(readonly, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000374ffd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000374e2e
@property(readonly, nonatomic) unsigned int priority;
@property(readonly, nonatomic) _Bool hasPriority;
@property(readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder;
@property(readonly, nonatomic) _Bool hasGroupItemVerticalDisplayOrder;
@property(readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder;
@property(readonly, nonatomic) _Bool hasGroupItemHorizontalDisplayOrder;
@property(readonly, nonatomic) unsigned int groupIdentifier;
@property(readonly, nonatomic) _Bool hasGroupIdentifier;
- (id)detailFormatForLocation:(id)arg1;	// IMP=0x0000000000374d6e
- (id)titleFormatForLocation:(id)arg1;	// IMP=0x0000000000374d66
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) _Bool hasHighlightDistance;
@property(readonly, nonatomic) GEOComposedRouteAnnotation *routeAnnotation;
@property(readonly, nonatomic) GEOComposedTrafficSignal *trafficSignal;
@property(readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) int noticeType;
- (id)description;	// IMP=0x00000000003749e0
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPolylineCoordinate:(CDStruct_3f2a7a20)arg5;	// IMP=0x00000000003749be
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4 withPosition:(id)arg5;	// IMP=0x00000000003748d4
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 onRoute:(id)arg4;	// IMP=0x0000000000374570

// Remaining properties
@property(readonly, nonatomic) GEOLatLng *position; // @dynamic position;

@end
