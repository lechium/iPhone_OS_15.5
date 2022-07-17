//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLDebugAccelerationStructureCommandEncoder
{
    _Bool canDealloc;	// 36 = 0x24
    _Bool canEndEncoding;	// 37 = 0x25
    _Bool hasEndedEncoding;	// 38 = 0x26
}

- (void)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 headerBuffer:(id)arg2 headerBufferOffset:(unsigned long long)arg3 innerNodeBuffer:(id)arg4 innerNodeBufferOffset:(unsigned long long)arg5 leafNodeBuffer:(id)arg6 leafNodeBufferOffset:(unsigned long long)arg7 primitiveBuffer:(id)arg8 primitiveBufferOffset:(unsigned long long)arg9 geometryBuffer:(id)arg10 geometryOffset:(unsigned long long)arg11 instanceTransformBuffer:(id)arg12 instanceTransformOffset:(unsigned long long)arg13;	// IMP=0x0000000000069f66
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizesBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000069e7f
- (_Bool)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x0000000000069b3a
- (_Bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x0000000000069a89
- (void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000699a2
- (void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000698bb
- (void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x00000000000696d6
- (void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000695ef
- (void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000069508
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;	// IMP=0x00000000000692b4
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;	// IMP=0x000000000006917b
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x0000000000068f3f
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000068e16
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x0000000000068c01
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000068ad8
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;	// IMP=0x00000000000689dd
- (void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;	// IMP=0x00000000000688ab
- (void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000068788
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x00000000000686aa
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;	// IMP=0x000000000006858a
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;	// IMP=0x00000000000684a3
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x00000000000683c5
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;	// IMP=0x00000000000679cb
- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;	// IMP=0x00000000000677ab
- (_Bool)checkEncoderState;	// IMP=0x0000000000065805
- (id)initWithAccelerationStructureCommandEncoder:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000657d6

@end
