//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningResponseSnapshot : NSObject
{
    NSDate *_timestamp;	// 8 = 0x8
    NSArray *_routeIdentifiers;	// 16 = 0x10
    NSArray *_revisionIdentifiers;	// 24 = 0x18
    NSUUID *_selectedRouteIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001e94b4
@property(copy, nonatomic) NSUUID *selectedRouteIdentifier; // @synthesize selectedRouteIdentifier=_selectedRouteIdentifier;
@property(copy, nonatomic) NSArray *revisionIdentifiers; // @synthesize revisionIdentifiers=_revisionIdentifiers;
@property(copy, nonatomic) NSArray *routeIdentifiers; // @synthesize routeIdentifiers=_routeIdentifiers;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)deltaFromSnapshot:(id)arg1;	// IMP=0x00100000001e8f7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001e8e20
- (id)init;	// IMP=0x00100000001e8dba

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
