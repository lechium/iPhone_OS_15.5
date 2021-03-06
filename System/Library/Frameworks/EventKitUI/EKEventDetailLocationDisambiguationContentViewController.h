//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <EventKitUI/MKMapViewDelegate-Protocol.h>
#import <EventKitUI/UISearchBarDelegate-Protocol.h>
#import <EventKitUI/UITableViewDataSource-Protocol.h>
#import <EventKitUI/UITableViewDelegate-Protocol.h>

@class EKStructuredLocation, MKCircleRenderer, MKMapView, MKPointAnnotation, NSCache, NSMutableArray, NSObject, NSSet, NSString, UISearchBar, UITableView, UIView;
@protocol OS_dispatch_queue;

@interface EKEventDetailLocationDisambiguationContentViewController : UIViewController <UISearchBarDelegate, MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    EKStructuredLocation *_location;	// 8 = 0x8
    NSMutableArray *_pois;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    MKMapView *_mapView;	// 40 = 0x28
    UIView *_separatorLine;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    MKPointAnnotation *_pin;	// 64 = 0x40
    MKCircleRenderer *_circleRenderer;	// 72 = 0x48
    _Bool _textChanged;	// 80 = 0x50
    _Bool _geocoding;	// 81 = 0x51
    _Bool _done;	// 82 = 0x52
    NSObject<OS_dispatch_queue> *_iconRenderQueue;	// 88 = 0x58
    NSCache *_iconCache;	// 96 = 0x60
    _Bool _rowSelectionInitialized;	// 104 = 0x68
    unsigned long long _currentLayoutParadigm;	// 112 = 0x70
    NSSet *_tallConstraints;	// 120 = 0x78
    NSSet *_iPadConstraints;	// 128 = 0x80
    NSSet *_splitConstraints;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000015baa9
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x000000000015ba64
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000015b9d3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000015afc5
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000015afb7
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000015aecc
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000015ae74
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000015ae57
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x000000000015ad9d
- (void)_deselectCircle;	// IMP=0x000000000015ace9
- (void)_selectCircle;	// IMP=0x000000000015ac12
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x000000000015a7b5
- (_Bool)_shouldEnableAddButton;	// IMP=0x000000000015a738
- (_Bool)searchBarShouldBeginEditing:(id)arg1;	// IMP=0x000000000015a6e5
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x000000000015a59c
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x000000000015a55d
- (void)doneTapped:(id)arg1;	// IMP=0x000000000015a461
- (void)cancelTapped:(id)arg1;	// IMP=0x000000000015a444
- (void)viewDidLayoutSubviews;	// IMP=0x000000000015a3da
- (void)_updateMapRegion;	// IMP=0x000000000015a10e
- (void)_selectRow:(unsigned long long)arg1;	// IMP=0x0000000000159bbf
- (void)viewDidLoad;	// IMP=0x000000000015940f
- (void)updateViewConstraints;	// IMP=0x00000000001591a6
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000159114
- (id)_constraintsForParadigm:(unsigned long long)arg1;	// IMP=0x00000000001590de
- (void)_createConstraints;	// IMP=0x0000000000158236
- (id)initWithLocation:(id)arg1 pois:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000157f15

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

