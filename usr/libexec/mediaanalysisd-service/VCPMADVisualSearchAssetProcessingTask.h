//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPObjectPool;

@interface VCPMADVisualSearchAssetProcessingTask
{
    VCPObjectPool *_servicePool;	// 8 = 0x8
}

+ (id)fetchPropertySets;	// IMP=0x00200000000071fe
+ (unsigned long long)taskID;	// IMP=0x00100000000071f3
+ (id)name;	// IMP=0x00100000000071e6
- (void).cxx_destruct;	// IMP=0x00200000000073ae
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007384
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x001000000000736f
- (void)dealloc;	// IMP=0x00100000000072fd
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007268

@end
