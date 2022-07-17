//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/ICAppInstallStatusObserver-Protocol.h>

@class INAppDescriptor, NSObject, NSString, WFiTunesSessionManager;
@protocol OS_dispatch_queue, WFAppInstalledResourceDelegate;

@interface WFAppInstalledResource <ICAppInstallStatusObserver>
{
    _Bool _skipLookup;	// 8 = 0x8
    _Bool _requiresAppToBeInstalled;	// 9 = 0x9
    _Bool _intentIsSynced;	// 10 = 0xa
    id <WFAppInstalledResourceDelegate> _delegate;	// 16 = 0x10
    WFiTunesSessionManager *_currentAppNameLookupSessionManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_stateQueue;	// 32 = 0x20
    NSString *_appName;	// 40 = 0x28
    INAppDescriptor *_descriptor;	// 48 = 0x30
}

+ (_Bool)refreshesAvailabilityOnApplicationResume;	// IMP=0x0000000000212aab
+ (_Bool)mustBeAvailableForDisplay;	// IMP=0x0000000000212aa3
- (void).cxx_destruct;	// IMP=0x000000000021259a
@property(retain, nonatomic) INAppDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) _Bool intentIsSynced; // @synthesize intentIsSynced=_intentIsSynced;
@property(nonatomic) _Bool requiresAppToBeInstalled; // @synthesize requiresAppToBeInstalled=_requiresAppToBeInstalled;
@property(nonatomic) _Bool skipLookup; // @synthesize skipLookup=_skipLookup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) WFiTunesSessionManager *currentAppNameLookupSessionManager; // @synthesize currentAppNameLookupSessionManager=_currentAppNameLookupSessionManager;
@property(nonatomic) __weak id <WFAppInstalledResourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)appRegistry:(id)arg1 installStatusChangedForApp:(id)arg2;	// IMP=0x000000000021247e
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000212466
- (id)appNeedsUpdateErrorWithAppName:(id)arg1;	// IMP=0x0000000000212206
- (id)appNotResolvedError;	// IMP=0x0000000000211f7d
- (id)appNotInstalledError;	// IMP=0x0000000000211d03
- (_Bool)intentIsLocallyAvailable;	// IMP=0x0000000000211c32
- (_Bool)intentIsEligibleForRemoteExecution;	// IMP=0x0000000000211bf9
- (id)intentDescriptor;	// IMP=0x0000000000211b99
- (_Bool)descriptorIsIntentDescriptor;	// IMP=0x0000000000211b4e
- (void)notifyDelegateWithUpdatedDescriptor:(id)arg1;	// IMP=0x0000000000211ab7
- (void)updateDescriptorsWithSelectedApp:(id)arg1;	// IMP=0x0000000000211846
- (void)refreshAvailability;	// IMP=0x00000000002115c1
- (id)eventDictionary;	// IMP=0x0000000000211511
- (id)bundleIdentifier;	// IMP=0x00000000002114c1
- (void)dealloc;	// IMP=0x0000000000211394
- (id)_initWithDescriptor:(id)arg1 requiresAppToBeInstalled:(_Bool)arg2 isSyncedFromOtherDevice:(_Bool)arg3;	// IMP=0x00000000002111bd
- (id)initWithIntentDescriptor:(id)arg1 isSyncedFromOtherDevice:(_Bool)arg2;	// IMP=0x00000000002111a3
- (id)initWithAppDescriptor:(id)arg1 requiresAppToBeInstalled:(_Bool)arg2;	// IMP=0x000000000021118e

@end
