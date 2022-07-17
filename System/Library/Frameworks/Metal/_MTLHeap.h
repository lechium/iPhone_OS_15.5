//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _MTLHeap
{
    unsigned long long _heapResourceOptions;	// 24 = 0x18
    long long _heapType;	// 32 = 0x20
    unsigned long long _gpuAddress;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long gpuAddress; // @synthesize gpuAddress=_gpuAddress;
- (id)description;	// IMP=0x000000000006a564
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000006a241
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) long long type;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000006a164
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000006a152
- (id)newTextureWithDescriptor:(id)arg1 atOffset:(unsigned long long)arg2;	// IMP=0x000000000006a140
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 atOffset:(unsigned long long)arg3;	// IMP=0x000000000006a12e
- (id)initWithType:(long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000006a0d8
- (id)init;	// IMP=0x000000000006a0c2

@end
