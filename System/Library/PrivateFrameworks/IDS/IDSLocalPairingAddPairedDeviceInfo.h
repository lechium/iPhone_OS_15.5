//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject <NSSecureCoding>
{
    NSUUID *_cbuuid;	// 8 = 0x8
    NSData *_BTOutOfBandKey;	// 16 = 0x10
    NSData *_bluetoothMACAddress;	// 24 = 0x18
    long long _pairingProtocolVersion;	// 32 = 0x20
    long long _pairingType;	// 40 = 0x28
    _Bool _supportsIPsecWithSPPLink;	// 48 = 0x30
    _Bool _shouldPairDirectlyOverIPsec;	// 49 = 0x31
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000714ad
- (void).cxx_destruct;	// IMP=0x0000000000071844
@property(nonatomic) long long pairingType; // @synthesize pairingType=_pairingType;
@property(nonatomic) _Bool shouldPairDirectlyOverIPsec; // @synthesize shouldPairDirectlyOverIPsec=_shouldPairDirectlyOverIPsec;
@property(retain, nonatomic) NSData *bluetoothMACAddress; // @synthesize bluetoothMACAddress=_bluetoothMACAddress;
@property(nonatomic) _Bool supportsIPsecWithSPPLink; // @synthesize supportsIPsecWithSPPLink=_supportsIPsecWithSPPLink;
@property(readonly, nonatomic) NSData *BTOutOfBandKey; // @synthesize BTOutOfBandKey=_BTOutOfBandKey;
@property(readonly, nonatomic) long long pairingProtocolVersion; // @synthesize pairingProtocolVersion=_pairingProtocolVersion;
@property(readonly, nonatomic) NSUUID *cbuuid; // @synthesize cbuuid=_cbuuid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000071660
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000714b5
- (id)description;	// IMP=0x0000000000071345
- (id)initWithCBUUID:(id)arg1 pairingProtocolVersion:(long long)arg2 BTOutOfBandKey:(id)arg3;	// IMP=0x0000000000071286

@end
