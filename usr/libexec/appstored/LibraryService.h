//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSMutableDictionary, NSString;
@protocol LibraryOpen, LibraryProgress, LibraryUninstall, OS_dispatch_queue;

@interface LibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSArray *_libraryCatalogs;	// 16 = 0x10
    id <LibraryOpen> _libraryOpen;	// 24 = 0x18
    id <LibraryProgress> _libraryProgress;	// 32 = 0x20
    id <LibraryUninstall> _libraryUninstall;	// 40 = 0x28
    NSMutableDictionary *_remoteCatalogs;	// 48 = 0x30
}

+ (id)defaultService;	// IMP=0x0020000000219803
- (void).cxx_destruct;	// IMP=0x002000000021b9c8
- (_Bool)_validatePredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000021b894
- (id)_validKeyPaths;	// IMP=0x001000000021b82f
- (void)_registerNotificationSource;	// IMP=0x001000000021b6a7
- (void)catalogUnregisteredBundleIDs:(id)arg1;	// IMP=0x001000000021b62f
- (void)catalogRefreshedBundleIDs:(id)arg1;	// IMP=0x001000000021b5b7
- (void)catalogRegisteredApps:(id)arg1;	// IMP=0x001000000021b53f
- (void)uninstallApp:(id)arg1 requestUserConfirmation:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021b3b3
- (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021b145
- (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021aed7
- (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021ac69
- (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a9fb
- (void)launchApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a881
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021a6df
- (MISSING_TYPE *)launchApp:extensionType:withReplyHandler: /* Error: Ran out of types for this method. */;	// IMP=0x001000000021a55d
- (void)openableStatusForExecutableAtPath:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a548
- (void)resumeApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a532
- (void)pauseApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a51c
- (void)cancelApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000021a506
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021a4f0
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021a487
- (void)executeQueryWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219b11
- (void)forceRefreshAllQueries;	// IMP=0x0010000000219a19
- (id)init;	// IMP=0x0010000000219858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

