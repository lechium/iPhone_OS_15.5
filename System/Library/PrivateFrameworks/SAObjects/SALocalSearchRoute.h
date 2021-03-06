//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSData, NSString;

@interface SALocalSearchRoute <SABackgroundContextObject>
{
}

+ (id)routeWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000026ff7
+ (id)route;	// IMP=0x0000000000026fe5
@property(copy, nonatomic) NSData *sessionState;
@property(copy, nonatomic) NSData *routeId;
@property(copy, nonatomic) NSData *routeAsZilchBinary;
@property(copy, nonatomic) NSData *originalWaypointRoute;
@property(copy, nonatomic) NSData *evChargingMetadata;
@property(copy, nonatomic) NSData *etaFilter;
@property(copy, nonatomic) NSData *routeTrafficIncident;
@property(copy, nonatomic) NSArray *routeIncidents;
@property(copy, nonatomic) NSArray *routeIncidentOffsets;
- (id)encodedClassName;	// IMP=0x0000000000026fd8
- (id)groupIdentifier;	// IMP=0x0000000000026fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

