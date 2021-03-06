//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPBLEPeripheralInfo, NSDictionary, NSNumber;

@interface HAP2AccessoryServerAccessoryCache <NSSecureCoding>
{
    HAPBLEPeripheralInfo *_peripheralInfo;	// 8 = 0x8
    NSDictionary *_accessoryCache;	// 16 = 0x10
    NSNumber *_sleepInterval;	// 24 = 0x18
    NSNumber *_metadataVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000061e8f
+ (id)accessoryCacheForAccessories:(id)arg1;	// IMP=0x0000000000061da8
+ (id)peripheralInfoFromMetadata:(id)arg1;	// IMP=0x0000000000061bac
- (void).cxx_destruct;	// IMP=0x0000000000061b59
@property(readonly, nonatomic) NSNumber *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) NSNumber *sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(retain, nonatomic) NSDictionary *accessoryCache; // @synthesize accessoryCache=_accessoryCache;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000061851
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000061739
- (void)invalidateAccessoryCache;	// IMP=0x0000000000061725
- (void)updateWithMetadata:(id)arg1 discoveredAccessories:(id)arg2;	// IMP=0x0000000000061658
- (id)initWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 sleepInterval:(id)arg3;	// IMP=0x0000000000061551
- (id)initWithBLEPeripheralInfo:(id)arg1 cachedAccessories:(id)arg2 sleepInterval:(id)arg3 metadataVersion:(id)arg4;	// IMP=0x000000000006145a

@end

