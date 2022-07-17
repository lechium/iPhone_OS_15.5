//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMProtoBufEncode-Protocol.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet, NSString;

@interface HMDHAPMetadata : HMFObject <HMProtoBufEncode>
{
    _Bool _incomplete;	// 8 = 0x8
    NSNumber *_version;	// 16 = 0x10
    NSNumber *_schemaVersion;	// 24 = 0x18
    NSDictionary *_rawPlist;	// 32 = 0x20
    HAPMetadata *_hapMetadata;	// 40 = 0x28
    NSSet *_hmRequiresDeviceUnlockTuples;	// 48 = 0x30
    NSDictionary *_hmAllowableSecuringWrites;	// 56 = 0x38
    NSDictionary *_hmWakeOnOperationsFilter;	// 64 = 0x40
    NSDictionary *_hmAccessoryCategories;	// 72 = 0x48
    NSSet *_hmBlacklistedServices;	// 80 = 0x50
    NSSet *_hmBlacklistedCharacteristics;	// 88 = 0x58
    NSSet *_hmBlacklistedServicesFromApp;	// 96 = 0x60
    NSSet *_hmBlacklistedCharacteristicsFromApp;	// 104 = 0x68
    NSSet *_hmNotificationAutoEnabledTuples;	// 112 = 0x70
    NSSet *_hmBulletinBoardEnabledTuples;	// 120 = 0x78
    NSSet *_hmCoalesceNotificationsTuples;	// 128 = 0x80
    NSDictionary *_assistantServiceNameHAPTypeMap;	// 136 = 0x88
    NSDictionary *_assistantServiceHAPTypeNameMap;	// 144 = 0x90
    NSDictionary *_assistantCharacteristics;	// 152 = 0x98
    NSDictionary *_assistantChrHAPTypeNameMap;	// 160 = 0xa0
    NSDictionary *_assistantUnits;	// 168 = 0xa8
}

+ (_Bool)isHomedVersionSupported:(id)arg1;	// IMP=0x000000000020c091
+ (void)resetShouldUploadToCloudAfterHomedReady;	// IMP=0x000000000020c084
+ (_Bool)shouldUploadToCloudAfterHomedReady;	// IMP=0x000000000020c078
+ (void)prepareMetadata;	// IMP=0x000000000020bca0
+ (_Bool)doesWriteRequiresOwnerPrivilegeForCharacteristicType:(id)arg1;	// IMP=0x000000000020bc13
+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;	// IMP=0x000000000020bb46
+ (id)legacyV3DataForCloud;	// IMP=0x000000000020bb23
+ (id)legacyV3DataForIDS;	// IMP=0x000000000020bb00
+ (_Bool)isServiceType:(id)arg1 compatibleWithAccessoryCategoryType:(id)arg2;	// IMP=0x000000000020ba50
+ (void)switchToMetadata:(id)arg1;	// IMP=0x000000000020ba1b
+ (void)switchToBuiltinMetadata;	// IMP=0x000000000020b9b7
+ (void)_logCurrentMetadata;	// IMP=0x000000000020b877
+ (id)getSharedInstance;	// IMP=0x000000000020b49e
+ (id)getBuiltinInstance;	// IMP=0x000000000020af0f
+ (id)metadataCache;	// IMP=0x000000000020aedf
+ (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020ad66
+ (id)initWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020aba9
- (void).cxx_destruct;	// IMP=0x0000000000208eee
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property(retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property(retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSDictionary *hmWakeOnOperationsFilter; // @synthesize hmWakeOnOperationsFilter=_hmWakeOnOperationsFilter;
@property(retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property(retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (id)protoBufObjectWithEncodingOption:(id)arg1;	// IMP=0x000000000020845f
- (id)statusHAPCharacteristicTypesForServiceType;	// IMP=0x000000000020842f
- (id)aliasedHAPServiceTypes;	// IMP=0x00000000002083ff
- (id)aliasedHAPCharacteristicTypes;	// IMP=0x00000000002083cf
- (_Bool)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;	// IMP=0x000000000020831a
- (_Bool)parseAndSetAssistantUnits:(id)arg1;	// IMP=0x0000000000207fc9
- (_Bool)parseAndSetAssistantCharacteristics:(id)arg1;	// IMP=0x0000000000207639
- (_Bool)parseAndSetAssistantServices:(id)arg1;	// IMP=0x000000000020725a
- (id)parseCharacteristicArray:(id)arg1;	// IMP=0x0000000000206f59
- (id)parseServiceArray:(id)arg1;	// IMP=0x0000000000206c58
- (void)parseAndSetHMCategories:(id)arg1;	// IMP=0x0000000000206867
- (void)parseAndSetWakeOnOperationsFilter:(id)arg1;	// IMP=0x0000000000206468
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;	// IMP=0x0000000000206076
- (id)parseMetadataTupleSetFromPlist:(id)arg1;	// IMP=0x0000000000205f45
- (_Bool)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;	// IMP=0x0000000000205cd5
- (_Bool)parseAndSetHMMetadataWithHMPlist:(id)arg1;	// IMP=0x0000000000205696
- (id)parseAndSetRawPlist:(id)arg1;	// IMP=0x00000000002053a7
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;	// IMP=0x000000000020502b
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;	// IMP=0x0000000000204ebe
- (id)mapFromAssistantUnitName:(id)arg1;	// IMP=0x0000000000204e3b
- (id)mapToAssistantUnitName:(id)arg1;	// IMP=0x0000000000204db8
- (id)mapCharacteristicValueType:(id)arg1;	// IMP=0x0000000000204d0e
- (id)characteristicValueUnit:(id)arg1;	// IMP=0x0000000000204c8b
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000204bcc
- (id)getCharacteristicTypeAlias:(id)arg1;	// IMP=0x0000000000204b49
- (id)getAliasedCharacteristicTypes:(id)arg1;	// IMP=0x000000000020491d
- (id)getServiceTypeAlias:(id)arg1;	// IMP=0x000000000020489a
- (id)getAliasedServiceType:(id)arg1;	// IMP=0x00000000002046a9
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;	// IMP=0x00000000002045c2
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;	// IMP=0x00000000002044db
- (id)mapToAssistantCharacteristicName:(id)arg1;	// IMP=0x00000000002043a1
- (id)mapToAssistantServiceSubtypeName:(id)arg1 accessoryCategory:(id)arg2;	// IMP=0x00000000002042cb
- (id)mapToAssistantServiceSubtypeName:(id)arg1;	// IMP=0x000000000020425f
- (id)mapFromAssistantServiceName:(id)arg1;	// IMP=0x00000000002041dc
- (id)mapToAssistantServiceName:(id)arg1;	// IMP=0x00000000002040f9
- (_Bool)supportsLocalization:(id)arg1;	// IMP=0x0000000000204066
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000203f59
- (id)categoryTypeFromName:(id)arg1;	// IMP=0x0000000000203d77
- (id)categoryForType:(id)arg1;	// IMP=0x0000000000203c55
- (id)categoryForIdentifier:(id)arg1;	// IMP=0x0000000000203b63
- (id)audioAccessoryCategory;	// IMP=0x0000000000203b1e
- (id)categoryForOther;	// IMP=0x0000000000203ac7
- (_Bool)shouldRefreshValueForCharacteristicWithType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000203a17
- (_Bool)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002038e8
- (_Bool)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002037b9
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;	// IMP=0x000000000020375b
- (_Bool)shouldEnableHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000203592
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;	// IMP=0x0000000000203504
- (_Bool)isSecondsDownCounterCharacteristicType:(id)arg1;	// IMP=0x00000000002034a6
- (_Bool)generateNotificationOnConfigurationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002033f6
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;	// IMP=0x0000000000203398
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;	// IMP=0x0000000000203321
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;	// IMP=0x00000000002032aa
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;	// IMP=0x0000000000203207
- (_Bool)shouldFilterServiceOfType:(id)arg1;	// IMP=0x0000000000203164
- (_Bool)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;	// IMP=0x00000000002030d6
- (_Bool)isTargetCharacteristic:(id)arg1;	// IMP=0x0000000000203078
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000202fd2
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000202f44
- (_Bool)shouldAllowToWakeSuspendedAccessoryForOperation:(long long)arg1 service:(id)arg2 characteristicType:(id)arg3 value:(id)arg4;	// IMP=0x00000000002026c5
- (_Bool)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000000202601
- (id)descriptionForCharacteristicType:(id)arg1;	// IMP=0x000000000020257e
- (id)descriptionForServiceType:(id)arg1;	// IMP=0x00000000002024fb
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000201e6f
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000201de4
- (_Bool)isStandardServiceType:(id)arg1;	// IMP=0x0000000000201d6d
- (_Bool)isStandardCharacteristicType:(id)arg1;	// IMP=0x0000000000201cf6
- (id)serviceTypeFromName:(id)arg1;	// IMP=0x0000000000201c73
- (id)serviceNameFromType:(id)arg1;	// IMP=0x0000000000201bf0
- (id)characteristicTypeFromName:(id)arg1;	// IMP=0x0000000000201b6d
- (id)characteristicNameFromType:(id)arg1;	// IMP=0x0000000000201aea
- (id)xpcData:(_Bool)arg1;	// IMP=0x0000000000201a42
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000201870

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
