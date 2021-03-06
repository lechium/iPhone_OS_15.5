//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, EKEventMapCell, MKMapItemView, UIView;

@interface EKEventMapDetailItem
{
    EKEventMapCell *_cell;	// 40 = 0x28
    MKMapItemView *_mapView;	// 48 = 0x30
    UIView *_loadingView;	// 56 = 0x38
    CLLocation *_location;	// 64 = 0x40
    EKEventMapCell *_oldCell;	// 72 = 0x48
    _Bool _animationHasRan;	// 80 = 0x50
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x0000000000148847
@property(nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
- (void)_animateMapIfNeededWithPresentingController:(id)arg1 presentingView:(id)arg2;	// IMP=0x00000000001484b2
- (double)_mapHeight;	// IMP=0x0000000000148268
- (void)_loadMapItem:(id)arg1 withCoordinateSpan:(CDStruct_c3b9c2ee)arg2;	// IMP=0x0000000000147ca6
- (void)setupMapView;	// IMP=0x00000000001475b7
- (CDStruct_c3b9c2ee)_makeSpanWithCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 minRadius:(double)arg3;	// IMP=0x0000000000147373
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;	// IMP=0x000000000014713f
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000146cf2
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x0000000000146ccf
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x0000000000146c1b
- (void)reset;	// IMP=0x0000000000146be1
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;	// IMP=0x0000000000146bcf
- (void)updateViewColors;	// IMP=0x0000000000146ac7

@end

