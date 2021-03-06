//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, NSArray, VKRouteEtaDescription;

@interface VKRouteInfo : NSObject
{
    GEOComposedRoute *_route;	// 8 = 0x8
    VKRouteEtaDescription *_etaDescription;	// 16 = 0x10
    NSArray *_waypoints;	// 24 = 0x18
    NSArray *_trafficAnnotations;	// 32 = 0x20
    NSArray *_exitSignAnnotations;	// 40 = 0x28
    _Bool _hasFocus;	// 48 = 0x30
}

@property(readonly, nonatomic) NSArray *exitSignAnnotations; // @synthesize exitSignAnnotations=_exitSignAnnotations;
@property(readonly, nonatomic) NSArray *trafficAnnotations; // @synthesize trafficAnnotations=_trafficAnnotations;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(nonatomic) _Bool hasFocus; // @synthesize hasFocus=_hasFocus;
@property(retain, nonatomic) VKRouteEtaDescription *etaDescription; // @synthesize etaDescription=_etaDescription;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) _Bool hasRouteEta;
- (void)dealloc;	// IMP=0x00000000004a72e7
- (id)initWithComposedRoute:(id)arg1 etaDescription:(id)arg2;	// IMP=0x00000000004a70bc
- (id)initWithComposedRoute:(id)arg1 etaText:(id)arg2;	// IMP=0x00000000004a7059
- (void)_decodeVisualInfos:(id)arg1 withRouteEtaType:(long long)arg2 into:(id)arg3;	// IMP=0x00000000004a68b4

@end

