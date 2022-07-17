//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTAbstractDisparityFilter-Protocol.h>

@class MISSING_TYPE, NSArray, NSString, PTGlobalReduction, PTOpticalFlow, PTUtil;
@protocol MTLBuffer, MTLComputePipelineState, MTLDeviceSPI;

@interface PTDisparityFilterDEMA_LKT : NSObject <PTAbstractDisparityFilter>
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    id <MTLComputePipelineState> _temporalFilterDEMA_LKT;	// 16 = 0x10
    id <MTLComputePipelineState> _temporalFilterDEMA_LKT_VisualizeMotion;	// 24 = 0x18
    id <MTLComputePipelineState> _copyDisparityWithBias;	// 32 = 0x20
    int _frameCount;	// 40 = 0x28
    MISSING_TYPE *_iirUpdateCoefficients;	// 48 = 0x30
    MISSING_TYPE *_motionMinMaxThreshold;	// 56 = 0x38
    PTOpticalFlow *_opticalFlow;	// 64 = 0x40
    PTGlobalReduction *_globalReduction;	// 72 = 0x48
    id <MTLBuffer> _globalAverageResult;	// 80 = 0x50
    PTUtil *_util;	// 88 = 0x58
    NSString *_dumpInputOutputFolder;	// 96 = 0x60
    CDStruct_da2e99ad _disparitySize;	// 104 = 0x68
    CDStruct_da2e99ad _disparityFilteredSize;	// 128 = 0x80
    float _direction;	// 152 = 0x98
    NSArray *demaStates;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000001eee2
- (void)reset;	// IMP=0x000000000001eec5
- (int)copyDisparityWithBias:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 disparityBias:(float)arg4;	// IMP=0x000000000001ed67
- (int)exponentialMovingAverageFilter:(id)arg1 inDisplacement:(id)arg2 inDemaPrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 outDEMA:(id)arg6 updateCoefficients:(float)arg7 disparityBias: /* Error: Ran out of types for this method. */;	// IMP=0x000000000001eabf
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityFilteredPrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 disparityBias:(float)arg6;	// IMP=0x000000000001e862
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inStatePrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 outState:(id)arg6;	// IMP=0x000000000001e747
- (int)prepareFilter:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;	// IMP=0x000000000001e72f
- (id)initWithCommandQueue:(id)arg1 disparitySize:(CDStruct_da2e99ad)arg2 disparityFilteredSize:(CDStruct_da2e99ad)arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(CDStruct_da2e99ad)arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;	// IMP=0x000000000001e461
- (id)initFilter:(id)arg1 sensorPort:(id)arg2;	// IMP=0x000000000001e142
- (id)initFilter:(id)arg1;	// IMP=0x000000000001e129

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
