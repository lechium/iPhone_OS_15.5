//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationHost : NSObject
{
    SOConfiguration *_configuration;	// 8 = 0x8
    SOConfigurationVersion *_configurationVersion;	// 16 = 0x10
    NSMutableArray *_removedProfiles;	// 24 = 0x18
}

+ (id)_loadProfilesFromURL:(id)arg1;	// IMP=0x0000000000017016
+ (id)_loadProfilesFromDict:(id)arg1;	// IMP=0x0000000000016c3d
+ (id)defaultManager;	// IMP=0x0000000000015141
- (void).cxx_destruct;	// IMP=0x000000000001a00d
- (id)_defaultConfigurationFile;	// IMP=0x0000000000019f9a
- (id)_defaultConfigurationPath;	// IMP=0x0000000000019ee0
- (id)_stringWithReason:(long long)arg1;	// IMP=0x0000000000019eb5
- (void)_checkNewVersion;	// IMP=0x0000000000019e73
- (_Bool)_isConfigFileAvailable;	// IMP=0x0000000000019d76
- (void)_extensionsLoaded:(id)arg1;	// IMP=0x0000000000019a86
- (_Bool)_saveConfigToFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019698
- (_Bool)_initDataVaultIfNeededWithError:(id *)arg1;	// IMP=0x0000000000019136
- (id)_checkAssociatedDomainForProfiles:(id)arg1;	// IMP=0x00000000000182ec
- (id)_checkExtensionsExistenceForProfiles:(id)arg1;	// IMP=0x0000000000017fa7
- (void)_configurationLoadedWithReason:(long long)arg1;	// IMP=0x0000000000017d38
- (void)_reloadConfigWithReason:(long long)arg1;	// IMP=0x000000000001728a
- (void)_startKeyBagObserverForReloadingConfiguration;	// IMP=0x0000000000017284
- (void)_loadConfigForFirstTime;	// IMP=0x0000000000017158
@property(readonly, nonatomic) long long configVersion;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;	// IMP=0x00000000000166b5
- (id)realms;	// IMP=0x00000000000165ba
- (id)profilesWithExtensionBundleIdentifier:(id)arg1;	// IMP=0x00000000000162a5
- (id)configurationForClientWithError:(id *)arg1;	// IMP=0x0000000000015fd2
- (id)removedProfileForExtensionBundleIdentifier:(id)arg1;	// IMP=0x0000000000015cae
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;	// IMP=0x00000000000159a7
- (_Bool)saveConfigurationData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000156a1
- (_Bool)saveConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000153f7
- (void)dealloc;	// IMP=0x0000000000015382
- (id)init;	// IMP=0x00000000000151f1

@end
