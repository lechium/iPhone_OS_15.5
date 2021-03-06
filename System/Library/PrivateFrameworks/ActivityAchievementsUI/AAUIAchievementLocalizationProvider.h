//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FIUIUnitManager, NSCalendar, NSDate, NSString;

@interface AAUIAchievementLocalizationProvider : NSObject
{
    _Bool _wheelchairUser;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _activityMoveMode;	// 24 = 0x18
    FIUIUnitManager *_unitManager;	// 32 = 0x20
    NSDate *_currentDateOverride;	// 40 = 0x28
    NSCalendar *_gregorianCalendar;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000012e71
@property(retain, nonatomic) NSCalendar *gregorianCalendar; // @synthesize gregorianCalendar=_gregorianCalendar;
@property(retain, nonatomic) NSDate *currentDateOverride; // @synthesize currentDateOverride=_currentDateOverride;
@property(retain, nonatomic) FIUIUnitManager *unitManager; // @synthesize unitManager=_unitManager;
@property(nonatomic) long long activityMoveMode; // @synthesize activityMoveMode=_activityMoveMode;
@property(nonatomic) _Bool wheelchairUser; // @synthesize wheelchairUser=_wheelchairUser;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)_remainingProgressValueWithUnit:(id)arg1 achievement:(id)arg2;	// IMP=0x0000000000012d0f
- (id)_quantityToGoalValueWithAchievement:(id)arg1;	// IMP=0x0000000000012c65
- (id)_goalValueWithAchievement:(id)arg1;	// IMP=0x0000000000012b86
- (id)_achievementValueWithAchievement:(id)arg1;	// IMP=0x0000000000012a5e
- (id)_progressValueWithAchievement:(id)arg1;	// IMP=0x000000000001297f
- (id)_formattedMoveTimeValue:(id)arg1;	// IMP=0x0000000000012972
- (id)_formattedEnergyValueWithoutUnit:(id)arg1 canonicalUnit:(id)arg2;	// IMP=0x00000000000127fb
- (id)_formattedEnergyValue:(id)arg1 canonicalUnit:(id)arg2;	// IMP=0x00000000000125e9
- (id)_formattedMoveGoal:(id)arg1 template:(id)arg2;	// IMP=0x0000000000012506
- (id)_calculateSuffixCombinations:(id)arg1;	// IMP=0x00000000000122b4
- (id)_allStringCombinationsWithPrefix:(id)arg1 andSuffixes:(id)arg2;	// IMP=0x000000000001208a
- (id)_suffixesForLocalizedStringLookup;	// IMP=0x0000000000011fb0
- (id)_userEnergyUnitSuffix;	// IMP=0x0000000000011eb1
- (id)_formatValue:(id)arg1 usingFormatterNamed:(id)arg2 template:(id)arg3;	// IMP=0x0000000000011918
- (id)_valueFromPlaceholder:(id)arg1 withAchievement:(id)arg2;	// IMP=0x0000000000010ebe
- (id)_replacePlaceholdersInString:(id)arg1 withAchievement:(id)arg2;	// IMP=0x000000000001085b
- (id)_stringByTrimmingPlaceholderMarkersFromString:(id)arg1;	// IMP=0x00000000000107e6
- (id)_pluralizeLocalizedString:(id)arg1 withAchievement:(id)arg2;	// IMP=0x000000000001047c
- (id)_buildKeyWithKeyBaseString:(id)arg1 andSuffixes:(id)arg2;	// IMP=0x00000000000103cb
- (id)_buildKeyWithKeyBaseString:(id)arg1;	// IMP=0x00000000000103b2
- (id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2 localizationBundleURL:(id)arg3 experienceType:(unsigned long long)arg4;	// IMP=0x000000000000fdb8
- (id)_localizedStringWithKey:(id)arg1 withAchievement:(id)arg2 experienceType:(unsigned long long)arg3;	// IMP=0x000000000000f96a
- (id)localizedStringForKey:(id)arg1 withAchievement:(id)arg2 experienceType:(unsigned long long)arg3;	// IMP=0x000000000000f958
- (id)shareDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f89a
- (id)unachievedAlertBackDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f878
- (id)unachievedAlertDescriptionForAchievement:(id)arg1 experienceType:(unsigned long long)arg2;	// IMP=0x000000000000f859
- (id)achievedAlertBackDescriptionForAchievement:(id)arg1 sizeVariant:(long long)arg2 dateSizeVariant:(long long)arg3;	// IMP=0x000000000000f3fa
- (id)_backDateStringForDate:(id)arg1 achievement:(id)arg2 dateStyle:(unsigned long long)arg3;	// IMP=0x000000000000f2f9
- (id)achievedAlertDescriptionForAchievement:(id)arg1 experienceType:(unsigned long long)arg2;	// IMP=0x000000000000f2da
- (id)friendAchievedDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f2b8
- (id)friendAchievedTitleForAchievement:(id)arg1;	// IMP=0x000000000000f20c
- (id)achievedShortDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f1ea
- (id)achievedDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f1c8
- (id)unachievedShortDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f1a6
- (id)unachievedDescriptionForAchievement:(id)arg1;	// IMP=0x000000000000f184
- (id)titleForAchievement:(id)arg1;	// IMP=0x000000000000f162
- (id)currentDate;	// IMP=0x000000000000f11f
- (id)init;	// IMP=0x000000000000f002

@end

