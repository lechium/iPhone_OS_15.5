//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, NSURL;

@interface PKTransactionReceiptRequest
{
    NSURL *_receiptProviderURL;	// 16 = 0x10
    NSString *_authorizationToken;	// 24 = 0x18
    NSData *_signature;	// 32 = 0x20
    NSString *_receiptIdentifier;	// 40 = 0x28
    NSString *_conversationIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002c8f0c
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) NSString *receiptIdentifier; // @synthesize receiptIdentifier=_receiptIdentifier;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *authorizationToken; // @synthesize authorizationToken=_authorizationToken;
@property(readonly, nonatomic) NSURL *receiptProviderURL; // @synthesize receiptProviderURL=_receiptProviderURL;
- (id)_urlRequest;	// IMP=0x00000000002c8c30
- (id)initWithReceiptProviderURL:(id)arg1 authorizationToken:(id)arg2 signature:(id)arg3 receiptIdentifier:(id)arg4;	// IMP=0x00000000002c8b0c

@end
