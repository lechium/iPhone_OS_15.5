//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol FCCoreConfigurationManager;

@interface FCCoreConfigurationFetchedValueDescriptor
{
    id <FCCoreConfigurationManager> _configurationManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000181835
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
- (id)inputManagers;	// IMP=0x0000000000181817
- (_Bool)isValue:(id)arg1 equalToValue:(id)arg2;	// IMP=0x000000000018161d
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000181553
- (id)fastCachedValue;	// IMP=0x0000000000181503
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001814f8
- (id)initWithConfigurationManager:(id)arg1;	// IMP=0x00000000001813a1
- (id)init;	// IMP=0x000000000018125c

@end
