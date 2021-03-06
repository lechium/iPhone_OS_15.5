//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTAbstractDisparityFilter-Protocol.h>

@class MISSING_TYPE, NSString, PTOpticalFlow, PTUtil;
@protocol MTLComputePipelineState, MTLDeviceSPI;

@interface PTDisparityFilterExponentialMovingAverageLKTMotion : NSObject <PTAbstractDisparityFilter>
{
    id <MTLDeviceSPI> _device;	// 8 = 0x8
    id <MTLComputePipelineState> _temporalFilterExponentialMovingAverageLKTMotion;	// 16 = 0x10
    id <MTLComputePipelineState> _copyDisparityWithBias;	// 24 = 0x18
    int _frameCount;	// 32 = 0x20
    MISSING_TYPE *_iirUpdateCoefficient;	// 36 = 0x24
    PTOpticalFlow *_opticalFlow;	// 40 = 0x28
    PTUtil *_util;	// 48 = 0x30
    NSString *_dumpInputOutputFolder;	// 56 = 0x38
    CDStruct_da2e99ad _disparitySize;	// 64 = 0x40
    CDStruct_da2e99ad _disparityFilteredSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000026977
- (void)reset;	// IMP=0x000000000002695a
- (int)copyDisparityWithBias:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 disparityBias:(float)arg4;	// IMP=0x00000000000267fc
- (int)exponentialMovingAverageFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityPrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 updateCoefficient:disparityBias: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000265b5
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inDisparityFilteredPrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 disparityBias:(float)arg6;	// IMP=0x0000000000026477
- (int)temporalDisparityFilter:(id)arg1 inDisplacement:(id)arg2 inStatePrev:(id)arg3 inDisparity:(id)arg4 outDisparityFiltered:(id)arg5 outState:(id)arg6;	// IMP=0x0000000000026431
- (int)prepareFilter:(id)arg1 inRGBA:(id)arg2 outDisplacement:(id)arg3;	// IMP=0x0000000000026419
- (id)initWithCommandQueue:(id)arg1 disparitySize:(CDStruct_da2e99ad)arg2 disparityFilteredSize:(CDStruct_da2e99ad)arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(CDStruct_da2e99ad)arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;	// IMP=0x000000000002618b
- (id)initFilter:(id)arg1;	// IMP=0x0000000000025f78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

