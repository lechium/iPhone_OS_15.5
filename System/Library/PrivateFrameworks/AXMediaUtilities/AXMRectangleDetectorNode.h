//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMRectangleDetectorNode
{
    double _cameraPixelFocalLength;	// 8 = 0x8
    double _minimumAspectRatio;	// 16 = 0x10
    double _maximumAspectRatio;	// 24 = 0x18
    double _quadratureTolerance;	// 32 = 0x20
    double _minimumSize;	// 40 = 0x28
    long long _maximumNumberOfRects;	// 48 = 0x30
    struct CGPoint _cameraOpticalOrigin;	// 56 = 0x38
}

+ (id)title;	// IMP=0x0000000000026d94
+ (_Bool)isSupported;	// IMP=0x0000000000026d84
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026ad8
@property(nonatomic) long long maximumNumberOfRects; // @synthesize maximumNumberOfRects=_maximumNumberOfRects;
@property(nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) double quadratureTolerance; // @synthesize quadratureTolerance=_quadratureTolerance;
@property(nonatomic) double maximumAspectRatio; // @synthesize maximumAspectRatio=_maximumAspectRatio;
@property(nonatomic) double minimumAspectRatio; // @synthesize minimumAspectRatio=_minimumAspectRatio;
@property(nonatomic) struct CGPoint cameraOpticalOrigin; // @synthesize cameraOpticalOrigin=_cameraOpticalOrigin;
@property(nonatomic) double cameraPixelFocalLength; // @synthesize cameraPixelFocalLength=_cameraPixelFocalLength;
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000026f93
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x0000000000026e6c
- (_Bool)requiresVisionFramework;	// IMP=0x0000000000026d8c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026c45
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026ae0
- (void)nodeInitialize;	// IMP=0x00000000000269fe

@end
