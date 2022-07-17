//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DEEncrypted : NSObject
{
}

+ (_Bool)decryptAllFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000001ed748
+ (id)decryptAll:(id)arg1;	// IMP=0x00000000001ed717
+ (id)toEnvelope:(_Bool)arg1 iv:(id)arg2 hmac:(id)arg3 keyVersion:(id)arg4 payload:(id)arg5;	// IMP=0x00000000001ed28f
+ (id)versionFile:(id)arg1;	// IMP=0x00000000001ed11e
+ (_Bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 multipart:(_Bool)arg5;	// IMP=0x00000000001ec992
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3;	// IMP=0x00000000001ec975
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 version:(id)arg3 allowAllKeys:(_Bool)arg4;	// IMP=0x00000000001ec295
+ (id)decryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3;	// IMP=0x00000000001ebb37
+ (id)encryptFrom:(id)arg1 name:(id)arg2 base:(id)arg3 keyId:(unsigned long long)arg4 privateKey:(id)arg5 multipart:(_Bool)arg6;	// IMP=0x00000000001eb23f
+ (id)encrypt:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 multipart:(_Bool)arg4;	// IMP=0x00000000001eb029
+ (_Bool)wrapFrom:(id)arg1 to:(id)arg2 encryptedPb:(void *)arg3 multipart:(_Bool)arg4;	// IMP=0x00000000001ead0d
+ (_Bool)encryptFrom:(id)arg1 to:(id)arg2 keyId:(unsigned long long)arg3 privateKey:(id)arg4 encryptedPb:(void *)arg5;	// IMP=0x00000000001ea28d
+ (id)decrypt:(id)arg1;	// IMP=0x00000000001ea25f
+ (id)decrypt:(id)arg1 keyVersion:(id *)arg2;	// IMP=0x00000000001ea231
+ (id)decrypt:(id)arg1 allowAllKeys:(_Bool)arg2 keyVersion:(id *)arg3;	// IMP=0x00000000001ea103
+ (_Bool)decryptFrom:(id)arg1 to:(id)arg2 allowAllKeys:(_Bool)arg3 keyVersion:(id *)arg4;	// IMP=0x00000000001e95d0
+ (id)getSymmetricKey:(id)arg1 publicKey:(id)arg2 symmetricKeyIV:(id *)arg3 signature:(id *)arg4;	// IMP=0x00000000001e93f8
+ (id)getSymmetricKey:(id)arg1 symmetricKeyIV:(id)arg2 signature:(id)arg3;	// IMP=0x00000000001e92db
+ (id)getSymmetricSrc:(id)arg1 publicKey:(id)arg2;	// IMP=0x00000000001e9250
+ (id)getKeyWithVersion:(id)arg1;	// IMP=0x00000000001e9225
+ (id)getKeyWithVersion:(id)arg1 symmetric:(_Bool *)arg2;	// IMP=0x00000000001e8f8d
+ (_Bool)isPrivateKey:(id)arg1 publicKey:(id)arg2;	// IMP=0x00000000001e8e1e
+ (_Bool)isSymmetric:(unsigned long long)arg1;	// IMP=0x00000000001e8e11
+ (id)getKey:(unsigned long long)arg1;	// IMP=0x00000000001e8dba

@end
