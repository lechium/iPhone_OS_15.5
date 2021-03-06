//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPRemoteDeviceSecretValidatorProtocol-Protocol.h>

@protocol CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRecoveryKeySecretValidatorProxyImpl : NSObject <CDPRemoteDeviceSecretValidatorProtocol>
{
    id <CDPRemoteDeviceSecretValidatorProtocol> _validator;	// 8 = 0x8
    unsigned long long supportedEscapeOfferMask;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000008138
@property(nonatomic) unsigned long long supportedEscapeOfferMask; // @synthesize supportedEscapeOfferMask;
- (void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000080e3
- (void)validateRecoveryKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007efd
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ebc
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007e7b
- (void)resetAccountCDPState;	// IMP=0x0000000000007e3a
- (void)cancelValidationWithError:(id)arg1;	// IMP=0x0000000000007df9
- (void)cancelApproveFromAnotherDevice;	// IMP=0x0000000000007db8
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007d77
- (id)initWithRemoteObject:(id)arg1;	// IMP=0x0000000000007d0c

@end

