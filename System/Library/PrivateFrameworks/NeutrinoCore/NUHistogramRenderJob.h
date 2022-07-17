//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIRenderTask, NUImageHistogram, NUPurgeableStoragePool;
@protocol NUPurgeableStorage, NUScalePolicy;

@interface NUHistogramRenderJob
{
    NUPurgeableStoragePool *_storagePool;	// 8 = 0x8
    id <NUPurgeableStorage> _renderDestination;	// 16 = 0x10
    NUImageHistogram *_histogram;	// 24 = 0x18
    CIRenderTask *_renderTask;	// 32 = 0x20
    id <NUScalePolicy> _scalePolicy;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000183c68
- (id)scalePolicy;	// IMP=0x0000000000183c52
- (void)cleanUp;	// IMP=0x0000000000183bdb
- (id)result;	// IMP=0x0000000000183b9d
- (_Bool)complete:(out id *)arg1;	// IMP=0x0000000000183504
- (_Bool)render:(out id *)arg1;	// IMP=0x0000000000182994
- (id)cacheKey;	// IMP=0x0000000000182834
- (_Bool)wantsOutputImage;	// IMP=0x000000000018282c
- (_Bool)wantsOutputGeometry;	// IMP=0x0000000000182824
- (id)histogramRequest;	// IMP=0x0000000000182812
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000182496
- (id)initWithHistogramRequest:(id)arg1;	// IMP=0x0000000000182404

@end
