//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUPhotoPickerHostService-Protocol.h>

@class NSNumber, NSString, NSUUID;
@protocol PUPhotoPickerHostService;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerExtensionHostContext <PUPhotoPickerHostService>
{
    _Bool _cachedDidDisplayPhotoPickerPreview;	// 8 = 0x8
    NSString *_photoPickerViewControllerTitle;	// 16 = 0x10
    NSString *_photoPickerViewControllerPrompt;	// 24 = 0x18
    NSNumber *_photoPickerNavigationBarHidden;	// 32 = 0x20
    id <PUPhotoPickerHostService> _delegate;	// 40 = 0x28
    NSUUID *_requestIdentifier;	// 48 = 0x30
    NSNumber *_cachedDidDisplayPhotoPickerSourceType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000030dbf3
@property(nonatomic) _Bool cachedDidDisplayPhotoPickerPreview; // @synthesize cachedDidDisplayPhotoPickerPreview=_cachedDidDisplayPhotoPickerPreview;
@property(retain, nonatomic) NSNumber *cachedDidDisplayPhotoPickerSourceType; // @synthesize cachedDidDisplayPhotoPickerSourceType=_cachedDidDisplayPhotoPickerSourceType;
@property(retain, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) __weak id <PUPhotoPickerHostService> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *photoPickerNavigationBarHidden; // @synthesize photoPickerNavigationBarHidden=_photoPickerNavigationBarHidden;
@property(copy, nonatomic) NSString *photoPickerViewControllerPrompt; // @synthesize photoPickerViewControllerPrompt=_photoPickerViewControllerPrompt;
@property(copy, nonatomic) NSString *photoPickerViewControllerTitle; // @synthesize photoPickerViewControllerTitle=_photoPickerViewControllerTitle;
- (id)_pathExtensionFromData:(id)arg1 url:(id)arg2 exportPreset:(long long)arg3;	// IMP=0x000000000030d93f
- (id)_JPEGDataFromImage:(id)arg1;	// IMP=0x000000000030d92a
- (id)_JPEGDataFromImageData:(id)arg1;	// IMP=0x000000000030d8a0
- (_Bool)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2;	// IMP=0x000000000030d754
- (id)_resizeImage:(id)arg1 toMaximumDimension:(double)arg2;	// IMP=0x000000000030d563
- (id)_createURLFromPath:(id)arg1 token:(id)arg2;	// IMP=0x000000000030d377
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1;	// IMP=0x000000000030b9fc
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030b976
- (void)performPhotoPickerPreviewOfFirstAsset;	// IMP=0x000000000030b939
- (void)initiatePhotoPickerSelection;	// IMP=0x000000000030b8fc
- (void)didSelectMediaWithInfoDictionary:(id)arg1;	// IMP=0x000000000030b84e
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;	// IMP=0x000000000030b4c3
- (void)didDisplayPhotoPickerPreview;	// IMP=0x000000000030b415
- (void)didDisplayPhotoPickerSourceType:(id)arg1;	// IMP=0x000000000030b359
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;	// IMP=0x000000000030b2e7
- (void)invalidatePhotoPickerHostServices;	// IMP=0x000000000030b22f
- (void)cancelPhotoPicker;	// IMP=0x000000000030b1f2
- (id)_remote;	// IMP=0x000000000030b1b4
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000030af3f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
