//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLResourceSPI-Protocol.h>

@class MTLToolsHeap, NSString;
@protocol MTLDevice, MTLHeap;

@interface MTLToolsResource <MTLResourceSPI>
{
    unsigned long long _options;	// 40 = 0x28
    MTLToolsHeap *_heap;	// 48 = 0x30
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (int)setOwnerWithIdentity:(unsigned int)arg1;	// IMP=0x000000000003fc68
@property(readonly) unsigned long long allocatedSize;
- (void)validateCPUWriteable;	// IMP=0x000000000003fbdf
- (void)validateCPUReadable;	// IMP=0x000000000003fb81
- (void)waitUntilComplete;	// IMP=0x000000000003fb56
- (_Bool)isComplete;	// IMP=0x000000000003fb2b
@property(readonly) id <MTLHeap> heap;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003fa6b
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003f9bc
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x000000000003f974
- (void)dealloc;	// IMP=0x000000000003f91a
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 heap:(id)arg3;	// IMP=0x000000000003f8c3
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;	// IMP=0x000000000003f83e
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long protectionOptions;
@property int responsibleProcess;
- (_Bool)isPurgeable;	// IMP=0x000000000003f763
@property(readonly) unsigned long long heapOffset;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000003f707
- (void)makeAliasable;	// IMP=0x000000000003f6dc
- (_Bool)isAliasable;	// IMP=0x000000000003f6b1
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long resourceOptions;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long cpuCacheMode;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

