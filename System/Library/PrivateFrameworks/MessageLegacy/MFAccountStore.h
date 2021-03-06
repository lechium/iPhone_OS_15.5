//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface MFAccountStore : NSObject
{
    struct os_unfair_lock_s _accountStoreLock;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

+ (_Bool)_shouldUpdateAccountsInPlace;	// IMP=0x0000000000044a41
+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(_Bool)arg3;	// IMP=0x00000000000449a5
+ (id)sharedAccountStore;	// IMP=0x0000000000044498
- (void)_accountsStoreChanged:(id)arg1;	// IMP=0x0000000000044f11
- (void)removePersistentAccountWithAccount:(id)arg1;	// IMP=0x0000000000044d6d
- (void)savePersistentAccountWithAccount:(id)arg1;	// IMP=0x0000000000044ab8
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(_Bool)arg2;	// IMP=0x0000000000044901
- (id)existingAccountWithPersistentAccount:(id)arg1;	// IMP=0x00000000000448ea
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004469c
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0000000000044659
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000445e1
- (void)setPersistentStore:(id)arg1;	// IMP=0x0000000000044514
@property(readonly) ACAccountStore *persistentStore;
- (void)dealloc;	// IMP=0x0000000000044458
- (id)init;	// IMP=0x00000000000443ee

@end

