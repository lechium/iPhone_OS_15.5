//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKPaymentWebServiceCompanionTargetDeviceDelegate-Protocol.h>

@class NPKCompanionAgentConnection, NPKPaymentWebServiceCompanionTargetDevice, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate>
{
    PKPaymentWebService *_webService;	// 8 = 0x8
    NPKPaymentWebServiceCompanionTargetDevice *_targetDevice;	// 16 = 0x10
    PKPeerPaymentWebService *_peerPaymentWebService;	// 24 = 0x18
    PKPeerPaymentAccount *_peerPaymentAccount;	// 32 = 0x20
    NPKCompanionAgentConnection *_companionAgentConnection;	// 40 = 0x28
    NPKPeerPaymentWebServiceCompanionTargetDevice *_peerPaymentTargetDevice;	// 48 = 0x30
}

+ (id)sharedWebServiceProvider;	// IMP=0x000000000013f264
- (void).cxx_destruct;	// IMP=0x0000000000141cf4
@property(retain, nonatomic) NPKPeerPaymentWebServiceCompanionTargetDevice *peerPaymentTargetDevice; // @synthesize peerPaymentTargetDevice=_peerPaymentTargetDevice;
@property(retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection; // @synthesize companionAgentConnection=_companionAgentConnection;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKPeerPaymentWebService *peerPaymentWebService; // @synthesize peerPaymentWebService=_peerPaymentWebService;
@property(retain, nonatomic) NPKPaymentWebServiceCompanionTargetDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;	// IMP=0x0000000000141c06
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;	// IMP=0x0000000000141b80
- (void)checkCompanionPeerPaymentRegistrationState;	// IMP=0x0000000000141ae9
- (void)handleDownloadAllPaymentPasses;	// IMP=0x0000000000141a52
- (void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2;	// IMP=0x00000000001419bb
- (void)setNewAuthRandom:(CDUnknownBlockType)arg1;	// IMP=0x00000000001418bd
- (void)sendPaymentOptionsDefaultsToWatch;	// IMP=0x0000000000141826
- (void)showPaymentSetupForAppDisplayName:(id)arg1;	// IMP=0x000000000014178f
- (void)sendWebServiceContextToWatch;	// IMP=0x000000000014167e
- (void)handlePaymentWebServiceContextFromWatch:(id)arg1;	// IMP=0x0000000000141524
- (void)archiveWebServiceBackgroundContext:(id)arg1;	// IMP=0x000000000014148d
- (void)archiveWebServiceContext:(id)arg1;	// IMP=0x0000000000141365
- (void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x000000000014128d
- (void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1;	// IMP=0x00000000001411b5
- (void)handleCredentialsUpdate:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x00000000001410b6
- (void)handleBalanceReminderUpdate:(id)arg1 balance:(id)arg2 forUniqueID:(id)arg3;	// IMP=0x0000000000140f97
- (void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x0000000000140e98
- (void)handleRemoveTransactionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000140dc0
- (void)handleAppletState:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x0000000000140cc1
- (void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3;	// IMP=0x0000000000140ba2
- (void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(_Bool)arg3;	// IMP=0x0000000000140aca
- (void)handlePushToken:(id)arg1;	// IMP=0x000000000014092d
- (void)_deviceFailedToPair:(id)arg1;	// IMP=0x00000000001407bd
- (id)_peerPaymentAccount;	// IMP=0x00000000001406da
- (id)_peerPaymentWebServiceContext;	// IMP=0x00000000001405e9
- (id)_webServiceContext;	// IMP=0x00000000001404bb
- (void)loadWebService;	// IMP=0x0000000000140015
- (void)dealloc;	// IMP=0x000000000013ff6e
- (id)init;	// IMP=0x000000000013f2b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
