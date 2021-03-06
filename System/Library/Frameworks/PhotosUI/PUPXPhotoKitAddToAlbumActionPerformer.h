//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUAlbumPickerViewController;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer
{
    PUAlbumPickerViewController *_albumPickerViewController;	// 8 = 0x8
}

+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x00000000002924f5
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x000000000029246a
- (void).cxx_destruct;	// IMP=0x00000000002920d6
@property(retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController; // @synthesize albumPickerViewController=_albumPickerViewController;
- (void)_handleUserInteractionTaskResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000291f1e
- (void)_handlePickedAlbum:(id)arg1 assets:(id)arg2;	// IMP=0x0000000000291cee
- (void)performUserInteractionTask;	// IMP=0x0000000000291a6e

@end

