//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPhotoKitSyndicationDeleteNoConfirmActionPerformer
{
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x00000000002f8bbb
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x00000000002f8ba6
- (long long)destructivePhotosAction;	// IMP=0x00000000002f8ab3
- (_Bool)shouldConfirmDestructiveAction;	// IMP=0x00000000002f8aab
- (void)performBackgroundTask;	// IMP=0x00000000002f89a0
- (void)performUserInteractionTask;	// IMP=0x00000000002f8987

@end

