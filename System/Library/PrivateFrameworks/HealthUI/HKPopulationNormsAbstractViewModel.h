//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKPopulationNormsViewModelDataSource-Protocol.h>

@class HKHealthStore, NSNumber;
@protocol OS_dispatch_queue;

@interface HKPopulationNormsAbstractViewModel : NSObject <HKPopulationNormsViewModelDataSource>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_sampleQueryQueue;	// 16 = 0x10
    NSNumber *_cacheBiologicalSexSegmentIndex;	// 24 = 0x18
    NSNumber *_cacheClassificationIndex;	// 32 = 0x20
    NSNumber *_cacheAgeInYears;	// 40 = 0x28
    NSNumber *_cacheLatestSampleValue;	// 48 = 0x30
    NSNumber *_userHasDataPointAvailable;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f0bf1
@property(retain, nonatomic) NSNumber *userHasDataPointAvailable; // @synthesize userHasDataPointAvailable=_userHasDataPointAvailable;
@property(retain, nonatomic) NSNumber *cacheLatestSampleValue; // @synthesize cacheLatestSampleValue=_cacheLatestSampleValue;
@property(retain, nonatomic) NSNumber *cacheAgeInYears; // @synthesize cacheAgeInYears=_cacheAgeInYears;
@property(retain, nonatomic) NSNumber *cacheClassificationIndex; // @synthesize cacheClassificationIndex=_cacheClassificationIndex;
@property(retain, nonatomic) NSNumber *cacheBiologicalSexSegmentIndex; // @synthesize cacheBiologicalSexSegmentIndex=_cacheBiologicalSexSegmentIndex;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleQueryQueue; // @synthesize sampleQueryQueue=_sampleQueryQueue;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (double)minimumSampleValueQuantity;	// IMP=0x00000000000f0b3d
- (double)maximumSampleValueQuantity;	// IMP=0x00000000000f0b24
- (unsigned long long)maximumUserAgeBucketIndex;	// IMP=0x00000000000f0b0c
- (id)currentDataForBiologicalSex;	// IMP=0x00000000000f0aef
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;	// IMP=0x00000000000f0ad2
- (id)localizedClassificationNameForIndex:(unsigned long long)arg1;	// IMP=0x00000000000f0ab5
- (id)localizedClassificationTitleForIndex:(unsigned long long)arg1;	// IMP=0x00000000000f0a98
- (_Bool)shouldShowClassificationTitle;	// IMP=0x00000000000f0a80
- (unsigned long long)numberOfClassifications;	// IMP=0x00000000000f0a68
- (id)seriesHighlightedSegmentColor;	// IMP=0x00000000000f0a56
- (id)seriesHighlightedColor;	// IMP=0x00000000000f0a3e
- (id)ageBucketsTitle;	// IMP=0x00000000000f0a21
- (id)quantityUnitTitle;	// IMP=0x00000000000f0a04
- (id)levelsTitle;	// IMP=0x00000000000f09e7
- (id)chartTitle;	// IMP=0x00000000000f09ca
- (id)viewTitle;	// IMP=0x00000000000f09ad
- (void)prepareUserCharacteristicCacheWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f087c
- (void)clearUserCharacteristicCache;	// IMP=0x00000000000f0822
- (id)userLatestSampleValue;	// IMP=0x00000000000f0566
- (id)userAgeBucketIndex;	// IMP=0x00000000000f03a2
- (id)currentAgeInYears;	// IMP=0x00000000000f027f
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)arg1;	// IMP=0x00000000000f025c
- (void)setClassificationIndex:(unsigned long long)arg1;	// IMP=0x00000000000f018f
- (unsigned long long)currentClassificationIndex;	// IMP=0x00000000000f0026
- (_Bool)isCurrentClassificationAvailable;	// IMP=0x00000000000f0018
- (void)setBiologicalSexSegmentIndex:(unsigned long long)arg1;	// IMP=0x00000000000eff4b
- (unsigned long long)currentBiologicalSexSegmentIndex;	// IMP=0x00000000000efe1c
- (long long)currentBiologicalSex;	// IMP=0x00000000000efdeb
- (unsigned long long)_biologicalSexSegmentIndexForSex:(long long)arg1;	// IMP=0x00000000000efdca
- (long long)_biologicalSexForSexSegmentIndex:(unsigned long long)arg1;	// IMP=0x00000000000efdab
- (id)currentLocalizedClassificationName;	// IMP=0x00000000000efd7a
- (id)currentLocalizedClassificationTitle;	// IMP=0x00000000000efd49
- (id)currentLocalizedClassificationDescription;	// IMP=0x00000000000efd18
- (id)localizedBiologicalSexTitles;	// IMP=0x00000000000efba3
- (unsigned long long)numberOfBiologicalSexSegments;	// IMP=0x00000000000efb98
- (id)footerText;	// IMP=0x00000000000efb90
- (id)classificationIndexForSampleValue:(double)arg1 age:(long long)arg2 sex:(long long)arg3;	// IMP=0x00000000000efb78
- (id)associatedSampleType;	// IMP=0x00000000000efb60
- (void)_requireConcreteImplementationOfSelector:(SEL)arg1;	// IMP=0x00000000000efafb
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000000efa6e

@end

