//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CustomPOIsController, MKAnnotationView, MKMapView, MapCameraController, NSString, VKLabelMarker;
@protocol CustomPOIAnnotation, MapSelectionManagerDelegate, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MapSelectionManager : NSObject
{
    _Bool needsUpdate;	// 8 = 0x8
    _Bool _mapSelectionChangePending;	// 9 = 0x9
    _Bool _isCluster;	// 10 = 0xa
    _Bool _selectionFromTap;	// 11 = 0xb
    VKLabelMarker *_pendingSelectedLabelMarker;	// 16 = 0x10
    double _clusterDeselectZoomThreshold;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_updateGroup;	// 32 = 0x20
    int _updateCount;	// 40 = 0x28
    _Bool _ignoreSelectionChanges;	// 44 = 0x2c
    id <MapSelectionManagerDelegate> _delegate;	// 48 = 0x30
    MapCameraController *_mapCameraController;	// 56 = 0x38
    CustomPOIsController *_customPOIsController;	// 64 = 0x40
    VKLabelMarker *_labelMarker;	// 72 = 0x48
    MKAnnotationView *_annotationView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000009bba4c
@property(nonatomic) _Bool ignoreSelectionChanges; // @synthesize ignoreSelectionChanges=_ignoreSelectionChanges;
@property(retain, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(nonatomic) __weak CustomPOIsController *customPOIsController; // @synthesize customPOIsController=_customPOIsController;
@property(retain, nonatomic) MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(nonatomic) __weak id <MapSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x00100000009bb929
- (int)currentUITargetForAnalytics;	// IMP=0x00100000009bb884
- (void)resumeUpdates;	// IMP=0x00100000009bb867
- (void)suspendUpdates;	// IMP=0x00100000009bb84a
- (void)_handleSelectingTapGesture:(id)arg1;	// IMP=0x00100000009bb840
- (void)_clearClusterSelectionOnGesture:(id)arg1;	// IMP=0x00100000009bb7ea
- (void)_handleMapZoomingGesture:(id)arg1;	// IMP=0x00100000009bb4a7
- (void)_handleMapPinch:(id)arg1;	// IMP=0x00100000009bb495
- (void)_applyMapSelectionDidChange;	// IMP=0x00100000009bb460
- (void)_performAnalyticsForTappingOnAnnotationView:(id)arg1;	// IMP=0x00100000009bb1e4
- (void)_performAnalyticsForTappingOnLabelMarker:(id)arg1;	// IMP=0x00100000009bb030
- (void)mapDidSelectAnnotationView:(id)arg1;	// IMP=0x00100000009baf60
- (void)mapDidSelectLabelMarker:(id)arg1;	// IMP=0x00100000009bad25
- (_Bool)shouldSelectLabelMarker:(id)arg1;	// IMP=0x00100000009babd8
- (void)restoreSelectionState:(id)arg1 animated:(_Bool)arg2 restoreRegion:(_Bool)arg3 notifyDelegate:(_Bool)arg4;	// IMP=0x00100000009ba819
- (void)restoreSelectionState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009ba7fb
- (id)selectionStateIncludingCamera:(_Bool)arg1 includeNotCustomLabelMarkers:(_Bool)arg2;	// IMP=0x00100000009ba5fe
- (void)_selectLabelMarkerWithKeys:(id)arg1 camera:(id)arg2 animated:(_Bool)arg3 restoreRegion:(_Bool)arg4 updateIfNeeded:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000009ba1a0
- (void)selectLabelMarkerWithKeys:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009ba178
- (void)selectMapItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009b9fbf
- (void)selectSearchResult:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009b9ea1
- (void)selectLabelMarker:(id)arg1 animated:(_Bool)arg2 updateIfNeeded:(_Bool)arg3;	// IMP=0x00100000009b9d45
- (void)selectLabelMarker:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009b9d2d
- (void)clearSelectionAnimated:(_Bool)arg1 updateIfNeeded:(_Bool)arg2;	// IMP=0x00100000009b9a8a
- (void)clearSelectionAnimated:(_Bool)arg1;	// IMP=0x00100000009b9a73
- (void)clearSelection;	// IMP=0x00100000009b9a5c
@property(readonly, nonatomic) _Bool hasSelection;
@property(readonly, nonatomic) id <CustomPOIAnnotation> customLabelMarker;
- (void)setLabelMarker:(id)arg1 updateIfNeeded:(_Bool)arg2;	// IMP=0x00100000009b9702
- (void)_removeGestureRecognizersForMapView:(id)arg1;	// IMP=0x00100000009b9595
- (void)_addGestureRecognizersForMapView:(id)arg1;	// IMP=0x00100000009b943f
- (void)_setNeedsUpdate;	// IMP=0x00100000009b9241
- (void)_notifyDelegate;	// IMP=0x00100000009b91a8
@property(readonly, nonatomic) __weak MKMapView *mapView;
- (void)dealloc;	// IMP=0x00100000009b90ea
- (id)initWithCameraController:(id)arg1;	// IMP=0x00100000009b8fe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

