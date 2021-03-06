//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDMTLDataBuffer-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol MTLBuffer, MTLDevice;

@interface TSDGPUDataBuffer : NSObject <TSDMTLDataBuffer>
{
    unsigned long long _currentBufferIndex;	// 8 = 0x8
    NSMutableArray *_arrayBuffers;	// 16 = 0x10
    NSMutableDictionary *_attributeToArrayBuffersDictionary;	// 24 = 0x18
    unsigned long long _elementArrayCount;	// 32 = 0x20
    unsigned short *_gLElementData;	// 40 = 0x28
    _Bool _gLElementDataBufferWasSetup;	// 48 = 0x30
    unsigned int _gLElementDataBuffer;	// 52 = 0x34
    id <MTLBuffer> _metalElementData;	// 56 = 0x38
    struct CGSize _gLElementMeshSize;	// 64 = 0x40
    unsigned long long _gLElementQuadParticleCount;	// 80 = 0x50
    _Bool _conformsToMetalProtocol;	// 88 = 0x58
    id <MTLDevice> _device;	// 96 = 0x60
    unsigned int _gLVertexArrayObjects[2];	// 104 = 0x68
    _Bool _isUpdatingRawDataBuffer;	// 112 = 0x70
    _Bool _didTeardown;	// 113 = 0x71
    _Bool _isEnabled;	// 114 = 0x72
    _Bool _isDynamicallyBuffered;	// 115 = 0x73
    unsigned int _drawMode;	// 116 = 0x74
    unsigned long long _vertexCount;	// 120 = 0x78
    NSArray *_vertexAttributes;	// 128 = 0x80
    unsigned long long _metalDrawMode;	// 136 = 0x88
    unsigned long long _positionAttributeIndex;	// 144 = 0x90
    unsigned long long _texCoordAttributeIndex;	// 152 = 0x98
    unsigned long long _centerAttributeIndex;	// 160 = 0xa0
}

+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 addTransparentBorder:(_Bool)arg6 device:(id)arg7;	// IMP=0x00000000001f23f3
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 device:(id)arg6;	// IMP=0x00000000001f2343
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 device:(id)arg5;	// IMP=0x00000000001f2322
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 device:(id)arg4;	// IMP=0x00000000001f2301
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3 device:(id)arg4;	// IMP=0x00000000001f22dd
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 device:(id)arg3;	// IMP=0x00000000001f22b9
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;	// IMP=0x00000000001f2279
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 device:(id)arg3;	// IMP=0x00000000001f20ac
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;	// IMP=0x00000000001f200d
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 textureFlipped:(_Bool)arg3;	// IMP=0x00000000001f1d64
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2;	// IMP=0x00000000001f1d40
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3;	// IMP=0x00000000001f1d22
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4;	// IMP=0x00000000001f1d07
+ (void)p_addTransparentBorderInsetToTextureRect:(struct CGRect *)arg1 vertexRect:(struct CGRect *)arg2;	// IMP=0x00000000001f1417
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 addTransparentBorder:(_Bool)arg6;	// IMP=0x00000000001f13c3
+ (id)newDataBufferWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;	// IMP=0x00000000001f137d
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;	// IMP=0x00000000001f12ff
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2;	// IMP=0x00000000001f1295
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;	// IMP=0x00000000001f122d
- (void).cxx_destruct;	// IMP=0x00000000001f44b9
@property(readonly) unsigned long long centerAttributeIndex; // @synthesize centerAttributeIndex=_centerAttributeIndex;
@property(readonly) unsigned long long texCoordAttributeIndex; // @synthesize texCoordAttributeIndex=_texCoordAttributeIndex;
@property(readonly) unsigned long long positionAttributeIndex; // @synthesize positionAttributeIndex=_positionAttributeIndex;
@property(nonatomic) unsigned long long metalDrawMode; // @synthesize metalDrawMode=_metalDrawMode;
@property(readonly) _Bool isDynamicallyBuffered; // @synthesize isDynamicallyBuffered=_isDynamicallyBuffered;
@property(nonatomic) unsigned int drawMode; // @synthesize drawMode=_drawMode;
@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property(readonly) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (_Bool)p_setAttributeUpdateData:(CDStruct_64113493 *)arg1 fromAttribute:(id)arg2;	// IMP=0x00000000001f424b
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5 addTransparentBorder:(_Bool)arg6;	// IMP=0x00000000001f3db5
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f3bc4
- (void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f3a80
- (void)updateDataBufferAttributesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f3a0b
- (id)vertexAttributeNamed:(id)arg1;	// IMP=0x00000000001f3838
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;	// IMP=0x00000000001f361b
- (void)setGLPoint4D:(CDStruct_83984b6f)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f3597
- (CDStruct_83984b6f)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f3514
- (void)setGLPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f348e
- (CDStruct_869f9c67)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f3409
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f338d
- (void)setMetalPoint4D:(CDStruct_83984b6f)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f3309
- (void)setMetalPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f3283
- (void)setMetalPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f3207
- (CDStruct_83984b6f)metalPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f3184
- (CDStruct_869f9c67)metalPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f30ff
- (CDStruct_6e3f967a)metalPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f3084
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f306e
- (void)setMetalFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f2ff0
- (float)metalFloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f2f73
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(_Bool)arg3;	// IMP=0x00000000001f2f41
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f2f0f
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3 advanceDynamicBuffer:(_Bool)arg4;	// IMP=0x00000000001f2a74
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000001f2a52
- (void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f28de
- (void)disableWithDevice:(id)arg1;	// IMP=0x00000000001f28c4
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;	// IMP=0x00000000001f28a9
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000001f2529
- (void)teardown;	// IMP=0x00000000001f24a9
- (void)enableDataBuffer;	// IMP=0x00000000001f1d88
- (id)initWithVertexRect:(struct CGRect)arg1 textureRect:(struct CGRect)arg2 meshSize:(struct CGSize)arg3 textureFlipped:(_Bool)arg4 includeCenterAttribute:(_Bool)arg5;	// IMP=0x00000000001f18b0
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize)arg2 bufferCount:(unsigned long long)arg3;	// IMP=0x00000000001f1071
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;	// IMP=0x00000000001f089b
- (void)p_setupElementArrayBufferIfNecessary;	// IMP=0x00000000001f0527

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

