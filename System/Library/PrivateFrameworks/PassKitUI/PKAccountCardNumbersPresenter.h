//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAccount, PKAccountService, PKPaymentPass, PKPhysicalCard, PKVirtualCard;

@interface PKAccountCardNumbersPresenter : NSObject
{
    PKVirtualCard *_virtualCard;	// 8 = 0x8
    PKPhysicalCard *_physicalCard;	// 16 = 0x10
    PKAccount *_account;	// 24 = 0x18
    PKPaymentPass *_pass;	// 32 = 0x20
    long long _context;	// 40 = 0x28
    PKAccountService *_accountService;	// 48 = 0x30
    _Bool _isLoadingVirtualCard;	// 56 = 0x38
}

+ (void)authAndDecryptWithVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ba748
- (void).cxx_destruct;	// IMP=0x00000000001ba769
@property(readonly, nonatomic) _Bool isLoadingVirtualCard; // @synthesize isLoadingVirtualCard=_isLoadingVirtualCard;
- (void)_prepareAuthForVirtualCard:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ba311
- (void)presentCardNumbersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b990e
- (id)initWithVirtualCard:(id)arg1 physicalCard:(id)arg2 account:(id)arg3 pass:(id)arg4 context:(long long)arg5;	// IMP=0x00000000001b97ec

@end

