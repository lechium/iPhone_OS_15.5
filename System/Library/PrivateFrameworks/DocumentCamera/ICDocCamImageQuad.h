//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DocumentCamera/ICDocCamImageQuad-Protocol.h>
#import <DocumentCamera/NSSecureCoding-Protocol.h>

@class NSString;

@interface ICDocCamImageQuad : NSObject <ICDocCamImageQuad, NSSecureCoding>
{
    struct CGPoint _topLeft;	// 8 = 0x8
    struct CGPoint _topRight;	// 24 = 0x18
    struct CGPoint _bottomLeft;	// 40 = 0x28
    struct CGPoint _bottomRight;	// 56 = 0x38
    struct CGRect _boundingBox;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004357c
+ (id)quadFromCGRect:(struct CGRect)arg1;	// IMP=0x0000000000042c63
+ (id)quadFromVNRectangle:(id)arg1;	// IMP=0x0000000000042b68
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000436ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000043584
- (void)addPointToQuadPoints:(struct CGPoint)arg1;	// IMP=0x000000000004349a
- (struct CGPoint)pointRotatedClockwiseAroundOrigin:(struct CGPoint)arg1;	// IMP=0x0000000000043484
- (void)rotatePointsClockwise;	// IMP=0x00000000000433d4
- (void)rotatePointsByOrientation:(long long)arg1;	// IMP=0x0000000000043391
- (void)rotatePointsRemovingOrientation:(long long)arg1;	// IMP=0x000000000004334b
- (void)removeOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;	// IMP=0x00000000000432c1
- (void)applyOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;	// IMP=0x0000000000043237
@property(readonly, nonatomic) _Bool isConvex;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000042f2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042d96
- (id)flippedQuadFromSourceFrame:(struct CGRect)arg1;	// IMP=0x0000000000042d49
- (id)intersectionOfLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withLineFrom:(struct CGPoint)arg3 to:(struct CGPoint)arg4;	// IMP=0x0000000000042a98
@property(readonly, nonatomic) _Bool containsIntersectingLines;
@property(readonly, nonatomic) _Bool containsPointsLessThanDistanceThreshold;
@property(readonly, nonatomic) _Bool containsAngleOutOfValidThreshold;
@property(readonly, nonatomic) _Bool containsPointOutsideOfExtendedImageBounds;
@property(readonly, nonatomic) double mininumAllowedDistanceBetweenPoints;
@property(readonly, nonatomic) _Bool isValid;
- (void)orientIfNecessary;	// IMP=0x0000000000041f40
- (void)clampQuadToRect:(struct CGRect)arg1;	// IMP=0x0000000000041e64
- (void)flipPointsWithSourceFrame:(struct CGRect)arg1;	// IMP=0x0000000000041d88
- (struct CGSize)perspectiveCorrectedSize;	// IMP=0x0000000000041c12
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageQuadByScalingBy:(struct CGSize)arg1;	// IMP=0x00000000000419b9
@property(readonly, copy) NSString *description;
- (id)initWithBottomLeft:(struct CGPoint)arg1 bottomRight:(struct CGPoint)arg2 topLeft:(struct CGPoint)arg3 topRight:(struct CGPoint)arg4;	// IMP=0x00000000000418d1
- (id)normalizedQuadByConvertingFromView:(id)arg1 toView:(id)arg2 toViewSize:(struct CGSize)arg3;	// IMP=0x000000000004945f
- (id)quadByConvertingFromView:(id)arg1 toView:(id)arg2 isNormalized:(_Bool)arg3;	// IMP=0x0000000000049216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

