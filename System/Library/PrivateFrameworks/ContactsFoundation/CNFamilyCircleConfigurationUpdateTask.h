//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccountStore, CNResult, NSArray;
@protocol CNDelegateAccountSink, CNDelegateAccountSource;

@interface CNFamilyCircleConfigurationUpdateTask
{
    id <CNDelegateAccountSource> _accountSource;	// 24 = 0x18
    id <CNDelegateAccountSink> _accountSink;	// 32 = 0x20
    ACAccountStore *_accountStore;	// 40 = 0x28
    NSArray *_delegateAccounts;	// 48 = 0x30
    CNResult *_result;	// 56 = 0x38
}

+ (id)os_log;	// IMP=0x000000000003678a
- (void).cxx_destruct;	// IMP=0x0000000000037186
@property(retain, nonatomic) CNResult *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSArray *delegateAccounts; // @synthesize delegateAccounts=_delegateAccounts;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) id <CNDelegateAccountSink> accountSink; // @synthesize accountSink=_accountSink;
@property(readonly, nonatomic) id <CNDelegateAccountSource> accountSource; // @synthesize accountSource=_accountSource;
- (void)updateDelegateAccounts;	// IMP=0x000000000003700a
- (void)loadDefaultSinkIfNecessary;	// IMP=0x0000000000036d36
- (void)loadDelegateAccountsFromSource;	// IMP=0x0000000000036ccb
- (void)loadDefaultSourceIfNecessary;	// IMP=0x0000000000036b6e
- (id)run:(id *)arg1;	// IMP=0x0000000000036a6d
- (id)description;	// IMP=0x00000000000369bb
- (id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3;	// IMP=0x0000000000036861
- (id)initWithName:(id)arg1;	// IMP=0x000000000003682a
- (id)init;	// IMP=0x00000000000367e6

@end

