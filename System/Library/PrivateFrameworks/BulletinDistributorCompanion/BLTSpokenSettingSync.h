//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, BLTSettingSyncServer, NSDate, NSURL;
@protocol OS_dispatch_queue;

@interface BLTSpokenSettingSync : NSObject
{
    _Bool _localGlobalSpokenSettingEnabled;	// 8 = 0x8
    _Bool _remoteGlobalSpokenSettingEnabled;	// 9 = 0x9
    NSDate *_localGlobalSpokenSettingDate;	// 16 = 0x10
    NSDate *_remoteGlobalSpokenSettingDate;	// 24 = 0x18
    unsigned long long _updatingLocalStateFromRemoteCount;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    BBSettingsGateway *_settingsGateway;	// 48 = 0x30
    BLTSettingSyncServer *_syncServer;	// 56 = 0x38
    NSURL *_remoteSettingStoreURL;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000038112
@property(retain, nonatomic) NSURL *remoteSettingStoreURL; // @synthesize remoteSettingStoreURL=_remoteSettingStoreURL;
@property(retain, nonatomic) BLTSettingSyncServer *syncServer; // @synthesize syncServer=_syncServer;
@property(retain, nonatomic) BBSettingsGateway *settingsGateway; // @synthesize settingsGateway=_settingsGateway;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long updatingLocalStateFromRemoteCount; // @synthesize updatingLocalStateFromRemoteCount=_updatingLocalStateFromRemoteCount;
@property(retain, nonatomic) NSDate *remoteGlobalSpokenSettingDate; // @synthesize remoteGlobalSpokenSettingDate=_remoteGlobalSpokenSettingDate;
@property(retain, nonatomic) NSDate *localGlobalSpokenSettingDate; // @synthesize localGlobalSpokenSettingDate=_localGlobalSpokenSettingDate;
@property(nonatomic) _Bool remoteGlobalSpokenSettingEnabled; // @synthesize remoteGlobalSpokenSettingEnabled=_remoteGlobalSpokenSettingEnabled;
@property(nonatomic) _Bool localGlobalSpokenSettingEnabled; // @synthesize localGlobalSpokenSettingEnabled=_localGlobalSpokenSettingEnabled;
- (void)_queue_synchronizeSettingsWithLocalEnabled:(_Bool)arg1;	// IMP=0x0000000000037dff
- (void)_queue_setNewLocalStateFromRemote:(_Bool)arg1;	// IMP=0x0000000000037d37
- (void)_queue_resolveState;	// IMP=0x0000000000037a95
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(id)arg2;	// IMP=0x000000000003788e
- (_Bool)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(_Bool)arg1;	// IMP=0x0000000000037741
- (void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)arg1;	// IMP=0x0000000000037644
- (void)_queue_setUpdatingLocalStateFromRemote;	// IMP=0x0000000000037627
- (_Bool)_queue_isUpdatingLocalStateFromRemote;	// IMP=0x00000000000375f7
- (_Bool)_queue_updateLocalSetting;	// IMP=0x0000000000037573
- (void)_queue_writeRemoteSetting;	// IMP=0x000000000003732d
- (void)_queue_writeLocalSetting;	// IMP=0x0000000000037286
- (void)_queue_readSettings;	// IMP=0x000000000003711a
- (id)_remoteSettingStoreURL;	// IMP=0x00000000000370d7
- (id)initWithSettingsGateway:(id)arg1 syncServer:(id)arg2;	// IMP=0x0000000000036f5e

@end

