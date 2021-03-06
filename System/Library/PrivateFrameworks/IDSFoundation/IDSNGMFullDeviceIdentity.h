//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSNGMFullDeviceIdentity : NSObject
{
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000845e8
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000845e0
+ (id)identityWithAccess:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000845d8
- (_Bool)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008462c
- (id)keyRollingTicketWithError:(id *)arg1;	// IMP=0x0000000000084624
- (_Bool)shouldRollEncryptionIdentity;	// IMP=0x000000000008461c
- (void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000084616
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000084610
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000084608
- (_Bool)eraseFromKeyChain:(id *)arg1;	// IMP=0x0000000000084600
- (id)publicDeviceIdentityWithError:(id *)arg1;	// IMP=0x00000000000845f8
- (id)dataRepresentationWithError:(id *)arg1;	// IMP=0x00000000000845f0

@end

