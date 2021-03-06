//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PTDisparityUpscale, PTRaytracingUtils;
@protocol MTLBuffer, MTLComputePipelineState, MTLTexture;

@interface PTRaytracingV11RenderState : NSObject
{
    int _quality;	// 8 = 0x8
    id <MTLComputePipelineState> _raytracingSDOF;	// 16 = 0x10
    id <MTLComputePipelineState> _raytracingVisualizeIntersection;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
    id <MTLTexture> _raytracedYUVRadius;	// 40 = 0x28
    id <MTLTexture> _inputLumaPyramid;	// 48 = 0x30
    id <MTLTexture> _inputChromaPyramid;	// 56 = 0x38
    _Bool _isAbovePreviewQuality;	// 64 = 0x40
    _Bool _doDisparityUpsampling;	// 65 = 0x41
    _Bool _doVisualization;	// 66 = 0x42
    _Bool _doRayMarching;	// 67 = 0x43
    int _rayCount;	// 68 = 0x44
    id <MTLBuffer> _aperturePointsXY;	// 72 = 0x48
    PTDisparityUpscale *_disparityUpscale;	// 80 = 0x50
    PTRaytracingUtils *_raytracingUtils;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000004a6e3
@property(retain, nonatomic) PTRaytracingUtils *raytracingUtils; // @synthesize raytracingUtils=_raytracingUtils;
@property(retain, nonatomic) PTDisparityUpscale *disparityUpscale; // @synthesize disparityUpscale=_disparityUpscale;
@property(retain, nonatomic) id <MTLBuffer> aperturePointsXY; // @synthesize aperturePointsXY=_aperturePointsXY;
@property(retain, nonatomic) id <MTLComputePipelineState> raytracingVisualizeIntersection; // @synthesize raytracingVisualizeIntersection=_raytracingVisualizeIntersection;
@property(retain, nonatomic) id <MTLComputePipelineState> raytracingSDOF; // @synthesize raytracingSDOF=_raytracingSDOF;
@property int rayCount; // @synthesize rayCount=_rayCount;
@property _Bool doRayMarching; // @synthesize doRayMarching=_doRayMarching;
@property _Bool doVisualization; // @synthesize doVisualization=_doVisualization;
@property _Bool doDisparityUpsampling; // @synthesize doDisparityUpsampling=_doDisparityUpsampling;
@property _Bool isAbovePreviewQuality; // @synthesize isAbovePreviewQuality=_isAbovePreviewQuality;
@property(retain, nonatomic) id <MTLTexture> inputChromaPyramid; // @synthesize inputChromaPyramid=_inputChromaPyramid;
@property(retain, nonatomic) id <MTLTexture> inputLumaPyramid; // @synthesize inputLumaPyramid=_inputLumaPyramid;
@property(retain, nonatomic) id <MTLTexture> raytracedYUVRadius; // @synthesize raytracedYUVRadius=_raytracedYUVRadius;
- (id)description;	// IMP=0x000000000004a595
- (id)initWithDevice:(id)arg1 library:(id)arg2 pipelineLibrary:(id)arg3 quality:(int)arg4 colorSize:(struct CGSize)arg5 disparitySize:(struct CGSize)arg6 pyramidPixelFormat:(unsigned long long)arg7 config:(id)arg8;	// IMP=0x000000000004a179

@end

