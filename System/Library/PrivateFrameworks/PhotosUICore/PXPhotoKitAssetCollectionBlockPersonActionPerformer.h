//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformerInput-Protocol.h>
#import <PhotosUICore/PXSuggestLessPeopleHelperDelegate-Protocol.h>

@class NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource, PXSuggestLessPeopleHelper;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionBlockPersonActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput, PXSuggestLessPeopleHelperDelegate>
{
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;	// 8 = 0x8
}

+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x000000000087e088
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x000000000087de14
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;	// IMP=0x000000000087ddf1
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x000000000087dd72
- (void).cxx_destruct;	// IMP=0x000000000087e4c8
- (_Bool)suggestLessPeopleHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000087e4b0
- (_Bool)suggestLessPeopleHelper:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000087e49b
- (void)performUserInteractionTask;	// IMP=0x000000000087e174

// Remaining properties
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property(readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIDragSession> dragSession;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
@property(readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PHFetchResult *people;
@property(readonly) Class superclass;

@end
