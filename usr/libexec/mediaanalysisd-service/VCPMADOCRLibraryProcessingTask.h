//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPMADOCRLibraryProcessingTask
{
}

+ (id)fetchPropertySets;	// IMP=0x0020000000087c2f
+ (unsigned long long)taskID;	// IMP=0x0010000000087c24
+ (id)name;	// IMP=0x0010000000087c17
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000087b65
- (id)assetPriorityPredicates;	// IMP=0x0040000000087d66
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000087d4d
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x0010000000087d38
- (void)dealloc;	// IMP=0x0010000000087cb5

@end
