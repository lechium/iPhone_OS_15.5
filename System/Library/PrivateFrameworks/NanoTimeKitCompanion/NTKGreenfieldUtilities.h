//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NTKGreenfieldUtilities : NSObject
{
}

+ (_Bool)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)arg1;	// IMP=0x0000000000177675
+ (void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)arg1 face:(id)arg2;	// IMP=0x0000000000176907
+ (id)_companionAppIdFromWatchAppBundleId:(id)arg1;	// IMP=0x0000000000176628
+ (_Bool)shouldAutoDismissViewControllerForAddFaceFlow:(id)arg1;	// IMP=0x00000000001765b1
+ (id)encodeQueue;	// IMP=0x000000000017652e
+ (id)_addGenericDeviceBorderToWatchFaceImage:(id)arg1 includesTransparentPadding:(_Bool)arg2;	// IMP=0x00000000001760c6
+ (id)_addGreyBorderToWatchFaceImage:(id)arg1;	// IMP=0x0000000000175b88
+ (id)addBorder:(unsigned long long)arg1 toWatchFaceImage:(id)arg2;	// IMP=0x0000000000175acb
+ (id)_queue_greenfieldPreviewFromUrl:(id)arg1;	// IMP=0x000000000017589a
+ (void)generateFacePreviewImageFromUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000175692
+ (id)_decodeFaceFromDataPath:(id)arg1;	// IMP=0x0000000000173ced
+ (id)unzipWatchFaceFileAtUrl:(id)arg1;	// IMP=0x0000000000173af9
+ (void)decodeWatchFaceFromUrl:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000172dee
+ (_Bool)validateFaceType:(id)arg1 faceBundleId:(id)arg2;	// IMP=0x0000000000172ccb
+ (id)createXPCServiceConnection;	// IMP=0x0000000000172bd2
+ (id)_metadataDictForWatchFace:(id)arg1 slotToSampleTemplateMapping:(id)arg2 slotToItemIdMapping:(id)arg3 slotToBundleIdMapping:(id)arg4 watchFaceDataPath:(id)arg5;	// IMP=0x0000000000172622
+ (id)_greenfieldWatchFaceJsonForFace:(id)arg1;	// IMP=0x00000000001725b5
+ (id)_queue_snapshotFace:(id)arg1 borderType:(unsigned long long)arg2;	// IMP=0x0000000000171ada
+ (id)_queue_encodeDraftRecipe:(id)arg1;	// IMP=0x0000000000170e2c
+ (void)encodeRecipeFromDraftRecipe:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000170a9b
+ (void)generateFacePreviewImageFromDraftRecipe:(id)arg1 borderType:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000170827
+ (void)generateFacePreviewImageFromDraftRecipe:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000017080d
+ (id)temporaryGreenfieldNoBordersSnapshotPath;	// IMP=0x0000000000170725
+ (id)temporaryGreenfieldDirectory;	// IMP=0x000000000017061c

@end

