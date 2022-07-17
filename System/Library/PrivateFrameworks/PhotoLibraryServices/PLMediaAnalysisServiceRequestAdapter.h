//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLMediaAnalysisServiceRequestAdapter : NSObject
{
}

+ (int)queryProgressDetail:(id *)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x00000000002e09f4
+ (long long)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e095e
+ (void)cancelRequest:(long long)arg1;	// IMP=0x00000000002e0958
+ (long long)invalidRequestID;	// IMP=0x00000000002e0950
+ (unsigned long long)faceAnalysisTaskID;	// IMP=0x00000000002e0945
+ (unsigned long long)petVIPModelType;	// IMP=0x00000000002e093a
+ (long long)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e1374
+ (long long)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(_Bool)arg2 photoLibraryURL:(id)arg3 progessHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e12dd
+ (long long)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000002e1246
+ (long long)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e112e
+ (long long)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e1098
+ (long long)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e1002
+ (long long)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0f6c
+ (long long)requestPersonPromoterStatusWithAdvancedFlag:(_Bool)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e0b46
+ (long long)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e0ab0
+ (long long)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0a1a
+ (long long)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e0e5b
+ (long long)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e0d4c
+ (long long)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e0c3b

@end
