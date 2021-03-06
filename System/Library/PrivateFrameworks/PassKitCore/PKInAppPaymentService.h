//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKXPCService;

@interface PKInAppPaymentService : NSObject
{
    PKXPCService *_remoteService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015c135
- (void)enrollPaymentPassWithUniqueIdentifier:(id)arg1 merchantSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015bef0
- (void)cardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015bcb1
- (long long)cardsAvailableForAMPWithCountryCode:(id)arg1;	// IMP=0x000000000015bbaa
- (void)cardsAvailableForAMPWithCountryCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b98b
- (void)paymentHardwareStatusWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b78a
- (id)paymentHardwareStatusWithType:(unsigned long long)arg1;	// IMP=0x000000000015b649
- (void)secureElementStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000015b451
- (_Bool)secureElementStatus:(unsigned long long *)arg1;	// IMP=0x000000000015b35c
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b04e
- (void)merchantStatusCheck:(id)arg1 merchantDomain:(id)arg2 sourceApplicationSecondaryIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000015ac2e
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)arg1 forHostIdentifier:(id)arg2 hostSceneIdentifier:(id)arg3 orientation:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000015a8e9
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015a6c4
- (void)registerPaymentListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015a481
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a46b
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;	// IMP=0x000000000015a455
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a43f
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a429
- (id)_remoteObjectProxy;	// IMP=0x000000000015a413
- (id)init;	// IMP=0x000000000015a36e

@end

