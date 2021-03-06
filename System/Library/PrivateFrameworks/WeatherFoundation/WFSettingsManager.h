//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFUserInfoManagerDelegate-Protocol.h>

@class NSHashTable, NSString, WFRemoteAppSettings, WFUserInfoManager;
@protocol OS_dispatch_queue;

@interface WFSettingsManager : NSObject <WFUserInfoManagerDelegate>
{
    _Bool _useFallback;	// 8 = 0x8
    struct os_unfair_lock_s _settingsLock;	// 12 = 0xc
    WFRemoteAppSettings *_settings;	// 16 = 0x10
    WFUserInfoManager *_userInfoManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_requestSerialQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

+ (void)setUserIdentifier:(id)arg1;	// IMP=0x00000000000510af
+ (id)userIdentifier;	// IMP=0x0000000000050fd4
+ (id)sharedInstance;	// IMP=0x0000000000050a03
- (void).cxx_destruct;	// IMP=0x0000000000052619
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) struct os_unfair_lock_s settingsLock; // @synthesize settingsLock=_settingsLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
@property(retain, nonatomic) WFUserInfoManager *userInfoManager; // @synthesize userInfoManager=_userInfoManager;
- (void)userInfoManager:(id)arg1 didSynchronizeUserIdentifier:(id)arg2;	// IMP=0x0000000000052567
- (void)updateAssetURLHostIfNeededWithComponents:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x000000000005250a
- (_Bool)shouldReroutePermanentURLsForContainerIdentifier:(id)arg1;	// IMP=0x00000000000524a9
- (id)urlSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000005239e
- (id)containerIdentifier;	// IMP=0x00000000000522eb
- (BOOL)containerIDForContainerIdentifier:(id)arg1;	// IMP=0x0000000000052268
- (id)permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x0000000000052031
- (void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000051f24
- (void)notifyObserversOfAppConfigRefresh;	// IMP=0x0000000000051d29
- (void)fetchAppConfigurationWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000051612
- (id)debugOverrides;	// IMP=0x000000000005154e
- (unsigned long long)debugEnvironmentFromOverride:(id)arg1;	// IMP=0x00000000000514df
- (void)forceFetchAppConfiguration;	// IMP=0x0000000000051491
- (void)fetchAppConfigurationIfExpired;	// IMP=0x00000000000513f1
- (_Bool)clearConfigCacheOnLaunchIfRequested;	// IMP=0x0000000000051268
- (void)removeObserver:(id)arg1;	// IMP=0x000000000005119a
- (void)addObserver:(id)arg1;	// IMP=0x0000000000051117
@property(readonly, nonatomic) NSString *APIVersion;
@property(retain, nonatomic) WFRemoteAppSettings *settings; // @synthesize settings=_settings;
- (void)setUseFallback:(_Bool)arg1;	// IMP=0x0000000000050e2e
@property(readonly, nonatomic) _Bool useFallback; // @synthesize useFallback=_useFallback;
- (void)setupRemoteSettings;	// IMP=0x0000000000050b58
- (id)init;	// IMP=0x0000000000050a58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

