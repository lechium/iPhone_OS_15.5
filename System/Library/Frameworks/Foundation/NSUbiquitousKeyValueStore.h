//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject
{
    id _private1;	// 8 = 0x8
    id _private2;	// 16 = 0x10
    id _private3;	// 24 = 0x18
    void *_private4;	// 32 = 0x20
    void *_reserved[3];	// 40 = 0x28
    int _daemonWakeToken;	// 64 = 0x40
}

+ (void)_appWillDeactivate;	// IMP=0x000000000021855c
+ (void)_appWillActivate;	// IMP=0x0000000000218545
+ (void)_synchronizeStoresForced:(_Bool)arg1;	// IMP=0x0000000000218374
+ (id)additionalStoreWithIdentifier:(id)arg1;	// IMP=0x00000000002182de
+ (id)defaultStore;	// IMP=0x0000000000218269
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000021ac04
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000021aaf2
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000021aaab
- (double)doubleForKey:(id)arg1;	// IMP=0x000000000021aa58
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000021aa11
- (long long)longLongForKey:(id)arg1;	// IMP=0x000000000021a937
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021a887
- (id)dataForKey:(id)arg1;	// IMP=0x000000000021a84f
- (void)setDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021a79f
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000021a767
- (void)setArray:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021a6b7
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000021a67f
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021a5cf
- (id)stringForKey:(id)arg1;	// IMP=0x000000000021a57a
- (id)_remotePreferencesSource;	// IMP=0x000000000021a570
- (unsigned long long)maximumTotalDataLength;	// IMP=0x000000000021a55a
- (unsigned long long)maximumDataLengthPerKey;	// IMP=0x000000000021a544
- (unsigned long long)maximumKeyLength;	// IMP=0x000000000021a52e
- (unsigned long long)maximumKeyCount;	// IMP=0x000000000021a518
- (void)_sendPingToDaemon;	// IMP=0x000000000021a490
- (void)_unregisterFromDaemon;	// IMP=0x000000000021a408
- (void)_registerToDaemon;	// IMP=0x000000000021a12e
- (void)_sourceDidChangePassthroughNotification:(id)arg1;	// IMP=0x000000000021a0d1
- (void)_configurationDidChange;	// IMP=0x000000000021a049
- (void)_sourceDidChange:(id)arg1;	// IMP=0x000000000021a032
- (_Bool)synchronize;	// IMP=0x0000000000219fe2
- (_Bool)_synchronizeForced:(_Bool)arg1;	// IMP=0x0000000000219fce
- (_Bool)_synchronizeForced:(_Bool)arg1 notificationQueue:(id)arg2;	// IMP=0x0000000000219b07
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000219a77
- (void)_scheduleRemoteSynchronization;	// IMP=0x00000000002199ef
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (void)registerDefaultValues:(id)arg1;	// IMP=0x0000000000219776
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000021975f
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021959d
- (void)_adjustTimerForAutosync;	// IMP=0x0000000000219542
- (void)_adjustTimer:(id)arg1;	// IMP=0x0000000000219484
- (void)_syncConcurrently;	// IMP=0x0000000000219425
- (void)_syncConcurrentlyForced:(_Bool)arg1;	// IMP=0x0000000000219158
- (_Bool)synchronizeWithSourceForced:(_Bool)arg1;	// IMP=0x000000000021913c
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000218f03
- (void)_rethrowException:(id)arg1;	// IMP=0x0000000000218eee
- (_Bool)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2;	// IMP=0x0000000000218c95
- (int)_storeChangeFromSourceChange:(int)arg1;	// IMP=0x0000000000218c81
- (void)_setHasPendingSynchronize:(_Bool)arg1;	// IMP=0x0000000000218c12
- (_Bool)_hasPendingSynchronize;	// IMP=0x0000000000218bc9
- (void)_setShouldAvoidSynchronize:(_Bool)arg1;	// IMP=0x0000000000218b5e
- (_Bool)_shouldAvoidSynchronize;	// IMP=0x0000000000218b15
- (void)dealloc;	// IMP=0x0000000000218a8e
- (id)init;	// IMP=0x0000000000218a7a
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000218a66
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;	// IMP=0x0000000000218a51
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(_Bool)arg3;	// IMP=0x0000000000218a3c
- (id)_initWithStoreIdentifier:(id)arg1 usingEndToEndEncryption:(_Bool)arg2;	// IMP=0x0000000000218a1c
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(_Bool)arg3 storeType:(long long)arg4;	// IMP=0x0000000000218570
- (void)_useSourceSyncWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002184b9
- (void)_useSourceAsyncWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000021842d
- (void)_pleaseSynchronize:(id)arg1;	// IMP=0x0000000000218315
- (id)initWithStoreIdentifier:(id)arg1 type:(long long)arg2;	// IMP=0x00000000002182ae

@end
