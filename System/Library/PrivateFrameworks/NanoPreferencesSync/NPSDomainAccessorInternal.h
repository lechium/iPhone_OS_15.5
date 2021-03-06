//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPreferencesSync/NPSDomainAccessorFilePresenterDelegate-Protocol.h>

@class NPSDomainAccessorFilePresenter, NSMutableDictionary, NSMutableSet, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface NPSDomainAccessorInternal : NSObject <NPSDomainAccessorFilePresenterDelegate>
{
    _Bool _nanoSettingsDirectoryExists;	// 8 = 0x8
    _Bool _hasReadFromDisk;	// 9 = 0x9
    NSUUID *_pairingID;	// 16 = 0x10
    NSString *_pairingStorePath;	// 24 = 0x18
    NSString *_domain;	// 32 = 0x20
    NSURL *_domainURL;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_externalQueue;	// 56 = 0x38
    unsigned long long _referenceCounter;	// 64 = 0x40
    NSMutableSet *_dirtyKeysForWriting;	// 72 = 0x48
    NSMutableDictionary *_map;	// 80 = 0x50
    NPSDomainAccessorFilePresenter *_filePresenter;	// 88 = 0x58
}

+ (id)writeDomain:(id)arg1 toURL:(id)arg2;	// IMP=0x000000000000b5bb
+ (id)readDomainURL:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000000b218
+ (id)copyDomainListForPairingDataStore:(id)arg1;	// IMP=0x0000000000008af0
+ (void)mergeDirtyKeys:(id)arg1 fromDictionary:(id)arg2 toDictionary:(id)arg3;	// IMP=0x0000000000008800
+ (id)cfTypeNameForCFPropertyListRef:(void *)arg1;	// IMP=0x000000000000874b
+ (_Bool)valueIsValid:(id)arg1;	// IMP=0x00000000000085ef
+ (_Bool)domainIsValid:(id)arg1;	// IMP=0x0000000000008575
+ (id)urlForDomain:(id)arg1 pairingDataStore:(id)arg2;	// IMP=0x000000000000808d
+ (void)invalidateAndReleaseUnreferencedAccessors;	// IMP=0x0000000000007e5b
+ (void)decrementInternalAccessorReferenceCount:(id)arg1;	// IMP=0x0000000000007bfe
+ (id)internalAccessorForPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;	// IMP=0x0000000000007709
+ (void)extensionWillResignActive;	// IMP=0x0000000000007578
+ (void)extensionDidBecomeActive;	// IMP=0x0000000000007513
+ (void)applicationDidEnterBackground;	// IMP=0x000000000000733f
+ (void)applicationDidResume;	// IMP=0x00000000000072da
+ (void)initialize;	// IMP=0x0000000000006e55
- (void).cxx_destruct;	// IMP=0x000000000000be05
@property(retain, nonatomic) NPSDomainAccessorFilePresenter *filePresenter; // @synthesize filePresenter=_filePresenter;
@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
@property(retain, nonatomic) NSMutableSet *dirtyKeysForWriting; // @synthesize dirtyKeysForWriting=_dirtyKeysForWriting;
@property(nonatomic) _Bool hasReadFromDisk; // @synthesize hasReadFromDisk=_hasReadFromDisk;
@property(nonatomic) _Bool nanoSettingsDirectoryExists; // @synthesize nanoSettingsDirectoryExists=_nanoSettingsDirectoryExists;
@property(nonatomic) unsigned long long referenceCounter; // @synthesize referenceCounter=_referenceCounter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *pairingStorePath; // @synthesize pairingStorePath=_pairingStorePath;
@property(retain, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
- (_Bool)requiresDeviceUnlockedSinceBoot;	// IMP=0x000000000000bc7f
- (unsigned long long)domainSize;	// IMP=0x000000000000bc24
- (void)filePresenterDidBecomeNonCurrent:(id)arg1;	// IMP=0x000000000000bb07
- (id)createNanoSettingsDirectory;	// IMP=0x000000000000afba
- (id)canSynchronizeForWritingURL:(id)arg1 readFirst:(_Bool)arg2;	// IMP=0x000000000000ad6a
- (id)canSynchronizeForReadingURL:(id)arg1;	// IMP=0x000000000000ac2b
- (id)_dictionaryRepresentation;	// IMP=0x000000000000abf0
- (id)dictionaryRepresentation;	// IMP=0x000000000000aa91
- (void)setURL:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000aa10
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000a98f
- (void)setDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000000a909
- (void)setFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x000000000000a883
- (void)setLong:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000000a802
- (void)setInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000000a781
- (id)URLForKey:(id)arg1;	// IMP=0x000000000000a71e
- (_Bool)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;	// IMP=0x000000000000a6c2
- (double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;	// IMP=0x000000000000a65a
- (float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;	// IMP=0x000000000000a5f2
- (long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;	// IMP=0x000000000000a596
- (long long)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(_Bool *)arg2;	// IMP=0x000000000000a53a
- (_Bool)boolForKey:(id)arg1;	// IMP=0x000000000000a526
- (double)doubleForKey:(id)arg1;	// IMP=0x000000000000a512
- (float)floatForKey:(id)arg1;	// IMP=0x000000000000a4fe
- (long long)longForKey:(id)arg1;	// IMP=0x000000000000a4ea
- (long long)integerForKey:(id)arg1;	// IMP=0x000000000000a4d6
- (id)stringArrayForKey:(id)arg1;	// IMP=0x000000000000a473
- (id)dataForKey:(id)arg1;	// IMP=0x000000000000a410
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000000a3ad
- (id)arrayForKey:(id)arg1;	// IMP=0x000000000000a34a
- (id)stringForKey:(id)arg1;	// IMP=0x000000000000a2e7
- (void)removeObjectForKey:(id)arg1;	// IMP=0x000000000000a2d0
- (void)_setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000a179
- (void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009d23
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000009c39
- (id)_objectForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009abf
- (void)objectForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009739
- (id)objectForKey:(id)arg1;	// IMP=0x000000000000950d
- (id)_synchronizeReadOnly:(_Bool)arg1;	// IMP=0x00000000000090ea
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008eea
- (id)synchronize;	// IMP=0x0000000000008db1
- (id)_copyKeyList;	// IMP=0x0000000000008aa4
- (id)copyKeyList;	// IMP=0x0000000000008946
- (void)dealloc;	// IMP=0x00000000000084c8
- (id)initWithPairingID:(id)arg1 pairingDataStore:(id)arg2 domain:(id)arg3;	// IMP=0x0000000000008195
- (void)_invalidatePresenter;	// IMP=0x0000000000007d9e
- (void)invalidatePresenter;	// IMP=0x0000000000007ccf

@end

