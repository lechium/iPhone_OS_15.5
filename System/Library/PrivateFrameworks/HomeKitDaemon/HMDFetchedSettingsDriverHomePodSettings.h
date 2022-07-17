//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDFetchedSettingsDriver-Protocol.h>
#import <HomeKitDaemon/HMDHPSAccessorySettingServiceDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;
@protocol HMDFetchedSettingsDriverDelegate, HMDHPSAccessorySettingService, HMDHPSSettingsObjectFactoryProtocol, OS_dispatch_queue;

@interface HMDFetchedSettingsDriverHomePodSettings : NSObject <HMDHPSAccessorySettingServiceDelegate, HMDFetchedSettingsDriver, HMFLogging>
{
    id <HMDFetchedSettingsDriverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <HMDHPSAccessorySettingService> _service;	// 24 = 0x18
    id <HMDHPSSettingsObjectFactoryProtocol> _hmdhpsObjectFactory;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000009f1012
- (void).cxx_destruct;	// IMP=0x00000000009f06de
@property(readonly) id <HMDHPSSettingsObjectFactoryProtocol> hmdhpsObjectFactory; // @synthesize hmdhpsObjectFactory=_hmdhpsObjectFactory;
@property(readonly) id <HMDHPSAccessorySettingService> service; // @synthesize service=_service;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)serviceDidInitializeForCurrentAccessory:(id)arg1;	// IMP=0x00000000009f060a
- (void)didReconnect;	// IMP=0x00000000009f0599
- (void)didUpdateSetting:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000009f04bd
- (id)_languageValueList;	// IMP=0x00000000009f03af
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009f02fe
- (void)_writeSetting:(id)arg1 keyPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009f0103
- (void)_processReadResults:(id)arg1 availableLanguageSettingsKeyPaths:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000009efb99
- (void)_readSettingsAtKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ef96a
- (id)_transformToImmutableSetting:(id)arg1;	// IMP=0x00000000009ef218
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009eeeb9
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009eec15
- (id)_hpLanguageValueFromLanguageValue:(id)arg1;	// IMP=0x00000000009eeade
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009ee789
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ee439
- (void)startWithKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009ee427
- (id)initWithQueue:(id)arg1 settingsObjectFactory:(id)arg2;	// IMP=0x00000000009ee365

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
