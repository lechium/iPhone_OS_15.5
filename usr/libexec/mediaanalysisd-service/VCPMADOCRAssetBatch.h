//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADOCRAssetBatch : NSObject
{
    NSMutableArray *_assetEntries;	// 8 = 0x8
    MISSING_TYPE *_analysisDatabase;	// 16 = 0x10
    _Bool _allowDownload;	// 24 = 0x18
    CDUnknownBlockType _cancelBlock;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_downloadGroup;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_downloadStateQueue;	// 48 = 0x30
    NSMutableDictionary *_downloadRequestIDs;	// 56 = 0x38
    NSDate *_downloadStateChange;	// 64 = 0x40
    int _downloadStatus;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_computeGroup;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_computeQueue;	// 88 = 0x58
}

+ (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0020000000075b03
- (void).cxx_destruct;	// IMP=0x002000000007abee
- (int)publish;	// IMP=0x0010000000079ed0
- (int)process;	// IMP=0x00100000000788b3
- (void)cancelRemainingDownloadsWithStatus:(int)arg1;	// IMP=0x00100000000785f4
- (double)downloadInactiveTimeInterval;	// IMP=0x00100000000784eb
- (int)removeDownloadRequestIDForAsset:(id)arg1;	// IMP=0x00100000000782d2
- (void)addDownloadRequestID:(int)arg1 forAsset:(id)arg2;	// IMP=0x0010000000078165
- (void)processAssetEntry:(id)arg1 resource:(id)arg2 resourceURL:(id)arg3;	// IMP=0x0010000000076d92
- (id)remoteResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x0010000000076b28
- (id)localResourceForAsset:(id)arg1 withAcceptableResources:(id)arg2;	// IMP=0x00100000000769a2
- (id)acceptableResourcesForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x001000000007634e
- (int)prepare;	// IMP=0x0010000000075f23
- (void)addAsset:(id)arg1 withPreviousStatus:(unsigned long long)arg2;	// IMP=0x0010000000075bb5
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000075980

@end
