//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLHeapDescriptorInternal
{
    struct MTLHeapDescriptorPrivate *_private;	// 8 = 0x8
}

- (_Bool)validateWithDevice:(id)arg1;	// IMP=0x0000000000069f01
- (unsigned long long)pinnedGPUAddress;	// IMP=0x0000000000069eec
- (void)setPinnedGPUAddress:(unsigned long long)arg1;	// IMP=0x0000000000069ed7
- (void)setResourceOptions:(unsigned long long)arg1;	// IMP=0x0000000000069eaf
- (unsigned long long)resourceOptions;	// IMP=0x0000000000069e9a
- (void)setHazardTrackingMode:(unsigned long long)arg1;	// IMP=0x0000000000069e73
- (unsigned long long)hazardTrackingMode;	// IMP=0x0000000000069e59
- (const struct MTLHeapDescriptorPrivate *)descriptorPrivate;	// IMP=0x0000000000069e48
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000069bc0
- (id)description;	// IMP=0x0000000000069bac
- (void)setType:(long long)arg1;	// IMP=0x0000000000069b97
- (long long)type;	// IMP=0x0000000000069b82
@property(nonatomic) _Bool sparsePageAccessCountersEnabled;
@property(nonatomic) unsigned long long sparsePageSize;
- (void)setStorageMode:(unsigned long long)arg1;	// IMP=0x0000000000069b05
- (unsigned long long)storageMode;	// IMP=0x0000000000069af0
- (void)setCpuCacheMode:(unsigned long long)arg1;	// IMP=0x0000000000069acc
- (unsigned long long)cpuCacheMode;	// IMP=0x0000000000069ab7
- (void)setSize:(unsigned long long)arg1;	// IMP=0x0000000000069aa3
- (unsigned long long)size;	// IMP=0x0000000000069a8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069a19
- (unsigned long long)hash;	// IMP=0x00000000000699fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000699a1
- (void)dealloc;	// IMP=0x0000000000069960
- (id)init;	// IMP=0x00000000000698dc

@end
