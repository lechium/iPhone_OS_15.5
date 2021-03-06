//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/CHSAvocadoDescriptorProviderObserver-Protocol.h>

@class ATXDefaultHomeScreenItemUpdater, CHSAvocadoDescriptorProvider, NSDictionary, NSSet, NSString, _PASSimpleCoalescingTimer;
@protocol ATXCategoricalHistogramProtocol, OS_dispatch_queue;

@interface ATXAvocadoDescriptorCache : NSObject <CHSAvocadoDescriptorProviderObserver>
{
    CHSAvocadoDescriptorProvider *_provider;	// 8 = 0x8
    NSString *_descriptorsWithAdditionalDataPath;	// 16 = 0x10
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSSet *_descriptors;	// 40 = 0x28
    ATXDefaultHomeScreenItemUpdater *_defaultHomeScreenItemUpdater;	// 48 = 0x30
    id <ATXCategoricalHistogramProtocol> _spotlightLaunchHistogram;	// 56 = 0x38
    NSDictionary *_intentToDescriptorDictionary;	// 64 = 0x40
    NSDictionary *_containerBundleIdAndKindToDescriptorDictionary;	// 72 = 0x48
}

+ (id)containerBundleIdForExtensionBundleId:(id)arg1;	// IMP=0x00000000000ebfb7
+ (id)sharedInstance;	// IMP=0x00000000000eb2f7
- (void).cxx_destruct;	// IMP=0x00000000000ee291
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;	// IMP=0x00000000000ee09f
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;	// IMP=0x00000000000ee03a
- (void)updateDefaultsWithSystemDescriptorsAndInstallDatesCache:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000edf1d
- (void)updateDefaultsIfNeededWithSystemDescriptorsAndInstallDatesCache:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000ede00
- (void)_descriptorsDidUpdateOnInternalQueueWithReason:(id)arg1;	// IMP=0x00000000000edd4c
- (void)_updateDescriptorMappings;	// IMP=0x00000000000ed765
- (void)_writeNewAvocadoDescriptorsOnInternalQueueIfNecessary:(id)arg1 oldAvocadoDescriptors:(id)arg2;	// IMP=0x00000000000ed6da
- (void)removeDeletedItemsFromAdditionalDataCache;	// IMP=0x00000000000ed261
- (id)_fetchAvocadoDescriptorsWithAdditionalDataOnInternalQueueWithError:(id *)arg1;	// IMP=0x00000000000ecee1
- (id)fetchAvocadoDescriptorsWithAdditionalDataWithError:(id *)arg1;	// IMP=0x00000000000ecd50
- (_Bool)_writeAvocadoDescriptorsWithAdditionalDataOnInternalQueue:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000ecaaf
- (id)_updateAvocadoDescriptorsWithAdditionalDataOnInternalQueue;	// IMP=0x00000000000ec9e6
- (void)_markMissingAvocadoDescriptorsAsUninstalledOnInternalQueue:(id)arg1;	// IMP=0x00000000000ec650
- (id)_mergeNewDescriptorsWithOldDescriptorsOnInternalQueue:(id)arg1;	// IMP=0x00000000000ec094
- (id)descriptorForContainerBundleId:(id)arg1 widgetKind:(id)arg2;	// IMP=0x00000000000ebdb9
- (id)descriptorForIntent:(id)arg1;	// IMP=0x00000000000ebb2f
- (void)dealloc;	// IMP=0x00000000000ebaaa
@property(readonly, copy) NSSet *descriptors;
@property(retain) id <ATXCategoricalHistogramProtocol> spotlightLaunchHistogram;
- (id)initWithProvider:(id)arg1 path:(id)arg2;	// IMP=0x00000000000eb411
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000eb3ad
- (id)init;	// IMP=0x00000000000eb34c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

