//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse
{
    NSString *_deviceIdentifier;	// 8 = 0x8
    NSString *_peerPaymentServicesPushTopic;	// 16 = 0x10
    NSURL *_peerPaymentServiceURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000362307
@property(readonly, copy, nonatomic) NSURL *peerPaymentServiceURL; // @synthesize peerPaymentServiceURL=_peerPaymentServiceURL;
@property(readonly, copy, nonatomic) NSString *peerPaymentServicesPushTopic; // @synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (id)initWithData:(id)arg1;	// IMP=0x00000000003620b6

@end
