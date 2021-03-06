//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLComputePipelineState, MTLDeviceSPI, MTLLibrary;

@interface PTUtil : NSObject
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    id <MTLLibrary> _defaultLibrary;	// 16 = 0x10
    id <MTLComputePipelineState> _renderDisparity;	// 24 = 0x18
    id <MTLComputePipelineState> _kernelCopy;	// 32 = 0x20
    id <MTLComputePipelineState> _multiplyTex;	// 40 = 0x28
    id <MTLComputePipelineState> _addConstant;	// 48 = 0x30
    id <MTLComputePipelineState> _reciprocal;	// 56 = 0x38
    id <MTLComputePipelineState> _fillWithColor;	// 64 = 0x40
    id <MTLComputePipelineState> _drawTurboLegend;	// 72 = 0x48
    id <MTLComputePipelineState> _drawTurboLegendYUV;	// 80 = 0x50
    id <MTLComputePipelineState> _gaussianNoise;	// 88 = 0x58
    id <MTLComputePipelineState> _sobelFilter;	// 96 = 0x60
    id <MTLComputePipelineState> _bicubicResample;	// 104 = 0x68
    id <MTLComputePipelineState> _renderRect;	// 112 = 0x70
}

+ (id)findMipmapLevel:(id)arg1 largerThan:(CDStruct_da2e99ad)arg2;	// IMP=0x0000000000068071
+ (id)temporaryDirectory:(id)arg1;	// IMP=0x00000000000668b1
- (void).cxx_destruct;	// IMP=0x00000000000681d4
- (int)renderRect:(id)arg1 rect:(_Bool)arg2 color:(id)arg3 fill:outTexture: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000067eec
- (int)bicubicResample:(id)arg1 inTex:(id)arg2 outTex:(id)arg3;	// IMP=0x0000000000067dab
- (int)renderDisparity:(id)arg1 outDestLuma:(id)arg2 outDestChroma:(id)arg3 region:(CDStruct_caaed6bc)arg4 commandBuffer:(id)arg5;	// IMP=0x0000000000067af4
- (int)sobelFilterSingleChannelColor:(id)arg1 input:(id)arg2 output:(id)arg3 scale:(float)arg4;	// IMP=0x0000000000067996
- (int)gaussianNoise:(id)arg1 inNoise:(id)arg2 outTex:(id)arg3;	// IMP=0x0000000000067855
- (id)precomputeNoise:(CDStruct_da2e99ad)arg1 channels:(int)arg2 seed:(long long)arg3;	// IMP=0x0000000000067630
- (int)drawTurboLegend:(id)arg1 outRGBA:(id)arg2 rect:(CDStruct_caaed6bc)arg3 maxValue:(float)arg4;	// IMP=0x000000000006747f
- (int)drawTurboLegend:(id)arg1 outLuma:(id)arg2 outChroma:(id)arg3 rect:(CDStruct_caaed6bc)arg4 maxValue:(float)arg5;	// IMP=0x00000000000672a6
- (int)_drawTurboLegendTick:(id)arg1 outTexture:(id)arg2 rect:(CDStruct_caaed6bc)arg3 maxValue:(float)arg4;	// IMP=0x00000000000671b5
- (int)fillWithColor:(id)arg1 color:(id)arg2 outTex: /* Error: Ran out of types for this method. */;	// IMP=0x000000000006707f
- (int)addConstant:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 value:(float)arg4;	// IMP=0x0000000000066f21
- (int)multiplyTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 multiplier:(float)arg4;	// IMP=0x0000000000066dc3
- (int)copyTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3;	// IMP=0x0000000000066c82
- (int)reciprocalTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 epsilon:(float)arg4;	// IMP=0x0000000000066b24
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3;	// IMP=0x000000000006650e

@end

