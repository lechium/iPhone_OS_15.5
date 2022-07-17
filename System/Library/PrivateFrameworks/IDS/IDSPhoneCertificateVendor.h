//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer, NSString;
@protocol OS_dispatch_queue;

@interface IDSPhoneCertificateVendor : NSObject <IDSDaemonListenerProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSPhoneCertificateVendor *_strongSelfReference;	// 16 = 0x10
    IDSDaemonRequestTimer *_daemonRequestTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000046f09
@property(readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer; // @synthesize daemonRequestTimer=_daemonRequestTimer;
@property(retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference; // @synthesize strongSelfReference=_strongSelfReference;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046c71
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046a08
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004679f
- (long long)_subscriptionSourceForContext:(id)arg1;	// IMP=0x0000000000046778
- (long long)_subscriptionSourceFromIntegerValue:(long long)arg1;	// IMP=0x000000000004675e
- (void)didRequestCarrierTokenString:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000046432
- (void)didGeneratePhoneAuthenticationSignature:(id)arg1 nonce:(id)arg2 certificates:(id)arg3 labelIDs:(id)arg4 inputData:(id)arg5 requestUUID:(id)arg6 error:(id)arg7;	// IMP=0x0000000000045eaf
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000045b68
- (id)_clientErrorForCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000045a7f
- (id)_debugDescriptionForErrorCode:(long long)arg1;	// IMP=0x00000000000459fd
- (_Bool)_isPhoneCertificateVendorSupported;	// IMP=0x00000000000459f5
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;	// IMP=0x0000000000045992
- (void)requestCarrierTokenWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045666
- (void)generatePhoneAuthenticationSignatureOverData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000453cc
- (void)authenticatePhoneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045163
- (void)dealloc;	// IMP=0x00000000000450c8
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000044faa
- (void)didFetchPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000047db9
- (void)didSetPhoneUserSubscriptionSource:(id)arg1 requestUUID:(id)arg2 error:(id)arg3;	// IMP=0x0000000000047ace
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047865
- (long long)currentPhoneUserSubscriptionSourceWithError:(id *)arg1;	// IMP=0x00000000000475ab
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047342
- (void)setCurrentPhoneUserSubscriptionSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000470a0
- (void)requestCarrierTokenWithMessageBody:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046f3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
