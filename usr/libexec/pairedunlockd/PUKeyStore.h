//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PUKeyStore : NSObject
{
}

- (id)getEncryptionKeyWithLabel:(id)arg1;	// IMP=0x0040000000008ca8
- (void)deletePasscodeBlobWithLabel:(id)arg1;	// IMP=0x0010000000008c8e
- (id)getPasscodeBlobWithLabel:(id)arg1;	// IMP=0x0010000000008b73
- (_Bool)storePasscodeBlob:(id)arg1 withLabel:(id)arg2;	// IMP=0x0010000000008ab7
- (id)_attributesForPasscodeBlobWithLabel:(id)arg1;	// IMP=0x00100000000089f0
- (id)encryptBlob:(id)arg1 withKeyLabel:(id)arg2;	// IMP=0x001000000000897f
- (id)decryptBlob:(id)arg1 withKeyLabel:(id)arg2;	// IMP=0x0010000000008916
- (void)deleteKeyWithLabel:(id)arg1;	// IMP=0x0010000000008909
- (_Bool)hasKeyWithLabel:(id)arg1 isPublic:(_Bool)arg2;	// IMP=0x00100000000088dc
- (void)storeEncryptionKey:(id)arg1 withLabel:(id)arg2 allowAccessWhenLocked:(_Bool)arg3;	// IMP=0x00100000000088c9
- (id)newKeyWithLabel:(id)arg1 allowAccessWhenLocked:(_Bool)arg2;	// IMP=0x00100000000088b1

@end
