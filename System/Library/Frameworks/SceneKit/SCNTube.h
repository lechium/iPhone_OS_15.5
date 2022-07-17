//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNTube
{
    double _tubeinnerRadius;	// 8 = 0x8
    double _tubeouterRadius;	// 16 = 0x10
    double _tubeheight;	// 24 = 0x18
    double _tuberadialSpan;	// 32 = 0x20
    long long _tubeheightSegmentCount;	// 40 = 0x28
    long long _tuberadialSegmentCount;	// 48 = 0x30
    long long _tubeprimitiveType;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000022eca8
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3;	// IMP=0x000000000022e73d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022eb2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022e9df
- (id)copy;	// IMP=0x000000000022e9cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022e979
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x000000000022e83f
- (id)description;	// IMP=0x000000000022e7ac
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x000000000022e5ec
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x000000000022e480
- (void)setRadialSpan:(double)arg1;	// IMP=0x000000000022e365
- (double)radialSpan;	// IMP=0x000000000022e2dc
@property(nonatomic) long long radialSegmentCount;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x000000000022e064
- (long long)primitiveType;	// IMP=0x000000000022dfeb
@property(nonatomic) double outerRadius;
@property(nonatomic) double innerRadius;
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022d8c2
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x000000000022d8b5
- (id)presentationGeometry;	// IMP=0x000000000022d8a3
- (id)presentationTube;	// IMP=0x000000000022d851
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022d822
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x000000000022d80f
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022d78d
- (id)init;	// IMP=0x000000000022d6eb

@end
