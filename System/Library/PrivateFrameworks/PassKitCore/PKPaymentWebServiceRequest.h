//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PKPaymentWebServiceTargetDeviceProtocol;

@interface PKPaymentWebServiceRequest
{
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002b5a60
- (void).cxx_destruct;	// IMP=0x00000000002b618b
@property(retain, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
- (id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5;	// IMP=0x00000000002b6042
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;	// IMP=0x00000000002b6013
- (id)_murlRequestWithURL:(id)arg1;	// IMP=0x00000000002b5e89
- (void)_signRequestData:(id)arg1 forRequest:(id)arg2 webService:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002b5b36
- (void)_signRequest:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002b5a68

@end

