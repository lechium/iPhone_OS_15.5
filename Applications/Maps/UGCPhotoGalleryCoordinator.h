//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKPlacePhotoGalleryViewController, MacPlacePhotoViewerScene, NSArray, NSString, UGCMorePhotosFeedViewController, UGCPOIEnrichmentCoordinator, UGCReportImageryController, UIImageView;

__attribute__((visibility("hidden")))
@interface UGCPhotoGalleryCoordinator
{
    MKPlacePhotoGalleryViewController *_fullScreenGalleryViewController;	// 8 = 0x8
    UGCMorePhotosFeedViewController *_galleryViewController;	// 16 = 0x10
    UGCPOIEnrichmentCoordinator *_poiEnrichmentCoordinator;	// 24 = 0x18
    UGCReportImageryController *_reportImageryController;	// 32 = 0x20
    MacPlacePhotoViewerScene *_photoViewerScene;	// 40 = 0x28
    UIImageView *_imageViewForTransition;	// 48 = 0x30
    NSArray *_galleryPhotoList;	// 56 = 0x38
    unsigned long long _albumIndex;	// 64 = 0x40
    unsigned long long _selectedIndex;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001112c7
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) unsigned long long albumIndex; // @synthesize albumIndex=_albumIndex;
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x001000000011103e
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0010000000110f73
- (id)_attributionAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000110eee
- (void)_captureUserAction:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0010000000110d98
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;	// IMP=0x0010000000110d7e
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;	// IMP=0x0010000000110d64
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;	// IMP=0x0010000000110d23
- (id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000110d06
- (void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;	// IMP=0x0010000000110b8b
- (void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;	// IMP=0x0010000000110a14
- (void)placePhotoViewerSceneWillDisconnect:(id)arg1;	// IMP=0x00100000001109aa
- (void)_performPunchoutWithPhoto:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x0010000000110859
- (void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;	// IMP=0x001000000011071c
- (void)photoThumbnailGalleryViewController:(id)arg1 selectedPhotoAtIndex:(unsigned long long)arg2 photoList:(id)arg3 imageViewForTransition:(id)arg4;	// IMP=0x001000000011057b
- (void)poiEnrichmentCoordinator:(id)arg1 didFinishSubmissionLookup:(id)arg2;	// IMP=0x00100000001104d1
- (void)poiEnrichmentCoordinatorDidUpdateUserSubmission:(id)arg1;	// IMP=0x0010000000110434
- (void)poiEnrichmentCoordinator:(id)arg1 didUpdateUserConsent:(_Bool)arg2;	// IMP=0x00100000001103bc
- (void)poiEnrichmentCoordinator:(id)arg1 requestPresentingViewControllerWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000110350
- (void)poiEnrichmentCoordinatorDidFinish:(id)arg1;	// IMP=0x001000000011032f
- (void)photoThumbnailGalleryViewControllerDidSelectAdd:(id)arg1 presentationOptions:(id)arg2;	// IMP=0x00100000001101ab
- (void)photoThumbnailGalleryViewControllerDidSelectDone:(id)arg1;	// IMP=0x0010000000110141
- (void)_startPresentationUsingIOSPhotoViewer;	// IMP=0x001000000010fe1b
- (void)_startPresentationUsingMacPhotoViewer;	// IMP=0x001000000010fcd7
- (void)present;	// IMP=0x001000000010fc64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

