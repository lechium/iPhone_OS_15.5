//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKKSAESSIVKey
{
}

+ (id)randomKey:(id *)arg1;	// IMP=0x00400000001bb23e
- (id)keyMaterial;	// IMP=0x00400000001bb212
- (_Bool)doSIV:(const struct ccmode_siv *)arg1 nonce:(id)arg2 text:(id)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 authenticatedData:(id)arg6 error:(id *)arg7;	// IMP=0x00100000001bab65
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001ba8b6
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001ba661
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ba441
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ba1d0
- (id)initWithBase64:(id)arg1;	// IMP=0x00100000001ba0f3
- (id)initWithBytes:(char *)arg1 len:(unsigned long long)arg2;	// IMP=0x00100000001ba038
- (id)init;	// IMP=0x00100000001b9ffc

@end
