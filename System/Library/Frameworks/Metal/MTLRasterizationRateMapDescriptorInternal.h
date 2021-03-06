//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/MTLRasterizationRateMapDescriptorSPI-Protocol.h>

@class MTLRasterizationRateLayerArrayInternal, NSString;

__attribute__((visibility("hidden")))
@interface MTLRasterizationRateMapDescriptorInternal <MTLRasterizationRateMapDescriptorSPI>
{
    CDStruct_da2e99ad _screenSize;	// 8 = 0x8
    NSString *_label;	// 32 = 0x20
    struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> _layers;	// 40 = 0x28
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;	// 64 = 0x40
    _Bool _skipSampleValidationAndInterpolation;	// 72 = 0x48
}

- (id).cxx_construct;	// IMP=0x000000000002d0d5
- (void).cxx_destruct;	// IMP=0x000000000002d0b1
- (void)setLabel:(id)arg1;	// IMP=0x000000000002d0a0
- (id)label;	// IMP=0x000000000002d08f
@property(nonatomic) _Bool skipSampleValidationAndInterpolation; // @synthesize skipSampleValidationAndInterpolation=_skipSampleValidationAndInterpolation;
- (void)setScreenSize:(CDStruct_da2e99ad)arg1;	// IMP=0x000000000002d051
- (CDStruct_da2e99ad)screenSize;	// IMP=0x000000000002d031
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000002cd31
- (id)description;	// IMP=0x000000000002cd1d
- (unsigned long long)hash;	// IMP=0x000000000002cc47
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ca98
- (const id *)layerPointer:(unsigned long long *)arg1;	// IMP=0x000000000002ca43
- (unsigned long long)layerCount;	// IMP=0x000000000002c9ff
- (id)layers;	// IMP=0x000000000002c9ee
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002c97b
- (id)layerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c951
- (oneway void)dealloc;	// IMP=0x000000000002c8ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c78f
- (id)initWithScreenSize:(CDStruct_da2e99ad)arg1;	// IMP=0x000000000002c75c
- (id)init;	// IMP=0x000000000002c6f6

@end

