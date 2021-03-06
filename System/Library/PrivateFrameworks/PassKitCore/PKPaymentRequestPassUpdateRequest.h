//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPassUpgradeRequest, PKPaymentPass;

@interface PKPaymentRequestPassUpdateRequest
{
    PKPaymentPass *_pass;	// 16 = 0x10
    PKPassUpgradeRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c1118
@property(readonly, nonatomic) PKPassUpgradeRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;	// IMP=0x00000000002c0ee3
- (id)initWithPaymentPass:(id)arg1 updateRequest:(id)arg2;	// IMP=0x00000000002c0e41

@end

