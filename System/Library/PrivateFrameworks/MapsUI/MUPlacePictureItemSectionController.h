//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MKPhotoGalleryTransitionAnimator-Protocol.h>
#import <MapsUI/MKPlacePhotoGalleryViewControllerDelegate-Protocol.h>
#import <MapsUI/MUPlaceSectionControlling-Protocol.h>
#import <MapsUI/MUPlaceTilesViewDelegate-Protocol.h>
#import <MapsUI/MUScrollAnalyticActionObserving-Protocol.h>
#import <MapsUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class MKPlacePhotoGalleryViewController, MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUPlaceTilesView, MUPunchoutViewModel, NSString, UIImageView, UIView, UIViewController;
@protocol GEOAnnotatedItemList, MUInfoCardAnalyticsDelegate, MUPlacePictureItemSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUPlacePictureItemSectionController <MUPlaceTilesViewDelegate, MKPlacePhotoGalleryViewControllerDelegate, UIViewControllerTransitioningDelegate, MKPhotoGalleryTransitionAnimator, MUScrollAnalyticActionObserving, MUPlaceSectionControlling>
{
    id <GEOAnnotatedItemList> _annotatedList;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    MUPlaceTilesView *_tilesView;	// 24 = 0x18
    UIImageView *_imageViewForTransition;	// 32 = 0x20
    MUPunchoutViewModel *_attributionViewModel;	// 40 = 0x28
    MKPlacePhotoGalleryViewController *_photoGalleryViewController;	// 48 = 0x30
    UIViewController *_presentingViewController;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 72 = 0x48
    id <MUPlacePictureItemSectionControllerDelegate> _pictureItemDelegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000007fe4d
@property(nonatomic) __weak id <MUPlacePictureItemSectionControllerDelegate> pictureItemDelegate; // @synthesize pictureItemDelegate=_pictureItemDelegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)performInstrumentationForScrollRight;	// IMP=0x000000000007fdf9
- (void)performInstrumentationForScrollLeft;	// IMP=0x000000000007fde2
- (int)analyticsModuleType;	// IMP=0x000000000007fdd7
- (void)_captureUserAction:(int)arg1;	// IMP=0x000000000007fdc0
- (void)photoGalleryTransitionAnimatorDidFinishAnimation;	// IMP=0x000000000007fd9b
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x000000000007fad4
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000007f9f9
- (void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;	// IMP=0x000000000007f7fa
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007f7dd
- (void)_presentPhotoGalleryForPhotoIndex:(unsigned long long)arg1;	// IMP=0x000000000007f2ef
- (void)_performPunchout;	// IMP=0x000000000007f1ae
- (void)placeTileCollectionView:(id)arg1 didTapOnAccessoryViewModel:(id)arg2;	// IMP=0x000000000007f19c
- (void)placeTileCollectionView:(id)arg1 didTapOnViewModel:(id)arg2;	// IMP=0x000000000007f061
- (void)placeTileCollectionViewDidScroll:(id)arg1;	// IMP=0x000000000007f002
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupSubviews;	// IMP=0x000000000007e9e3
- (id)initWithMapItem:(id)arg1 annotatedList:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x000000000007e862

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

