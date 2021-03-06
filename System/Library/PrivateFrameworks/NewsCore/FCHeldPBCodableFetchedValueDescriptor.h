//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCFetchedValueManager;
@protocol FCContentContext;

@interface FCHeldPBCodableFetchedValueDescriptor
{
    Class _codableClass;	// 8 = 0x8
    id <FCContentContext> _contentContext;	// 16 = 0x10
    FCFetchedValueManager *_resourceConfigurationManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022133a
@property(readonly, nonatomic) FCFetchedValueManager *resourceConfigurationManager; // @synthesize resourceConfigurationManager=_resourceConfigurationManager;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) Class codableClass; // @synthesize codableClass=_codableClass;
- (void)_processFetchOperationResult:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000220f89
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;	// IMP=0x0000000000220d32
- (id)inputManagers;	// IMP=0x0000000000220ca7
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000220a62
- (id)fastCachedValue;	// IMP=0x0000000000220736
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022072b
- (id)initWithCodableClass:(Class)arg1 contentContext:(id)arg2 resourceConfigurationManager:(id)arg3;	// IMP=0x0000000000220401
- (id)init;	// IMP=0x00000000002202bc

@end

