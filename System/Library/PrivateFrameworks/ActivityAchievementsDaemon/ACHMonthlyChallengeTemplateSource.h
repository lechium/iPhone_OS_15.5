//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/ACHTemplateSource-Protocol.h>

@class ACHMonthlyChallengeDataSource, ACHMonthlyChallengeTemplateDataProvider, ACHSyncingMonthlyChallengeTemplateCache, NSCalendar, NSDate, NSString;
@protocol ACHTemplateSourceDelegate;

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource>
{
    NSDate *_currentDateOverride;	// 8 = 0x8
    NSCalendar *_currentCalendarOverride;	// 16 = 0x10
    _Bool _isAppleWatch;	// 24 = 0x18
    NSCalendar *_currentCalendar;	// 32 = 0x20
    NSDate *_currentDate;	// 40 = 0x28
    ACHMonthlyChallengeDataSource *_dataSource;	// 48 = 0x30
    ACHMonthlyChallengeTemplateDataProvider *_templateDataProvider;	// 56 = 0x38
    ACHSyncingMonthlyChallengeTemplateCache *_templateCache;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002e005
@property(nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache; // @synthesize templateCache=_templateCache;
@property(retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider; // @synthesize templateDataProvider=_templateDataProvider;
@property(retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDate *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSCalendar *currentCalendar; // @synthesize currentCalendar=_currentCalendar;
- (_Bool)subObjectsHaveDatabaseAssertions;	// IMP=0x000000000002dec8
- (void)setCurrentCalendarOverride:(id)arg1;	// IMP=0x000000000002de43
- (void)setCurrentDateOverride:(id)arg1;	// IMP=0x000000000002de32
- (id)_minimumValueForMonthlyChallengeType:(unsigned long long)arg1;	// IMP=0x000000000002de1b
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)arg1;	// IMP=0x000000000002dd93
- (double)_roundedGoalValue:(double)arg1 monthlyChallengeType:(unsigned long long)arg2;	// IMP=0x000000000002dc76
- (id)_suffixForCurrentMonthForType:(unsigned long long)arg1 template:(id)arg2;	// IMP=0x000000000002d6ec
- (double)_goalValueForCurrentMonthForType:(unsigned long long)arg1;	// IMP=0x000000000002d38f
- (double)_targetGoalValueForCurrentMonthForType:(unsigned long long)arg1;	// IMP=0x000000000002ce33
- (void)_didOverrideMonthlyChallengeCadence;	// IMP=0x000000000002cd9d
- (_Bool)_shouldOverrideMonthlyChallengeCadence;	// IMP=0x000000000002cb87
- (unsigned long long)_numberOfDaysInMonthForDate:(id)arg1;	// IMP=0x000000000002cb09
- (id)_dateComponentIntervalForTwoMonthsAgo;	// IMP=0x000000000002c8f5
- (id)_dateComponentIntervalForLastMonth;	// IMP=0x000000000002c6e8
- (id)_dateComponentIntervalForCurrentMonth;	// IMP=0x000000000002c4db
- (_Bool)_isInFirstWeekOfCurrentMonth:(id)arg1;	// IMP=0x000000000002c43b
- (unsigned long long)_getRandomMonthlyChallengeType;	// IMP=0x000000000002c3ae
- (id)_availableMonthlyChallengeTypes;	// IMP=0x000000000002c1c4
- (_Bool)isMonthlyChallengeOfTypeAvailable:(unsigned long long)arg1;	// IMP=0x000000000002b6f3
- (_Bool)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)arg1;	// IMP=0x000000000002b5e0
- (id)customPlaceholderValuesForTemplate:(id)arg1;	// IMP=0x000000000002af62
- (id)_yearMonthStringFromTemplateName:(id)arg1;	// IMP=0x000000000002ae60
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;	// IMP=0x000000000002ad14
- (id)_monthlyAchievementsAssetsDirectoryBasePath;	// IMP=0x000000000002aca5
- (id)stickerBundleURLForTemplate:(id)arg1;	// IMP=0x000000000002ac9d
- (id)propertyListBundleURLForTemplate:(id)arg1;	// IMP=0x000000000002abe8
- (id)resourceBundleURLForTemplate:(id)arg1;	// IMP=0x000000000002ab60
- (id)localizationBundleURLForTemplate:(id)arg1;	// IMP=0x000000000002a9a1
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)arg1 dateCompoonentInterval:(id)arg2 goalValue:(double)arg3;	// IMP=0x000000000002a991
- (id)possibleLocalizationSuffixesForTemplate:(id)arg1;	// IMP=0x000000000002a8ef
- (void)_removeMonthlyChallengeTemplate:(id)arg1 monthlyChallengeTemplates:(id *)arg2 templatesToRemove:(id *)arg3;	// IMP=0x000000000002a796
- (_Bool)_createMonthlyChallengeWithMonthDateInterval:(id)arg1 monthlyChallengeTemplates:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000029e8a
- (void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028c20
- (long long)_monthlyChallengeTemplateSourceActionForDate:(id)arg1 existingTemplate:(id)arg2;	// IMP=0x0000000000028ad5
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028abe
- (_Bool)sourceShouldRunForDate:(id)arg1;	// IMP=0x0000000000028aa9
@property(readonly, nonatomic) long long runCadence;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithDataSource:(id)arg1 dataProvider:(id)arg2 templateCache:(id)arg3;	// IMP=0x000000000002893c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak NSObject<ACHTemplateSourceDelegate> *delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
