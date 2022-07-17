//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetCollectionActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PHFetchResult, PXCMMSendBackSuggestionSource, PXPhotoKitAssetCollectionActionManager;
@protocol PXPhotosDetailsActionMenuDelegate;

@interface PXPhotoDetailsActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate>
{
    id <PXPhotosDetailsActionMenuDelegate> _delegate;	// 8 = 0x8
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;	// 16 = 0x10
    PHFetchResult *_people;	// 24 = 0x18
    PXPhotoKitAssetCollectionActionManager *_assetActionManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000a38762
@property(readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property(retain, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property(retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
@property(nonatomic) __weak id <PXPhotosDetailsActionMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000a385d2
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;	// IMP=0x0000000000a38509
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0000000000a38457
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a383ae
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000a38320
- (_Bool)shouldAllowPerformanceOfActionType:(id)arg1;	// IMP=0x0000000000a3829b
- (id)availableActionTypes;	// IMP=0x0000000000a3814e
- (id)assetCollectionActionManager;	// IMP=0x0000000000a37f53
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;	// IMP=0x0000000000a37a2b
- (id)initWithActionManagers:(id)arg1;	// IMP=0x0000000000a379a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
