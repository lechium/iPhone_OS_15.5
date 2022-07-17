//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUbiquitousKeyValueStore, WeatherCloudMigrator;
@protocol WeatherCloudPersistenceDelegate;

@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence>
{
    id <WeatherCloudPersistenceDelegate> _delegate;	// 8 = 0x8
    WeatherCloudMigrator *_migrator;	// 16 = 0x10
    NSUbiquitousKeyValueStore *_activeCloudStore;	// 24 = 0x18
    NSUbiquitousKeyValueStore *_nonEncryptedStore;	// 32 = 0x20
    NSUbiquitousKeyValueStore *_encryptedStore;	// 40 = 0x28
}

+ (id)cloudPersistenceWithDelegate:(id)arg1;	// IMP=0x000000000002b5b1
+ (_Bool)processIsWhitelistedForSync;	// IMP=0x000000000002b3fb
- (void).cxx_destruct;	// IMP=0x000000000002c65b
@property(retain, nonatomic) NSUbiquitousKeyValueStore *encryptedStore; // @synthesize encryptedStore=_encryptedStore;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *nonEncryptedStore; // @synthesize nonEncryptedStore=_nonEncryptedStore;
@property(retain, nonatomic) NSUbiquitousKeyValueStore *activeCloudStore; // @synthesize activeCloudStore=_activeCloudStore;
@property(readonly, nonatomic) WeatherCloudMigrator *migrator; // @synthesize migrator=_migrator;
@property __weak id <WeatherCloudPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encryptedStoreChanged:(id)arg1;	// IMP=0x000000000002c437
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c3c5
- (_Bool)synchronize;	// IMP=0x000000000002c30f
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000002c297
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000002c220
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000002c1ae
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000002c128
- (id)objectForKey:(id)arg1;	// IMP=0x000000000002c0a5
- (id)stringForKey:(id)arg1;	// IMP=0x000000000002c022
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000002bf9f
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000002bf1c
- (_Bool)isInitialSyncNotification:(id)arg1;	// IMP=0x000000000002be9d
- (void)cloudCitiesChangedExternally:(id)arg1;	// IMP=0x000000000002bcab
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000002b6bb
- (id)init;	// IMP=0x000000000002b6a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
