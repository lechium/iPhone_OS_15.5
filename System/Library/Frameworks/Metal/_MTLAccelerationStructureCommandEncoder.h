//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLAccelerationStructureCommandEncoderSPI-Protocol.h>

@class NSString;
@protocol MTLDevice;

@interface _MTLAccelerationStructureCommandEncoder <MTLAccelerationStructureCommandEncoderSPI>
{
}

- (void)waitForFence:(id)arg1;	// IMP=0x000000000005d657
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000005d642
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000005d62d
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000005d618
- (void)useHeap:(id)arg1;	// IMP=0x000000000005d603
- (void)updateFence:(id)arg1;	// IMP=0x000000000005d5ee
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x000000000005d5d9
- (void)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 headerBuffer:(id)arg2 headerBufferOffset:(unsigned long long)arg3 innerNodeBuffer:(id)arg4 innerNodeBufferOffset:(unsigned long long)arg5 leafNodeBuffer:(id)arg6 leafNodeBufferOffset:(unsigned long long)arg7 primitiveBuffer:(id)arg8 primitiveBufferOffset:(unsigned long long)arg9 geometryBuffer:(id)arg10 geometryOffset:(unsigned long long)arg11 instanceTransformBuffer:(id)arg12 instanceTransformOffset:(unsigned long long)arg13;	// IMP=0x000000000005d5c4
- (void)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizesBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d5af
- (_Bool)writeGenericBVHStructureOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x000000000005d597
- (_Bool)writeGenericBVHStructureSizesOfAccelerationStructure:(id)arg1 into:(id)arg2;	// IMP=0x000000000005d57f
- (void)writeGeometryOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 geometryBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d56a
- (void)writeGeometrySizeOfAccelerationStructure:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d555
- (void)deserializeAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d540
- (void)deserializeAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d52b
- (void)serializeAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d516
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4 withDescriptor:(id)arg5;	// IMP=0x000000000005d501
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3 withDescriptor:(id)arg4;	// IMP=0x000000000005d4ec
- (void)deserializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 fromBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d4d7
- (void)deserializePrimitiveAccelerationStructure:(id)arg1 fromBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d4c2
- (void)serializeInstanceAccelerationStructure:(id)arg1 primitiveAccelerationStructures:(id)arg2 toBuffer:(id)arg3 serializedBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d4ad
- (void)serializePrimitiveAccelerationStructure:(id)arg1 toBuffer:(id)arg2 serializedBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d498
- (void)writeDeserializedPrimitiveAccelerationStructureSizes:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizesBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d483
- (void)writeDeserializedAccelerationStructureSize:(id)arg1 serializedOffset:(unsigned long long)arg2 toBuffer:(id)arg3 sizeBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d46e
- (void)writeSerializedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 sizeBufferOffset:(unsigned long long)arg3;	// IMP=0x000000000005d459
- (void)refitAccelerationStructure:(id)arg1 descriptor:(id)arg2 destination:(id)arg3 scratchBuffer:(id)arg4 scratchBufferOffset:(unsigned long long)arg5;	// IMP=0x000000000005d444
- (void)copyAndCompactAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x000000000005d42f
- (void)copyAccelerationStructure:(id)arg1 toAccelerationStructure:(id)arg2;	// IMP=0x000000000005d41a
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3 sizeDataType:(unsigned long long)arg4;	// IMP=0x000000000005d405
- (void)writeCompactedAccelerationStructureSize:(id)arg1 toBuffer:(id)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000005d3f0
- (void)buildAccelerationStructure:(id)arg1 descriptor:(id)arg2 scratchBuffer:(id)arg3 scratchBufferOffset:(unsigned long long)arg4;	// IMP=0x000000000005d3db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end
