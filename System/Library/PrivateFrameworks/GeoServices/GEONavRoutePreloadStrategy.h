//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadStrategy-Protocol.h>

@class GEOComposedRoute, GEOMapAssetMetadataFetcher, GEORoutePreloader, GEOSPRMetroAvailabilityFetcher, GEOTileKeyList, NSMutableArray, NSMutableDictionary, NSString;
@protocol GEORoutePreloadCamera, OS_dispatch_queue, OS_dispatch_source;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    GEORoutePreloader *_preloader;	// 16 = 0x10
    GEOComposedRoute *_route;	// 24 = 0x18
    unsigned long long _signpostID;	// 32 = 0x20
    double _currentRoutePosition;	// 40 = 0x28
    int _downloadState;	// 48 = 0x30
    id <GEORoutePreloadCamera> _camera;	// 56 = 0x38
    GEOTileKeyList *_tilesLoadingOrLoaded;	// 64 = 0x40
    GEOTileKeyList *_tilesReceived;	// 72 = 0x48
    NSMutableArray *_steps;	// 80 = 0x50
    unsigned int _stepGeneration;	// 88 = 0x58
    long long _currentLoadingSteps;	// 96 = 0x60
    _Bool _shouldLoadAssets;	// 104 = 0x68
    _Bool _forceDisableMetros;	// 105 = 0x69
    _Bool _useCellularCoverage;	// 106 = 0x6a
    _Bool _anyErrors;	// 107 = 0x6b
    _Bool _finished;	// 108 = 0x6c
    double _beginTime;	// 112 = 0x70
    double _mostRecentErrorTime;	// 120 = 0x78
    _Bool _hadEnoughTilesToDisableNetworking;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_geodCrashTimer;	// 136 = 0x88
    double _maneuverSizeInMeters;	// 144 = 0x90
    _Bool _enabled;	// 152 = 0x98
    double _stepSizeInMeters;	// 160 = 0xa0
    NSMutableDictionary *_tileSetStyles;	// 168 = 0xa8
    GEOSPRMetroAvailabilityFetcher *_sprAvailabilityFetcher;	// 176 = 0xb0
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000011ec437
@property(nonatomic) _Bool forceDisableMetros; // @synthesize forceDisableMetros=_forceDisableMetros;
@property(nonatomic) _Bool shouldLoadAssets; // @synthesize shouldLoadAssets=_shouldLoadAssets;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak GEORoutePreloader *preloader; // @synthesize preloader=_preloader;
@property(retain, nonatomic) id <GEORoutePreloadCamera> camera; // @synthesize camera=_camera;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x00000000011ec36a
- (void)updateWithRouteMatch:(id)arg1;	// IMP=0x00000000011ec262
- (void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;	// IMP=0x00000000011ec0cc
- (void)_stop;	// IMP=0x00000000011ebe36
- (void)stop;	// IMP=0x00000000011ebdd5
- (void)_start;	// IMP=0x00000000011eba06
- (void)start;	// IMP=0x00000000011eb9a5
- (void)_performNextRequests;	// IMP=0x00000000011eb0c6
- (void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5;	// IMP=0x00000000011ea3c9
- (void)_cancelRequestsBehindCurrentPosition;	// IMP=0x00000000011ea1d8
- (void)_loadStep:(id)arg1 requireWiFi:(_Bool)arg2;	// IMP=0x00000000011e91c3
- (void)_cancelAllSteps;	// IMP=0x00000000011e907d
- (void)_cancelStep:(id)arg1;	// IMP=0x00000000011e9033
- (void)_accumulateSteps;	// IMP=0x00000000011e82c8
- (void)_geodCrashed;	// IMP=0x00000000011e8232
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;	// IMP=0x00000000011e81ef
- (void)_resetErrCounts;	// IMP=0x00000000011e81be
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00000000011e8134
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3 restrictions:(unsigned long long)arg4;	// IMP=0x00000000011e7d50
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;	// IMP=0x00000000011e7d3b
- (void)performTearDown;	// IMP=0x00000000011e7c77
- (id)init;	// IMP=0x00000000011e7ae0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
