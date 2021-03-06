//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;	// 8 = 0x8
    UNSKeyedObservable *_observable;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005341f
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;	// IMP=0x0000000000053126
- (void)_queue_performMigration;	// IMP=0x0000000000052fa2
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;	// IMP=0x0000000000052e28
- (id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000000052be1
- (void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000052a8f
- (id)_queue_categoriesForBundleIdentifier:(id)arg1;	// IMP=0x0000000000052a31
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;	// IMP=0x00000000000529cc
- (void)performMigration;	// IMP=0x000000000005296b
- (void)notificationSourcesDidUninstall:(id)arg1;	// IMP=0x00000000000528c1
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000527e8
- (id)categoriesForBundleIdentifier:(id)arg1;	// IMP=0x00000000000526ab
- (id)allBundleIdentifiers;	// IMP=0x000000000005258b
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000524ad
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000523d0
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;	// IMP=0x00000000000521fa
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;	// IMP=0x0000000000052078
- (long long)_maxObjectsPerKey;	// IMP=0x000000000005206d

@end

