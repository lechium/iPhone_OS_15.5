//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/AWDHMDSettingsControllerProtocol-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDSetting, HMSettingValue, NSArray, NSCoder, NSString;
@protocol HMDSettingTransaction;

@protocol HMDSettingsControllerProtocol <HMFObject, AWDHMDSettingsControllerProtocol>
@property(readonly) NSArray *allObjectIdentifiers;
- (void)updateWithValue:(HMSettingValue *)arg1 onSetting:(HMDSetting *)arg2 completion:(void (^)(NSError *))arg3;
- (HMDSetting *)settingForKeyPath:(NSString *)arg1;
- (void)loadWithModels:(NSArray *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
- (NSArray *)modelsToMakeSettings;
- (id <HMDSettingTransaction>)migrateSettingsTransactionWithTransaction:(id <HMDSettingTransaction>)arg1 error:(id *)arg2;
- (void)configure;
@end

