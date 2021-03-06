//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarPersistence/AVTAvatarStoreServer-Protocol.h>
#import <AvatarPersistence/AVTAvatarsDaemonServerDelegate-Protocol.h>
#import <AvatarPersistence/AVTCoreDataCloudKitMirroringHandlerDelegate-Protocol.h>
#import <AvatarPersistence/AVTPushNotificationsSupportDelegate-Protocol.h>

@class AVTCoreEnvironment, AVTStickerChangeObserver, NSXPCStoreServer;
@protocol AVTAvatarRecordChangeTracker, AVTAvatarsDaemonServer, AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandler, AVTCoreDataPersistentStoreLocalConfiguration, AVTCoreDataRemoteChangesObserver, AVTCoreDataStoreMaintenance, AVTPBackendImageHandlingDelegate, AVTPushNotificationsSupport, AVTStoreBackend, AVTSyncSchedulingAuthority, AVTUILogger, OS_dispatch_queue;

@interface AVTCoreDataStoreServer : NSObject <AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer>
{
    _Bool _setupCompleted;	// 8 = 0x8
    id <AVTPBackendImageHandlingDelegate> _imageHandlingDelegate;	// 16 = 0x10
    id <AVTStoreBackend> _backend;	// 24 = 0x18
    AVTCoreEnvironment *_environment;	// 32 = 0x20
    id <AVTUILogger> _logger;	// 40 = 0x28
    id <AVTBlockScheduler> _blockScheduler;	// 48 = 0x30
    id <AVTCoreDataPersistentStoreLocalConfiguration> _configuration;	// 56 = 0x38
    CDUnknownBlockType _migratorProvider;	// 64 = 0x40
    NSXPCStoreServer *_server;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 80 = 0x50
    id <AVTPushNotificationsSupport> _pushNotificationsSupport;	// 88 = 0x58
    id <AVTCoreDataCloudKitMirroringHandler> _mirroringHandler;	// 96 = 0x60
    id <AVTSyncSchedulingAuthority> _schedulingAuthority;	// 104 = 0x68
    id <AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;	// 112 = 0x70
    AVTStickerChangeObserver *_stickerChangeObserver;	// 120 = 0x78
    id <AVTAvatarRecordChangeTracker> _changeTracker;	// 128 = 0x80
    id <AVTAvatarsDaemonServer> _daemonServer;	// 136 = 0x88
    id <AVTCoreDataStoreMaintenance> _storeMaintenance;	// 144 = 0x90
    CDUnknownBlockType _migrationActivityCompletion;	// 152 = 0x98
    CDUnknownBlockType _userRequestedBackupActivityCompletion;	// 160 = 0xa0
}

+ (_Bool)resetSyncShouldPreserveContentForReason:(unsigned long long)arg1;	// IMP=0x00000000000309f8
- (void).cxx_destruct;	// IMP=0x000000000003111b
@property(copy, nonatomic) CDUnknownBlockType userRequestedBackupActivityCompletion; // @synthesize userRequestedBackupActivityCompletion=_userRequestedBackupActivityCompletion;
@property(copy, nonatomic) CDUnknownBlockType migrationActivityCompletion; // @synthesize migrationActivityCompletion=_migrationActivityCompletion;
@property(nonatomic) _Bool setupCompleted; // @synthesize setupCompleted=_setupCompleted;
@property(readonly, nonatomic) id <AVTCoreDataStoreMaintenance> storeMaintenance; // @synthesize storeMaintenance=_storeMaintenance;
@property(readonly, nonatomic) id <AVTAvatarsDaemonServer> daemonServer; // @synthesize daemonServer=_daemonServer;
@property(readonly, nonatomic) id <AVTAvatarRecordChangeTracker> changeTracker; // @synthesize changeTracker=_changeTracker;
@property(readonly, nonatomic) AVTStickerChangeObserver *stickerChangeObserver; // @synthesize stickerChangeObserver=_stickerChangeObserver;
@property(readonly, nonatomic) id <AVTCoreDataRemoteChangesObserver> remoteChangesObserver; // @synthesize remoteChangesObserver=_remoteChangesObserver;
@property(readonly, nonatomic) id <AVTSyncSchedulingAuthority> schedulingAuthority; // @synthesize schedulingAuthority=_schedulingAuthority;
@property(readonly, nonatomic) id <AVTCoreDataCloudKitMirroringHandler> mirroringHandler; // @synthesize mirroringHandler=_mirroringHandler;
@property(readonly, nonatomic) id <AVTPushNotificationsSupport> pushNotificationsSupport; // @synthesize pushNotificationsSupport=_pushNotificationsSupport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSXPCStoreServer *server; // @synthesize server=_server;
@property(readonly, copy, nonatomic) CDUnknownBlockType migratorProvider; // @synthesize migratorProvider=_migratorProvider;
@property(readonly, nonatomic) id <AVTCoreDataPersistentStoreLocalConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <AVTBlockScheduler> blockScheduler; // @synthesize blockScheduler=_blockScheduler;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTCoreEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTStoreBackend> backend; // @synthesize backend=_backend;
@property(readonly, nonatomic) id <AVTPBackendImageHandlingDelegate> imageHandlingDelegate; // @synthesize imageHandlingDelegate=_imageHandlingDelegate;
- (void)clientDidCheckInForServer:(id)arg1;	// IMP=0x0000000000030e99
- (void)mirroringHandler:(id)arg1 didResetSyncWithReason:(unsigned long long)arg2;	// IMP=0x0000000000030b0c
- (void)mirroringHandler:(id)arg1 willResetSyncWithReason:(unsigned long long)arg2;	// IMP=0x0000000000030a16
- (void)didReceivePushNotification:(id)arg1;	// IMP=0x000000000003085a
- (void)importSetupUserDataIfNeeded;	// IMP=0x0000000000030854
- (void)deleteStickerRecents;	// IMP=0x0000000000030747
- (void)scheduleUpdateThumbnails;	// IMP=0x0000000000030617
- (void)updateThumbnails;	// IMP=0x0000000000030572
- (void)scheduleExportWithManagedObjectContext:(id)arg1 discretionary:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000303c3
- (_Bool)processInternalSettingsChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ff0c
- (void)scheduleImportDiscretionary:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002fc13
- (void)migrate;	// IMP=0x000000000002f974
- (void)scheduleMigrationThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f833
- (void)scheduleImportExportIfRequiredWithPostImportHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f41d
- (void)setupThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000002efec
- (void)scheduleSetupThen:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ee34
- (void)completeUserRequestedBackupActivityIfNeeded;	// IMP=0x000000000002ed2a
- (void)completeMigrationActivityIfNeeded;	// IMP=0x000000000002ec20
- (void)startListening;	// IMP=0x000000000002e0ab
- (void)setImageHandlingDelegate:(id)arg1;	// IMP=0x000000000002e04a
- (id)initWithLocalBackend:(id)arg1 configuration:(id)arg2 migratorProvider:(CDUnknownBlockType)arg3 pushSupport:(id)arg4 mirroringHandler:(id)arg5 schedulingAuthority:(id)arg6 remoteChangesObserver:(id)arg7 stickerChangeObserver:(id)arg8 changeTracker:(id)arg9 daemonServer:(id)arg10 storeMaintenance:(id)arg11 backgroundQueue:(id)arg12 environment:(id)arg13 imageHandlingDelegate:(id)arg14;	// IMP=0x000000000002dd64
- (id)initWithEnvironment:(id)arg1 imageHandlingDelegate:(id)arg2;	// IMP=0x000000000002d853

@end

