//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol FPAppRegistryDelegate, OS_dispatch_queue;

@interface FPAppRegistry : NSObject
{
    NSMutableDictionary *_appMetadataByBundleID;	// 8 = 0x8
    NSMutableDictionary *_appMetadataByDisplayName;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
    int _updateAppsNotification;	// 40 = 0x28
    id <FPAppRegistryDelegate> _delegate;	// 48 = 0x30
}

+ (_Bool)keepInSync;	// IMP=0x00000000000e375b
+ (void)setDaemonConnectionOverride:(id)arg1;	// IMP=0x00000000000e2ee7
+ (id)daemonConnectionOverride;	// IMP=0x00000000000e2ed6
+ (void)setSharedRegistry:(id)arg1;	// IMP=0x00000000000e2e76
+ (id)sharedRegistry;	// IMP=0x00000000000e2de9
- (void).cxx_destruct;	// IMP=0x00000000000e4a4b
@property(nonatomic) __weak id <FPAppRegistryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_bundleIDForHomonymOfApp:(id)arg1;	// IMP=0x00000000000e490e
- (int)_registerForNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e488e
- (_Bool)_isAppLibrary:(id)arg1 appMetadata:(id *)arg2 userVisible:(_Bool *)arg3;	// IMP=0x00000000000e446a
- (void)_removeAppsWithBundleIDs:(id)arg1;	// IMP=0x00000000000e4009
- (void)removeAppsWithBundleIDs:(id)arg1;	// IMP=0x00000000000e3f5f
- (void)_addApps:(id)arg1;	// IMP=0x00000000000e3a27
- (void)addApps:(id)arg1;	// IMP=0x00000000000e397d
- (void)_setApps:(id)arg1;	// IMP=0x00000000000e3763
- (id)appForDisplayName:(id)arg1;	// IMP=0x00000000000e360c
- (id)appForBundleID:(id)arg1;	// IMP=0x00000000000e34bd
@property(readonly, copy, nonatomic) NSArray *listOfMonitoredApps;
- (_Bool)isAppLibrary:(id)arg1;	// IMP=0x00000000000e3386
- (id)promoteItemToAppLibraryIfNeeded:(id)arg1;	// IMP=0x00000000000e31d7
- (void)updateAppList;	// IMP=0x00000000000e2f70
- (void)dealloc;	// IMP=0x00000000000e2d6f
- (id)init;	// IMP=0x00000000000e2ace

@end

