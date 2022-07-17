//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPAnalysisProgressQuery : NSObject
{
}

+ (id)reportProgressForPhotoLibrary:(id)arg1 andTaskID:(unsigned long long)arg2 withExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007ea81
+ (int)queryCachedFaceAnalysisProgress:(id *)arg1 forPhotoLibrary:(id)arg2 withExtendTimeoutBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000007e60c
+ (int)queryProgress:(float *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007e364
+ (int)queryProgressDetail:(id *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 withExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007e07a
+ (_Bool)_screenProgress;	// IMP=0x000000000007e072
+ (int)_queryProgressDetailExpress:(id *)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x000000000007d811
+ (int)_queryProgressDetailExpressEmbeddingAnalysis:(id *)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x000000000007d806
+ (id)_processedPredicateForTaskID:(unsigned long long)arg1;	// IMP=0x000000000007d72a
+ (int)_scanPhotoLibrary:(id)arg1 withTaskID:(unsigned long long)arg2 statistics:(id *)arg3 andExtendTimeoutBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000007cf08
+ (unsigned long long)_vipStatusForPhotoLibrary:(id)arg1 andType:(unsigned long long)arg2;	// IMP=0x000000000007cddf
+ (unsigned long long)_countFailuresWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x000000000007cc5c
+ (unsigned long long)_countAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2 andTaskID:(unsigned long long)arg3;	// IMP=0x000000000007ca8c
+ (unsigned long long)_countEmbeddingAnalysisWithAssetBatch:(id)arg1;	// IMP=0x000000000007ca84
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:(id)arg1;	// IMP=0x000000000007c94f
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:(id)arg1;	// IMP=0x000000000007c81a
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:(id)arg1;	// IMP=0x000000000007c6e5
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:(id)arg1;	// IMP=0x000000000007c50c
+ (unsigned long long)_countMediaAnalysisWithAssetBatch:(id)arg1 andDatabase:(id)arg2;	// IMP=0x000000000007c058

@end
