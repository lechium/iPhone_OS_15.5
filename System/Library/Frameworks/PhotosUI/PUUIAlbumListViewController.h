//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIAlbumListViewController <PUPhotoPickerServicesConsumer>
{
    UIBarButtonItem *_imagePickerCancelButton;	// 8 = 0x8
    _Bool _collectionsFetchResultIsValid;	// 16 = 0x10
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;	// 24 = 0x18
    id <PUPhotoPicker> _photoPicker;	// 32 = 0x20
    NSArray *__imagePickerMediaTypes;	// 40 = 0x28
    unsigned long long __imagePickerAssetTypes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000046982b
@property(nonatomic, setter=_setImagePickerAssetTypes:) unsigned long long _imagePickerAssetTypes; // @synthesize _imagePickerAssetTypes=__imagePickerAssetTypes;
@property(copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x00000000004697b6
- (void)setPhotoPickerMediaTypes:(id)arg1;	// IMP=0x00000000004697a4
- (unsigned long long)filteringAssetTypes;	// IMP=0x000000000046978e
- (id)assetsFilterPredicate;	// IMP=0x0000000000469737
- (_Bool)canShowAvatarViews;	// IMP=0x000000000046972f
- (_Bool)shouldHideEmptyCollections;	// IMP=0x0000000000469727
- (_Bool)shouldShowAllPhotosItem;	// IMP=0x000000000046971f
- (_Bool)shouldAllowEmailInAlbumSubtitle;	// IMP=0x0000000000469717
- (void)updateNavigationBarAnimated:(_Bool)arg1;	// IMP=0x0000000000469633
- (id)newGridViewControllerForAssetCollection:(id)arg1;	// IMP=0x00000000004693dc
- (id)newGridViewControllerForAllPhotos;	// IMP=0x0000000000469222
- (id)newGridViewControllerForFolder:(id)arg1;	// IMP=0x000000000046916f
- (void)_handleImagePickerCancel:(id)arg1;	// IMP=0x0000000000469132
- (id)_imagePickerControllerHelper;	// IMP=0x000000000046900c
- (void)_updateCollectionsFetchResultIfNeeded;	// IMP=0x0000000000468bb5
- (void)_invalidateCollectionsFetchResult;	// IMP=0x0000000000468ba4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000468b38
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000468af0
- (void)viewDidLoad;	// IMP=0x0000000000468a0c
- (void)loadView;	// IMP=0x000000000046893d
- (id)init;	// IMP=0x00000000004688e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

