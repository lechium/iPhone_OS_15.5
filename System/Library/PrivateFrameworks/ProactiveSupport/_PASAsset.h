//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASAssetProtocol-Protocol.h>

@class NSDictionary, NSString, _PASLock, _PASNotificationTracker;
@protocol OS_dispatch_queue;

@interface _PASAsset : NSObject <_PASAssetProtocol>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSDictionary *_requiredMobileAssetProperties;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    int _installNotificationToken;	// 32 = 0x20
    int _metadataNotificationToken;	// 36 = 0x24
    _PASNotificationTracker *_updateNotificationTracker;	// 40 = 0x28
    _PASLock *_lock;	// 48 = 0x30
    unsigned long long _compatibilityVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002fed3
@property(readonly, nonatomic) unsigned long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
- (void)callAssetUpdateHandlers;	// IMP=0x000000000002fe2f
- (void)clearOverrides;	// IMP=0x000000000002fe12
- (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;	// IMP=0x000000000002fd05
- (void)invokeWithBundleOverride:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fc0a
- (id)bundlePath;	// IMP=0x000000000002fb33
- (void)setBundlePath:(id)arg1;	// IMP=0x000000000002fa87
- (void)_issueUpdateNotificationsWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f8f7
- (_Bool)_updateAssetMetadataUsingQueryResults:(id)arg1;	// IMP=0x000000000002f71d
- (void)_updateAssetMetadata;	// IMP=0x000000000002f48d
- (id)pathsForResourcesWithNames:(id)arg1;	// IMP=0x000000000002f479
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long *)arg2;	// IMP=0x000000000002f0a4
- (id)pathForResourceWithNameAndExtension:(id)arg1;	// IMP=0x000000000002f090
- (id)pathForResourceWithNameAndExtension:(id)arg1 assetVersion:(unsigned long long *)arg2;	// IMP=0x000000000002ef41
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;	// IMP=0x000000000002ef2c
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long *)arg3;	// IMP=0x000000000002ed8b
- (_Bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;	// IMP=0x000000000002ed6c
- (_Bool)deregisterUpdateHandlerWithToken:(id)arg1;	// IMP=0x000000000002ed4d
- (id)registerUpdateHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ec7f
- (void)_loadDefaultBundleVersionWithGuardedData:(id)arg1;	// IMP=0x000000000002e73e
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
- (id)_assetDescription;	// IMP=0x000000000002e54e
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (void)dealloc;	// IMP=0x000000000002e42a
- (id)init;	// IMP=0x000000000002e424
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(_Bool)arg6;	// IMP=0x000000000002dda3
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(_Bool)arg5;	// IMP=0x000000000002d6a7
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;	// IMP=0x000000000002d685

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
