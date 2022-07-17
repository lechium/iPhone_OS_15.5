//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APMescalSigning;

@interface APProxyURLCredentialService : NSObject
{
    APMescalSigning *_mescalSigningObject;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002050
@property(readonly, nonatomic) APMescalSigning *mescalSigningObject; // @synthesize mescalSigningObject=_mescalSigningObject;
- (id)_signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3;	// IMP=0x0000000000001de0
- (id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 request:(id)arg3 withPersistence:(unsigned long long)arg4;	// IMP=0x0000000000001dcb
- (id)signedCredentialForUrl:(id)arg1 userAgent:(id)arg2 withPersistence:(unsigned long long)arg3;	// IMP=0x0000000000001db3
- (id)signedCredentialForRequest:(id)arg1 withPersistence:(unsigned long long)arg2;	// IMP=0x0000000000001cfd
- (id)init;	// IMP=0x0000000000001ca7

@end
