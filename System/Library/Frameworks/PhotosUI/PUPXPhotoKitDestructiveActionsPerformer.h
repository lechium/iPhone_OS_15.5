//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

#import <PhotosUI/PUDeletePhotosActionControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitDestructiveActionsPerformer : PXPhotoKitAssetActionPerformer <PUDeletePhotosActionControllerDelegate>
{
}

- (_Bool)isCancellable;	// IMP=0x000000000028cf2d
- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;	// IMP=0x000000000028ceef
- (void)performUserInteractionTask;	// IMP=0x000000000028cd5c
- (long long)destructivePhotosAction;	// IMP=0x000000000028ccbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
