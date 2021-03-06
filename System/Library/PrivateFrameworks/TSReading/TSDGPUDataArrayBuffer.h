//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDGPUDataBufferAccessor-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TSDGPUDataArrayBuffer : NSObject <TSDGPUDataBufferAccessor>
{
    NSMutableArray *_vertexAttributes;	// 8 = 0x8
    unsigned long long _vertexCount;	// 16 = 0x10
    unsigned long long _dataTypeSizeInBytes;	// 24 = 0x18
    unsigned int _bufferUsage;	// 32 = 0x20
    _Bool _usesMetalBuffer;	// 36 = 0x24
    long long *_needsUpdateFirstIndex;	// 40 = 0x28
    long long *_needsUpdateLastIndex;	// 48 = 0x30
    char *_gLData;	// 56 = 0x38
    _Bool _dataBufferHasBeenSetup;	// 64 = 0x40
    unsigned int *_gLDataBuffers;	// 72 = 0x48
    NSMutableDictionary *_attributeOffsetsDictionary;	// 80 = 0x50
    NSArray *_metalDataBuffers;	// 88 = 0x58
    unsigned long long _bufferIndex;	// 96 = 0x60
    unsigned long long _dataBufferEntrySize;	// 104 = 0x68
    unsigned long long _bufferCount;	// 112 = 0x70
    unsigned long long _currentBufferIndex;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001f04f4
@property(nonatomic) unsigned long long currentBufferIndex; // @synthesize currentBufferIndex=_currentBufferIndex;
@property(readonly, nonatomic) unsigned long long bufferCount; // @synthesize bufferCount=_bufferCount;
@property(readonly, nonatomic) unsigned long long dataBufferEntrySize; // @synthesize dataBufferEntrySize=_dataBufferEntrySize;
@property(readonly, copy) NSString *description;
- (void)setMetalPoint4D:(CDStruct_83984b6f)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001f0135
- (CDStruct_83984b6f)metalPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001f00a7
- (void)setMetalPoint3D:(CDStruct_869f9c67)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001effe7
- (CDStruct_869f9c67)metalPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001eff59
- (void)setMetalPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001efea3
- (CDStruct_6e3f967a)metalPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001efe15
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001efdff
- (void)setMetalFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000001efd47
- (float)metalFloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001efcb9
- (unsigned long long)vertexCount;	// IMP=0x00000000001efcaf
@property(readonly, nonatomic) _Bool hasUpdatedData;
- (char *)dataPointer;	// IMP=0x00000000001efbe4
- (void)swapGPUDataBuffers;	// IMP=0x00000000001efa7d
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000001ef9b7
- (void)enableArrayBufferWithDevice:(id)arg1;	// IMP=0x00000000001ef9a5
- (void)addIndexNeedsUpdate:(long long)arg1;	// IMP=0x00000000001ef95b
- (void)addIndexRangeNeedsUpdate:(struct _NSRange)arg1;	// IMP=0x00000000001ef910
- (void)addAllIndexesNeedUpdate;	// IMP=0x00000000001ef8f8
- (void)dealloc;	// IMP=0x00000000001ef889
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;	// IMP=0x00000000001ef25d
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;	// IMP=0x00000000001ef1cd
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;	// IMP=0x00000000001ef050

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

