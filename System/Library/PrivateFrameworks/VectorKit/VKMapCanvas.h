//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/VKInteractiveMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>

@class NSArray, NSString, VKMapModel, VKTimedAnimation;
@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKMapCanvas <VKMapModelDelegate, VKInteractiveMap>
{
    VKMapModel *_map;	// 176 = 0xb0
    struct CGSize _lastCanvasSize;	// 184 = 0xb8
    optional_44235073 _lastValidCanvasSizeZoomLevel;	// 200 = 0xc8
    VKTimedAnimation *_horizontalOffsetAnimation;	// 208 = 0xd0
    double _canonicalSkyHeight;	// 216 = 0xd8
    struct shared_ptr<md::OverlayContainer> _overlayContainer;	// 224 = 0xe0
    _Bool _trafficEnabled;	// 240 = 0xf0
    id <VKInteractiveMapDelegate> _delegate;	// 248 = 0xf8
}

+ (_Bool)supportsMapType:(int)arg1 scale:(int)arg2;	// IMP=0x00000000000c7698
- (id).cxx_construct;	// IMP=0x00000000000caa1a
- (void).cxx_destruct;	// IMP=0x00000000000ca9ea
@property(nonatomic) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) double canonicalSkyHeight; // @synthesize canonicalSkyHeight=_canonicalSkyHeight;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
- (void)didBecomeInActive;	// IMP=0x00000000000ca8f3
- (void)didBecomeActive;	// IMP=0x00000000000ca84a
- (void)populateDebugNode:(void *)arg1 withOptions:(const void *)arg2;	// IMP=0x00000000000ca4a6
- (id)navigationPuck;	// IMP=0x00000000000ca489
- (long long)tileSize;	// IMP=0x00000000000ca471
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;	// IMP=0x00000000000ca161
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c9f10
- (id)markerAtScreenPoint:(struct CGPoint)arg1 enableExtendedFeatureMarkers:(_Bool)arg2;	// IMP=0x00000000000c9ab3
- (void)clearScene;	// IMP=0x00000000000c9aad
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;	// IMP=0x00000000000c9a90
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;	// IMP=0x00000000000c994b
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;	// IMP=0x00000000000c9935
- (void)mapModelDidReloadStylesheet:(id)arg1;	// IMP=0x00000000000c98df
- (void)mapModelLabelsDidLayout:(id)arg1;	// IMP=0x00000000000c98bf
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const void *)arg2;	// IMP=0x00000000000c989f
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const void *)arg2;	// IMP=0x00000000000c987f
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;	// IMP=0x00000000000c983a
- (_Bool)shouldHideOffscreenSelectedAnnotation;	// IMP=0x00000000000c9828
- (CDUnknownBlockType)globeAnnotationCoordinateTest;	// IMP=0x00000000000c9700
- (CDUnknownBlockType)globeAnnotationRectTest;	// IMP=0x00000000000c96d4
- (CDUnknownBlockType)annotationCoordinateTest;	// IMP=0x00000000000c9694
- (CDUnknownBlockType)annotationRectTest;	// IMP=0x00000000000c9654
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;	// IMP=0x00000000000c949b
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;	// IMP=0x00000000000c93db
- (void)removeOverlay:(id)arg1;	// IMP=0x00000000000c9338
- (void)addOverlay:(id)arg1;	// IMP=0x00000000000c927b
- (void)updateOverlays;	// IMP=0x00000000000c91d8
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000000c91c6
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000000c8fab
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000000c8d11
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;	// IMP=0x00000000000c896b
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;	// IMP=0x00000000000c8726
- (void)updateCameraForFrameResize;	// IMP=0x00000000000c8338
- (optional_44235073)_zoomLevelForCanvasSize:(struct CGSize)arg1;	// IMP=0x00000000000c826d
- (void)updateWithTimestamp:(double)arg1 withContext:(void *)arg2;	// IMP=0x00000000000c8156
- (id)consoleString:(_Bool)arg1;	// IMP=0x00000000000c80d3
- (id)detailedDescription;	// IMP=0x00000000000c800d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000c7f38
- (void)dealloc;	// IMP=0x00000000000c7e83
- (id)initWithMapEngine:(void *)arg1 inBackground:(_Bool)arg2;	// IMP=0x00000000000c7cf8
- (void)transferStateFromCanvas:(id)arg1;	// IMP=0x00000000000c7c90
- (void)setContentsScale:(double)arg1;	// IMP=0x00000000000c7c8a
- (void)reloadStylesheet;	// IMP=0x00000000000c7c6d
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000c7c04
- (void)setMapType:(int)arg1;	// IMP=0x00000000000c7bed
- (id)attributionsForCurrentRegion;	// IMP=0x00000000000c79fd
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (_Bool)_isGlobeEnabled;	// IMP=0x00000000000c77a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
