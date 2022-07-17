//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, SBKRequest;

@interface SBKTransaction : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSURL *_requestURL;	// 16 = 0x10
    SBKRequest *_activeRequest;	// 24 = 0x18
    NSMutableDictionary *_userInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000254df
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) SBKRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)newRequest;	// IMP=0x0000000000025407
- (id)clampsKey;	// IMP=0x000000000002538a
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000025310
- (id)transactionContextForKey:(id)arg1;	// IMP=0x0000000000025284
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000251eb
- (id)init;	// IMP=0x00000000000251d5
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;	// IMP=0x0000000000025122

@end
