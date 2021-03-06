//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject
{
    NSFileCoordinator *_fileCoordinator;	// 8 = 0x8
    NSURL *_securityScopedURL;	// 16 = 0x10
    NSData *_securityScopeToken;	// 24 = 0x18
    NSURL *_secureReadURL;	// 32 = 0x20
    _Bool _securedRead;	// 40 = 0x28
    NSURL *_secureWriteURL;	// 48 = 0x30
    _Bool _securedWrite;	// 56 = 0x38
}

+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;	// IMP=0x000000000004ec8d
+ (id)securityScopedURL:(id)arg1;	// IMP=0x000000000004ec55
- (_Bool)isBundle;	// IMP=0x000000000004f86c
- (_Bool)isReadable;	// IMP=0x000000000004f7f6
- (id)data;	// IMP=0x000000000004f7a8
- (void)_attachSecurityScope;	// IMP=0x000000000004f756
- (id)securityScopeToken;	// IMP=0x000000000004f6b1
- (void)stopAccess;	// IMP=0x000000000004f62b
- (void)_removeTemporaryReadURL;	// IMP=0x000000000004f529
- (id)_temporaryReadURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f396
- (id)startReadAccess;	// IMP=0x000000000004efe0
- (id)startWriteAccess;	// IMP=0x000000000004edb0
- (void)dealloc;	// IMP=0x000000000004ed41
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;	// IMP=0x000000000004ecc8

@end

