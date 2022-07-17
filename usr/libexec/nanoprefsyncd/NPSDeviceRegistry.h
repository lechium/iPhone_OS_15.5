//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSServer, NRActiveDeviceAssertion, NRDevice, NSDate, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface NPSDeviceRegistry : NSObject
{
    _Bool _shouldRun;	// 8 = 0x8
    _Bool _hasCheckedInWithNanoRegistry;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_activeDeviceID;	// 24 = 0x18
    NRDevice *_activeDevice;	// 32 = 0x20
    NRActiveDeviceAssertion *_alreadyExistingAssertion;	// 40 = 0x28
    NSString *_pairingDataStore;	// 48 = 0x30
    NPSDomainAccessor *_domainAccessor;	// 56 = 0x38
    NSString *_perGizmoCacheDirectoryPath;	// 64 = 0x40
    NSString *_globalCacheDirectoryPath;	// 72 = 0x48
    NSString *_userDefaultsBackupDirectoryPath;	// 80 = 0x50
    NSString *_filesBackupDirectoryPath;	// 88 = 0x58
    NSString *_filesBackupMetadataIndexPath;	// 96 = 0x60
    NSString *_databasePath;	// 104 = 0x68
    NSMutableArray *_registryChangedSemaphores;	// 112 = 0x70
    NPSServer *_server;	// 120 = 0x78
}

+ (id)createDirectoryIfNeeded:(id)arg1;	// IMP=0x004000000002a515
+ (id)nrDeviceForIDSDevice:(id)arg1;	// IMP=0x001000000002a48e
- (void).cxx_destruct;	// IMP=0x002000000002a7de
@property(nonatomic) __weak NPSServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSMutableArray *registryChangedSemaphores; // @synthesize registryChangedSemaphores=_registryChangedSemaphores;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSString *filesBackupMetadataIndexPath; // @synthesize filesBackupMetadataIndexPath=_filesBackupMetadataIndexPath;
@property(retain, nonatomic) NSString *filesBackupDirectoryPath; // @synthesize filesBackupDirectoryPath=_filesBackupDirectoryPath;
@property(retain, nonatomic) NSString *userDefaultsBackupDirectoryPath; // @synthesize userDefaultsBackupDirectoryPath=_userDefaultsBackupDirectoryPath;
@property(retain, nonatomic) NSString *globalCacheDirectoryPath; // @synthesize globalCacheDirectoryPath=_globalCacheDirectoryPath;
@property(retain, nonatomic) NSString *perGizmoCacheDirectoryPath; // @synthesize perGizmoCacheDirectoryPath=_perGizmoCacheDirectoryPath;
@property(retain, nonatomic) NPSDomainAccessor *domainAccessor; // @synthesize domainAccessor=_domainAccessor;
@property(retain, nonatomic) NSString *pairingDataStore; // @synthesize pairingDataStore=_pairingDataStore;
@property(nonatomic) __weak NRActiveDeviceAssertion *alreadyExistingAssertion; // @synthesize alreadyExistingAssertion=_alreadyExistingAssertion;
@property(nonatomic) _Bool hasCheckedInWithNanoRegistry; // @synthesize hasCheckedInWithNanoRegistry=_hasCheckedInWithNanoRegistry;
@property(readonly, nonatomic) _Bool shouldRun; // @synthesize shouldRun=_shouldRun;
@property(retain, nonatomic) NRDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
@property(retain, nonatomic) NSUUID *activeDeviceID; // @synthesize activeDeviceID=_activeDeviceID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)checkForActiveDeviceChange;	// IMP=0x001000000002a194
- (void)_registryChanged:(id)arg1;	// IMP=0x0010000000029f3f
- (id)pairingDevice;	// IMP=0x0010000000029893
- (id)pairingID;	// IMP=0x0010000000029849
@property(readonly, nonatomic) NSDate *lastActiveDate;
@property(readonly, nonatomic) _Bool isAltAccountDevice;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)waitForPairedOrPairingDevice;	// IMP=0x0010000000029518
- (void)startMonitoringPairingEventsWithQueue:(id)arg1;	// IMP=0x001000000002931c
- (id)initWithNPSServer:(id)arg1;	// IMP=0x00100000000292ce

@end
