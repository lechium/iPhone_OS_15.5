//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCNCapsule
{
    double _capsulecapRadius;	// 8 = 0x8
    double _capsuleheight;	// 16 = 0x10
    long long _capsuleheightSegmentCount;	// 24 = 0x18
    long long _capsuleradialSegmentCount;	// 32 = 0x20
    long long _capsulecapSegmentCount;	// 40 = 0x28
    long long _capsuleprimitiveType;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000230008
+ (id)capsuleWithCapRadius:(double)arg1 height:(double)arg2;	// IMP=0x000000000022fb19
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022fea7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022fd76
- (id)copy;	// IMP=0x000000000022fd62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022fd10
- (void)_setupObjCModelFrom:(id)arg1;	// IMP=0x000000000022fbed
- (id)description;	// IMP=0x000000000022fb71
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;	// IMP=0x000000000022f9c8
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;	// IMP=0x000000000022f85c
@property(nonatomic) long long radialSegmentCount;
- (void)setPrimitiveType:(long long)arg1;	// IMP=0x000000000022f5e4
- (long long)primitiveType;	// IMP=0x000000000022f56b
@property(nonatomic) long long heightSegmentCount;
@property(nonatomic) double height;
@property(nonatomic) long long capSegmentCount;
@property(nonatomic) double capRadius;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022ee87
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;	// IMP=0x000000000022ee7a
- (id)presentationGeometry;	// IMP=0x000000000022ee68
- (id)presentationCapsule;	// IMP=0x000000000022ee16
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022ede7
- (struct __C3DGeometry *)__createCFObject;	// IMP=0x000000000022edd4
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;	// IMP=0x000000000022ed52
- (id)init;	// IMP=0x000000000022ecb0

@end
