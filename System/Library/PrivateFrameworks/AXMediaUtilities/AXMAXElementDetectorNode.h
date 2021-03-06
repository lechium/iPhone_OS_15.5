//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXMIconClassDetectorNode, AXShotflowDetector;

@interface AXMAXElementDetectorNode
{
    AXMIconClassDetectorNode *_iconDetector;	// 8 = 0x8
    int _ANODModelVersion;	// 16 = 0x10
    AXShotflowDetector *_shotflowDetector;	// 24 = 0x18
    AXShotflowDetector *_clickabilityDetector;	// 32 = 0x20
}

+ (id)title;	// IMP=0x000000000003a86d
+ (_Bool)isSupported;	// IMP=0x000000000003a865
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003a85d
- (void).cxx_destruct;	// IMP=0x000000000004023a
@property(readonly, nonatomic) AXShotflowDetector *clickabilityDetector; // @synthesize clickabilityDetector=_clickabilityDetector;
@property(nonatomic) int ANODModelVersion; // @synthesize ANODModelVersion=_ANODModelVersion;
@property(readonly, nonatomic) AXShotflowDetector *shotflowDetector; // @synthesize shotflowDetector=_shotflowDetector;
- (long long)remapUIClassForClickability:(int)arg1 andClass:(long long)arg2;	// IMP=0x00000000000401bd
- (void)_evaluateANOD:(id)arg1 metrics:(id)arg2;	// IMP=0x000000000003d31f
- (void)_initializeIconDetector;	// IMP=0x000000000003d2ba
- (id)_performCrossClassNMSForDetections:(id)arg1 iouThreshold:(double)arg2;	// IMP=0x000000000003cd93
- (double)IoUForbb1:(struct CGRect)arg1 bb2:(struct CGRect)arg2;	// IMP=0x000000000003cceb
- (void)_initializeShotflowDetector;	// IMP=0x000000000003c966
- (void)_initializeClickabilityModel;	// IMP=0x000000000003c57d
- (id)_nonMaxSupression:(id)arg1 iouThreshold:(double)arg2;	// IMP=0x000000000003bd47
- (id)_screenEquivalenceToken:(id)arg1;	// IMP=0x000000000003b6ec
- (id)_imageByWipingTextFromRects:(id)arg1 image:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 ciContext:(id)arg4;	// IMP=0x000000000003abc2
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x000000000003aa3c
- (id)contentVersionKey;	// IMP=0x000000000003aa2f
- (unsigned long long)maxSupportedFormatVersion;	// IMP=0x000000000003a997
- (unsigned long long)minSupportedFormatVersion;	// IMP=0x000000000003a8ff
- (id)modelResourceNames;	// IMP=0x000000000003a8f2
- (id)mobileAssetType;	// IMP=0x000000000003a887
- (id)mlModelClasses;	// IMP=0x000000000003a87a

@end

