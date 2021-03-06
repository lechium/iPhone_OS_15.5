//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ControlCenterServices/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSSet, NSString;
@protocol BSDefaultObserver, OS_dispatch_queue;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSArray *_directoryURLs;	// 8 = 0x8
    NSSet *_allowedModuleIdentifiers;	// 16 = 0x10
    NSDictionary *_allModuleMetadataByIdentifier;	// 24 = 0x18
    NSSet *_availableModuleIdentifiers;	// 32 = 0x20
    NSSet *_interestingBundleIdentifiers;	// 40 = 0x28
    struct MGNotificationTokenStruct *_mobileGestaltNotificationToken;	// 48 = 0x30
    NSHashTable *_observers;	// 56 = 0x38
    NSObject<BSDefaultObserver> *_internalDefaultsObserver;	// 64 = 0x40
    NSSet *_loadableModuleIdentifiers;	// 72 = 0x48
    _Bool _ignoreAllowedList;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_callOutQueue;	// 96 = 0x60
}

+ (id)_defaultModuleIdentifierAllowedList;	// IMP=0x000000000000a950
+ (id)_defaultModuleDirectories;	// IMP=0x000000000000a75f
+ (void)initialize;	// IMP=0x0000000000009c61
+ (id)repositoryWithDefaults;	// IMP=0x0000000000009bdb
+ (id)_deviceFamily;	// IMP=0x0000000000009b33
- (void).cxx_destruct;	// IMP=0x000000000000c282
- (void)_queue_unregisterForInternalPreferenceChanges;	// IMP=0x000000000000c259
- (void)_queue_registerForInternalPreferenceChanges;	// IMP=0x000000000000c0e5
- (void)_queue_stopObservingGestaltQuestions;	// IMP=0x000000000000c0b5
- (void)_queue_startObservingMobileGestaltQuestions:(id)arg1 withChangeHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bfdf
- (id)_queue_gestaltQuestionsForModuleMetadata:(id)arg1;	// IMP=0x000000000000be05
- (void)_queue_updateGestaltQuestionsForModuleMetadata:(id)arg1;	// IMP=0x000000000000bccc
- (id)_queue_filterModuleMetadataByGestalt:(id)arg1;	// IMP=0x000000000000ba36
- (void)_queue_unregisterForVisiblityPreferenceChanges;	// IMP=0x000000000000ba05
- (void)_queue_registerForVisiblityPreferenceChanges;	// IMP=0x000000000000b9b1
- (id)_queue_filterModuleMetadataByVisibilityPreference:(id)arg1;	// IMP=0x000000000000b8db
- (_Bool)_queue_arrayContainsInterestingApplicationProxy:(id)arg1;	// IMP=0x000000000000b7fc
- (id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)arg1;	// IMP=0x000000000000b606
- (void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)arg1;	// IMP=0x000000000000b5a0
- (id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)arg1;	// IMP=0x000000000000b346
- (id)_queue_loadAllModuleMetadata;	// IMP=0x000000000000b330
- (id)_queue_moduleIdentifiersForMetadata:(id)arg1;	// IMP=0x000000000000b13a
- (void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)arg1;	// IMP=0x000000000000b03a
- (void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)arg1;	// IMP=0x000000000000af4b
- (void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)arg1;	// IMP=0x000000000000ace0
- (void)_queue_updateLoadableModuleMetadata;	// IMP=0x000000000000ac0f
- (void)_queue_updateAvailableModuleMetadata;	// IMP=0x000000000000abb6
- (void)_updateAvailableModuleMetadata;	// IMP=0x000000000000aafd
- (void)_queue_updateAllModuleMetadata;	// IMP=0x000000000000aaa5
- (void)_applicationsDidChange:(id)arg1;	// IMP=0x000000000000a600
- (void)applicationStateDidChange:(id)arg1;	// IMP=0x000000000000a5ee
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000000a5dc
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000000a5ca
- (void)_queue_runBlockOnObservers:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a4de
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000a433
- (void)addObserver:(id)arg1;	// IMP=0x000000000000a388
- (id)moduleMetadataForModuleIdentifier:(id)arg1;	// IMP=0x000000000000a1a9
- (void)_queue_setIgnoreAllowedList:(_Bool)arg1;	// IMP=0x000000000000a167
@property(readonly, copy, nonatomic) NSSet *loadableModuleIdentifiers;
- (void)setVisibility:(_Bool)arg1 forModuleIdentifier:(id)arg2;	// IMP=0x000000000000a006
- (_Bool)visibilityForModuleIdentifier:(id)arg1;	// IMP=0x0000000000009fc9
- (void)invalidate;	// IMP=0x0000000000009efe
- (id)_initWithDirectoryURLs:(id)arg1 allowedModuleIdentifiers:(id)arg2;	// IMP=0x0000000000009c89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

