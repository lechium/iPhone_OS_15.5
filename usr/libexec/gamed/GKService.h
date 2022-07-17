//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x004000000018d6d5
+ (unsigned long long)requiredEntitlements;	// IMP=0x001000000018d5bc
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x001000000018d528
+ (id)serviceFromService:(id)arg1;	// IMP=0x001000000018d42b
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x001000000018d395
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x001000000018d2d1
- (void).cxx_destruct;	// IMP=0x002000000018d9c0
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupForPlayerInternal:(id)arg1;	// IMP=0x001000000018d8b1
- (id)transactionGroup;	// IMP=0x001000000018d831
- (id)transportBypassingMultiUser;	// IMP=0x001000000018d81a
- (id)transactionGroupBypassingMultiUser;	// IMP=0x001000000018d808
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x001000000018d7f6
- (_Bool)requiresAuthentication;	// IMP=0x001000000018d7ee
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x001000000018d033
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000018cfa0
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x001000000018cdf6

@end
