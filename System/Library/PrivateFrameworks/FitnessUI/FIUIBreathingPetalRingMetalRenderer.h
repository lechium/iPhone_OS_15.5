//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FitnessUI/MTKViewDelegate-Protocol.h>

@class MISSING_TYPE, MTKView, NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLRenderPipelineState, MTLTexture;

@interface FIUIBreathingPetalRingMetalRenderer : NSObject <MTKViewDelegate>
{
    MTKView *_mtkView;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    id <MTLCommandQueue> _commandQueue;	// 24 = 0x18
    struct {
        int numberOfPetals;
        int showBlurTrails;
        MISSING_TYPE *circlePosition[20];
        MISSING_TYPE *circleProperties[20];
        MISSING_TYPE *textureRotationVector;
    } _uniforms;	// 32 = 0x20
    struct {
        MISSING_TYPE *position__coordinate;
    } _vertexData[25];	// 544 = 0x220
    struct {
        MISSING_TYPE *columns[4];
    } _projectionMatrix;	// 944 = 0x3b0
    id <MTLBuffer> _indexBuffer;	// 1008 = 0x3f0
    id <MTLTexture> _circleGradient;	// 1016 = 0x3f8
    id <MTLRenderPipelineState> _renderPipeline;	// 1024 = 0x400
    MISSING_TYPE *_ringCenterVector;	// 1032 = 0x408
    long long _petalColor;	// 1040 = 0x410
    long long _numberOfPetals;	// 1048 = 0x418
    _Bool _showBlurTrails;	// 1056 = 0x420
    float _ringRadius;	// 1060 = 0x424
    long long _numberOfVisiblePetals;	// 1064 = 0x428
    CDUnknownBlockType _stateUpdateBlock;	// 1072 = 0x430
    struct CGPoint _ringCenter;	// 1080 = 0x438
    struct {
        MISSING_TYPE *circlePosition[20];
        MISSING_TYPE *circleProperties[20];
        MISSING_TYPE *textureRotationVector;
    } _circleProperties;	// 1104 = 0x450
}

- (void).cxx_destruct;	// IMP=0x000000000004509a
@property(copy, nonatomic) CDUnknownBlockType stateUpdateBlock; // @synthesize stateUpdateBlock=_stateUpdateBlock;
@property(nonatomic) CDStruct_cb976e3b circleProperties; // @synthesize circleProperties=_circleProperties;
@property(readonly, nonatomic) long long numberOfVisiblePetals; // @synthesize numberOfVisiblePetals=_numberOfVisiblePetals;
@property(nonatomic) struct CGPoint ringCenter; // @synthesize ringCenter=_ringCenter;
@property(nonatomic) float ringRadius; // @synthesize ringRadius=_ringRadius;
- (void)drawInMTKView:(id)arg1;	// IMP=0x0000000000044dac
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;	// IMP=0x0000000000044c9f
- (void)_updateVertices;	// IMP=0x0000000000044b98
- (double)_maxPetalRingRadius;	// IMP=0x0000000000044b8a
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;	// IMP=0x0000000000044b37
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 alpha:(float)arg4;	// IMP=0x0000000000044b17
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint)arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;	// IMP=0x0000000000044afe
- (void)setGradientRotationAngle:(float)arg1;	// IMP=0x00000000000449ce
- (void)_clearCirclesInRange:(struct _NSRange)arg1;	// IMP=0x00000000000449a2
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(_Bool)arg2;	// IMP=0x0000000000044911
- (void)importDataFromPetalRingMetalRenderer:(id)arg1;	// IMP=0x00000000000447e7
- (void)_setupRenderPipeline;	// IMP=0x00000000000442d8
- (void)_setupVertices;	// IMP=0x0000000000044265
- (void)_setupProjectionMatrixForSize:(struct CGSize)arg1;	// IMP=0x00000000000441e7
- (void)_setupIndexes;	// IMP=0x0000000000044197
- (void)_createBuffers;	// IMP=0x000000000004415c
- (void)_loadTextures;	// IMP=0x0000000000043ff6
- (id)initWithMetalKitView:(id)arg1 petalColor:(long long)arg2 numberOfPetals:(long long)arg3 showBlurTrails:(_Bool)arg4;	// IMP=0x0000000000043e40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

