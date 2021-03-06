//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLGPUDebugResource-Protocol.h>

@class NSString;
@protocol MTLDevice, MTLHeap, MTLTextureSPI;

@interface MTLGPUDebugTexture <MTLGPUDebugResource>
{
    unsigned long long _identifier;	// 48 = 0x30
}

- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;	// IMP=0x00000000000a8008
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5 resourceIndex:(unsigned long long)arg6;	// IMP=0x00000000000a7f54
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 resourceIndex:(unsigned long long)arg5;	// IMP=0x00000000000a7ea7
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x00000000000a7e13
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;	// IMP=0x00000000000a7d68
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;	// IMP=0x00000000000a7cc4
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000a7c30
@property(readonly, nonatomic) unsigned long long gpuIdentifier;
@property(retain, nonatomic) id <MTLTextureSPI> baseObject; // @dynamic baseObject;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;	// IMP=0x00000000000a7c03
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithTextureView:(id)arg1 parentTexture:(id)arg2 heap:(id)arg3 device:(id)arg4;	// IMP=0x00000000000a7bb6
- (id)initWithTextureView:(id)arg1 parentBuffer:(id)arg2 heap:(id)arg3 device:(id)arg4;	// IMP=0x00000000000a7b71
- (id)initWithTexture:(id)arg1 heap:(id)arg2 device:(id)arg3;	// IMP=0x00000000000a7965

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long heapOffset;
@property(copy) NSString *label;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;
@property(readonly) unsigned long long unfilteredResourceOptions;

@end

