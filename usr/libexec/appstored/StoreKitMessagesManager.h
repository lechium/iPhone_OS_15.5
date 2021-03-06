//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue;

@interface StoreKitMessagesManager : NSObject
{
    StoreKitMessagesDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_showMessageQueue;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00200000002617f1
- (void).cxx_destruct;	// IMP=0x0020000000263dda
- (void)_presentEngagementTaskWithURL:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 bag:(id)arg4;	// IMP=0x00100000002639c7
- (void)addMessageForBundleID:(id)arg1 accountDSID:(id)arg2 status:(long long)arg3 allowDeveloperControl:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000002636b8
- (void)_removeRevocationsForAccountID:(id)arg1 inApp:(id)arg2;	// IMP=0x00100000002635dc
- (void)_getRevocationsForAccountID:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000263246
- (void)addRevocationsForProductIdentifiers:(id)arg1 forBundleID:(id)arg2 forAccountID:(id)arg3;	// IMP=0x0010000000262e3a
- (void)checkServerForMessagesForAccount:(id)arg1 bag:(id)arg2 bundleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000262d80
- (void)_checkServerForMessagesForAccount:(id)arg1 bag:(id)arg2 messageInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000262c7c
- (void)fetchRevocationsForOctaneWithBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000262bea
- (void)fetchRevocationsForAccount:(id)arg1 inApp:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262aa9
- (void)showMessageForOctaneWithURL:(id)arg1 inApp:(id)arg2;	// IMP=0x00100000002629e6
- (void)showMessage:(id)arg1 forAccount:(id)arg2 inApp:(id)arg3 useItmsUI:(_Bool)arg4 clientInfo:(id)arg5 bag:(id)arg6;	// IMP=0x00100000002624a5
- (void)messageURLForAccount:(id)arg1 bag:(id)arg2 messageInfo:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000262493
- (id)messageInfoForAccount:(id)arg1 inApp:(id)arg2;	// IMP=0x0010000000262132
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x00100000002619ef
- (id)init;	// IMP=0x0010000000261876

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

