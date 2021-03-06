//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADServiceConnection, AFInstanceContext, NSArray, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_group;

@interface ADBundleService
{
    NSDictionary *_domains;	// 8 = 0x8
    NSDictionary *_syncKeys;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSString *_clearsDomainObjectsClassName;	// 32 = 0x20
    NSString *_maintenanceClassName;	// 40 = 0x28
    NSArray *_lockRestrictedCommands;	// 48 = 0x30
    _Bool _connectionNeedsContextCleared;	// 56 = 0x38
    ADServiceConnection *_connection;	// 64 = 0x40
    NSObject<OS_dispatch_group> *_group;	// 72 = 0x48
    AFInstanceContext *_instanceContext;	// 80 = 0x50
}

+ (id)requiredInfoDictionaryKeys;	// IMP=0x00200000002328cc
- (void).cxx_destruct;	// IMP=0x002000000023500d
- (void)serviceConnectionTimedoutForSync;	// IMP=0x0010000000234fc1
- (void)reload;	// IMP=0x0010000000234f6d
- (void)runMaintenanceWorkWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000234ef4
- (void)getInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000234d6e
- (void)resetExternalResources;	// IMP=0x0010000000234b63
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x0010000000234b5d
- (void)fetchSyncSnapshotForInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000234acb
- (void)beginSyncForInfo:(id)arg1 chunkHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000234947
- (void)clearDomainObjects;	// IMP=0x0010000000234829
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002345f1
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000002345b4
- (id)syncKeys;	// IMP=0x0010000000234597
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000234503
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000002344a8
- (id)domains;	// IMP=0x001000000023448b
- (id)handle;	// IMP=0x0010000000234476
- (id)initWithBundlePath:(id)arg1 infoDictionary:(id)arg2 instanceContext:(id)arg3;	// IMP=0x00100000002342d8
- (CDUnknownBlockType)_informCommandCenter:(id)arg1 willPerformLaunchApp:(id)arg2;	// IMP=0x001000000023411d
- (id)_connection;	// IMP=0x0010000000233fcf
- (_Bool)_isValidRestrictionsDomainInfo:(id)arg1;	// IMP=0x0010000000233cad
- (void)_parseInfoDictionary:(id)arg1;	// IMP=0x00100000002329d5
- (id)lockRestrictedCommands;	// IMP=0x00100000002328b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

