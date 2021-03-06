//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXPhotoKitAssetCollectionShowMapActionPerformer
{
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;	// IMP=0x00000000003cc954
+ (id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)arg1 assetCollectionReference:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000003cc5de
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;	// IMP=0x00000000003cc5d1
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x00000000003cc5b9
+ (_Bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;	// IMP=0x00000000003cc0c7
- (void)performUserInteractionTask;	// IMP=0x00000000003ccb59
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x00000000003cca85
- (id)activityType;	// IMP=0x00000000003cca66
- (id)activitySystemImageName;	// IMP=0x00000000003cca59
- (id)localizedTitleForUseCase:(unsigned long long)arg1;	// IMP=0x00000000003cc9e7

@end

