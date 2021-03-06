//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PTColor, PTUtil;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface PTMSRResize : NSObject
{
    id <MTLTexture> _resultTexture;	// 8 = 0x8
    struct __CVBuffer *output[10];	// 16 = 0x10
    struct __IOSurface *outputIOSurface[10];	// 96 = 0x60
    int _allocatedIOSurfaces;	// 176 = 0xb0
    struct __CFDictionary *_runOptions;	// 184 = 0xb8
    id <MTLTexture> _quarterSizeLuma;	// 192 = 0xc0
    id <MTLTexture> _quarterSizeChroma;	// 200 = 0xc8
    struct CGColorSpace *_csRGBLinear;	// 208 = 0xd0
    struct CGColorSpace *_csSRGB;	// 216 = 0xd8
    id <MTLDevice> _device;	// 224 = 0xe0
    id <MTLCommandQueue> _commandQueue;	// 232 = 0xe8
    PTColor *_colorUtil;	// 240 = 0xf0
    PTUtil *_util;	// 248 = 0xf8
    _Bool _hasMSR;	// 256 = 0x100
    _Bool _rotateTargetPixelBuffer;	// 257 = 0x101
}

- (void).cxx_destruct;	// IMP=0x0000000000033585
- (struct __CVBuffer *)targetRGBACVPixelBuffer;	// IMP=0x0000000000033573
- (id)targetRGBA;	// IMP=0x0000000000033565
- (id)quarterSizeChroma;	// IMP=0x0000000000033554
- (id)quarterSizeLuma;	// IMP=0x0000000000033543
- (int)_downsample:(struct __IOSurface *)arg1 toDest:(struct __IOSurface *)arg2 useCustomFilter:(_Bool)arg3 centerAlignment:(_Bool)arg4;	// IMP=0x00000000000334fd
- (int)_rotate:(struct __IOSurface *)arg1 toDest:(struct __IOSurface *)arg2;	// IMP=0x00000000000334b7
- (id)downsampleQuarterSizeToTargetSize:(struct __CVBuffer *)arg1;	// IMP=0x000000000003329f
- (unsigned int)downsampleToQuarterSize:(struct __CVBuffer *)arg1;	// IMP=0x00000000000331b1
- (void)dealloc;	// IMP=0x0000000000033133
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 inputSize:(CDStruct_da2e99ad)arg3 target:(id)arg4 rotateTargetPixelBuffer:(_Bool)arg5;	// IMP=0x000000000003286a

@end

