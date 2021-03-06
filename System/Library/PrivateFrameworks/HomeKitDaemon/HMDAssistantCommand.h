//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAHACommand.h>

#import <HomeKitDaemon/AFServiceCommand-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAssistantCommandHelper, HMDAssistantGather, HMDHome, HMDHomeManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging>
{
    _Bool _completionHandlerCalled;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    HMDAssistantGather *_gather;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSArray *_homeKitObjects;	// 40 = 0x28
    long long _numberOfHomes;	// 48 = 0x30
    NSString *_primaryHomeName;	// 56 = 0x38
    NSString *_primaryHomeAssistantIdentifier;	// 64 = 0x40
    NSString *_currentHomeName;	// 72 = 0x48
    NSString *_currentHomeAssistantIdentifier;	// 80 = 0x50
    HMDAssistantCommandHelper *_assistantCommandHelper;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    unsigned long long _startTime;	// 104 = 0x68
}

+ (void)initialize;	// IMP=0x0000000000198efc
+ (id)logCategory;	// IMP=0x0000000000198ecc
- (void).cxx_destruct;	// IMP=0x00000000001b3125
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(nonatomic) _Bool completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property(retain, nonatomic) HMDAssistantCommandHelper *assistantCommandHelper; // @synthesize assistantCommandHelper=_assistantCommandHelper;
@property(retain, nonatomic) NSString *currentHomeAssistantIdentifier; // @synthesize currentHomeAssistantIdentifier=_currentHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *currentHomeName; // @synthesize currentHomeName=_currentHomeName;
@property(retain, nonatomic) NSString *primaryHomeAssistantIdentifier; // @synthesize primaryHomeAssistantIdentifier=_primaryHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *primaryHomeName; // @synthesize primaryHomeName=_primaryHomeName;
@property(nonatomic) long long numberOfHomes; // @synthesize numberOfHomes=_numberOfHomes;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDAssistantGather *gather; // @synthesize gather=_gather;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)timeoutAndReportResults;	// IMP=0x00000000001b2f0a
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b257f
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b165e
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b0767
- (id)readRequestsForCharacteristic:(id)arg1;	// IMP=0x00000000001b0461
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;	// IMP=0x00000000001afe7b
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001afa41
- (void)addBridgedAcessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001af4ae
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;	// IMP=0x00000000001af299
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;	// IMP=0x00000000001af188
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000001aee46
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;	// IMP=0x00000000001aebfd
- (void)handleMediaReadWriteResponse:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 inHome:(id)arg4 requestProperty:(id)arg5 results:(id)arg6 forObjects:(id)arg7;	// IMP=0x00000000001ae4cc
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001ad820
- (_Bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001acdef
- (id)parseColorEncoding:(id)arg1;	// IMP=0x00000000001aba47
- (void)handleCommandWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aa6db
- (void)_handleCommandForHAPAction:(id)arg1 serviceType:(id)arg2 objects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001aa198
- (void)_handleCommandForMediaAccessoryAction:(id)arg1 objects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a9e3e
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a8593
- (id)updateValue:(id)arg1 forAction:(id)arg2;	// IMP=0x00000000001a7ef0
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(_Bool)arg3 metadata:(id)arg4;	// IMP=0x00000000001a7bdb
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a62ad
- (void)handleSetNaturalLightingAction:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a524a
- (void)handleGetNaturalLightingAction:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a4b49
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00000000001a49c0
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00000000001a47b2
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a37df
- (void)handleMediaAccessorySetActionType:(id)arg1 forObjects:(id)arg2 withServiceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a2d15
- (_Bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001a236b
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a1a4c
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a1522
- (id)actionOutcomeFromError:(id)arg1;	// IMP=0x00000000001a1384
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a10de
- (void)reportUnlockRequired:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a1056
- (void)reportResults:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0f85
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a09f2
- (void)_logEvent:(id)arg1;	// IMP=0x00000000001a029f
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;	// IMP=0x000000000019fdb1
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;	// IMP=0x000000000019f97c
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 serviceTypeIsATV:(_Bool)arg3 overrideServiceTypeIfNeeded:(id *)arg4;	// IMP=0x000000000019e34a
- (id)_homeWithSearchFilter:(id)arg1;	// IMP=0x000000000019de47
- (id)_evaluateHomeOptionallyMatchingHomeName:(id)arg1;	// IMP=0x000000000019d9f4
- (id)filteredObjectsFromObjects:(id)arg1 byCharacteristicType:(id)arg2;	// IMP=0x000000000019d76d
- (id)filteredObjectsFromObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;	// IMP=0x000000000019cea2
- (id)filteredObjectsFromObjects:(id)arg1 forGroup:(id)arg2;	// IMP=0x000000000019cc91
- (id)filteredObjectsFromObjects:(id)arg1 forHomeName:(id)arg2 roomName:(id)arg3 zoneName:(id)arg4;	// IMP=0x000000000019c60d
- (id)objectsWithIdentifierList:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019c2ef
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x000000000019c0ce
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x000000000019beab
- (_Bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;	// IMP=0x000000000019bc69
- (id)getValueOfType:(id)arg1 action:(id)arg2;	// IMP=0x000000000019ba71
- (id)getLocaleUnits:(id)arg1;	// IMP=0x000000000019b9cc
- (id)actionResultForCharacteristic:(id)arg1 actionSet:(id)arg2 action:(id)arg3 objects:(id)arg4 error:(id)arg5;	// IMP=0x000000000019b3dc
- (id)actionResultForMediaProfile:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4;	// IMP=0x000000000019b17d
- (id)failedActionResultsFromResponse:(id)arg1 inActionSet:(id)arg2 withAction:(id)arg3;	// IMP=0x000000000019a777
- (id)entityFromActionSet:(id)arg1;	// IMP=0x000000000019a631
- (_Bool)populateMediaProfileWriteResult:(id)arg1 withValue:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x000000000019a446
- (_Bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;	// IMP=0x000000000019a3b0
- (_Bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x000000000019a1ca
- (_Bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;	// IMP=0x00000000001992d3
- (id)mediaProfileFromObject:(id)arg1;	// IMP=0x00000000001991e0
- (id)serviceFromObject:(id)arg1;	// IMP=0x0000000000199110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

