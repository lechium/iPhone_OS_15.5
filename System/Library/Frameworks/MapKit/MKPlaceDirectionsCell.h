//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKLocationManagerObserver-Protocol.h>
#import <MapKit/MKQuickRouteConfigurableView-Protocol.h>
#import <MapKit/MKQuickRouteManagerDelegate-Protocol.h>

@class MKMapItem, NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, _MKQuickRouteManager;

__attribute__((visibility("hidden")))
@interface MKPlaceDirectionsCell <MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKLocationManagerObserver>
{
    UIButton *_directionsButton;	// 8 = 0x8
    UIButton *_walkButton;	// 16 = 0x10
    UIButton *_transitButton;	// 24 = 0x18
    UIButton *_driveButton;	// 32 = 0x20
    UILabel *_walkTimeLabel;	// 40 = 0x28
    UILabel *_transitTimeLabel;	// 48 = 0x30
    UILabel *_driveTimeLabel;	// 56 = 0x38
    NSLayoutConstraint *_directionsToWalkButtonConstraint;	// 64 = 0x40
    NSLayoutConstraint *_directionsToTransitButtonConstraint;	// 72 = 0x48
    NSLayoutConstraint *_directionsToDriveButtonConstraint;	// 80 = 0x50
    NSLayoutConstraint *_walkButtonToTransitButtonConstraint;	// 88 = 0x58
    NSLayoutConstraint *_walkButtonToDriveButtonConstraint;	// 96 = 0x60
    NSLayoutConstraint *_transitButtonToDriveButtonConstraint;	// 104 = 0x68
    NSLayoutConstraint *_directionsTrailingConstraint;	// 112 = 0x70
    NSLayoutConstraint *_walkButtonTrailingConstraint;	// 120 = 0x78
    NSLayoutConstraint *_transitButtonTrailingConstraint;	// 128 = 0x80
    NSLayoutConstraint *_driveButtonTrailingConstraint;	// 136 = 0x88
    _MKQuickRouteManager *_quickRouteManager;	// 144 = 0x90
    NSMutableArray *_baseConstraints;	// 152 = 0x98
    NSMutableArray *_buttonBaselineConstraints;	// 160 = 0xa0
    _Bool _offlineMode;	// 168 = 0xa8
    MKMapItem *_mapItem;	// 176 = 0xb0
    CDUnknownBlockType _requestDirectionsBlock;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000e32e8
@property(nonatomic) _Bool offlineMode; // @synthesize offlineMode=_offlineMode;
@property(copy, nonatomic) CDUnknownBlockType requestDirectionsBlock; // @synthesize requestDirectionsBlock=_requestDirectionsBlock;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000e3237
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000e3231
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000e322b
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000e3225
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000e321d
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000e3200
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000e31fa
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000e31dd
- (_Bool)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;	// IMP=0x00000000000e31d5
- (_Bool)quickRouteShouldOnlyUseAutomobile;	// IMP=0x00000000000e31cd
- (unsigned long long)preferredDirectionsTypeForQuickRoute;	// IMP=0x00000000000e31c2
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000000e31a9
- (void)_drivingDirectionsTapped:(id)arg1;	// IMP=0x00000000000e30f1
- (void)_transitDirectionsTapped:(id)arg1;	// IMP=0x00000000000e3039
- (void)_walkingDirectionsTapped:(id)arg1;	// IMP=0x00000000000e2f81
- (void)_quickDirectionsTapped:(id)arg1;	// IMP=0x00000000000e2ec9
- (void)updateETAFor:(unsigned long long)arg1 button:(id)arg2 label:(id)arg3;	// IMP=0x00000000000e2d23
- (void)updateETAs:(_Bool)arg1 constraintsOnly:(_Bool)arg2;	// IMP=0x00000000000e21dd
- (void)contentSizeDidChange;	// IMP=0x00000000000e1f64
- (void)updateConstraints;	// IMP=0x00000000000e1e53
- (id)newLabel;	// IMP=0x00000000000e1d84
- (id)newButtonWithImage:(id)arg1 andSelector:(SEL)arg2;	// IMP=0x00000000000e1bd9
- (id)timeEstimateFont;	// IMP=0x00000000000e1bb6
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000e1b45
- (void)dealloc;	// IMP=0x00000000000e1a96
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e0ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

