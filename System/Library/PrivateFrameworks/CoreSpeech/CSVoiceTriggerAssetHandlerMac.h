//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/CSFirstUnlockMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSTrialAssetDownloadMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h>

@class CSAsset, CSAssetManager, CSFirstUnlockMonitor, CSLanguageCodeUpdateMonitor, CSTrialAssetDownloadMonitor, CSTrialAssetManager, CSVoiceTriggerAssetDownloadMonitor, NSMutableDictionary, NSString;

@interface CSVoiceTriggerAssetHandlerMac <CSVoiceTriggerAssetDownloadMonitorDelegate, CSFirstUnlockMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSTrialAssetDownloadMonitorDelegate>
{
    CSAsset *_cachedAsset;	// 8 = 0x8
    NSMutableDictionary *_cachedEndpointAssets;	// 16 = 0x10
    CSVoiceTriggerAssetDownloadMonitor *_voiceTriggerAssetDownloadMonitor;	// 24 = 0x18
    CSLanguageCodeUpdateMonitor *_languageCodeUpdateMonitor;	// 32 = 0x20
    CSFirstUnlockMonitor *_firstUnlockMonitor;	// 40 = 0x28
    CSTrialAssetDownloadMonitor *_trialAssetDownloadMonitor;	// 48 = 0x30
    CSAssetManager *_assetManager;	// 56 = 0x38
    CSTrialAssetManager *_trialAssetManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000074ea4
@property(retain, nonatomic) CSTrialAssetManager *trialAssetManager; // @synthesize trialAssetManager=_trialAssetManager;
@property(retain, nonatomic) CSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) CSTrialAssetDownloadMonitor *trialAssetDownloadMonitor; // @synthesize trialAssetDownloadMonitor=_trialAssetDownloadMonitor;
@property(retain, nonatomic) CSFirstUnlockMonitor *firstUnlockMonitor; // @synthesize firstUnlockMonitor=_firstUnlockMonitor;
@property(retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // @synthesize languageCodeUpdateMonitor=_languageCodeUpdateMonitor;
@property(retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor; // @synthesize voiceTriggerAssetDownloadMonitor=_voiceTriggerAssetDownloadMonitor;
@property(retain) NSMutableDictionary *cachedEndpointAssets; // @synthesize cachedEndpointAssets=_cachedEndpointAssets;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(_Bool)arg2 assetType:(unsigned long long)arg3;	// IMP=0x0000000000074c9f
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(_Bool)arg2;	// IMP=0x0000000000074be4
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0000000000074b1b
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;	// IMP=0x0000000000074a76
- (void)_checkNewAssetAvailablityForEndpoint;	// IMP=0x00000000000744e4
- (void)_checkNewAssetAvailablity;	// IMP=0x00000000000741eb
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073cc2
- (void)_getVoiceTriggerAssetFromAssetManager:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073c3f
- (void)getVoiceTriggerAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073c17
- (void)_handleEndpointVoiceTriggerAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000739d0
- (void)_handleVoiceTriggerAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007385f
- (void)start;	// IMP=0x00000000000737e8
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)arg1 languageCodeUpdateMonitor:(id)arg2 firstUnlockMonitor:(id)arg3 trialAssetDownloadMonitor:(id)arg4 assetManager:(id)arg5 trialAssetManager:(id)arg6;	// IMP=0x000000000007350f
- (id)init;	// IMP=0x00000000000734e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

