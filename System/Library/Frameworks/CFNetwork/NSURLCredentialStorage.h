//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject
{
    NSURLCredentialStorageInternal *_internal;	// 8 = 0x8
}

+ (id)sharedCredentialStorage;	// IMP=0x00000000001ea6d3
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;	// IMP=0x00000000001ea16c
- (void)getDefaultCredentialForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ea144
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3 task:(id)arg4;	// IMP=0x00000000001ea132
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2 task:(id)arg3;	// IMP=0x00000000001ea120
- (void)getCredentialsForProtectionSpace:(id)arg1 task:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ea0f8
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x00000000001ea09e
- (id)defaultCredentialForProtectionSpace:(id)arg1;	// IMP=0x00000000001ea02e
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2 options:(id)arg3;	// IMP=0x00000000001e9b26
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x00000000001e9acc
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;	// IMP=0x00000000001e9a72
- (id)_allCredentialsWithAccessControlGroup:(id)arg1 includeLegacyKeychain:(_Bool)arg2;	// IMP=0x00000000001e9a63
@property(readonly, copy) NSDictionary *allCredentials;
- (id)credentialsForProtectionSpace:(id)arg1;	// IMP=0x00000000001e99e4
@property(nonatomic) _Bool _useSystemKeychain;
- (struct _CFURLCredentialStorage *)_CFURLCredentialStorage;	// IMP=0x00000000001e993f
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage *)arg1;	// IMP=0x00000000001e98e3
- (id)init;	// IMP=0x00000000001e98cf
- (void)dealloc;	// IMP=0x00000000001e9894
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;	// IMP=0x00000000001e97fa

@end
