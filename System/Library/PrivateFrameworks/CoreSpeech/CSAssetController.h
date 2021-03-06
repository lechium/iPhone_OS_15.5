//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEventMonitorDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSAssetController : NSObject <CSEventMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetsMigrationQueue;	// 16 = 0x10
    NSDictionary *_csAssetsDictionary;	// 24 = 0x18
    NSMutableDictionary *_observers;	// 32 = 0x20
}

+ (id)getAssetTypeStringForType:(unsigned long long)arg1;	// IMP=0x0000000000064c7d
+ (id)sharedController;	// IMP=0x0000000000064c28
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;	// IMP=0x0000000000069967
+ (id)getSpeakerRecognitionAssetTypeString;	// IMP=0x000000000006995a
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;	// IMP=0x000000000006994f
+ (id)getAdBlockerAssetTypeString;	// IMP=0x0000000000069942
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;	// IMP=0x0000000000069937
+ (id)getLanguageDetectorAssetTypeString;	// IMP=0x000000000006992a
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;	// IMP=0x00000000000698fc
+ (id)getEndpointAssetTypeString;	// IMP=0x00000000000698c9
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;	// IMP=0x0000000000069875
+ (id)getVoiceTriggerAssetTypeString;	// IMP=0x000000000006980c
+ (void)addKeyValuePairForQuery:(id *)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0000000000069674
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;	// IMP=0x0000000000069301
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x00000000000692de
- (void).cxx_destruct;	// IMP=0x00000000000692a0
@property(retain, nonatomic) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *csAssetsDictionary; // @synthesize csAssetsDictionary=_csAssetsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetsMigrationQueue; // @synthesize assetsMigrationQueue=_assetsMigrationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;	// IMP=0x000000000006922e
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0000000000069067
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;	// IMP=0x0000000000068e2d
- (void)_startDownloadingAsset:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000068991
- (void)_downloadAsset:(id)arg1 withComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068691
- (id)_defaultDownloadOptions;	// IMP=0x000000000006863b
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000067c45
- (_Bool)_isRetryRecommendedWithResult:(long long)arg1;	// IMP=0x0000000000067c18
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(CDUnknownBlockType)arg2;	// IMP=0x00000000000679b8
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 query:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006760f
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000674ef
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(_Bool)arg2;	// IMP=0x000000000006721d
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;	// IMP=0x0000000000067206
- (_Bool)_isReadyToUse;	// IMP=0x00000000000671bb
- (void)_runAssetQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000066e7d
- (id)_assetQueryForAssetType:(unsigned long long)arg1;	// IMP=0x0000000000066d21
- (id)_findLatestInstalledAsset:(id)arg1;	// IMP=0x0000000000066a5d
- (void)_installedAssetOfType:(unsigned long long)arg1 query:(id)arg2 withLanguage:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000666c6
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066632
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x0000000000066385
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066147
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;	// IMP=0x0000000000065f85
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000065e62
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x0000000000065dc8
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000006594f
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000657a3
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00000000000652fd
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;	// IMP=0x00000000000651c8
- (void)_cleanUpMobileAssetV1Directory;	// IMP=0x000000000006508b
- (id)init;	// IMP=0x0000000000064d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

