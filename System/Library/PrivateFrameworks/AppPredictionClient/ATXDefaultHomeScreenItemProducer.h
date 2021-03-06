//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXDefaultHomeScreenItemUpdate, NSArray, NSDictionary, NSMutableDictionary, NSSet;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemProducer : NSObject
{
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;	// 8 = 0x8
    id <ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;	// 16 = 0x10
    _Bool _isDayZeroExperience;	// 24 = 0x18
    _Bool _isiPad;	// 25 = 0x19
    NSSet *_descriptors;	// 32 = 0x20
    NSDictionary *_descriptorInstallDates;	// 40 = 0x28
    NSArray *_homeScreenConfig;	// 48 = 0x30
    unsigned long long _adblDrainClassification;	// 56 = 0x38
    NSDictionary *_personalityToDescriptorDictionary;	// 64 = 0x40
    NSArray *_candidateDescriptors;	// 72 = 0x48
    NSSet *_widgetsOnHomeScreen;	// 80 = 0x50
}

+ (id)appPredictionsAvocadoDescriptor;	// IMP=0x000000000005c1e3
- (void).cxx_destruct;	// IMP=0x000000000005cda3
@property(retain, nonatomic) NSSet *widgetsOnHomeScreen; // @synthesize widgetsOnHomeScreen=_widgetsOnHomeScreen;
@property(retain, nonatomic) NSArray *candidateDescriptors; // @synthesize candidateDescriptors=_candidateDescriptors;
@property(retain, nonatomic) NSDictionary *personalityToDescriptorDictionary; // @synthesize personalityToDescriptorDictionary=_personalityToDescriptorDictionary;
@property(nonatomic) unsigned long long adblDrainClassification; // @synthesize adblDrainClassification=_adblDrainClassification;
@property(nonatomic) _Bool isiPad; // @synthesize isiPad=_isiPad;
@property(nonatomic) _Bool isDayZeroExperience; // @synthesize isDayZeroExperience=_isDayZeroExperience;
@property(readonly, nonatomic) NSArray *homeScreenConfig; // @synthesize homeScreenConfig=_homeScreenConfig;
@property(readonly, nonatomic) NSDictionary *descriptorInstallDates; // @synthesize descriptorInstallDates=_descriptorInstallDates;
@property(readonly, nonatomic) NSSet *descriptors; // @synthesize descriptors=_descriptors;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(_Bool)arg1 isAlreadyAdded:(_Bool)arg2;	// IMP=0x000000000005ccdc
- (id)_firstInstalledWidgetDate;	// IMP=0x000000000005cc35
- (_Bool)_isNewlyInstalledWidget:(id)arg1;	// IMP=0x000000000005ca17
- (_Bool)_isStackConfiguredOnHomeScreen;	// IMP=0x000000000005c745
- (id)_appPredictionsWidgetDescriptor;	// IMP=0x000000000005c0a8
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)arg1;	// IMP=0x000000000005bf52
- (id)_personalizedStackFromCandidates:(id)arg1 rankerPlistType:(int)arg2 size:(unsigned long long)arg3;	// IMP=0x000000000005be8f
- (id)_stackableCandidates;	// IMP=0x000000000005bd49
- (id)_personalizedStackForRankerPlistType:(int)arg1;	// IMP=0x000000000005bbf4
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)arg1;	// IMP=0x000000000005bb17
- (id)_personalizedTodayStack;	// IMP=0x000000000005bb00
- (id)_personalizedStack;	// IMP=0x000000000005bae9
- (id)_stackFromDefaultStackPersonalities:(id)arg1;	// IMP=0x000000000005b18e
- (id)_personalizedUpdate;	// IMP=0x000000000005ae0b
- (id)_dayZeroOnboardingStacks;	// IMP=0x000000000005ad31
- (id)onboardingStacks;	// IMP=0x000000000005ab2f
- (id)_dayZeroUpdate;	// IMP=0x000000000005a599
@property(readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;	// IMP=0x0000000000059ff3
- (id)initWithDescriptors:(id)arg1 descriptorInstallDates:(id)arg2 homeScreenConfig:(id)arg3 isDayZeroExperience:(_Bool)arg4 isiPad:(_Bool)arg5 spotlightAppLaunchHistogram:(id)arg6 adblDrainClassification:(unsigned long long)arg7;	// IMP=0x0000000000059eed
- (id)initWithDescriptors:(id)arg1 descriptorInstallDates:(id)arg2 homeScreenConfig:(id)arg3 isDayZeroExperience:(_Bool)arg4 isiPad:(_Bool)arg5 spotlightAppLaunchHistogram:(id)arg6;	// IMP=0x0000000000059e18

@end

