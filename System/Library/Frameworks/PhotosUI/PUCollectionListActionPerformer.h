//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCollectionListActionPerformer.h>

#import <PhotosUI/PUAlbumStreamActivityDelegate-Protocol.h>

@class NSString, PUAlbumStreamActivity, UIAlertAction;

__attribute__((visibility("hidden")))
@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PUAlbumStreamActivityDelegate>
{
    UIAlertAction *_createAlbumAlertAction;	// 8 = 0x8
    PUAlbumStreamActivity *__albumStreamActivity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021cb5f
@property(retain, nonatomic) PUAlbumStreamActivity *_albumStreamActivity; // @synthesize _albumStreamActivity=__albumStreamActivity;
@property(nonatomic, setter=_setCreateAlbumAlertAction:) __weak UIAlertAction *createAlbumAlertAction; // @synthesize createAlbumAlertAction=_createAlbumAlertAction;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(_Bool)arg2;	// IMP=0x000000000021c9e5
- (void)albumStreamActivity:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000021c9cd
- (void)albumStreamActivity:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000021c9b8
- (void)handleCreateSharedAlbum;	// IMP=0x000000000021c705
- (id)_validateNewCollectionTitle:(id)arg1;	// IMP=0x000000000021c6ea
- (void)_updateCreateAlbumTextField:(id)arg1;	// IMP=0x000000000021c647
- (void)presentImagePickerWithAlbumName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000021c4ff
- (void)presentSetupUIForAlbumCreationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000021c14f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

