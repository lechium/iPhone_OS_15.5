//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKPeerPaymentTermsAcceptanceResponse
{
    NSString *_termsIdentifier;	// 8 = 0x8
    NSURL *_termsURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003649c3
@property(readonly, copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;
@property(readonly, copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
- (_Bool)hasTermsData;	// IMP=0x0000000000364961
- (id)initWithData:(id)arg1;	// IMP=0x000000000036484c

@end
