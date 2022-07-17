//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVRoute, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDAVRoutingDataSource : NSObject
{
    NSMutableDictionary *_authorizationCallbacks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    _Bool _currentRouteSupportsVolumeControl;	// 24 = 0x18
    unsigned int _discoveryMode;	// 28 = 0x1c
    unsigned int _externalScreenType;	// 32 = 0x20
    MRDAVRoute *_pickedRoute;	// 40 = 0x28
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00400000000119c6
- (void).cxx_destruct;	// IMP=0x0020000000011ffa
@property(readonly, nonatomic) _Bool currentRouteSupportsVolumeControl; // @synthesize currentRouteSupportsVolumeControl=_currentRouteSupportsVolumeControl;
@property(readonly, nonatomic) unsigned int externalScreenType; // @synthesize externalScreenType=_externalScreenType;
@property(readonly, nonatomic) MRDAVRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (CDUnknownBlockType)authorizationRequestCallbackForRouteID:(id)arg1;	// IMP=0x0010000000011e5d
- (void)removeAuthorizationCallbackForRouteID:(id)arg1;	// IMP=0x0010000000011db0
- (void)addAuthorizationCallbackForRouteID:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011c1e
- (_Bool)unpickAirPlayRoutes;	// IMP=0x0010000000011c16
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x0010000000011c10
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x0010000000011c08
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x0010000000011c00
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0010000000011bf8
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0010000000011bf0
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x0010000000011be8
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000011be0
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000011b48
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x0010000000011b40
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0010000000011b38
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x0010000000011b30
@property(readonly, nonatomic) NSArray *pickedRoutes;
- (id)init;	// IMP=0x0010000000011a16

@end
