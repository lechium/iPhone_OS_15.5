//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

@interface SUScriptAccountManager : NSObject
{
    NSMutableArray *_accounts;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
}

+ (void)endAccountManagerSessionForObject:(id)arg1;	// IMP=0x00000000000804b0
+ (id)beginAccountManagerSessionForObject:(id)arg1;	// IMP=0x0000000000080411
- (void)_ntsReloadAccounts;	// IMP=0x0000000000080898
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;	// IMP=0x0000000000080708
- (void)_accountsChangedNotification:(id)arg1;	// IMP=0x00000000000806ed
@property(readonly, retain) NSArray *accounts;
- (id)accountForDSID:(id)arg1;	// IMP=0x0000000000080524
- (void)dealloc;	// IMP=0x0000000000080383
- (id)init;	// IMP=0x00000000000802df

@end

