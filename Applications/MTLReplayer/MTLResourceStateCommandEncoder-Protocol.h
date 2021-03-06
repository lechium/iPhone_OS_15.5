//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLCommandEncoder-Protocol.h"

@protocol MTLBuffer, MTLFence, MTLTexture;

@protocol MTLResourceStateCommandEncoder <MTLCommandEncoder>
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)updateTextureMapping:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id <MTLBuffer>)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)updateTextureMapping:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 region:(CDStruct_4c83c94d)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMappings:(id <MTLTexture>)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_4c83c94d *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;
@end

