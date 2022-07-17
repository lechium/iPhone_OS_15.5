//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@class LibraryQueryPlanner, NSDictionary, NSObject, NSString, ProgressCache;
@protocol LibraryCatalogObserver, OS_dispatch_queue;

@interface LaunchServicesCatalog : LSApplicationWorkspaceObserver
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <LibraryCatalogObserver> _observer;	// 16 = 0x10
    LibraryQueryPlanner *_planner;	// 24 = 0x18
    ProgressCache *_progressCache;	// 32 = 0x20
    NSDictionary *_systemAppMappingByBundleID;	// 40 = 0x28
    NSDictionary *_systemAppMappingByItemID;	// 48 = 0x30
    NSDictionary *_systemAppMappingForWatchByBundleID;	// 56 = 0x38
    NSDictionary *_systemAppMappingForWatchByItemID;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x002000000017ce2b
- (void).cxx_destruct;	// IMP=0x0020000000181d87
@property __weak id <LibraryCatalogObserver> observer; // @synthesize observer=_observer;
- (void)_handleBagInvalidatedNotification:(id)arg1;	// IMP=0x0010000000181cbf
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x0010000000181c24
- (void)_handleAppUnregisteredNotification:(id)arg1;	// IMP=0x0010000000181840
- (void)_handleAppRegisteredNotification:(id)arg1;	// IMP=0x00100000001814ba
- (id)_updateBuyParamsForBundleID:(id)arg1;	// IMP=0x001000000018133d
- (void)_refreshSystemAppMappingForWatchWithReason:(id)arg1;	// IMP=0x0010000000180cb9
- (void)_refreshSystemAppMappingWithReason:(id)arg1;	// IMP=0x0010000000180635
- (id)_createAppFromRecord:(id)arg1;	// IMP=0x0010000000180068
- (id)_appForBundleID:(id)arg1;	// IMP=0x001000000017ffd9
- (id)resultsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017fbb0
- (id)resultsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017f8d1
- (id)resultsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017f6d7
- (void)launchApp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000017f065
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000017f050
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017eb5c
- (void)executeQuery:(id)arg1 excludingBundleIDs:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000017e92b
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000017e71d
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000017e505
- (id)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017e0de
- (id)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017dcb7
- (id)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017d890
- (id)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017d469
- (id)lookupBundleIDsForDeletableSystemAppsWithError:(id *)arg1;	// IMP=0x001000000017d255
- (id)_initWithProgressCache:(id)arg1;	// IMP=0x001000000017cfd9
- (void)dealloc;	// IMP=0x001000000017ced1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
