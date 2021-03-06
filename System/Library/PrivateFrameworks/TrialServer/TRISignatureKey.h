//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TRISignatureKey : NSObject
{
    struct __SecKey *_key;	// 8 = 0x8
}

+ (struct __SecKey *)_keyFromCertificateChain:(id)arg1;	// IMP=0x00000000000a8292
+ (id)keyFromData:(id)arg1;	// IMP=0x00000000000a81e3
- (_Bool)_validateSignature:(id)arg1 data:(id)arg2 algorithm:(const struct __CFString *)arg3;	// IMP=0x00000000000a8cad
- (_Bool)_validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(const struct __CFString *)arg3;	// IMP=0x00000000000a8bfc
- (_Bool)validateBase64Signature:(id)arg1 data:(id)arg2;	// IMP=0x00000000000a8be0
- (_Bool)validateBase64Signature:(id)arg1 forFile:(id)arg2;	// IMP=0x00000000000a8b4a
- (void)dealloc;	// IMP=0x00000000000a8b0b
- (id)initWithKey:(struct __SecKey *)arg1;	// IMP=0x00000000000a8ace
- (id)init;	// IMP=0x00000000000a81dd

@end

