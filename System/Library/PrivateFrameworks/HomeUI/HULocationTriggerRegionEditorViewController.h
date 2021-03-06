//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeUI/HFLocationManagerObserver-Protocol.h>
#import <HomeUI/HULocationTriggerEditorMapDragRadiusViewDelegate-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/MKMapViewDelegate-Protocol.h>
#import <HomeUI/MKMapViewDelegatePrivate-Protocol.h>
#import <HomeUI/UISearchBarDelegate-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class GEOLocationShifter, HMHome, HULocationTriggerEditorMapDragRadiusView, HULocationTriggerRegion, MKLocalSearch, MKMapView, NSArray, NSIndexPath, NSLayoutConstraint, NSString, UISearchBar, UITableView, UIView;
@protocol HULocationTriggerRegionEditorViewControllerDelegate;

@interface HULocationTriggerRegionEditorViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MKMapViewDelegate, MKMapViewDelegatePrivate, HFLocationManagerObserver, HULocationTriggerEditorMapDragRadiusViewDelegate, HUPreloadableViewController>
{
    HULocationTriggerRegion *_region;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    id <HULocationTriggerRegionEditorViewControllerDelegate> _delegate;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    UIView *_dividerView;	// 40 = 0x28
    UITableView *_tableView;	// 48 = 0x30
    MKMapView *_mapView;	// 56 = 0x38
    HULocationTriggerEditorMapDragRadiusView *_dragView;	// 64 = 0x40
    NSIndexPath *_selectedIndexPath;	// 72 = 0x48
    GEOLocationShifter *_locationShifter;	// 80 = 0x50
    NSArray *_constraints;	// 88 = 0x58
    NSLayoutConstraint *_mapHeightConstraint;	// 96 = 0x60
    NSArray *_recents;	// 104 = 0x68
    MKLocalSearch *_localSearch;	// 112 = 0x70
    NSArray *_localSearchResults;	// 120 = 0x78
}

+ (id)_pinImage;	// IMP=0x0000000000029cde
+ (id)_homeImage;	// IMP=0x0000000000029ccd
- (void).cxx_destruct;	// IMP=0x000000000002a53a
@property(retain, nonatomic) NSArray *localSearchResults; // @synthesize localSearchResults=_localSearchResults;
@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(retain, nonatomic) NSArray *recents; // @synthesize recents=_recents;
@property(retain, nonatomic) NSLayoutConstraint *mapHeightConstraint; // @synthesize mapHeightConstraint=_mapHeightConstraint;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) GEOLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) HULocationTriggerEditorMapDragRadiusView *dragView; // @synthesize dragView=_dragView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <HULocationTriggerRegionEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HULocationTriggerRegion *region; // @synthesize region=_region;
- (id)_shiftLocationIfNeeded:(id)arg1 isRetry:(_Bool)arg2;	// IMP=0x0000000000029d03
- (id)_shiftLocationIfNeeded:(id)arg1;	// IMP=0x0000000000029cef
- (id)hu_preloadContent;	// IMP=0x0000000000029cb4
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000029a3c
- (void)_resetSearchResults;	// IMP=0x00000000000299ab
- (id)mapRadiusView:(id)arg1 overlayForRadius:(double)arg2;	// IMP=0x00000000000298eb
- (CDStruct_02837cd9)mapRadiusView:(id)arg1 boundingMapRectForOverlay:(id)arg2;	// IMP=0x000000000002984a
- (id)_overlayWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;	// IMP=0x000000000002974e
- (void)mapRadiusView:(id)arg1 radiusDidChange:(double)arg2;	// IMP=0x00000000000294ae
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x0000000000029349
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00000000000291b4
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;	// IMP=0x0000000000029172
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x0000000000029062
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0000000000028f51
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;	// IMP=0x0000000000028f0f
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x0000000000028e2b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028857
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000028376
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000282fd
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000028251
- (void)_done:(id)arg1;	// IMP=0x00000000000281e0
- (void)_cancel:(id)arg1;	// IMP=0x0000000000028194
- (void)_showMapRegionForCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2;	// IMP=0x0000000000027f85
- (id)_locationForRecentMetadataDictionary:(id)arg1;	// IMP=0x0000000000027da1
- (void)_displayLocation:(id)arg1;	// IMP=0x00000000000279e5
- (unsigned long long)_proximityType;	// IMP=0x000000000002792e
- (_Bool)_hasLocation;	// IMP=0x00000000000278fb
- (void)_updateMapHeight;	// IMP=0x000000000002785f
- (double)_mapHeight;	// IMP=0x0000000000027851
- (void)_setupMap;	// IMP=0x000000000002776b
- (void)_reloadData;	// IMP=0x000000000002772e
- (long long)_firstLocalSearchResultRowIndex;	// IMP=0x000000000002769b
- (long long)_lastRecentRowIndex;	// IMP=0x0000000000027627
- (long long)_firstRecentRowIndex;	// IMP=0x00000000000275a9
- (long long)_homeRowIndex;	// IMP=0x00000000000275a1
- (void)_updateRecentsWithSearchText:(id)arg1;	// IMP=0x0000000000027199
- (void)_updateUIWithRegion:(id)arg1;	// IMP=0x0000000000026b3d
- (void)_updateUI;	// IMP=0x0000000000026af1
- (id)showLocationRegionInvalidAlert;	// IMP=0x00000000000267dc
- (void)updateViewConstraints;	// IMP=0x0000000000025924
- (void)viewDidLayoutSubviews;	// IMP=0x000000000002589c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000025715
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000025697
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000254f2
- (void)loadView;	// IMP=0x0000000000024fb2
- (id)initWithRegion:(id)arg1 home:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000024dc7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000024d12
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000024c5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

