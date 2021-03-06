//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_sharingInstanceIdentifier;	// 8 = 0x8
    NSString *_provisioningCredentialHash;	// 16 = 0x10
    unsigned long long _sharingStatus;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cf0ee
- (void).cxx_destruct;	// IMP=0x00000000000cf52f
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(copy, nonatomic) NSString *provisioningCredentialHash; // @synthesize provisioningCredentialHash=_provisioningCredentialHash;
@property(copy, nonatomic) NSString *sharingInstanceIdentifier; // @synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cf434
- (id)description;	// IMP=0x00000000000cf36f
- (unsigned long long)hash;	// IMP=0x00000000000cf321
- (_Bool)isEqualToEncryptedProvisioningTarget:(id)arg1;	// IMP=0x00000000000cf307
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cf29f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cf203
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cf0f6

@end

