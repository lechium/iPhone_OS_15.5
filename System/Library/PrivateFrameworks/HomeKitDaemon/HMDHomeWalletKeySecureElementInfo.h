//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDHomeWalletKeySecureElementInfo : HMFObject
{
    NSData *_deviceCredentialKey;	// 8 = 0x8
    NSString *_applicationIdentifier;	// 16 = 0x10
    NSString *_subCredentialIdentifier;	// 24 = 0x18
    NSString *_secureElementIdentifier;	// 32 = 0x20
    NSString *_pairedReaderIdentifier;	// 40 = 0x28
}

+ (id)shortDescription;	// IMP=0x00000000006e8fa4
+ (id)createForExpressConflictCheckWithSecureElementIdentifier:(id)arg1;	// IMP=0x00000000006e8f37
+ (id)createForEasyProvisioning;	// IMP=0x00000000006e8eef
- (void).cxx_destruct;	// IMP=0x00000000006e8e8b
@property(readonly, copy) NSString *pairedReaderIdentifier; // @synthesize pairedReaderIdentifier=_pairedReaderIdentifier;
@property(readonly, copy) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(readonly, copy) NSString *subCredentialIdentifier; // @synthesize subCredentialIdentifier=_subCredentialIdentifier;
@property(readonly, copy) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, copy) NSData *deviceCredentialKey; // @synthesize deviceCredentialKey=_deviceCredentialKey;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006e8e12
- (id)attributeDescriptions;	// IMP=0x00000000006e8bcb
- (id)description;	// IMP=0x00000000006e8bc1
- (id)privateDescription;	// IMP=0x00000000006e8baf
- (id)shortDescription;	// IMP=0x00000000006e8b9d
- (unsigned long long)hash;	// IMP=0x00000000006e8a74
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006e87df
- (id)initWithPKPass:(id)arg1;	// IMP=0x00000000006e8683
- (id)initWithDeviceCredentialKey:(id)arg1 applicationIdentifier:(id)arg2 subCredentialIdentifier:(id)arg3 secureElementIdentifier:(id)arg4 pairedReaderIdentifier:(id)arg5;	// IMP=0x00000000006e852d

@end

