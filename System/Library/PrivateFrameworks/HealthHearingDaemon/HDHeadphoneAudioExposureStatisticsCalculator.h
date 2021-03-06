//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHeadphoneAudioExposureBucketCollection, HDHeadphoneDoseMetadataStore, HDProfile, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDHeadphoneAudioExposureStatisticsCalculator : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    HDHeadphoneDoseMetadataStore *_keyValueStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _Bool _setup;	// 32 = 0x20
    _Bool _needsRebuild;	// 33 = 0x21
    HDHeadphoneAudioExposureBucketCollection *_memoryCache;	// 40 = 0x28
    NSMutableArray *_pendingSamples;	// 48 = 0x30
    CDUnknownBlockType _unitTesting_didUpdatePreviousSevenDayNotificationFireDate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001360c
@property(copy, nonatomic) CDUnknownBlockType unitTesting_didUpdatePreviousSevenDayNotificationFireDate; // @synthesize unitTesting_didUpdatePreviousSevenDayNotificationFireDate=_unitTesting_didUpdatePreviousSevenDayNotificationFireDate;
@property(readonly, nonatomic, getter=isSetup) _Bool setup; // @synthesize setup=_setup;
@property(readonly, nonatomic) _Bool needsRebuild; // @synthesize needsRebuild=_needsRebuild;
- (void)_setNeedsRebuild:(_Bool)arg1;	// IMP=0x00000000000134d1
- (id)_updateWithExposure:(id)arg1 replaying:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000013054
- (id)_updateWithExposure:(id)arg1 replaying:(_Bool)arg2 assertion:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000012dc3
- (id)_loadCacheWithError:(id *)arg1;	// IMP=0x0000000000012cd5
- (id)_loadBucketsFromProfile:(id)arg1 needsRebuild:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00000000000127cc
- (id)_rebuildWithAssertion:(id)arg1 allowInitialQueriesToFail:(_Bool)arg2 resetDoseToZero:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000011eba
- (id)_setupWithAssertion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011040
- (void)unitTesting_clearNeedsRebuild;	// IMP=0x000000000001102c
- (id)unitTesting_pendingSamples;	// IMP=0x000000000001100e
- (id)unitTesting_snapshotBuckets;	// IMP=0x0000000000010ff8
- (void)setNeedsRebuild;	// IMP=0x0000000000010fe1
- (id)pruneWithNowDate:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000010f07
- (id)updateWithExposure:(id)arg1 assertion:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010eed
- (id)updateWithNotifications:(id)arg1 assertion:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000010c47
- (id)rebuildWithAssertion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010bfd
- (id)_initWithProfile:(id)arg1 keyValueStore:(id)arg2 daemonDidBecomeReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010a30
- (id)initWithProfile:(id)arg1 keyValueStore:(id)arg2;	// IMP=0x0000000000010a1b

@end

