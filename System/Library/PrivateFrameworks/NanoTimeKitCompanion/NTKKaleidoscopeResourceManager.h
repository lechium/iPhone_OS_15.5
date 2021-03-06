//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NTKPromise;
@protocol MTLDevice;

@interface NTKKaleidoscopeResourceManager : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    unsigned long long _clients;	// 24 = 0x18
    unsigned long long _viewMtlPixelFormat;	// 32 = 0x20
    NTKPromise *_renderPipelines[4][2];	// 40 = 0x28
    NTKPromise *_mtlBuffer;	// 104 = 0x68
}

+ (void)_deallocInstance:(id)arg1;	// IMP=0x00000000002af947
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000002af8b0
- (void).cxx_destruct;	// IMP=0x00000000002b068d
- (id)getGeometryBuffer;	// IMP=0x00000000002b0677
- (id)getPipelineForShaderType:(unsigned long long)arg1 blending:(_Bool)arg2;	// IMP=0x00000000002b0657
- (void)_loadPrograms;	// IMP=0x00000000002b0521
- (void)_queue_setupPipelineForType:(unsigned long long)arg1 vertexFunction:(id)arg2 fragmentName:(id)arg3 inLibrary:(id)arg4 librarySPI:(id)arg5;	// IMP=0x00000000002afcda
- (void)_loadMTLBufferData;	// IMP=0x00000000002afb75
- (void)removeClient;	// IMP=0x00000000002afb26
- (void)addClient;	// IMP=0x00000000002afaf4
- (void)_asyncDeallocInstance;	// IMP=0x00000000002afa96
- (void)dealloc;	// IMP=0x00000000002afa67
- (id)initWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000002af98f

@end

