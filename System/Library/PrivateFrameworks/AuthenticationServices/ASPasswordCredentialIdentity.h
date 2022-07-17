//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@class ASCredentialServiceIdentifier, NSString, SFExternalCredentialIdentityStoreIdentifier;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding>
{
    ASCredentialServiceIdentifier *_serviceIdentifier;	// 8 = 0x8
    NSString *_user;	// 16 = 0x10
    NSString *_recordIdentifier;	// 24 = 0x18
    long long _rank;	// 32 = 0x20
    SFExternalCredentialIdentityStoreIdentifier *_credentialIdentityStoreIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034731
+ (id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;	// IMP=0x000000000003437c
- (void).cxx_destruct;	// IMP=0x000000000003499d
@property(readonly, nonatomic) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier; // @synthesize credentialIdentityStoreIdentifier=_credentialIdentityStoreIdentifier;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000348b4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034739
- (id)description;	// IMP=0x00000000000346e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034667
- (id)_initWithFoundationCredentialIdentity:(id)arg1;	// IMP=0x00000000000344fa
- (id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;	// IMP=0x000000000003440a

@end
