//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLVisibleFunctionTableSPI-Protocol.h>

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap;

@interface MTLToolsVisibleFunctionTable <MTLVisibleFunctionTableSPI>
{
}

- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000028af7
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000028aa0
- (void)setValue:(unsigned long long)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000028a5b
- (void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000028a1b
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000028950
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000288f1
- (void)setFunctions:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000002882d
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000287d6
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long resourceIndex;

// Remaining properties
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(retain, nonatomic) id <MTLBuffer> globalBuffer;
@property(nonatomic) unsigned long long globalBufferOffset;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) id <MTLHeap> heap;
@property(readonly) unsigned long long heapOffset;
@property(copy) NSString *label;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long storageMode;
@property(readonly) Class superclass;

@end

