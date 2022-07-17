//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMFUI/MKMapViewDelegate-Protocol.h>
#import <FMFUI/UIGestureRecognizerDelegate-Protocol.h>

@class FMAnnotationView, FMFWildcardGestureRecognizer, MKMapView, NSString;
@protocol FMFMapViewDelegateInternalDelegate;

__attribute__((visibility("hidden")))
@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate>
{
    _Bool _isMapCenteringDisabled;	// 8 = 0x8
    _Bool _respondingToUserTouch;	// 9 = 0x9
    id <FMFMapViewDelegateInternalDelegate> _delegate;	// 16 = 0x10
    FMFWildcardGestureRecognizer *_gr;	// 24 = 0x18
    FMAnnotationView *_selectedAnnotationView;	// 32 = 0x20
    MKMapView *_mapView;	// 40 = 0x28
    struct CLLocationCoordinate2D _lastUserLocationCoordinate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001a01d
@property(nonatomic) struct CLLocationCoordinate2D lastUserLocationCoordinate; // @synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate;
@property(nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) FMAnnotationView *selectedAnnotationView; // @synthesize selectedAnnotationView=_selectedAnnotationView;
@property(retain, nonatomic) FMFWildcardGestureRecognizer *gr; // @synthesize gr=_gr;
@property(nonatomic) _Bool respondingToUserTouch; // @synthesize respondingToUserTouch=_respondingToUserTouch;
@property(nonatomic) __weak id <FMFMapViewDelegateInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMapCenteringDisabled; // @synthesize isMapCenteringDisabled=_isMapCenteringDisabled;
- (_Bool)regionIsValid:(CDStruct_26e8d939)arg1;	// IMP=0x0000000000019f49
- (struct UIEdgeInsets)edgeInsetsWithMinApplied:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000019d37
- (CDStruct_90e2a262)mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D)arg1 andRadius:(double)arg2;	// IMP=0x0000000000019cd7
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(_Bool)arg2 disallowAnimation:(_Bool)arg3;	// IMP=0x00000000000191e1
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;	// IMP=0x0000000000018d16
- (void)_moveCenterByOffset:(struct CGPoint)arg1 from:(struct CLLocationCoordinate2D)arg2 mapView:(id)arg3;	// IMP=0x0000000000018c74
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;	// IMP=0x0000000000018aba
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;	// IMP=0x0000000000018958
- (id)accuracyCircleForLocation:(id)arg1;	// IMP=0x0000000000018881
- (id)fmfOverlayColorSatellite;	// IMP=0x00000000000187a5
- (id)fmfOverlayColor;	// IMP=0x00000000000186c9
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00000000000185f9
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;	// IMP=0x00000000000185bc
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;	// IMP=0x00000000000184d2
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x000000000001831e
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x0000000000018249
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;	// IMP=0x0000000000018076
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x0000000000017ebb
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0000000000017bef
- (void)selectAnnotation:(id)arg1;	// IMP=0x0000000000017b78
- (_Bool)canSelectAnnotation:(id)arg1;	// IMP=0x0000000000017af9
- (void)endTouches;	// IMP=0x0000000000017ae5
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;	// IMP=0x0000000000017889

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
