//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
    _Bool _isDetailedRequest;	// 16 = 0x10
}

+ (Class)responseClass;	// IMP=0x000000000005dfcd
- (void).cxx_destruct;	// IMP=0x000000000005e3ab
- (id)urlRequest;	// IMP=0x000000000005e210
- (id)urlString;	// IMP=0x000000000005e06f
- (id)initDetailedRequestWithAccount:(id)arg1;	// IMP=0x000000000005e04c
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000005dfde

@end

