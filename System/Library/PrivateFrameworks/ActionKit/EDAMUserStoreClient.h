//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/EDAMUserStore-Protocol.h>

@class NSString;
@protocol ENTProtocol;

@interface EDAMUserStoreClient : NSObject <EDAMUserStore>
{
    id <ENTProtocol> _inProtocol;	// 8 = 0x8
    id <ENTProtocol> _outProtocol;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002a5e00
- (id)getConnectedIdentities:(id)arg1 identityIds:(id)arg2;	// IMP=0x00000000002a5a44
- (id)getAccountLimits:(int)arg1;	// IMP=0x00000000002a57f5
- (id)createSessionAuthenticationToken:(id)arg1;	// IMP=0x00000000002a5532
- (void)unregisterForSyncPushNotifications:(id)arg1;	// IMP=0x00000000002a52b0
- (id)registerForSyncPushNotifications:(id)arg1 credentials:(id)arg2;	// IMP=0x00000000002a4f48
- (id)listBusinessInvitations:(id)arg1 includeRequestedInvitations:(_Bool)arg2;	// IMP=0x00000000002a4bec
- (id)listBusinessUsers:(id)arg1;	// IMP=0x00000000002a492b
- (void)updateBusinessUserIdentifier:(id)arg1 oldEmailAddress:(id)arg2 newEmailAddress:(id)arg3;	// IMP=0x00000000002a4581
- (void)removeFromBusiness:(id)arg1 emailAddress:(id)arg2;	// IMP=0x00000000002a426a
- (void)inviteToBusiness:(id)arg1 emailAddress:(id)arg2;	// IMP=0x00000000002a3fa7
- (id)getUserUrls:(id)arg1;	// IMP=0x00000000002a3d21
- (id)getNoteStoreUrl:(id)arg1;	// IMP=0x00000000002a3aa4
- (id)getSubscriptionInfo:(id)arg1;	// IMP=0x00000000002a381e
- (id)getPremiumInfo:(id)arg1;	// IMP=0x00000000002a3598
- (id)getPublicUserInfo:(id)arg1;	// IMP=0x00000000002a32c5
- (id)getUser:(id)arg1;	// IMP=0x00000000002a303f
- (id)refreshAuthentication:(id)arg1;	// IMP=0x00000000002a2db9
- (id)authenticateToBusiness:(id)arg1;	// IMP=0x00000000002a2b33
- (void)revokeLongSession:(id)arg1;	// IMP=0x00000000002a28fa
- (id)completeTwoFactorAuthentication:(id)arg1 oneTimeCode:(id)arg2 deviceIdentifier:(id)arg3 deviceDescription:(id)arg4;	// IMP=0x00000000002a24a1
- (id)authenticateLongSessionV2:(id)arg1;	// IMP=0x00000000002a2206
- (id)authenticateLongSession:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 deviceIdentifier:(id)arg5 deviceDescription:(id)arg6 supportsTwoFactor:(_Bool)arg7;	// IMP=0x00000000002a1b90
- (id)authenticateOpenID:(id)arg1 consumerKey:(id)arg2 consumerSecret:(id)arg3 deviceIdentifier:(id)arg4 deviceDescription:(id)arg5 authLongSession:(_Bool)arg6 supportsTwoFactor:(_Bool)arg7;	// IMP=0x00000000002a14ea
- (id)authenticate:(id)arg1 password:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 supportsTwoFactor:(_Bool)arg5;	// IMP=0x00000000002a0fce
- (id)getBootstrapInfo:(id)arg1;	// IMP=0x00000000002a0ded
- (_Bool)checkVersion:(id)arg1 edamVersionMajor:(short)arg2 edamVersionMinor:(short)arg3;	// IMP=0x00000000002a0acd
- (id)initWithInProtocol:(id)arg1 outProtocol:(id)arg2;	// IMP=0x00000000002a0a34
- (id)initWithProtocol:(id)arg1;	// IMP=0x00000000002a0a1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

