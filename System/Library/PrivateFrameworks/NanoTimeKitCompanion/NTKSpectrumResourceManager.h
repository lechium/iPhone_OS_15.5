//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLTexture;

@interface NTKSpectrumResourceManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    unsigned long long _clients;	// 16 = 0x10
    unsigned long long _pixelFormat;	// 24 = 0x18
    id <MTLBuffer> _verticesBuffer;	// 32 = 0x20
    id <MTLRenderPipelineState> _pipelineStates[16];	// 40 = 0x28
    id <MTLTexture> _vignetteTexture;	// 168 = 0xa8
    id <MTLTexture> _overlayTexture;	// 176 = 0xb0
    id <MTLLibrary> _library;	// 184 = 0xb8
}

+ (void)_deallocInstance:(id)arg1;	// IMP=0x000000000015288b
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000001527f4
- (void).cxx_destruct;	// IMP=0x0000000000153544
- (id)verticesBuffer;	// IMP=0x0000000000153536
- (id)renderPipelineForConfig:(unsigned long long)arg1;	// IMP=0x00000000001534cd
- (id)_generatePipeline:(unsigned long long)arg1;	// IMP=0x00000000001531c0
- (void)_loadGeometry;	// IMP=0x0000000000153180
- (id)overlayTexture;	// IMP=0x0000000000152dc6
- (id)vignetteTexture;	// IMP=0x0000000000152ab9
- (void)removeClient;	// IMP=0x0000000000152a6a
- (void)addClient;	// IMP=0x0000000000152a38
- (void)_asyncDeallocInstance;	// IMP=0x00000000001529da
- (void)dealloc;	// IMP=0x00000000001529ab
- (id)initWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000001528d3

@end
