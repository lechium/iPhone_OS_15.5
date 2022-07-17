//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/NSCopying-Protocol.h>

@class NSError, PKPaymentPass, PKPaymentWebService;

@interface PKSubcredentialProvisioningFlowControllerContext : NSObject <NSCopying>
{
    _Bool _shouldExitFlowOnError;	// 8 = 0x8
    long long _flowType;	// 16 = 0x10
    PKPaymentWebService *_localDeviceWebService;	// 24 = 0x18
    PKPaymentWebService *_remoteDeviceWebService;	// 32 = 0x20
    PKPaymentPass *_provisionedPass;	// 40 = 0x28
    PKPaymentPass *_provisionedRemotePass;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000eded7
@property(nonatomic) _Bool shouldExitFlowOnError; // @synthesize shouldExitFlowOnError=_shouldExitFlowOnError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PKPaymentPass *provisionedRemotePass; // @synthesize provisionedRemotePass=_provisionedRemotePass;
@property(retain, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(retain, nonatomic) PKPaymentWebService *remoteDeviceWebService; // @synthesize remoteDeviceWebService=_remoteDeviceWebService;
@property(retain, nonatomic) PKPaymentWebService *localDeviceWebService; // @synthesize localDeviceWebService=_localDeviceWebService;
@property(readonly, nonatomic) long long flowType; // @synthesize flowType=_flowType;
@property(readonly, nonatomic) long long setupContext;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000edd5b
- (id)initWithFlowType:(long long)arg1;	// IMP=0x00000000000edd35

@end
