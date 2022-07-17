//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_ephemeralPublicKey;	// 8 = 0x8
    NSData *_publicKeyHash;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    unsigned long long _status;	// 32 = 0x20
    unsigned long long _source;	// 40 = 0x28
    unsigned long long _targetDevice;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071fd6
- (void).cxx_destruct;	// IMP=0x00000000000725ea
@property(nonatomic) unsigned long long targetDevice; // @synthesize targetDevice=_targetDevice;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(copy, nonatomic) NSData *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
- (id)asWebServiceDictionary;	// IMP=0x0000000000072447
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000072382
- (unsigned long long)hash;	// IMP=0x00000000000722e1
- (_Bool)isEqualToEncryptedProvisioningTarget:(id)arg1;	// IMP=0x000000000007225d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000721f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072131
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071fde
- (id)description;	// IMP=0x0000000000071e5a

@end
