//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAuthenticationController-Protocol.h>

@class AKAppleIDAuthenticationContextManager, NSLock, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol AKAppleIDAuthenticationDelegate;

@interface AKAppleIDAuthenticationController : NSObject <AKAuthenticationController>
{
    NSString *_serviceID;	// 8 = 0x8
    NSXPCListenerEndpoint *_daemonXPCEndpoint;	// 16 = 0x10
    NSXPCConnection *_authenticationServiceConnection;	// 24 = 0x18
    AKAppleIDAuthenticationContextManager *_contextManager;	// 32 = 0x20
    NSLock *_connectionLock;	// 40 = 0x28
    CDUnknownBlockType _deallocHandler;	// 48 = 0x30
}

+ (id)sensitiveAuthenticationKeys;	// IMP=0x00000000000049ba
- (void).cxx_destruct;	// IMP=0x0000000000010432
@property(copy, nonatomic) CDUnknownBlockType deallocHandler; // @synthesize deallocHandler=_deallocHandler;
- (id)_authenticationServiceConnection;	// IMP=0x00000000000100cd
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000fc13
- (id)_urlBagFromCache:(_Bool)arg1 altDSID:(id)arg2 withError:(id *)arg3;	// IMP=0x000000000000f837
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f3bf
- (id)accountNamesForAltDSID:(id)arg1;	// IMP=0x000000000000f14b
- (void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ed51
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e2f3
- (void)persistMasterKeyVerifier:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000deb4
- (void)verifyMasterKey:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000da49
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d5e9
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d1b0
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000cd9f
- (_Bool)synchronizeFollowUpItemsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c9ef
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c38b
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd27
- (id)activeLoginCode:(id *)arg1;	// IMP=0x000000000000ba7e
- (_Bool)isDevicePasscodeProtected:(id *)arg1;	// IMP=0x000000000000b848
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b392
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000aedc
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ab9c
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a851
- (oneway void)performCheckInForAccountWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a37e
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a029
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009cde
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000098db
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000094ca
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009010
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000008b2b
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000872d
- (_Bool)revokeAuthorizationForApplicationWithClientID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000083cc
- (_Bool)deleteAuthorizationDatabase:(id *)arg1;	// IMP=0x00000000000080ae
- (id)fetchAuthorizedAppListWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007c82
- (id)fetchDeviceListWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000077ba
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000730b
- (void)fetchDeviceListWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006fee
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006b4d
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000066a6
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061f7
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005cc7
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;	// IMP=0x00000000000059bf
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3;	// IMP=0x00000000000056b7
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004c9b
@property(nonatomic) __weak id <AKAppleIDAuthenticationDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000004bba
- (id)initWithIdentifier:(id)arg1 daemonXPCEndpoint:(id)arg2;	// IMP=0x0000000000004aa8
- (id)initWithDaemonXPCEndpoint:(id)arg1;	// IMP=0x0000000000004a91
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000004a7d
- (id)init;	// IMP=0x0000000000004a67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
