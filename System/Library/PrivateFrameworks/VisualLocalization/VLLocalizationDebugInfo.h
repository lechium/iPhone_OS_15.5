//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualLocalization/NSSecureCoding-Protocol.h>

@class GEOVLFLocation, MISSING_TYPE, NSData, NSUUID;

@interface VLLocalizationDebugInfo : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    double _monotonicTimestamp;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    CDStruct_6c6357c7 _location;	// 48 = 0x30
    CDStruct_160d0e14 _heading;	// 88 = 0x58
    MISSING_TYPE *_gravity;	// 112 = 0x70
    CDStruct_14d5dc5e _transform;	// 144 = 0x90
    CDStruct_8e0628e6 _cameraIntrinsics;	// 208 = 0xd0
    MISSING_TYPE *_radialDistortion;	// 256 = 0x100
    double _exposureTargetOffset;	// 264 = 0x108
    unsigned long long _resultStatus;	// 272 = 0x110
    _Bool _hasStatistics;	// 280 = 0x118
    CDStruct_39a823be _statistics;	// 288 = 0x120
    unsigned long long _inliersCount;	// 576 = 0x240
    int *_inlierIndices;	// 584 = 0x248
    float *_points2D;	// 592 = 0x250
    double *_points3D;	// 600 = 0x258
    unsigned long long _solutionsCount;	// 608 = 0x260
    float *_solverConfidences;	// 616 = 0x268
    float *_fusedConfidences;	// 624 = 0x270
    _Bool _hasResultPose;	// 632 = 0x278
    CDStruct_14d5dc5e _resultTransform;	// 640 = 0x280
    CDStruct_c3074bf1 _resultLocation;	// 768 = 0x300
    float _resultConfidence;	// 816 = 0x330
    CDStruct_2972252c _resultCovariance;	// 820 = 0x334
    GEOVLFLocation *_analyticsLocation;	// 968 = 0x3c8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000031c0
- (void).cxx_destruct;	// IMP=0x0000000000007b80
@property(readonly, nonatomic, getter=_resultStatus) unsigned long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(readonly, nonatomic, getter=_exposureTargetOffset) double exposureTargetOffset; // @synthesize exposureTargetOffset=_exposureTargetOffset;
@property(readonly, nonatomic, getter=_radialDistortion) MISSING_TYPE *radialDistortion; // @synthesize radialDistortion=_radialDistortion;
@property(readonly, nonatomic, getter=_cameraIntrinsics) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(readonly, nonatomic, getter=_transform) CDStruct_14d5dc5e transform; // @synthesize transform=_transform;
@property(readonly, nonatomic, getter=_gravity) MISSING_TYPE *gravity; // @synthesize gravity=_gravity;
@property(readonly, nonatomic, getter=_heading) CDStruct_160d0e14 heading; // @synthesize heading=_heading;
@property(readonly, nonatomic, getter=_location) CDStruct_6c6357c7 location; // @synthesize location=_location;
@property(readonly, nonatomic, getter=_timestamp) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic, getter=_fusedConfidences) float *fusedConfidences; // @synthesize fusedConfidences=_fusedConfidences;
@property(readonly, nonatomic, getter=_solverConfidences) float *solverConfidences; // @synthesize solverConfidences=_solverConfidences;
@property(readonly, nonatomic, getter=_solutionsCount) unsigned long long solutionsCount; // @synthesize solutionsCount=_solutionsCount;
@property(readonly, nonatomic, getter=_inlierIndices) int *inlierIndices; // @synthesize inlierIndices=_inlierIndices;
@property(readonly, nonatomic) double *points3D; // @synthesize points3D=_points3D;
@property(readonly, nonatomic) float *points2D; // @synthesize points2D=_points2D;
@property(readonly, nonatomic) unsigned long long inliersCount; // @synthesize inliersCount=_inliersCount;
@property(readonly, nonatomic) NSData *pngData; // @synthesize pngData=_imageData;
- (id)analyticsInformationWithSessionStartMonotonicTime:(double)arg1;	// IMP=0x0000000000006f10
- (id)results;	// IMP=0x0000000000006200
- (id)inputParameters;	// IMP=0x0000000000005490
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005420
- (unsigned long long)hash;	// IMP=0x0000000000005400
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004ea0
- (void)_fixupStatsPointers;	// IMP=0x0000000000004e40
- (void)dealloc;	// IMP=0x0000000000004db0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003f80
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 monotonicTimestamp:(double)arg2 timestamp:(double)arg3 duration:(double)arg4 location:(CDStruct_6c6357c7)arg5 clLocation:(id)arg6 heading:(CDStruct_160d0e14)arg7 gravity:(CDStruct_14d5dc5e)arg8 transform:(CDStruct_8e0628e6)arg9 cameraIntrinsics:(double)arg10 radialDistortion:(const CDStruct_39a823be *)arg11 exposureTargetOffset:(unsigned long long)arg12 statistics:(const CDStruct_bd2735fe *)arg13 resultStatus:(_Bool)arg14 resultPose:preserveImageData: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000031d0

@end

