//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMDHomeNFCReaderKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSData *_publicKeyExternalRepresentation;	// 8 = 0x8
    NSData *_privateKey;	// 16 = 0x10
    NSData *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000046db4b
+ (id)publicKeyWithPublicKeyExternalRepresentation:(id)arg1;	// IMP=0x000000000046db2c
+ (id)identifierForKey:(id)arg1;	// IMP=0x000000000046d9e0
+ (id)createWithExternalRepresentation:(id)arg1;	// IMP=0x000000000046d826
+ (id)createRandomKey;	// IMP=0x000000000046d5e0
+ (id)createWithKeychainItem:(id)arg1;	// IMP=0x00000000007122e3
+ (id)keychainItemAccountAttributeValueWithHome:(id)arg1 keyIdentifier:(id)arg2;	// IMP=0x0000000000712237
- (void).cxx_destruct;	// IMP=0x000000000046d59e
@property(readonly, copy) NSData *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, copy) NSData *publicKeyExternalRepresentation; // @synthesize publicKeyExternalRepresentation=_publicKeyExternalRepresentation;
- (id)attributeDescriptions;	// IMP=0x000000000046d38c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000046d2de
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000046d1f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046d1e9
- (unsigned long long)hash;	// IMP=0x000000000046d128
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046cf7d
@property(readonly, copy) NSData *externalRepresentation;
@property(readonly, copy) NSData *publicKey;
- (id)initWithIdentifier:(id)arg1 privateKey:(id)arg2 publicKeyExternalRepresentation:(id)arg3;	// IMP=0x000000000046cd75
- (id)createKeychainItemForHome:(id)arg1;	// IMP=0x0000000000711f62

@end
