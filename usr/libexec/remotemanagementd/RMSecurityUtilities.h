//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMSecurityUtilities : NSObject
{
}

+ (_Bool)checkValidAfterWithCertificate:(struct __SecCertificate *)arg1 interval:(double)arg2;	// IMP=0x004000000005d24b
+ (void)generateSelfSignedCertificateAndPrivateKeyWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ccb5
+ (id)serializeCertificateChain:(id)arg1;	// IMP=0x001000000005caa4
+ (id)deserializeCertificateChain:(id)arg1;	// IMP=0x001000000005c75d
+ (struct __SecKey *)_deserializePrivateKey:(id)arg1 privateKeyIsExportable:(_Bool)arg2;	// IMP=0x001000000005c41b
+ (id)_serializePrivateKey:(struct __SecKey *)arg1 privateKeyIsExportable:(_Bool)arg2;	// IMP=0x001000000005c2fa
+ (void)_deserializeIdentity:(id)arg1 privateKeyIsExportable:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005bfbe
+ (void)deserializeBAAIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005bfa7
+ (void)deserializeIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005bf8d
+ (id)_serializeIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 privateKeyIsExportable:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000005be38
+ (id)serializeBAAIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005be20
+ (id)serializeIdentityWithPrivateKey:(struct __SecKey *)arg1 certificateChain:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005be05

@end
