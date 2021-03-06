//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface PKTransactionReceiptAuthorizationResponse
{
    NSString *_authorizationToken;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    NSString *_conversationIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000043c88d
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(readonly, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *authorizationToken; // @synthesize authorizationToken=_authorizationToken;
- (id)initWithData:(id)arg1;	// IMP=0x000000000043c63a

@end

