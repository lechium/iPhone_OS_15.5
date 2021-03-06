//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MapGestureCardDismissalPanMediator, NSMutableDictionary;
@protocol MapGestureCardDismissalHelperDelegate;

__attribute__((visibility("hidden")))
@interface MapGestureCardDismissalHelper : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
    MapGestureCardDismissalPanMediator *_panMediator;	// 16 = 0x10
    NSMutableDictionary *_insidenessByGesture;	// 24 = 0x18
    double _dismissalRectTopEdge;	// 32 = 0x20
    unsigned long long _activeGestureCount;	// 40 = 0x28
    _Bool _shouldIgnoreGestures;	// 48 = 0x30
    _Bool _didDismiss;	// 49 = 0x31
    id <MapGestureCardDismissalHelperDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000006ae6db
@property(nonatomic) __weak id <MapGestureCardDismissalHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMapViewDiscreteGesture:(id)arg1;	// IMP=0x00100000006ae642
- (void)handleMapViewContinuousGesture:(id)arg1;	// IMP=0x00100000006ae5ea
- (double)insidenessForGesture:(id)arg1;	// IMP=0x00100000006ae529
- (void)dismissCardWithPanGesture:(id)arg1;	// IMP=0x00100000006ae3fb
- (void)dismissCardWithVelocity:(double)arg1;	// IMP=0x00100000006ae37c
- (_Bool)hasContinuousGestureInProgress;	// IMP=0x00100000006ae36e
- (void)continuousGestureDidChange:(id)arg1;	// IMP=0x00100000006ae11c
- (void)continuousGestureDidEnd:(id)arg1;	// IMP=0x00100000006ae085
- (void)continuousGestureDidBegin:(id)arg1;	// IMP=0x00100000006adf5d
- (void)dealloc;	// IMP=0x00100000006addd1
- (id)initWithMapView:(id)arg1;	// IMP=0x00000000006adbd0

@end

