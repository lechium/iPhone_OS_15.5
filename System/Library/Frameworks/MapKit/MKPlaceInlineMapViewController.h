//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKAnnotatedMapSnapshotter, MKMapCamera, MKMapItem, NSArray, NSString, _MKPlaceInlineMapContentView, _MKPlaceViewController;

@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol>
{
    _MKPlaceInlineMapContentView *_contentView;	// 8 = 0x8
    MKMapItem *_updatingInlineMapItem;	// 16 = 0x10
    MKAnnotatedMapSnapshotter *_collectionSnapshotter;	// 24 = 0x18
    struct CGSize _currentSize;	// 32 = 0x20
    _Bool _bottomHairlineHidden;	// 48 = 0x30
    _Bool _useWindowTrait;	// 49 = 0x31
    MKMapItem *_mapItem;	// 56 = 0x38
    _MKPlaceViewController *_owner;	// 64 = 0x40
    MKMapCamera *_mapCamera;	// 72 = 0x48
}

+ (id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000436c0
- (void).cxx_destruct;	// IMP=0x0000000000044d73
@property(retain, nonatomic) MKMapCamera *mapCamera; // @synthesize mapCamera=_mapCamera;
@property(nonatomic) _Bool useWindowTrait; // @synthesize useWindowTrait=_useWindowTrait;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property(nonatomic, getter=isBottomHairlineHidden) _Bool bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (long long)preferredUserInterfaceStyle;	// IMP=0x0000000000044c9c
- (id)traitCollectionForSnapshot;	// IMP=0x0000000000044c08
- (void)_launchMaps;	// IMP=0x0000000000044b4a
- (void)_handleTapOnMap;	// IMP=0x00000000000449c3
- (void)_updateSnapshotImage:(id)arg1;	// IMP=0x000000000004487c
- (struct CGSize)_mapSize;	// IMP=0x0000000000044761
- (void)cancelSnapshotRequestIfNeeded;	// IMP=0x00000000000446ad
- (void)_updateInlineMapWithRefinedMapItems;	// IMP=0x0000000000043e8f
- (void)updateInlineMapWithRefinedMapItems;	// IMP=0x0000000000043e04
- (void)_updateMap;	// IMP=0x0000000000043d98
- (void)_updateMapIfNeeded;	// IMP=0x0000000000043ac1
- (id)snapshot;	// IMP=0x0000000000043aa4
@property(readonly, nonatomic) NSArray *visibleMapItems;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000043939
- (void)viewDidLoad;	// IMP=0x0000000000043880
- (void)loadView;	// IMP=0x0000000000043813
- (id)initWithMKMapItem:(id)arg1;	// IMP=0x0000000000043790
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000436b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

