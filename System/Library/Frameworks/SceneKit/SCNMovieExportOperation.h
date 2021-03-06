//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

__attribute__((visibility("hidden")))
@interface SCNMovieExportOperation
{
    AVAssetWriterInput *_assetWriterInput;	// 144 = 0x90
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;	// 152 = 0x98
    AVAssetWriter *_assetWriter;	// 160 = 0xa0
    float _rate;	// 168 = 0xa8
    _Bool _mirrored;	// 172 = 0xac
    float _supersampling;	// 176 = 0xb0
}

- (void)main;	// IMP=0x00000000002a8bd4
- (void)renderAndAppendWithPresentationTime:(CDStruct_198678f7)arg1 usingAdaptor:(id)arg2 metalTextureCache:(struct __CVMetalTextureCache *)arg3 cvQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002a8407
- (void)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_198678f7)arg2 usingAdaptor:(id)arg3;	// IMP=0x00000000002a81c2
- (void)_finishedExport;	// IMP=0x00000000002a810a
- (struct CGImage *)_copySnapshot:(struct CGSize)arg1;	// IMP=0x00000000002a8050
- (void)_setupMovieToWritableFile:(id)arg1;	// IMP=0x00000000002a804a
- (void)dealloc;	// IMP=0x00000000002a7fe4
- (id)initWithRenderer:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4;	// IMP=0x00000000002a79e9

@end

