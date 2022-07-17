//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;
@protocol MTLBuffer;

@interface SCNGeometrySource : NSObject <NSSecureCoding>
{
    struct __C3DMeshSource *_meshSource;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_semantic;	// 24 = 0x18
    long long _vectorCount;	// 32 = 0x20
    short _componentType;	// 40 = 0x28
    unsigned short _componentCount;	// 42 = 0x2a
    struct CGColorSpace *_colorSpace;	// 48 = 0x30
    long long _dataOffset;	// 56 = 0x38
    long long _dataStride;	// 64 = 0x40
    unsigned char _mkSemantic;	// 72 = 0x48
    id <MTLBuffer> _mtlBuffer;	// 80 = 0x50
    long long _mtlVertexFormat;	// 88 = 0x58
    _Bool _encodeDataAsHalf;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002885eb
+ (id)_geometrySourceWithSource:(id)arg1 vertexFormat:(unsigned long long)arg2;	// IMP=0x00000000002875bb
+ (id)geometrySourceWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;	// IMP=0x000000000028751c
+ (id)geometrySourceWithColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;	// IMP=0x00000000002874a3
+ (id)geometrySourceWithColorComponents:(const float *)arg1 count:(long long)arg2 hasAlpha:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000028730f
+ (id)geometrySourceWithTextureCoordinates:(const struct CGPoint *)arg1 count:(long long)arg2;	// IMP=0x0000000000287103
+ (id)geometrySourceWithNormals:(const struct SCNVector3 *)arg1 count:(long long)arg2;	// IMP=0x000000000028708a
+ (id)geometrySourceWithVertices:(const struct SCNVector3 *)arg1 count:(long long)arg2;	// IMP=0x0000000000287011
+ (id)_geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;	// IMP=0x0000000000286fa4
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 floatComponents:(_Bool)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8;	// IMP=0x0000000000286f2f
+ (id)dataWithPointArray:(const struct CGPoint *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;	// IMP=0x0000000000286b97
+ (id)dataWithVector3Array:(const struct SCNVector3 *)arg1 count:(long long)arg2 bytesPerComponent:(long long *)arg3;	// IMP=0x0000000000286b6a
+ (id)dataByConvertingDoublesToFloats:(const double *)arg1 count:(long long)arg2;	// IMP=0x0000000000286b03
+ (id)geometrySourceWithMeshSourceRef:(struct __C3DMeshSource *)arg1;	// IMP=0x00000000002867ae
+ (id)geometrySourceWithMDLVertexAttribute:(id)arg1 mesh:(id)arg2;	// IMP=0x000000000001f8c6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000287feb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000287b3f
- (id)_uninterleaveData:(id)arg1 count:(unsigned long long)arg2 srcOffset:(unsigned long long)arg3 srcStride:(unsigned long long)arg4 dstStride:(unsigned long long)arg5;	// IMP=0x0000000000287a86
- (const struct __C3DMeshSource *)meshSource;	// IMP=0x00000000002879bc
- (const void *)__CFObject;	// IMP=0x00000000002879aa
- (id)scene;	// IMP=0x0000000000287987
- (struct __C3DScene *)sceneRef;	// IMP=0x000000000028796d
- (void)_clearC3DCache;	// IMP=0x000000000028791e
- (short)_componentType;	// IMP=0x0000000000287914
@property(readonly, nonatomic) long long dataStride;
@property(readonly, nonatomic) long long dataOffset;
@property(readonly, nonatomic) long long bytesPerComponent;
@property(readonly, nonatomic) long long componentsPerVector;
@property(readonly, nonatomic) _Bool floatComponents;
@property(readonly, nonatomic) long long vectorCount;
@property(readonly, nonatomic) NSString *semantic;
- (void)_printData;	// IMP=0x0000000000287897
@property(readonly, nonatomic) NSData *data;
- (void)setMkSemantic:(id)arg1;	// IMP=0x00000000002876af
- (id)mkSemantic;	// IMP=0x0000000000287687
- (void)set_encodeDataAsHalf:(_Bool)arg1;	// IMP=0x000000000028767e
- (_Bool)_encodeDataAsHalf;	// IMP=0x0000000000287675
- (id)dataByConvertingColorData:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 newColorSpace:(struct CGColorSpace **)arg3 vectorCount:(long long)arg4 componentsPerVector:(long long)arg5 bytesPerComponent:(long long)arg6 dataOffset:(long long)arg7 dataStride:(long long)arg8 newDataOffset:(long long *)arg9 newDataStride:(long long *)arg10;	// IMP=0x000000000028717c
- (id)initWithBuffer:(id)arg1 vertexFormat:(unsigned long long)arg2 semantic:(id)arg3 vertexCount:(long long)arg4 dataOffset:(long long)arg5 dataStride:(long long)arg6;	// IMP=0x0000000000286e7d
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(long long)arg3 componentType:(short)arg4 componentCount:(unsigned long long)arg5 dataOffset:(long long)arg6 dataStride:(long long)arg7;	// IMP=0x0000000000286dda
- (id)initWithData:(id)arg1 semantic:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 vectorCount:(long long)arg4 floatComponents:(_Bool)arg5 componentsPerVector:(long long)arg6 bytesPerComponent:(long long)arg7 dataOffset:(long long)arg8 dataStride:(long long)arg9;	// IMP=0x0000000000286c1e
- (id)description;	// IMP=0x0000000000286a56
- (void)dealloc;	// IMP=0x0000000000286984
- (id)init;	// IMP=0x0000000000286970
- (id)initWithMeshSource:(struct __C3DMeshSource *)arg1;	// IMP=0x00000000002867f4

@end
