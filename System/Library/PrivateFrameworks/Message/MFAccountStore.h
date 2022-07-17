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

+ (_Bool)_shouldUpdateAccountsInPlace;	// IMP=0x00000000000ae7f9
+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(_Bool)arg3;	// IMP=0x00000000000ae70c
+ (id)sharedAccountStore;	// IMP=0x00000000000ad91b
- (void).cxx_destruct;	// IMP=0x00000000000af307
- (void)_accountsStoreChanged:(id)arg1;	// IMP=0x00000000000af214
- (void)removePersistentAccountWithAccount:(id)arg1;	// IMP=0x00000000000aeeac
- (void)savePersistentAccountWithAccount:(id)arg1;	// IMP=0x00000000000ae8e9
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(_Bool)arg2;	// IMP=0x00000000000ae50c
- (id)existingAccountWithPersistentAccount:(id)arg1;	// IMP=0x00000000000ae4e5
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000adccb
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000adbbe
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;	// IMP=0x00000000000adad7
- (void)setPersistentStore:(id)arg1;	// IMP=0x00000000000ad9a7
@property(readonly) ACAccountStore *persistentStore;
- (void)dealloc;	// IMP=0x00000000000ad8a9
- (id)init;	// IMP=0x00000000000ad7f2

@end
