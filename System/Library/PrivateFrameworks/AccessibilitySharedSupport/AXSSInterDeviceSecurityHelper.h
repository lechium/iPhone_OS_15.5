//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AXSSInterDeviceSecurityHelper : NSObject
{
    struct __SecIdentity *_cachedAppleIDIdentity;	// 8 = 0x8
    NSArray *_cachedCertificateChain;	// 16 = 0x10
    NSArray *_cachedSecurityIdentity;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000284d
- (void)verifyCertificate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002440
- (id)securityIdentity;	// IMP=0x0000000000002310
- (id)_certificateChain;	// IMP=0x0000000000001feb
- (struct __SecIdentity *)_appleIDIdentity;	// IMP=0x0000000000001dfb
- (void)_appleIDsDidChange;	// IMP=0x0000000000001d6e
- (void)dealloc;	// IMP=0x0000000000001d24
- (id)init;	// IMP=0x0000000000001cac

@end
