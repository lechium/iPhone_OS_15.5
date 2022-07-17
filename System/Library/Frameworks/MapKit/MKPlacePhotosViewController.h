//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKAddPhotoBadgeViewDelegate-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKMuninContainerViewDelegate-Protocol.h>
#import <MapKit/MKMuninViewProvider-Protocol.h>
#import <MapKit/MKPhotoGalleryTransitionAnimator-Protocol.h>
#import <MapKit/MKPlaceAttributionCellDelegate-Protocol.h>
#import <MapKit/MKPlacePhotoGalleryViewControllerDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/UIViewControllerTransitioningDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKMuninContainerView, MKMuninView, MKPassthroughView, MKPhotoBigAttributionView, MKPlaceAttributionCell, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UIScrollView, UIView, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate, _MKInfoCardAnalyticsDelegate;

@interface MKPlacePhotosViewController : UIViewController <MKPlaceAttributionCellDelegate, UIScrollViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MKAddPhotoBadgeViewDelegate, MKMuninContainerViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol, MKMuninViewProvider>
{
    UIView *_bottomHairline;	// 8 = 0x8
    UIImageView *_imageViewForTransition;	// 16 = 0x10
    MKPhotoBigAttributionView *_primaryAttributionView;	// 24 = 0x18
    MKPhotoBigAttributionView *_secondaryAttributionView;	// 32 = 0x20
    NSArray *_photoViews;	// 40 = 0x28
    UIScrollView *_photosContainerScrollView;	// 48 = 0x30
    UIView *_photosContainer;	// 56 = 0x38
    UIView *_photosSmallAttributionsView;	// 64 = 0x40
    MKPassthroughView *_attributionClippingview;	// 72 = 0x48
    double _lastPhotoScrollOffset;	// 80 = 0x50
    _Bool _photoScrollViewScrollingLeft;	// 88 = 0x58
    _Bool _photoScrollViewScrollingRight;	// 89 = 0x59
    _Bool _canUseFullscreenViewer;	// 90 = 0x5a
    _Bool _photoLoaded;	// 91 = 0x5b
    _Bool _loadAppImageCanceledOrFailed;	// 92 = 0x5c
    _Bool _isRTL;	// 93 = 0x5d
    unsigned long long _photosCount;	// 96 = 0x60
    UIView *_externalView;	// 104 = 0x68
    MKMapItem *_mapItem;	// 112 = 0x70
    NSLayoutConstraint *_heightConstraint;	// 120 = 0x78
    NSLayoutConstraint *_bottomConstraint;	// 128 = 0x80
    NSArray *_photos;	// 136 = 0x88
    unsigned long long _mode;	// 144 = 0x90
    unsigned long long _originalMode;	// 152 = 0x98
    unsigned long long _options;	// 160 = 0xa0
    MKPlaceAttributionCell *_attributionCell;	// 168 = 0xa8
    UIButton *_previousPageButton;	// 176 = 0xb0
    UIButton *_nextPageButton;	// 184 = 0xb8
    MKMuninContainerView *_muninContainerView;	// 192 = 0xc0
    UIScrollView *_parentScrollView;	// 200 = 0xc8
    unsigned long long _initialAppearanceSignpostID;	// 208 = 0xd0
    _Bool _isDisappearing;	// 216 = 0xd8
    _Bool _showsBottomHairline;	// 217 = 0xd9
    _Bool _hoverActive;	// 218 = 0xda
    _MKPlaceViewController *_owner;	// 224 = 0xe0
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0000000000138ee9
@property(nonatomic) _Bool hoverActive; // @synthesize hoverActive=_hoverActive;
@property(nonatomic) _Bool showsBottomHairline; // @synthesize showsBottomHairline=_showsBottomHairline;
@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000138de1
- (void)viewLayoutMarginsDidChange;	// IMP=0x0000000000138d95
- (void)_setContentVisibility:(long long)arg1;	// IMP=0x0000000000138c5c
- (void)setContentVisibility:(long long)arg1;	// IMP=0x0000000000138bec
- (id)infoCardChildUnactionableUIElements;	// IMP=0x0000000000138bdf
- (id)infoCardChildPossibleActions;	// IMP=0x0000000000138afb
- (void)_logUGCAction:(int)arg1;	// IMP=0x0000000000138ab4
- (void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2;	// IMP=0x0000000000138a15
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000013869a
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000001385bf
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;	// IMP=0x0000000000138487
- (_Bool)dismissPhotoGalleryIfNecessary:(id)arg1;	// IMP=0x0000000000138434
- (void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;	// IMP=0x00000000001382df
- (void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;	// IMP=0x000000000013818c
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;	// IMP=0x000000000013809c
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;	// IMP=0x0000000000137ff2
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;	// IMP=0x0000000000137f48
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000137d1e
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000137b5e
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000137894
- (void)placePhotoGalleryAdditionalViewTapped:(id)arg1;	// IMP=0x0000000000137799
- (void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;	// IMP=0x000000000013756e
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001374ea
- (void)addPhotoBadgeViewTapped:(id)arg1;	// IMP=0x00000000001373fc
- (void)_didTapAttributionViewWithPresentingViewController:(id)arg1 photoAttributionView:(id)arg2;	// IMP=0x0000000000137151
- (void)didTapPrimaryAttributionViewWithPresentingViewController:(id)arg1;	// IMP=0x0000000000137134
- (void)didTapSecondaryAttributionViewWithPresentingViewController:(id)arg1;	// IMP=0x0000000000137117
- (void)_photoTappedAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000136bee
- (void)_photoSelected:(id)arg1;	// IMP=0x000000000013694f
- (void)_loadPhotos;	// IMP=0x0000000000136460
- (void)_cancelLoadPhotos;	// IMP=0x00000000001361ac
- (void)_updatePhotoBackgroundColor:(id)arg1;	// IMP=0x0000000000136053
- (void)infoCardThemeChanged;	// IMP=0x0000000000135f76
- (void)_updateChevronVisibility;	// IMP=0x0000000000135dc3
- (void)handleHover:(id)arg1;	// IMP=0x0000000000135d63
- (void)_adjustScrollIndexByOffset:(long long)arg1;	// IMP=0x0000000000135c21
- (void)_scrollNext;	// IMP=0x0000000000135c0a
- (void)_scrollPrevious;	// IMP=0x0000000000135bf1
- (void)_updateAlphaAttribution;	// IMP=0x0000000000135a2e
- (void)_catchScrollNotification:(id)arg1;	// IMP=0x00000000001359b6
- (void)updateAttributionPositionWithOffset:(double)arg1;	// IMP=0x00000000001353b4
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000135398
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001352bd
- (struct CGSize)_photoSizeForIndex:(unsigned long long)arg1;	// IMP=0x0000000000135093
- (struct CGSize)_photoActionSize;	// IMP=0x0000000000135048
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;	// IMP=0x000000000013501b
- (void)layoutImages;	// IMP=0x0000000000134194
- (void)_applyCornerRadius;	// IMP=0x00000000001335b3
- (void)_createImageViews;	// IMP=0x0000000000133041
- (void)openURL;	// IMP=0x0000000000132f6d
- (id)attributionString;	// IMP=0x0000000000132e01
- (id)_firstPartyMorePhotosAttributionString;	// IMP=0x0000000000132b62
- (id)formattedAttributionString;	// IMP=0x00000000001329c4
- (void)updateAttributionCell;	// IMP=0x0000000000132960
- (void)addAttributionCell;	// IMP=0x0000000000132879
@property(readonly, nonatomic) MKMuninView *muninView;
- (void)updateBottomHairlineVisibility;	// IMP=0x000000000013267c
- (void)dealloc;	// IMP=0x000000000013262a
- (void)_willResignActive:(id)arg1;	// IMP=0x0000000000132618
- (void)_didBecomeActive:(id)arg1;	// IMP=0x0000000000132589
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001324f2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000013246a
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000132200
- (void)viewDidLoad;	// IMP=0x0000000000130502
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000012fe68
@property(readonly, nonatomic) _Bool isCompactMode;
@property(readonly, nonatomic) id <_MKInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, nonatomic) _Bool shouldShowAddPhotoButtons;
@property(readonly, nonatomic) unsigned long long numberOfBigAttributionViews;
@property(readonly, nonatomic) _Bool isFirstParty;
- (_Bool)isSafariProcess;	// IMP=0x000000000012fc37
- (_Bool)isParsecProcess;	// IMP=0x000000000012fb8d
- (_Bool)isSiriProcess;	// IMP=0x000000000012fb11
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000012fb09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
