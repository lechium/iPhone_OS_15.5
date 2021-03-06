//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@interface IDSMPFullLegacyIdentity <NSSecureCoding>
{
}

+ (struct _SecMPPublicIdentity *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity *)arg1 error:(id *)arg2;	// IMP=0x0000000000087bc9
+ (struct _SecMPFullIdentity *)_createFullIdentityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000087ae4
+ (struct _SecMPFullIdentity *)_createFullIdentityWithError:(id *)arg1;	// IMP=0x0000000000087a1a
+ (struct _SecMPFullIdentity *)_createFullIdentityFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008792a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000086fef
+ (id)identityWithDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000086c9d
+ (id)identityWithError:(id *)arg1;	// IMP=0x0000000000086c47
+ (id)identityWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000086b70
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x0000000000087c99
- (_Bool)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008777e
- (_Bool)purgeFromKeychain:(id *)arg1;	// IMP=0x000000000008766e
- (_Bool)updateIdentityToDataProtectionClass:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000874dc
- (unsigned int)dataProtectionClassWithError:(id *)arg1;	// IMP=0x00000000000873e6
- (id)protectedHashOfMessageData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087274
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008707e
- (id)publicIdentityWithError:(id *)arg1;	// IMP=0x0000000000086ff7
@property(readonly, nonatomic) struct _SecMPFullIdentity *fullIdentity;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086e57
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086d22
- (id)initWithFullIdentity:(struct _SecMPFullIdentity *)arg1;	// IMP=0x0000000000086cf3

@end

