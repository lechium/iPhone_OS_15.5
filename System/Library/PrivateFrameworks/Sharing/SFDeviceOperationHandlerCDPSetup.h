//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/CDPStateUIProvider-Protocol.h>

@class CDPContext, CDPStateController, NSString, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider>
{
    CDPContext *_cdpContext;	// 8 = 0x8
    CDPStateController *_cdpController;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
    _Bool _failIfCDPNotEnabled;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    SFSession *_sfSession;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000a3cae
@property(retain, nonatomic) SFSession *sfSession; // @synthesize sfSession=_sfSession;
@property(nonatomic) _Bool failIfCDPNotEnabled; // @synthesize failIfCDPNotEnabled=_failIfCDPNotEnabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)cdpRecoveryFlowContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 validator:(id)arg3;	// IMP=0x00000000000a3c60
- (void)cdpContext:(id)arg1 promptForBeneficiaryAccessKeyWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3c5a
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(_Bool)arg3 validator:(id)arg4;	// IMP=0x00000000000a3b49
- (void)cdpContext:(id)arg1 promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3a59
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a3969
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(_Bool)arg2 numericLength:(id)arg3 isRandom:(_Bool)arg4 validator:(id)arg5;	// IMP=0x00000000000a3857
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a37c2
- (void)_handleCDPSetupRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a31e4
- (void)invalidate;	// IMP=0x00000000000a305a
- (void)_activate;	// IMP=0x00000000000a2f4b
- (void)activate;	// IMP=0x00000000000a2eea
- (id)init;	// IMP=0x00000000000a2e81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
