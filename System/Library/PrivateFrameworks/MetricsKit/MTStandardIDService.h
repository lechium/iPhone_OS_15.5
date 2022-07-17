//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTIDService-Protocol.h>

@class MTIDCache, MTInterprocessChangeNotifier, MTPromise, NSMutableDictionary, NSNumber, NSString;
@protocol MTIDSecretStore;

@interface MTStandardIDService : NSObject <MTIDService>
{
    NSNumber *_dsId;	// 8 = 0x8
    NSString *_applicationBundleIdentifierOverrideForNetworkAttribution;	// 16 = 0x10
    MTPromise *_configPromise;	// 24 = 0x18
    MTIDCache *_cache;	// 32 = 0x20
    MTInterprocessChangeNotifier *_accountChanged;	// 40 = 0x28
    id <MTIDSecretStore> _secretStore;	// 48 = 0x30
    NSNumber *_defaultDSID;	// 56 = 0x38
    NSMutableDictionary *_associatedObjects;	// 64 = 0x40
}

+ (_Bool)isTinkerPaired;	// IMP=0x0000000000015e01
+ (id)writeDebugData:(id)arg1 toFileWithNameFormat:(id)arg2;	// IMP=0x0000000000014dd8
+ (void)triggerInterprocessChangeNotifier:(id)arg1;	// IMP=0x0000000000014dbf
+ (void)registerInterprocessChangeNotifier:(id)arg1;	// IMP=0x0000000000014b21
+ (id)localCachePath;	// IMP=0x0000000000011d2e
+ (void)setLocalCachePath:(id)arg1;	// IMP=0x0000000000011cb8
- (void).cxx_destruct;	// IMP=0x0000000000015ecb
@property(retain, nonatomic) NSMutableDictionary *associatedObjects; // @synthesize associatedObjects=_associatedObjects;
@property(retain, nonatomic) NSNumber *defaultDSID; // @synthesize defaultDSID=_defaultDSID;
@property(retain, nonatomic) id <MTIDSecretStore> secretStore; // @synthesize secretStore=_secretStore;
@property(retain, nonatomic) MTInterprocessChangeNotifier *accountChanged; // @synthesize accountChanged=_accountChanged;
@property(retain, nonatomic) MTIDCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MTPromise *configPromise; // @synthesize configPromise=_configPromise;
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // @synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution;
@property(retain, nonatomic) NSNumber *dsId; // @synthesize dsId=_dsId;
- (void)_getConfig;	// IMP=0x0000000000015c9d
- (void)_getIDs;	// IMP=0x0000000000015584
- (void)_getSecrets;	// IMP=0x000000000001542a
- (void)_resetIDs;	// IMP=0x0000000000015232
- (void)_clearLocalData;	// IMP=0x0000000000015154
- (id)generateIDInfo:(id)arg1 secret:(id)arg2 dsId:(id)arg3 correlationIDs:(id)arg4;	// IMP=0x0000000000014471
- (id)IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;	// IMP=0x0000000000013801
- (id)IDsForNamespaces:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;	// IMP=0x0000000000013682
- (id)IDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3;	// IMP=0x000000000001332c
- (id)filledOptions:(id)arg1;	// IMP=0x0000000000012fbf
- (void)performMaintenanceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012b96
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012b13
- (id)resetIDForTopics:(id)arg1 options:(id)arg2;	// IMP=0x0000000000012439
- (id)IDFieldsForTopic:(id)arg1 options:(id)arg2;	// IMP=0x0000000000011ecc
- (void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011dfb
- (void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011d85
- (void)handleApplicationStateChange:(id)arg1;	// IMP=0x0000000000011c20
- (void)handleResetNotification:(id)arg1;	// IMP=0x0000000000011b61
- (void)handleRecordNotification;	// IMP=0x0000000000011ae1
- (void)handleAccountNotification;	// IMP=0x0000000000011a5b
- (void)dealloc;	// IMP=0x0000000000011a1a
- (void)maybeSubscribeToDarwinNotifications;	// IMP=0x000000000001180d
- (void)setConfig:(id)arg1;	// IMP=0x00000000000117ba
- (id)initWithConfigPromise:(id)arg1;	// IMP=0x00000000000112d2
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x0000000000011278
- (id)init;	// IMP=0x000000000001125f
- (id)initWithAMSBag:(id)arg1;	// IMP=0x000000000002e9e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
