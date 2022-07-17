//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PKAppletSubcredential;

@interface PKSubcredentialProvisioningTrackCredentialOperation
{
    _Bool _performingOperation;	// 8 = 0x8
    _Bool _hasTrackedCredential;	// 9 = 0x9
    _Bool _firstTransactionCompleted;	// 10 = 0xa
    PKAppletSubcredential *_subcredential;	// 16 = 0x10
    NSData *_trackingAttestation;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015de27
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;	// IMP=0x000000000015dc89
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x000000000015db10
- (void)trackCredentialWithAttestation;	// IMP=0x000000000015d6b6
- (void)performOperationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000015d46a
- (void)performOperation;	// IMP=0x000000000015d338
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000015d147

@end
