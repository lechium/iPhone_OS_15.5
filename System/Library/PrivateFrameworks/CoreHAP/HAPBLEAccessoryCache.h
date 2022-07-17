//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/NSSecureCoding-Protocol.h>

@class HAPBLEPeripheralInfo, NSMutableArray, NSNumber, NSString;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>
{
    NSNumber *_metadataVersion;	// 8 = 0x8
    NSString *_pairingIdentifier;	// 16 = 0x10
    HAPBLEPeripheralInfo *_peripheralInfo;	// 24 = 0x18
    NSMutableArray *_cachedServices;	// 32 = 0x20
    NSNumber *_lastKeyBagIdentityIndexFailingPV;	// 40 = 0x28
    CDUnknownBlockType _saveBlock;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000085a3
- (void).cxx_destruct;	// IMP=0x000000000000852e
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV; // @synthesize lastKeyBagIdentityIndexFailingPV=_lastKeyBagIdentityIndexFailingPV;
@property(readonly, nonatomic) NSMutableArray *cachedServices; // @synthesize cachedServices=_cachedServices;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
@property(readonly, nonatomic) NSString *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(readonly, nonatomic) NSNumber *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
- (id)description;	// IMP=0x000000000000826c
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)arg1;	// IMP=0x0000000000008181
- (void)save;	// IMP=0x00000000000080ad
- (void)updateWithService:(id)arg1;	// IMP=0x0000000000007ed1
- (id)getCachedServiceWithUUID:(id)arg1;	// IMP=0x0000000000007cfe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007ac7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007954
- (void)updateWithPeripheralInfo:(id)arg1;	// IMP=0x0000000000007890
- (unsigned long long)hash;	// IMP=0x000000000000784c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000777a
- (id)initWithPairingIdentifier:(id)arg1 saveBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007678

@end
