//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLDebugResourcePurgeable-Protocol.h>

@class MTLDebugDevice;

@interface MTLDebugHeap <MTLDebugResourcePurgeable>
{
    struct atomic<int> _purgeableStateToken;	// 36 = 0x24
    _Bool _purgeableStateHasBeenSet;	// 40 = 0x28
    MTLDebugDevice *_debugDevice;	// 48 = 0x30
}

@property(readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00000000000a29b7
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x00000000000a2762
- (void)validateOffset:(unsigned long long)arg1 withRequirements:(CDStruct_4bcfbbae)arg2;	// IMP=0x00000000000a2664
- (_Bool)purgeableStateValidForRendering;	// IMP=0x00000000000a2634
- (void)unlockPurgeableState;	// IMP=0x00000000000a2623
- (void)lockPurgeableState;	// IMP=0x00000000000a2612
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x00000000000a258a
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x00000000000a21c9
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000a1f7a
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x00000000000a1f10
- (id)initWithHeap:(id)arg1 device:(id)arg2;	// IMP=0x00000000000a1eb2
- (void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext *)arg3;	// IMP=0x00000000000a1e6b
- (void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(_Bool)arg2 isIOSurface:(_Bool)arg3 context:(struct _MTLMessageContext *)arg4;	// IMP=0x00000000000a1cf3
- (void)validatePixelFormatWithHeap:(unsigned long long)arg1 context:(struct _MTLMessageContext *)arg2;	// IMP=0x00000000000a1c61

@end

