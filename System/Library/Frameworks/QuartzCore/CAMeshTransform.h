//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuartzCore/NSCopying-Protocol.h>
#import <QuartzCore/NSMutableCopying-Protocol.h>
#import <QuartzCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    void *_impl;	// 8 = 0x8
    unsigned long long _normalization;	// 16 = 0x10
    long long _subdivisionSteps;	// 24 = 0x18
    _Bool _replicatesEdges;	// 32 = 0x20
}

+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;	// IMP=0x00000000000348c7
+ (void)CAMLParserStartElement:(id)arg1;	// IMP=0x000000000003462c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034624
+ (id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;	// IMP=0x00000000000345cb
- (id)meshTransformForLayer:(id)arg1;	// IMP=0x000000000003376e
- (double)CA_distanceToValue:(id)arg1;	// IMP=0x0000000000033758
- (id)CA_interpolateValues:(id)arg1:(id)arg2:(id)arg3 interpolator:(const struct ValueInterpolator *)arg4;	// IMP=0x00000000000336a2
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;	// IMP=0x00000000000335c8
- (void)encodeWithCAMLWriter:(id)arg1;	// IMP=0x0000000000033475
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033353
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003329d
- (id)inverseMesh;	// IMP=0x00000000000331f6
- (id)subdividedMesh:(int)arg1;	// IMP=0x00000000000331e1
- (id)_subdivideToDepth:(long long)arg1;	// IMP=0x0000000000033123
- (id)_data;	// IMP=0x0000000000032ef1
- (_Bool)_constructWithData:(id)arg1;	// IMP=0x00000000000325ba
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003258c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032581
- (struct Object *)CA_copyRenderValue;	// IMP=0x000000000003255e
@property(readonly) _Bool replicatesEdges;
@property(readonly) int subdivisionSteps;
@property(readonly, copy) NSString *depthNormalization;
- (struct CAMeshFace)faceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000032494
@property(readonly) unsigned long long faceCount;
- (struct CAMeshVertex)vertexAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003244b
@property(readonly) unsigned long long vertexCount;
- (id)_initWithMeshTransform:(id)arg1;	// IMP=0x00000000000323aa
- (id)initWithVertexCount:(unsigned long long)arg1 vertices:(const struct CAMeshVertex *)arg2 faceCount:(unsigned long long)arg3 faces:(const struct CAMeshFace *)arg4 depthNormalization:(id)arg5;	// IMP=0x000000000003223b
- (id)_init;	// IMP=0x00000000000321d9
- (id)init;	// IMP=0x00000000000321cb
- (void)dealloc;	// IMP=0x0000000000032162

@end

