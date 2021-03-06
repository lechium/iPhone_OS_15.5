//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAHACommand.h>

#import <HomeKitDaemonLegacy/AFServiceCommand-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

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

+ (void)initialize;	// IMP=0x0000000000197180
+ (id)logCategory;	// IMP=0x0000000000197150
- (void).cxx_destruct;	// IMP=0x00000000001b13a9
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
- (void)timeoutAndReportResults;	// IMP=0x00000000001b118e
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b0803
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001af8e2
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001ae9eb
- (id)readRequestsForCharacteristic:(id)arg1;	// IMP=0x00000000001ae6e5
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;	// IMP=0x00000000001ae0ff
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001adcc5
- (void)addBridgedAcessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001ad732
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;	// IMP=0x00000000001ad51d
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;	// IMP=0x00000000001ad40c
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000001ad0ca
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;	// IMP=0x00000000001ace81
- (void)handleMediaReadWriteResponse:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 inHome:(id)arg4 requestProperty:(id)arg5 results:(id)arg6 forObjects:(id)arg7;	// IMP=0x00000000001ac750
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001abaa4
- (_Bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001ab073
- (id)parseColorEncoding:(id)arg1;	// IMP=0x00000000001a9ccb
- (void)handleCommandWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a895f
- (void)_handleCommandForHAPAction:(id)arg1 serviceType:(id)arg2 objects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a841c
- (void)_handleCommandForMediaAccessoryAction:(id)arg1 objects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a80c2
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a6817
- (id)updateValue:(id)arg1 forAction:(id)arg2;	// IMP=0x00000000001a6174
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(_Bool)arg3 metadata:(id)arg4;	// IMP=0x00000000001a5e5f
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a4531
- (void)handleSetNaturalLightingAction:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a34ce
- (void)handleGetNaturalLightingAction:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a2dcd
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00000000001a2c44
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00000000001a2a36
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a1a63
- (void)handleMediaAccessorySetActionType:(id)arg1 forObjects:(id)arg2 withServiceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a0f99
- (_Bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001a05ef
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000019fcd0
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019f7a6
- (id)actionOutcomeFromError:(id)arg1;	// IMP=0x000000000019f608
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000019f362
- (void)reportUnlockRequired:(CDUnknownBlockType)arg1;	// IMP=0x000000000019f2da
- (void)reportResults:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019f209
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019ec76
- (void)_logEvent:(id)arg1;	// IMP=0x000000000019e523
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;	// IMP=0x000000000019e035
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;	// IMP=0x000000000019dc00
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 serviceTypeIsATV:(_Bool)arg3 overrideServiceTypeIfNeeded:(id *)arg4;	// IMP=0x000000000019c5ce
- (id)_homeWithSearchFilter:(id)arg1;	// IMP=0x000000000019c0cb
- (id)_evaluateHomeOptionallyMatchingHomeName:(id)arg1;	// IMP=0x000000000019bc78
- (id)filteredObjectsFromObjects:(id)arg1 byCharacteristicType:(id)arg2;	// IMP=0x000000000019b9f1
- (id)filteredObjectsFromObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;	// IMP=0x000000000019b126
- (id)filteredObjectsFromObjects:(id)arg1 forGroup:(id)arg2;	// IMP=0x000000000019af15
- (id)filteredObjectsFromObjects:(id)arg1 forHomeName:(id)arg2 roomName:(id)arg3 zoneName:(id)arg4;	// IMP=0x000000000019a891
- (id)objectsWithIdentifierList:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019a573
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x000000000019a352
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x000000000019a12f
- (_Bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;	// IMP=0x0000000000199eed
- (id)getValueOfType:(id)arg1 action:(id)arg2;	// IMP=0x0000000000199cf5
- (id)getLocaleUnits:(id)arg1;	// IMP=0x0000000000199c50
- (id)actionResultForCharacteristic:(id)arg1 actionSet:(id)arg2 action:(id)arg3 objects:(id)arg4 error:(id)arg5;	// IMP=0x0000000000199660
- (id)actionResultForMediaProfile:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4;	// IMP=0x0000000000199401
- (id)failedActionResultsFromResponse:(id)arg1 inActionSet:(id)arg2 withAction:(id)arg3;	// IMP=0x00000000001989fb
- (id)entityFromActionSet:(id)arg1;	// IMP=0x00000000001988b5
- (_Bool)populateMediaProfileWriteResult:(id)arg1 withValue:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x00000000001986ca
- (_Bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;	// IMP=0x0000000000198634
- (_Bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x000000000019844e
- (_Bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;	// IMP=0x0000000000197557
- (id)mediaProfileFromObject:(id)arg1;	// IMP=0x0000000000197464
- (id)serviceFromObject:(id)arg1;	// IMP=0x0000000000197394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

