//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/DNDModeConfigurationServiceListener-Protocol.h>

@class ATXGenericFileBasedCache, DNDModeConfigurationService, NSString;

@interface ATXConfiguredModeService : NSObject <DNDModeConfigurationServiceListener>
{
    DNDModeConfigurationService *_service;	// 8 = 0x8
    ATXGenericFileBasedCache *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000112fa
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;	// IMP=0x0000000000011243
- (void)_updateUserDefaultsForAnyNewlyAddedModesWithDNDConfigs:(id)arg1;	// IMP=0x0000000000010fca
- (id)_modeConfigurationsReturningError:(id *)arg1;	// IMP=0x0000000000010ecb
- (void)_checkIfConfigurationOfCurrentModeChangedWithDNDConfigs:(id)arg1;	// IMP=0x0000000000010aed
- (id)_DNDModeConfigurationForActivityWithUUID:(id)arg1 dndConfigs:(id)arg2;	// IMP=0x000000000001087c
- (id)DNDModeConfigurationForActivityWithUUID:(id)arg1;	// IMP=0x00000000000107f4
- (_Bool)_isActivityWithUUIDConfigured:(id)arg1 activityType:(unsigned long long *)arg2 allowsSmartEntry:(_Bool *)arg3 userModeName:(id *)arg4 dndConfigs:(id)arg5;	// IMP=0x00000000000106e0
- (_Bool)isActivityWithUUIDConfigured:(id)arg1 activityType:(unsigned long long *)arg2 allowsSmartEntry:(_Bool *)arg3 userModeName:(id *)arg4;	// IMP=0x00000000000105d0
- (_Bool)isActivityWithUUIDConfigured:(id)arg1;	// IMP=0x00000000000105b6
- (_Bool)_isActivityTypeConfigured:(unsigned long long)arg1 uuid:(id *)arg2 allowsSmartEntry:(_Bool *)arg3 userModeName:(id *)arg4 dndConfigs:(id)arg5;	// IMP=0x000000000001014a
- (_Bool)isActivityTypeConfigured:(unsigned long long)arg1 uuid:(id *)arg2 allowsSmartEntry:(_Bool *)arg3 userModeName:(id *)arg4;	// IMP=0x00000000000100ce
- (_Bool)isActivityTypeConfigured:(unsigned long long)arg1;	// IMP=0x00000000000100b4
- (id)dndModeConfigurationDictionaryFromNSData:(id)arg1;	// IMP=0x000000000000feea
- (id)_nsDataFromDNDModeConfigurationDictionary:(id)arg1;	// IMP=0x000000000000fe21
- (id)_retrieveCachedDNDModeConfigurationDictionary;	// IMP=0x000000000000fdae
- (void)_cacheDNDModeConfigurationDictionary:(id)arg1;	// IMP=0x000000000000fc9b
- (id)_cacheAndReturnDNDModeConfigurationDictionary;	// IMP=0x000000000000fc29
- (void)_createServiceIfNeeded;	// IMP=0x000000000000faef
- (id)init;	// IMP=0x000000000000fa1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

