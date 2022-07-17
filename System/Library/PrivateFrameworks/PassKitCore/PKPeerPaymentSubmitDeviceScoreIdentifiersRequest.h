//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest
{
    NSString *_paymentIdentifier;	// 16 = 0x10
    NSUUID *_requestDeviceScoreIdentifier;	// 24 = 0x18
    NSUUID *_sendDeviceScoreIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000403457
@property(copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property(copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x0000000000403028

@end
