//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKSourceListDataModel, HKSynchronousObserverSet, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HKSourceListDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_mainQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_resultsQueue;	// 16 = 0x10
    NSMutableArray *_transformers;	// 24 = 0x18
    NSMutableArray *_followupTransformers;	// 32 = 0x20
    NSArray *_rawSources;	// 40 = 0x28
    HKSynchronousObserverSet *_observers;	// 48 = 0x30
    int _notifyToken;	// 56 = 0x38
    _Bool _hasInitiatedFetch;	// 60 = 0x3c
    _Atomic _Bool _invalidated;	// 61 = 0x3d
    _Bool _shouldFetchAppInstallationStatus;	// 62 = 0x3e
    _Bool _shouldFetchAppIcons;	// 63 = 0x3f
    _Bool _shouldFetchPurposeStrings;	// 64 = 0x40
    _Bool _shouldIncludeSpecialSources;	// 65 = 0x41
    _Bool _deliverUpdates;	// 66 = 0x42
    HKHealthStore *_healthStore;	// 72 = 0x48
    HKSourceListDataModel *_sources;	// 80 = 0x50
}

+ (void)_remoteWatchAppPurposeStringsForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b04fa
+ (void)_performTransformations:(id)arg1 model:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002af51d
+ (CDUnknownBlockType)_builtinPurposeStringsFetchTransformer;	// IMP=0x00000000002aee53
+ (CDUnknownBlockType)_builtinIconFetchTransformer;	// IMP=0x00000000002ae62a
+ (CDUnknownBlockType)_builtinInstallationStatusTransformer;	// IMP=0x00000000002ae1c9
+ (void)fetchIconForSource:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002adbf5
- (void).cxx_destruct;	// IMP=0x00000000002b0aea
@property(nonatomic) _Bool deliverUpdates; // @synthesize deliverUpdates=_deliverUpdates;
@property(nonatomic) _Bool shouldIncludeSpecialSources; // @synthesize shouldIncludeSpecialSources=_shouldIncludeSpecialSources;
@property(nonatomic) _Bool shouldFetchPurposeStrings; // @synthesize shouldFetchPurposeStrings=_shouldFetchPurposeStrings;
@property(nonatomic) _Bool shouldFetchAppIcons; // @synthesize shouldFetchAppIcons=_shouldFetchAppIcons;
@property(nonatomic) _Bool shouldFetchAppInstallationStatus; // @synthesize shouldFetchAppInstallationStatus=_shouldFetchAppInstallationStatus;
@property(readonly, nonatomic) HKSourceListDataModel *sources; // @synthesize sources=_sources;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void)_fakeSourceForInstalledAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b081a
- (id)_specialAppBundleIdentifiers;	// IMP=0x00000000002b07a2
- (void)_throttledNotificationOfDataSourceUpdate;	// IMP=0x00000000002b04b1
- (void)_notifyObserversForDataSourceUpdate;	// IMP=0x00000000002b0385
- (void)_didFetchSources:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002af711
- (void)_prependBuiltinTransformers;	// IMP=0x00000000002af41e
- (void)addFetchTransformer:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ae0db
- (void)fetchModelForSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002add8b
- (void)fetchSources;	// IMP=0x00000000002ad8a1
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000000002ad88b
- (void)registerObserver:(id)arg1;	// IMP=0x00000000002ad875
- (void)invalidate;	// IMP=0x00000000002ad784
- (void)dealloc;	// IMP=0x00000000002ad746
- (id)initWithHealthStore:(id)arg1 sources:(id)arg2 queue:(id)arg3;	// IMP=0x00000000002ad4bc
- (id)initWithHealthStore:(id)arg1 queue:(id)arg2;	// IMP=0x00000000002ad4a5
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000002ad466

@end
