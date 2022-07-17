//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface ICQUsageQuotaRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

+ (void)addHeadersForPrimaryAccountToRequest:(id)arg1;	// IMP=0x000000000003819c
+ (void)addHeadersToRequest:(id)arg1 forAccount:(id)arg2;	// IMP=0x0000000000037f92
- (void).cxx_destruct;	// IMP=0x00000000000383dc
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;	// IMP=0x00000000000382e0
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 URLString:(id)arg3;	// IMP=0x0000000000038238

@end
