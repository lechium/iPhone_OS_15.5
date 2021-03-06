//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKObserverSet, NSArray, NSDate, NSDateComponents, NSNumber, NSString, NSUserDefaults;

@interface HKMCSettingsManager : NSObject
{
    NSUserDefaults *_menstrualCyclesDefaults;	// 8 = 0x8
    HKObserverSet *_observers;	// 16 = 0x10
    NSArray *_allSettingsToObserve;	// 24 = 0x18
    NSNumber *_unitTest_algorithmVersionMismatchOnWatch;	// 32 = 0x20
    NSNumber *_unitTest_watchMenstruationPredictionAlgorithmAttributesSupported;	// 40 = 0x28
    NSNumber *_unitTest_watchFertileWindowPredictionAlgorithmAttributesSupported;	// 48 = 0x30
    NSNumber *_unitTest_useLocalizedTextForVersionMismatchAndDisabledProjections;	// 56 = 0x38
    int _hiddenDisplayTypesNotifyToken;	// 64 = 0x40
    int _analysisSettingsNotifyToken;	// 68 = 0x44
    int _notificationSettingsNotifyToken;	// 72 = 0x48
    int _algorithmVersionMismatchSettingsNotifyToken;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000001bfac
- (void)resetAllSettings;	// IMP=0x000000000001bcc6
- (void)_migrateTestResultHiddenDisplayTypesIfNeeded;	// IMP=0x000000000001baa7
- (_Bool)hiddenForDisplayTypeIdentifier:(id)arg1;	// IMP=0x000000000001b9c3
- (void)setFertilityTrackingDisplayTypesHidden:(_Bool)arg1;	// IMP=0x000000000001b97a
- (void)setMenstruationTrackingDisplayTypesHidden:(_Bool)arg1;	// IMP=0x000000000001b931
- (void)setHidden:(_Bool)arg1 forDisplayTypeIdentifier:(id)arg2;	// IMP=0x000000000001b880
- (void)setHidden:(_Bool)arg1 forDisplayTypeIdentifiers:(id)arg2;	// IMP=0x000000000001b4ea
@property(retain, nonatomic) NSDate *cycleTrackingOnboardingTileDismissedDate;
@property(retain, nonatomic) NSDateComponents *fertileWindowNotificationTimeOfDay;
@property(nonatomic) _Bool fertileWindowNotificationsEnabled;
@property(retain, nonatomic) NSDateComponents *menstruationNotificationTimeOfDay;
@property(nonatomic) _Bool menstruationNotificationsEnabled;
@property(readonly, nonatomic) _Bool notificationsEnabled;
@property(nonatomic) unsigned long long fertileWindowProjectionsAlgorithmAttributesPhone;
@property(nonatomic) unsigned long long menstruationProjectionsAlgorithmAttributesPhone;
@property(nonatomic) _Bool sensorBasedProjectionsEnabled;
@property(retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjections;
@property(nonatomic) long long minimumAnalysisStartDayIndex;
@property(nonatomic) _Bool fertileWindowProjectionsDisabledForVersionMismatch;
@property(nonatomic) _Bool menstruationProjectionsDisabledForVersionMismatch;
@property(nonatomic) _Bool fertileWindowProjectionsEnabled;
@property(nonatomic) _Bool menstruationProjectionsEnabled;
- (_Bool)algorithmVersionMismatchOnWatch;	// IMP=0x0000000000019cbb
@property(nonatomic) unsigned long long fertileWindowProjectionsAlgorithmAttributesWatch;
@property(nonatomic) unsigned long long menstruationProjectionsAlgorithmAttributesWatch;
- (void)_unitTest_setWatchFertileWindowPredictionAlgorithmAttributesSupportedOverride:(id)arg1;	// IMP=0x000000000001985e
- (void)_unitTest_setWatchMenstruationPredictionAlgorithmAttributesSupportedOverride:(id)arg1;	// IMP=0x000000000001984d
- (void)_unitTest_setAlgorithmVersionMismatchOnWatchOverride:(id)arg1;	// IMP=0x000000000001983c
- (void)_setTestDefaults:(id)arg1;	// IMP=0x00000000000197c6
- (void)_stopObservingNPSNotifications;	// IMP=0x0000000000019780
- (void)_startObservingNPSNotifications;	// IMP=0x00000000000193e4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001915e
- (void)_stopObservingAllDefaults;	// IMP=0x0000000000019028
- (void)_startObservingDefaults;	// IMP=0x0000000000018ee9
- (void)_algorithmVersionMismatchSettingsDidUpdate;	// IMP=0x0000000000018e44
- (void)_notificationSettingsDidUpdate;	// IMP=0x0000000000018d9f
- (void)_analysisSettingsDidUpdate;	// IMP=0x0000000000018cfa
- (void)_hiddenDisplayTypesDidUpdate;	// IMP=0x0000000000018c55
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000018c3f
- (void)addObserver:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000018c29
- (void)dealloc;	// IMP=0x0000000000018bd6
- (id)init;	// IMP=0x0000000000018a2e
@property(readonly, nonatomic) _Bool notificationsEnabledAndSupported;
- (id)_localizedTextForVersionMismatchFromOnboardedCycleFactors:(_Bool)arg1 ongoingCycleFactors:(id)arg2 useHeartRateInput:(_Bool)arg3;	// IMP=0x0000000000011551
- (_Bool)_forceDisableFertileWindowProjectionsFromOngoingCycleFactors:(id)arg1;	// IMP=0x0000000000011518
- (_Bool)_forceDisableMenstruationProjectionsFromOngoingCycleFactors:(id)arg1;	// IMP=0x00000000000114df
- (void)forceDisableProjectionsFromOnboardedCycleFactors:(_Bool)arg1 ongoingCycleFactors:(id)arg2 useHeartRateInput:(_Bool)arg3;	// IMP=0x00000000000113f6
- (void)_setFertileWindowProjectionsDisabledForVersionMismatchFromAlgorithmAttributes:(unsigned long long)arg1;	// IMP=0x00000000000113b0
- (void)_setMenstruationProjectionsDisabledForVersionMismatchFromAlgorithmAttributes:(unsigned long long)arg1;	// IMP=0x000000000001136a
- (void)setProjectionAttributesOnWatchFromHeartRateInputOnboarded:(_Bool)arg1;	// IMP=0x0000000000011284
@property(retain, nonatomic) NSString *localizedTextForVersionMismatchAndDisabledProjectionsFromAlgorithmAttributes;
- (_Bool)areAnyFertileWindowPredictionAlgorithmAttributesUnsupported;	// IMP=0x0000000000011195
- (_Bool)_areAlgorithmAttributesOnPhone:(unsigned long long)arg1 aheadOfAlgorithmAttributesOnWatch:(unsigned long long)arg2;	// IMP=0x0000000000011189
- (_Bool)areAnyMenstruationPredictionAlgorithmAttributesUnsupported;	// IMP=0x00000000000110f2
@property(readonly, nonatomic) _Bool sensorBasedProjectionsEnabledAndMenstruationAndFertileWindowProjectionsEnabledAndSupported;
@property(readonly, nonatomic) _Bool fertileWindowProjectionsEnabledAndSupported;
@property(readonly, nonatomic) _Bool menstruationProjectionsEnabledAndSupported;

@end

