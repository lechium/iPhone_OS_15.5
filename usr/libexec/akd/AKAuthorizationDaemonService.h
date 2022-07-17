//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationEndorserRapportDiscovery, AKAuthorizationRapportClient, AKAuthorizationSessionManager, AKClient, AKCredentialRequestContext, NSArray, NSString;
@protocol AKAuthorizationClientProtocol, AKAuthorizationDaemonServiceDelegate;

@interface AKAuthorizationDaemonService : NSObject
{
    struct os_unfair_lock_s _authorizationRealUserLock;	// 8 = 0x8
    id <AKAuthorizationClientProtocol> _clientProxy;	// 16 = 0x10
    AKAuthorizationSessionManager *_authSessionManager;	// 24 = 0x18
    NSString *_realUserVerificationResults;	// 32 = 0x20
    AKClient *_client;	// 40 = 0x28
    id <AKAuthorizationDaemonServiceDelegate> _delegate;	// 48 = 0x30
    AKAuthorizationRapportClient *_rapportClient;	// 56 = 0x38
    AKAuthorizationEndorserRapportDiscovery *_endorserRapportDiscovery;	// 64 = 0x40
    NSArray *_credentials;	// 72 = 0x48
    AKCredentialRequestContext *_originalRequestContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000007dceb
@property(retain, nonatomic) AKCredentialRequestContext *originalRequestContext; // @synthesize originalRequestContext=_originalRequestContext;
@property(retain) NSArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) AKAuthorizationEndorserRapportDiscovery *endorserRapportDiscovery; // @synthesize endorserRapportDiscovery=_endorserRapportDiscovery;
- (void);	// IMP=0x001000000007dc81
@property(retain, nonatomic) AKAuthorizationRapportClient *rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <AKAuthorizationDaemonServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (void)cancelAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d84b
- (void)continueAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007cd2f
- (void)beginAuthorizationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c521
- (void)_processUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007c001
- (void)_validateAndProcessUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007bd37
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007bb17
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b962
- (id)authorizationContextWithRequest:(id)arg1;	// IMP=0x001000000007b4af
- (id)authorizationContextHelperWithContext:(id)arg1;	// IMP=0x001000000007b442
- (void)_completeAuthorizationWithServerResponse:(id)arg1 userResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007aec4
- (void)_performSRPAuthorizationForUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ac82
- (void)_safePerformSRPWithUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007aaee
- (void)_requestUserAuthorizationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a77f
- (void)_fetchCredentialsForAssociatedDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a637
- (void)_fetchSafariCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a4b6
- (void)_setupLoginChoicesForPresentationContext:(id)arg1;	// IMP=0x0010000000079fb4
- (long long)_credentialStateForRequestContext:(id)arg1;	// IMP=0x0010000000079f3e
- (void)_checkCredentialForRequestContext:(id)arg1;	// IMP=0x0010000000079c60
- (void)_getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000079396
- (void)storeAuthorization:(id)arg1 forProxiedRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000079160
- (_Bool)_shouldStartSatoriVerificationForRequestContext:(id)arg1;	// IMP=0x00100000000790f4
- (void)_initiateRapportAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078f42
- (void)_initiateAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078dd1
- (_Bool)_verifyEntitlementsForRequest:(id)arg1;	// IMP=0x0010000000078a14
- (void)_performSilentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007871e
- (void)_performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078625
- (void)_determineUIAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078556
- (void)_createAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000078045
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077cd8
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077a5b
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077779
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077657
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000077470
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077062
- (void)revokeUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076d9a
- (void)fetchAppleOwnedDomainSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076d06
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076c72
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000076af9
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076a66
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000076869
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000075e2d
- (void)dealloc;	// IMP=0x0010000000075dc1
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000075cdf
- (id)init;	// IMP=0x0010000000075cb4

@end
