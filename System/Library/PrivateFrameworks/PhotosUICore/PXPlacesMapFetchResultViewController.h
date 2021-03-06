//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerChangeDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapControllerSelectionDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesMapFetchResultControllerAccess-Protocol.h>

@class NSString, PHAsset, PXPhotoKitAssetsDataSourceManager, PXPlacesMapFetchResultController, UIBarButtonItem;
@protocol PXPlacesAssetsSelectionDelegate, PXPlacesGeotaggable, PXPlacesMapBarButtonsDelegate, PXPlacesMapGeotaggableInfoDelegate, PXPlacesMapLocationEditDelegate;

@interface PXPlacesMapFetchResultViewController : UIViewController <PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerSelectionDelegate, PXOneUpPresentationDelegate, PXPlacesMapFetchResultControllerAccess>
{
    _Bool _showNavigationBar;	// 8 = 0x8
    _Bool _canEditLocation;	// 9 = 0x9
    _Bool _autoRefocusOnDataChange;	// 10 = 0xa
    id <PXPlacesAssetsSelectionDelegate> _assetSelectionDelegate;	// 16 = 0x10
    id <PXPlacesMapBarButtonsDelegate> _barButtonsDelegate;	// 24 = 0x18
    id <PXPlacesMapLocationEditDelegate> _editLocationDelegate;	// 32 = 0x20
    UIViewController *_pxOneUpPresentationViewController;	// 40 = 0x28
    unsigned long long _style;	// 48 = 0x30
    PXPlacesMapFetchResultController *_mapFetchResultsController;	// 56 = 0x38
    PHAsset<PXPlacesGeotaggable> *_selectedGeotaggable;	// 64 = 0x40
    id <PXPlacesMapGeotaggableInfoDelegate> _geotaggableInfoDelegate;	// 72 = 0x48
    UIBarButtonItem *_filterAssetsBtn;	// 80 = 0x50
    PXPhotoKitAssetsDataSourceManager *_oneUpDataSourceManager;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000173d35
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *oneUpDataSourceManager; // @synthesize oneUpDataSourceManager=_oneUpDataSourceManager;
@property(retain, nonatomic) UIBarButtonItem *filterAssetsBtn; // @synthesize filterAssetsBtn=_filterAssetsBtn;
@property(retain, nonatomic) id <PXPlacesMapGeotaggableInfoDelegate> geotaggableInfoDelegate; // @synthesize geotaggableInfoDelegate=_geotaggableInfoDelegate;
@property(retain) PHAsset<PXPlacesGeotaggable> *selectedGeotaggable; // @synthesize selectedGeotaggable=_selectedGeotaggable;
@property(retain, nonatomic) PXPlacesMapFetchResultController *mapFetchResultsController; // @synthesize mapFetchResultsController=_mapFetchResultsController;
@property _Bool autoRefocusOnDataChange; // @synthesize autoRefocusOnDataChange=_autoRefocusOnDataChange;
@property _Bool canEditLocation; // @synthesize canEditLocation=_canEditLocation;
@property(nonatomic) _Bool showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *pxOneUpPresentationViewController; // @synthesize pxOneUpPresentationViewController=_pxOneUpPresentationViewController;
@property(nonatomic) __weak id <PXPlacesMapLocationEditDelegate> editLocationDelegate; // @synthesize editLocationDelegate=_editLocationDelegate;
@property(nonatomic) __weak id <PXPlacesMapBarButtonsDelegate> barButtonsDelegate; // @synthesize barButtonsDelegate=_barButtonsDelegate;
@property(nonatomic) __weak id <PXPlacesAssetsSelectionDelegate> assetSelectionDelegate; // @synthesize assetSelectionDelegate=_assetSelectionDelegate;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000173ab4
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001739ee
- (void)didEnterForeground:(id)arg1;	// IMP=0x0000000000173943
- (_Bool)pu_shouldOptOutFromChromelessBars;	// IMP=0x000000000017393b
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x00000000001738c1
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000001738b6
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x000000000017389d
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x000000000017388b
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;	// IMP=0x000000000017383c
- (void)dataSourceDidChange:(id)arg1;	// IMP=0x000000000017375d
- (void)mapRegionDidChange:(id)arg1;	// IMP=0x0000000000173757
- (void)locationServiceAuthorizationChanged;	// IMP=0x00000000001736cc
- (id)dataSourceForAssets:(id)arg1;	// IMP=0x0000000000173485
- (id)_fetchHydratedAssetForPlacesAsset:(id)arg1;	// IMP=0x0000000000173302
- (void)_selectedGeotaggables:(id)arg1;	// IMP=0x0000000000172d5b
- (void)tapShowAll:(id)arg1;	// IMP=0x0000000000172ce3
- (void)tapInfoToolbarButton:(id)arg1;	// IMP=0x0000000000172a96
- (void)tapCountToolbarButton:(id)arg1;	// IMP=0x0000000000172a84
- (void)tapFilterAssetsBtn:(id)arg1;	// IMP=0x00000000001729d6
- (void)_reloadContentModeDisplay:(unsigned long long)arg1;	// IMP=0x0000000000172924
- (void)_placeToolbarItems:(id)arg1;	// IMP=0x000000000017287b
- (void)_placeNavigationBarItems:(id)arg1;	// IMP=0x00000000001727b3
- (void)_editDidPress;	// IMP=0x0000000000172647
- (void)reloadStyle;	// IMP=0x000000000017221b
- (void)viewDidLoad;	// IMP=0x0000000000171bc2
- (void)loadView;	// IMP=0x0000000000171ae6
- (void)dealloc;	// IMP=0x0000000000171a71
- (void)_commonInit;	// IMP=0x00000000001718a8
- (id)init;	// IMP=0x000000000017185c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000171810
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001717c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

