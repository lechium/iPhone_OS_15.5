//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/DDSAssetCenterDelegate-Protocol.h>
#import <TextInputCore/TIAssetManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, TIRequestedInputModes;
@protocol OS_dispatch_queue, TIInputModePreferenceProvider;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging>
{
    NSMutableArray *_notificationTokens;	// 8 = 0x8
    NSMutableSet *_languagesWithWarmedAssets;	// 16 = 0x10
    CDUnknownBlockType _enabledInputModeIdentifiersProviderBlock;	// 24 = 0x18
    CDUnknownBlockType _preferencesProviderBlock;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSArray *_requestedInputModes_mainThreadCache;	// 48 = 0x30
    id <TIInputModePreferenceProvider> _inputModePreferenceProvider;	// 56 = 0x38
    NSArray *_currentActiveRegions;	// 64 = 0x40
    NSArray *_currentNormalizedActiveRegions;	// 72 = 0x48
    NSTimer *_didUpdateAssetsTimer;	// 80 = 0x50
    TIRequestedInputModes *_requestedInputModes;	// 88 = 0x58
}

+ (id)_regionFromAddress:(id)arg1;	// IMP=0x00000000000a96a6
+ (id)_addressFromRegion:(id)arg1;	// IMP=0x00000000000a95b1
+ (id)singletonInstanceWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9508
+ (id)sharedAssetManagerWithEnabledInputModesProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a94cb
+ (id)sharedAssetManager;	// IMP=0x00000000000a94b7
+ (void)setSharedAssetManager:(id)arg1;	// IMP=0x00000000000a9854
- (void).cxx_destruct;	// IMP=0x00000000000a6bf5
@property(readonly, nonatomic) TIRequestedInputModes *requestedInputModes; // @synthesize requestedInputModes=_requestedInputModes;
@property(retain, nonatomic) NSTimer *didUpdateAssetsTimer; // @synthesize didUpdateAssetsTimer=_didUpdateAssetsTimer;
@property(retain, nonatomic) NSArray *currentNormalizedActiveRegions; // @synthesize currentNormalizedActiveRegions=_currentNormalizedActiveRegions;
@property(retain, nonatomic) NSArray *currentActiveRegions; // @synthesize currentActiveRegions=_currentActiveRegions;
@property(readonly, nonatomic) id <TIInputModePreferenceProvider> inputModePreferenceProvider; // @synthesize inputModePreferenceProvider=_inputModePreferenceProvider;
@property(copy, nonatomic) NSArray *requestedInputModes_mainThreadCache; // @synthesize requestedInputModes_mainThreadCache=_requestedInputModes_mainThreadCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType preferencesProviderBlock; // @synthesize preferencesProviderBlock=_preferencesProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock; // @synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock;
- (void)getActiveRegionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a6abc
- (id)topActiveRegions;	// IMP=0x00000000000a6a2e
- (void)normalizedRegionsForGeoCodedAddresses:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a6768
- (void)updatedActiveRegionsWithCompletionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a65f6
- (id)updatedActiveRegions;	// IMP=0x00000000000a65c6
- (id)activeInputModeLevels;	// IMP=0x00000000000a6377
- (id)activeInputModes;	// IMP=0x00000000000a62f7
- (id)defaultEnabledInputModes;	// IMP=0x00000000000a6137
- (id)enabledInputModes;	// IMP=0x00000000000a5f16
- (id)levelsForInputMode:(id)arg1;	// IMP=0x00000000000a5ed4
- (void)didUpdateAssets;	// IMP=0x00000000000a5db5
- (void)scheduleAssetsDidChangeNotificationWithDelay:(double)arg1;	// IMP=0x00000000000a5d35
- (_Bool)inputModeHasRegions:(id)arg1;	// IMP=0x00000000000a5cd4
- (id)ddsLanguageIdentifierFromInputMode:(id)arg1;	// IMP=0x00000000000a5c6f
- (id)ddsAssertionIDFromInputMode:(id)arg1 withPotentialRegions:(id)arg2;	// IMP=0x00000000000a58f0
- (void)addAssertionWithInputMode:(id)arg1 assertionID:(id)arg2 potentialRegions:(id)arg3;	// IMP=0x00000000000a5405
- (void)updateAssertionsForInputModes:(id)arg1;	// IMP=0x00000000000a5238
- (void)appleKeyboardsPreferencesChanged:(id)arg1;	// IMP=0x00000000000a50d0
- (void)didUpdateAssetsWithType:(id)arg1;	// IMP=0x00000000000a4f9b
- (void)unregisterForNotifications;	// IMP=0x00000000000a4f11
- (void)registerForNotifications;	// IMP=0x00000000000a4e76
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4de6
- (void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a4bc5
- (void)requestAssetDownloadForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4b33
- (void)_warmAssetQueryForLanguage:(id)arg1;	// IMP=0x00000000000a4a82
- (void)_warmAssetQueriesForInputModes:(id)arg1;	// IMP=0x00000000000a4904
- (id)_ddsContentItemsFromAssets:(id)arg1 contentType:(id)arg2 filteredWithRegion:(_Bool)arg3;	// IMP=0x00000000000a4342
- (id)_ddsAssetsForLanguageIdentifier:(id)arg1 cachedOnly:(_Bool)arg2;	// IMP=0x00000000000a40cf
- (void)ddsAssetsForInputMode:(id)arg1 cachedOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3fea
- (void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a3ed6
- (id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(_Bool)arg3;	// IMP=0x00000000000a3dd4
@property(readonly, nonatomic) NSMutableSet *languagesWithWarmedAssets;
@property(readonly, nonatomic) double requestExpirationInterval;
- (void)dealloc;	// IMP=0x00000000000a3d0b
- (id)initWithRequestedInputModes:(id)arg1 inputModePreferenceProvider:(id)arg2 enabledInputModesProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a3a69
- (id)init;	// IMP=0x00000000000a3a50
- (id)initForTestingWithRequestedInputModes:(id)arg1 inputModePreferenceProvider:(id)arg2 enabledInputModesProvider:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a9842

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
