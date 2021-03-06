//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

#import <FlightUtilities/MKAnnotation-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation>
{
    _Bool _showsPlane;	// 8 = 0x8
    NSMutableArray *_viewAddedBlock;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
}

+ (id)defaultAnotation;	// IMP=0x0000000000001c96
+ (Class)layerClass;	// IMP=0x000000000000180a
- (void).cxx_destruct;	// IMP=0x00000000000020a6
@property(retain) NSMutableArray *viewAddedBlock; // @synthesize viewAddedBlock=_viewAddedBlock;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void)notifyWhenIsVisibleWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001f7c
- (void)didMoveToSuperview;	// IMP=0x0000000000001e1e
- (void)setPlaneImage:(id)arg1;	// IMP=0x0000000000001d43
- (void)setShowsPlane:(_Bool)arg1;	// IMP=0x0000000000001caf
- (id)init;	// IMP=0x0000000000001b05
- (void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4;	// IMP=0x0000000000001a8c
@property(readonly) struct CLLocationCoordinate2D currentLocation;
@property(nonatomic) double currentProgress;
@property(nonatomic) struct CLLocationCoordinate2D endLocation;
@property(nonatomic) struct CLLocationCoordinate2D startLocation;
- (id)planeLayer;	// IMP=0x000000000000181b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

