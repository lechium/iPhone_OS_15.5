//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol FTPasswordManager, IDSAppleIDRegistrationCenterMessageDelivery;

@interface IDSAppleIDRegistrationCenter : NSObject
{
    NSMutableDictionary *_queues;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    id <IDSAppleIDRegistrationCenterMessageDelivery> _messageDelivery;	// 24 = 0x18
    id <FTPasswordManager> _passwordManager;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000006424b0
- (void).cxx_destruct;	// IMP=0x002000000064b580
- (void)removeListener:(id)arg1;	// IMP=0x001000000064b4f0
- (void)addListener:(id)arg1;	// IMP=0x001000000064b430
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000064b360
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x001000000064b230
- (_Bool)authenticateRegistration:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x001000000064b0e0
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2;	// IMP=0x001000000064af90
- (_Bool)authenticateRegistration:(id)arg1 forceNewToken:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x001000000064ae30
- (_Bool)authenticateRegistration:(id)arg1 forceRenewal:(_Bool)arg2 requireSilentAuth:(_Bool)arg3;	// IMP=0x001000000064acc0
- (_Bool)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;	// IMP=0x001000000064ab10
- (_Bool)queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x001000000064a9e0
- (_Bool)_queryInitialInvitationContextForRegistration:(id)arg1;	// IMP=0x001000000064a4f0
- (_Bool)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000649f50
- (_Bool)_registrationNeedsAuthentication:(id)arg1;	// IMP=0x0010000000649e30
- (_Bool)_registrationIsAuthenticating:(id)arg1;	// IMP=0x0010000000649d90
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 forceRenewal:(_Bool)arg3 failIfNotSilent:(_Bool)arg4;	// IMP=0x0010000000649600
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000649570
- (_Bool)_sendAuthenticationRequest:(id)arg1 forceNew:(_Bool)arg2;	// IMP=0x00100000006494f0
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failIfNotSilent:(_Bool)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000006489c0
- (void)_renewTokenForRegistrationInfo:(id)arg1 forceRenewal:(_Bool)arg2 failIfNotSilent:(_Bool)arg3;	// IMP=0x0010000000647ee0
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 selfID:(id)arg3 forRegistrationInfo:(id)arg4 wasFetched:(_Bool)arg5;	// IMP=0x00100000006477e0
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000647380
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4;	// IMP=0x0010000000646f80
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000646d30
- (void)_notifyAuthenticationSuccess:(id)arg1;	// IMP=0x0010000000646580
- (void)_notifyAuthenticationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0010000000645860
- (void)_notifyAuthenticating:(id)arg1;	// IMP=0x0010000000645360
- (void)_notifyRegionValidationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0010000000644640
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(_Bool)arg5;	// IMP=0x0010000000643d20
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;	// IMP=0x0010000000643810
- (void)_removeMessageForRegistration:(id)arg1 fromQueueForKey:(id)arg2;	// IMP=0x0010000000643410
- (_Bool)_haveQueuedMessageForRegistration:(id)arg1 inQueueForKey:(id)arg2;	// IMP=0x0010000000643010
- (void)_serviceQueueForKey:(id)arg1;	// IMP=0x0010000000642b40
- (void)_setQueue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000642a00
- (id)_queueForKey:(id)arg1;	// IMP=0x00100000006428a0
- (void)dealloc;	// IMP=0x00100000006427c0
- (id)init;	// IMP=0x00100000006426e0
- (id)initWithMessageDelivery:(id)arg1 passwordManager:(id)arg2;	// IMP=0x0010000000642570

@end

