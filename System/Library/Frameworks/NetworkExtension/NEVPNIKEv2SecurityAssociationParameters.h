//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    int _lifetimeMinutes;	// 8 = 0x8
    long long _encryptionAlgorithm;	// 16 = 0x10
    long long _integrityAlgorithm;	// 24 = 0x18
    long long _diffieHellmanGroup;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ba5a7
@property int lifetimeMinutes; // @synthesize lifetimeMinutes=_lifetimeMinutes;
@property long long diffieHellmanGroup; // @synthesize diffieHellmanGroup=_diffieHellmanGroup;
@property long long integrityAlgorithm; // @synthesize integrityAlgorithm=_integrityAlgorithm;
@property long long encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)copyDictionary;	// IMP=0x00000000001babf5
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001baa55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ba99a
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001ba75f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ba6a7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ba5fd
- (id)init;	// IMP=0x00000000001ba5af

@end

