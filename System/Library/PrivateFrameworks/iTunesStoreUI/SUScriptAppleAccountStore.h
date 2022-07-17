//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore
{
    ACAccountStore *_accountStore;	// 72 = 0x48
    NSString *_effectiveBundleID;	// 80 = 0x50
}

+ (void)initialize;	// IMP=0x0000000000115338
+ (id)webScriptNameForSelector:(SEL)arg1;	// IMP=0x000000000011526f
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x000000000011521b
- (id)scriptAttributeKeys;	// IMP=0x00000000001152d5
- (id)attributeKeys;	// IMP=0x00000000001152c3
- (id)_accountStore;	// IMP=0x0000000000115162
- (void)_accountStoreChangeNotification:(id)arg1;	// IMP=0x0000000000115147
@property(readonly) long long renewResultRenewed;
@property(readonly) long long renewResultRejected;
@property(readonly) long long renewResultFailed;
@property(readonly) NSString *accountTypeIdentifierTwitter;
@property(readonly) NSString *accountTypeIdentifierSinaWeibo;
@property(readonly) NSString *accountTypeIdentifierFacebook;
@property(readonly) NSString *accessPurposeWrite;
@property(readonly) NSString *accessPurposeReadWrite;
@property(readonly) NSString *accessPurposeRead;
- (void)setEffectiveBundleID:(id)arg1;	// IMP=0x0000000000114fc9
@property(readonly) NSString *effectiveBundleID;
@property(readonly) SUScriptAppleAccount *primaryAppleAccount;
@property(readonly) SUScriptAppleAccount *activeStoreAccount;
- (id)_className;	// IMP=0x0000000000114e80
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;	// IMP=0x0000000000114b26
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;	// IMP=0x00000000001147df
- (id)makeClientAccessInfoWithAccountType:(id)arg1;	// IMP=0x000000000011474e
- (id)accountTypeWithIdentifier:(id)arg1;	// IMP=0x0000000000114697
- (id)accountsWithAccountType:(id)arg1;	// IMP=0x000000000011446d
- (void)dealloc;	// IMP=0x00000000001143cf
- (id)init;	// IMP=0x0000000000114327

@end
