//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/MapEngineDelegate-Protocol.h>
#import <VectorKit/VKNotificationObserverDelegate-Protocol.h>

@class GEOPOICategoryFilter, NSString, VKGlobeImageCanvas, VKMapImageCanvas, VKNotificationObserver, VKRouteContext;
@protocol VKRouteOverlay;

@interface VKMapSnapshotCreator : NSObject <MapEngineDelegate, VKNotificationObserverDelegate>
{
    VKMapImageCanvas *_mapCanvas;	// 8 = 0x8
    VKGlobeImageCanvas *_globeCanvas;	// 16 = 0x10
    int _mapType;	// 24 = 0x18
    GEOPOICategoryFilter *_pointsOfInterestFilter;	// 32 = 0x20
    struct VKEdgeInsets _edgeInsets;	// 40 = 0x28
    _Bool _didBecomeFullyDrawn;	// 56 = 0x38
    _Bool _hasFailedTiles;	// 57 = 0x39
    CDUnknownBlockType _completion;	// 64 = 0x40
    struct unique_ptr<md::MapEngine, std::default_delete<md::MapEngine>> _mapEngine;	// 72 = 0x48
    shared_ptr_e963992e _taskContext;	// 80 = 0x50
    _Bool _didSoftDealloc;	// 96 = 0x60
    VKNotificationObserver *_notificationObserver;	// 104 = 0x68
    unsigned long long _signpostId;	// 112 = 0x70
    CDStruct_80aa614a *_displayStyles;	// 120 = 0x78
    unsigned char _usage;	// 128 = 0x80
    unsigned char _mapkitUsage;	// 129 = 0x81
    unsigned long long _displayStylesCount;	// 136 = 0x88
    unsigned long long _nextDisplayStyleIndex;	// 144 = 0x90
    struct vector<CGImage *, std::allocator<CGImage *>> _images;	// 152 = 0x98
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> _ioSurfaces;	// 176 = 0xb0
    struct Stopwatch _timer;	// 200 = 0xc8
    unsigned char _mapKitUsage;	// 208 = 0xd0
    id <VKRouteOverlay> _routeOverlay;	// 216 = 0xd8
    VKRouteContext *_routeContext;	// 224 = 0xe0
}

+ (_Bool)supportsSharingThumbnails;	// IMP=0x00000000004d99d6
- (id).cxx_construct;	// IMP=0x00000000004dcb89
- (void).cxx_destruct;	// IMP=0x00000000004dcb23
@property(nonatomic) unsigned char mapKitUsage; // @synthesize mapKitUsage=_mapKitUsage;
@property(retain, nonatomic) VKRouteContext *routeContext; // @synthesize routeContext=_routeContext;
@property(retain, nonatomic) id <VKRouteOverlay> routeOverlay; // @synthesize routeOverlay=_routeOverlay;
@property(nonatomic) struct VKEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) GEOPOICategoryFilter *pointsOfInterestFilter; // @synthesize pointsOfInterestFilter=_pointsOfInterestFilter;
- (_Bool)_elevatedGroundIsEnabled;	// IMP=0x00000000004dcad8
- (_Bool)_globeIsEnabled;	// IMP=0x00000000004dcace
- (_Bool)_daVinciDataAvailable;	// IMP=0x00000000004dca6d
- (void)selectedLabelMarkerWillDisappear:(const void *)arg1;	// IMP=0x00000000004dc7fd
- (void)labelMarkerDidChangeState:(const void *)arg1;	// IMP=0x00000000004dc7f7
- (void)labelManagerDidLayout;	// IMP=0x00000000004dc7f1
- (void)didStartLoadingData;	// IMP=0x00000000004dc7eb
- (void)didFinishLoadingDataWithError:(id)arg1;	// IMP=0x00000000004dc7e5
- (void)didFinishLoadingData;	// IMP=0x00000000004dc7df
- (_Bool)canChangeVenueFocus;	// IMP=0x00000000004dc7d7
- (void)venueCreated:(const void *)arg1 building:(const void *)arg2;	// IMP=0x00000000004dc7d1
- (void)nearestVenueDidChange:(const void *)arg1 building:(const void *)arg2;	// IMP=0x00000000004dc7cb
- (_Bool)wantsTimerTick;	// IMP=0x00000000004dc7be
- (void)didPresent;	// IMP=0x00000000004dc793
- (void)willLayoutWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000004dc750
- (void)didReceiveMemoryWarning;	// IMP=0x00000000004dc545
- (void)didUpdateSceneStatus:(unsigned char)arg1;	// IMP=0x00000000004dc52a
- (void)willBecomeFullyDrawn;	// IMP=0x00000000004dc2d7
- (void)renderNextSnapshot;	// IMP=0x00000000004db827
- (void)cancelFlushingTileDecodes:(_Bool)arg1;	// IMP=0x00000000004db6ea
- (void)cancel;	// IMP=0x00000000004db5bb
- (void)renderSnapshot:(CDUnknownBlockType)arg1;	// IMP=0x00000000004db556
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;	// IMP=0x00000000004db4f6
- (void)setClearFontCache:(_Bool)arg1;	// IMP=0x00000000004db4c0
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;	// IMP=0x00000000004db473
- (void)removeCustomFeatureDataSource:(id)arg1;	// IMP=0x00000000004db44c
- (void)addCustomFeatureDataSource:(id)arg1;	// IMP=0x00000000004db425
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) long long terrainMode;
@property(nonatomic) _Bool showsGlobe;
@property(nonatomic) _Bool showsVenues;
@property(nonatomic) _Bool showsBuildings;
- (void)setLabelExclusionRegions:(id)arg1;	// IMP=0x00000000004daddd
@property(nonatomic) _Bool showsPointLabels;
@property(nonatomic) _Bool showsRoadShields;
@property(nonatomic) _Bool showsRoadLabels;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) _Bool localizeLabels;
- (void *)_labelSettings;	// IMP=0x00000000004da84e
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000004da7c3
@property(nonatomic) unsigned char emphasis;
@property(nonatomic) int mapType;
@property(readonly) struct CGSize size;
- (id)activeCanvas;	// IMP=0x00000000004da4f1
- (void)softDealloc;	// IMP=0x00000000004da36d
- (void)dealloc;	// IMP=0x00000000004da187
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 signpostId:(unsigned long long)arg4 mapType:(int)arg5 mapDisplayStyles:(CDStruct_80aa614a *)arg6 mapDisplayStylesCount:(unsigned long long)arg7 auditToken:(id)arg8;	// IMP=0x00000000004d9a08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
