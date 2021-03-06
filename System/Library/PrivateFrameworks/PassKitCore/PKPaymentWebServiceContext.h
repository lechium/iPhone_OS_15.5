//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, PKPaymentWebServiceConfiguration, PKPaymentWebServiceRegion;

@interface PKPaymentWebServiceContext
{
    struct os_unfair_lock_s _lock_context;	// 8 = 0x8
    NSMutableDictionary *_verificationRequestsByPassUniqueID;	// 16 = 0x10
    NSDictionary *_regions;	// 24 = 0x18
    struct os_unfair_lock_s _cacheLock;	// 32 = 0x20
    NSMutableDictionary *_featureSupportedLanguageCache;	// 40 = 0x28
    _Bool _devSigned;	// 48 = 0x30
    _Bool _transactionServiceDisabled;	// 49 = 0x31
    _Bool _messageServiceDisabled;	// 50 = 0x32
    _Bool _ignoreProvisioningEnablementPercentage;	// 51 = 0x33
    long long _version;	// 56 = 0x38
    NSString *_deviceID;	// 64 = 0x40
    NSString *_secureElementID;	// 72 = 0x48
    NSString *_pushToken;	// 80 = 0x50
    NSString *_nextPushToken;	// 88 = 0x58
    NSString *_companionSerialNumber;	// 96 = 0x60
    NSDate *_registrationDate;	// 104 = 0x68
    NSDate *_configurationDate;	// 112 = 0x70
    PKPaymentWebServiceConfiguration *_configuration;	// 120 = 0x78
    NSString *_primaryRegionIdentifier;	// 128 = 0x80
    long long _consistencyCheckBackoffLevel;	// 136 = 0x88
    NSArray *_certificates;	// 144 = 0x90
    NSString *_lastUpdatedTag;	// 152 = 0x98
}

+ (void)_migrateFrom0To1:(id)arg1;	// IMP=0x000000000025ce06
+ (void)_migrateContext:(id)arg1;	// IMP=0x000000000025cdbb
+ (id)contextWithArchive:(id)arg1;	// IMP=0x000000000025a416
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000025a40e
- (void).cxx_destruct;	// IMP=0x000000000025d342
@property(copy) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy) NSArray *certificates; // @synthesize certificates=_certificates;
@property long long consistencyCheckBackoffLevel; // @synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel;
@property(copy) NSString *primaryRegionIdentifier; // @synthesize primaryRegionIdentifier=_primaryRegionIdentifier;
@property _Bool ignoreProvisioningEnablementPercentage; // @synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage;
@property _Bool messageServiceDisabled; // @synthesize messageServiceDisabled=_messageServiceDisabled;
@property _Bool transactionServiceDisabled; // @synthesize transactionServiceDisabled=_transactionServiceDisabled;
@property(retain) PKPaymentWebServiceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy) NSDate *configurationDate; // @synthesize configurationDate=_configurationDate;
@property(copy) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy) NSString *nextPushToken; // @synthesize nextPushToken=_nextPushToken;
@property(copy) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property long long version; // @synthesize version=_version;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1 mainLanguageBundle:(id)arg2;	// IMP=0x000000000025c9ba
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1 mainLanguageBundle:(id)arg2;	// IMP=0x000000000025c792
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1;	// IMP=0x000000000025c508
- (double)_contextProvisioningEnablementValue;	// IMP=0x000000000025c46c
- (id)betaPaymentNetworksForRegion:(id)arg1;	// IMP=0x000000000025c0ce
- (_Bool)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)arg1;	// IMP=0x000000000025bf6c
- (_Bool)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2;	// IMP=0x000000000025bd51
- (_Bool)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;	// IMP=0x000000000025bb99
- (id)_regionWithPeerPaymentServiceURL;	// IMP=0x000000000025b995
@property(readonly, nonatomic) _Bool hasPeerPaymentAccount;
@property(readonly, nonatomic) NSURL *peerPaymentServiceURL;
- (id)accountServicePushTopics;	// IMP=0x000000000025b7d5
- (id)applyServicePushTopics;	// IMP=0x000000000025b6a9
- (id)notificationPushTopics;	// IMP=0x000000000025b439
- (id)TSMURLStringByPushTopic;	// IMP=0x000000000025b297
- (id)TSMPushTopics;	// IMP=0x000000000025b170
- (void)atomicallyUpdateEveryRegion:(CDUnknownBlockType)arg1;	// IMP=0x000000000025af07
- (void)atomicallyUpdateRegionWithIdentifier:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000025adc0
- (void)atomicallyUpdatePrimaryRegion:(CDUnknownBlockType)arg1;	// IMP=0x000000000025ac93
@property(readonly) __weak PKPaymentWebServiceRegion *primaryRegion;
- (id)regionForIdentifier:(id)arg1;	// IMP=0x000000000025abc1
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;	// IMP=0x000000000025aaaf
- (id)verificationRequestRecordForUniqueID:(id)arg1;	// IMP=0x000000000025aa3b
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;	// IMP=0x000000000025a8ff
- (void)_localizationUpdated;	// IMP=0x000000000025a8bf
- (id)debugDescription;	// IMP=0x000000000025a5b1
@property(retain) NSDictionary *regions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025a084
- (void)dealloc;	// IMP=0x000000000025a002
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000259ad9
- (id)init;	// IMP=0x00000000002599f6

@end

