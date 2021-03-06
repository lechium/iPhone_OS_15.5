//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDFetchedSettingsDriver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString, NSUserDefaults;
@protocol HMDFetchedSettingsDriverDelegate, OS_dispatch_queue;

@interface HMDFetchedSettingsDriverPreferences : NSObject <HMFLogging, HMDFetchedSettingsDriver>
{
    id <HMDFetchedSettingsDriverDelegate> delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
    NSString *_prefix;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000007ed591
- (void).cxx_destruct;	// IMP=0x00000000007ed555
@property __weak id <HMDFetchedSettingsDriverDelegate> delegate; // @synthesize delegate;
- (void)languageValueListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ed517
- (void)updateSettingWithKeyPath:(id)arg1 languageSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ed3de
- (void)updateSettingWithKeyPath:(id)arg1 integerSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ecdf3
- (void)updateSettingWithKeyPath:(id)arg1 boolSettingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007ec91b
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007ebf11
- (void)startWithKeyPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007ebeff
- (id)initWithQueue:(id)arg1 userDefaults:(id)arg2 prefix:(id)arg3 defaultValues:(id)arg4;	// IMP=0x00000000007eb804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

