//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKPeerPaymentWebService;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>
{
    PKPeerPaymentWebService *_peerPaymentWebService;	// 8 = 0x8
}

+ (void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bd3d3
- (void).cxx_destruct;	// IMP=0x00000000000bebfc
@property(nonatomic) __weak PKPeerPaymentWebService *peerPaymentWebService; // @synthesize peerPaymentWebService=_peerPaymentWebService;
- (void)setPreferences:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be617
- (id)preferences;	// IMP=0x00000000000be4ac
- (id)appleAccountInformation;	// IMP=0x00000000000be455
- (void)_handleAccountChanged:(id)arg1;	// IMP=0x00000000000be3f5
- (id)deviceClass;	// IMP=0x00000000000be3e8
- (id)deviceRegion;	// IMP=0x00000000000be3de
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000be1e4
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be150
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be0bc
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000be028
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bdf94
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bdf00
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bdb09
- (void)setUserHasDisabledPeerPayment:(_Bool)arg1;	// IMP=0x00000000000bda3a
- (_Bool)userHasDisabledPeerPayment;	// IMP=0x00000000000bd9ee
- (id)secureElementIdentifiers;	// IMP=0x00000000000bd9e4
- (id)bridgedClientInfo;	// IMP=0x00000000000bd9cb
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd937
- (id)account;	// IMP=0x00000000000bd8e0
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bd8c7
- (void)dealloc;	// IMP=0x00000000000bd852
- (id)init;	// IMP=0x00000000000bd7be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
