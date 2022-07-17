//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIBlendKernel;

@interface CIRenderDestination : NSObject
{
    void *_priv;	// 8 = 0x8
}

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;	// IMP=0x0000000000149678
- (id)debugDescription;	// IMP=0x000000000014a2ff
- (id)description;	// IMP=0x000000000014a1a1
- (id)imageRepresentation;	// IMP=0x0000000000149db5
- (id)surface;	// IMP=0x0000000000149d81
- (void)setLabel:(id)arg1;	// IMP=0x0000000000149d2f
- (id)label;	// IMP=0x0000000000149d10
@property _Bool blendsInDestinationColorSpace;
@property(retain, nonatomic) CIBlendKernel *blendKernel;
@property(nonatomic) struct CGColorSpace *colorSpace;
- (int)format;	// IMP=0x0000000000149b05
- (void)setCompressed:(_Bool)arg1;	// IMP=0x0000000000149af0
- (_Bool)isCompressed;	// IMP=0x0000000000149ad3
@property(getter=isClamped) _Bool clamped;
- (int)ditherDepth;	// IMP=0x0000000000149a88
@property(getter=isDithered) _Bool dithered;
@property(getter=isFlipped) _Bool flipped;
@property unsigned long long alphaMode;
@property(readonly) unsigned long long height;
@property(readonly) unsigned long long width;
- (id)initWithBitmapData:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5;	// IMP=0x00000000001496d2
- (id)initWithGLTexture:(unsigned int)arg1 target:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001494e2
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(CDUnknownBlockType)arg5;	// IMP=0x000000000014930f
- (id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000148fbf
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 surfaceProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000148e47
- (id)initWithIOSurface:(id)arg1;	// IMP=0x0000000000148b9a
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 colorSpace:(struct CGColorSpace *)arg4 pixelBufferProvider:(CDUnknownBlockType)arg5;	// IMP=0x0000000000148a22
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000001484a2
- (void)_set_YCC_matrix:(int)arg1 fullRange:(_Bool)arg2 deep:(_Bool)arg3 isFloat:(float)arg4;	// IMP=0x00000000001483be
- (void *)_render:(void *)arg1 withContext:(void *)arg2;	// IMP=0x0000000000148302
- (void)dealloc;	// IMP=0x00000000001482a7
- (id)_initWithInternalRenderDestination:(void *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(struct CGColorSpace *)arg5;	// IMP=0x00000000001480f5
- (void *)_internalRenderDestination;	// IMP=0x00000000001480df
- (struct CIRenderDestinationInternal *)_internalRepresentation;	// IMP=0x00000000001480d5
- (id)init;	// IMP=0x0000000000148098

@end
