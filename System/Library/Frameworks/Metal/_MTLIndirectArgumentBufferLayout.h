//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLDeviceSPI;

@interface _MTLIndirectArgumentBufferLayout : NSObject
{
    void *_private;	// 8 = 0x8
}

@property(readonly, nonatomic) id <MTLDeviceSPI> device;
- (void)setStructType:(id)arg1 withDevice:(id)arg2;	// IMP=0x0000000000020e05
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000020dd6
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000020dc9
@property(readonly) unsigned int hashSignature;
@property(readonly) unsigned int hashMask;
@property(readonly) unsigned int hashOffset;
@property(readonly) unsigned int hashValue;
@property(readonly) unsigned long long alignment; // @dynamic alignment;
@property(readonly) unsigned long long encodedLength; // @dynamic encodedLength;
@property(readonly) _Bool bufferLayoutMatchesFrontEndLayout; // @dynamic bufferLayoutMatchesFrontEndLayout;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020d69
- (unsigned long long)uniqueIdentifierForPrimitiveAccelerationStructureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020d51
- (unsigned long long)uniqueIdentifierForInstanceAccelerationStructureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020d39
- (unsigned long long)uniqueIdentifierForIntersectionFunctionTableAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020d21
- (unsigned long long)uniqueIdentifierForVisibleFunctionTableAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020d09
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020cf1
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020cd9
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020cc1
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020ca9
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x0000000000020c91
- (void)dealloc;	// IMP=0x0000000000020c43
- (id)init;	// IMP=0x0000000000020c14

@end

