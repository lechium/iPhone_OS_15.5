//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKEncryptedDataObject : NSObject <NSSecureCoding>
{
    unsigned long long _version;	// 8 = 0x8
    NSData *_ephemeralPublicKey;	// 16 = 0x10
    NSData *_publicKeyHash;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000122924
- (void).cxx_destruct;	// IMP=0x0000000000122b9c
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(copy, nonatomic) NSData *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000122a7d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012292c
- (id)initWithWebServiceDictionary:(id)arg1;	// IMP=0x00000000001226f1
- (id)asWebServiceDictionary;	// IMP=0x00000000001225b0

@end

