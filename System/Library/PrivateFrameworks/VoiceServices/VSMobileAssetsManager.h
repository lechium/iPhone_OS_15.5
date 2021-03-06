//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, VSTrialService;
@protocol OS_dispatch_queue;

@interface VSMobileAssetsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_assetQueryQueue;	// 8 = 0x8
    NSCache *_cachedMAVoiceSelections;	// 16 = 0x10
    NSCache *_cachedMAVoiceResources;	// 24 = 0x18
    VSTrialService *_trialService;	// 32 = 0x20
}

+ (_Bool)isVoiceAssetWellDefined:(id)arg1;	// IMP=0x00000000000107a9
+ (id)getLatestAssetFromArray:(id)arg1;	// IMP=0x00000000000105e0
+ (id)pickCorrectAssetFromLocalAssets:(id)arg1;	// IMP=0x000000000000f302
+ (id)voiceResourceFromAsset:(id)arg1;	// IMP=0x000000000000f0d3
+ (long long)typeFromBundleIdentifier:(id)arg1;	// IMP=0x000000000000f04d
+ (id)bundleIdentifierForVoiceType:(long long)arg1;	// IMP=0x000000000000f014
+ (id)downloadOptionsWithBattery:(_Bool)arg1;	// IMP=0x000000000000b28c
+ (id)queryForVoiceResourceAsset:(id)arg1 returnTypes:(long long)arg2;	// IMP=0x00000000000078a4
+ (id)queryForLanguage:(id)arg1 forType:(long long)arg2 voiceName:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;	// IMP=0x0000000000007404
+ (id)preinstallAssetsDirectory;	// IMP=0x0000000000005f4b
+ (id)sharedManager;	// IMP=0x000000000000543b
- (void).cxx_destruct;	// IMP=0x000000000001092a
@property(retain, nonatomic) VSTrialService *trialService; // @synthesize trialService=_trialService;
@property(retain, nonatomic) NSCache *cachedMAVoiceResources; // @synthesize cachedMAVoiceResources=_cachedMAVoiceResources;
@property(retain, nonatomic) NSCache *cachedMAVoiceSelections; // @synthesize cachedMAVoiceSelections=_cachedMAVoiceSelections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
- (id)voiceDataWithBundleIdentifier:(id)arg1 attributes:(id)arg2 voicePathCallback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010243
- (id)voiceDataFromAsset:(id)arg1;	// IMP=0x0000000000010097
- (id)installedLocalVoices;	// IMP=0x000000000000fcd2
- (id)_localVoiceForLanguageAndNamePath:(id)arg1;	// IMP=0x000000000000f97d
- (id)_builtInVoiceForLanguage:(id)arg1;	// IMP=0x000000000000f7b0
- (void)_purgeMobileAsset:(id)arg1;	// IMP=0x000000000000ed16
- (void)purgeAsset:(id)arg1;	// IMP=0x000000000000ec0c
- (void)_downloadAsset:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e4de
- (void)downloadCatalog:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e108
- (id)downloadCatalog:(id)arg1 options:(id)arg2;	// IMP=0x000000000000df51
- (id)_getVoiceAssetsForType:(long long)arg1 voiceName:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5 returnTypes:(long long)arg6;	// IMP=0x000000000000ded4
- (id)_getResults:(id)arg1;	// IMP=0x000000000000dbac
- (void)removeVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000da89
- (void)removeMobileAssetVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d8e9
- (void)removeTrialVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d80a
- (void)downloadVoiceResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d7f8
- (void)downloadTrialVoiceResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d440
- (void)downloadVoiceResourceCatalogWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d422
- (void)downloadVoiceResource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d38b
- (_Bool)shouldDownloadTrialResource:(id)arg1;	// IMP=0x000000000000cecf
- (void)removeVoiceAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c95c
- (void)removeTrialVoice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c7c8
- (void)cancelDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c5a0
- (void)_removeTrialVoices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c034
- (void)downloadVoiceAsset:(id)arg1 options:(id)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b971
- (id)candidateToDownloadForVoice:(id)arg1;	// IMP=0x000000000000b686
- (id)preferredDownloadForVoice:(id)arg1;	// IMP=0x000000000000b5f8
- (_Bool)shouldDownloadTrialVoice:(id)arg1;	// IMP=0x000000000000b3b4
- (void)downloadVoiceAsset:(id)arg1 useBattery:(_Bool)arg2 progressUpdateHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b318
- (id)selectVoiceForLang:(id)arg1 name:(id)arg2 type:(long long)arg3 gender:(long long)arg4 footprint:(long long)arg5;	// IMP=0x000000000000abcf
- (id)_trialVoiceWithLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;	// IMP=0x000000000000a7e9
- (id)installedVoiceResources;	// IMP=0x000000000000a5a5
- (id)installedTrialVoiceResources;	// IMP=0x000000000000a3b6
- (id)installedAssetsForType:(long long)arg1 voicename:(id)arg2 language:(id)arg3 gender:(long long)arg4 footprint:(long long)arg5;	// IMP=0x0000000000009f5d
- (id)installedTrialVoicesForType:(long long)arg1 voiceName:(id)arg2 language:(id)arg3 footprint:(long long)arg4;	// IMP=0x0000000000009d67
- (void)resetResourcesCache;	// IMP=0x0000000000009d2a
- (void)resetCache;	// IMP=0x0000000000009ced
- (void)cleanMobileAssetVoiceResourcesWithActiveLanguages:(id)arg1;	// IMP=0x00000000000095f9
- (void)cleanOldMobileAssetVoiceResources;	// IMP=0x00000000000095a6
- (id)cleanUnusedAssets;	// IMP=0x0000000000008e2e
- (id)inactiveVoiceAssets;	// IMP=0x0000000000008485
- (id)activeVoiceAssets;	// IMP=0x0000000000008287
- (id)voiceAssetsForSubscription:(id)arg1;	// IMP=0x0000000000007eda
- (id)definedVoicesForLanguage:(id)arg1 voiceName:(id)arg2 type:(long long)arg3 footprint:(long long)arg4;	// IMP=0x0000000000007a9f
- (id)selectVoiceResourceAssetForLanguage:(id)arg1;	// IMP=0x000000000000738f
- (id)_mobileAssetVoiceResourceWithLanguage:(id)arg1;	// IMP=0x0000000000006ff1
- (id)_trialVoiceResourceWithLanguage:(id)arg1;	// IMP=0x0000000000006f8d
- (id)_installedVoiceResourceAssetForLanguage:(id)arg1;	// IMP=0x0000000000006870
- (id)builtInVoices;	// IMP=0x00000000000066a5
- (id)selectPreinstalledVoiceForLanguage:(id)arg1 gender:(long long)arg2 name:(id)arg3;	// IMP=0x0000000000006655
- (id)preinstalledVoicesForLanguage:(id)arg1 gender:(long long)arg2 name:(id)arg3;	// IMP=0x000000000000629a
- (id)voiceAssetFromPreinstallMetadata:(id)arg1;	// IMP=0x00000000000060a4
- (id)preinstallAssetsMetadata;	// IMP=0x0000000000005fda
- (id)_mobileAssetVoiceForLanguage:(id)arg1 name:(id)arg2 type:(long long)arg3 gender:(long long)arg4 footprint:(long long)arg5;	// IMP=0x0000000000005490
- (id)init;	// IMP=0x000000000000532d
- (void)migrateAssetIfNeededWithAssetType:(id)arg1;	// IMP=0x0000000000005121
- (_Bool)migrateAssetsWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005037

@end

