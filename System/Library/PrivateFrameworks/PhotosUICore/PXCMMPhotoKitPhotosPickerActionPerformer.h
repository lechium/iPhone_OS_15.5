//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class PXCMMPhotoKitSession, UIViewController;

@interface PXCMMPhotoKitPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer>
{
    UIViewController *_photosPickerViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000429bea
- (id)_currentSelectedAssets;	// IMP=0x0000000000429a67
- (id)_currentAssets;	// IMP=0x00000000004299a6
- (void)_pickerDidCompleteWithPickedAssets:(id)arg1;	// IMP=0x000000000042932e
- (void)performUserInteractionTask;	// IMP=0x0000000000428eb5

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end
