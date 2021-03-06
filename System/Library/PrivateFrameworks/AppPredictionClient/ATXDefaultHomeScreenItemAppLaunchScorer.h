//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATXAggregatedAppLaunchData, ATXHomeScreenWidgetDescriptor;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject
{
    ATXHomeScreenWidgetDescriptor *_widget;	// 8 = 0x8
    id <ATXCategoricalHistogramProtocol> _spotlightLaunchesHistogram;	// 16 = 0x10
}

+ (id)_fetchFamilyCircleWithUserDefaults:(id)arg1;	// IMP=0x00000000000f7d6d
+ (id)_fetchFamilyCircle;	// IMP=0x00000000000f7cfd
+ (id)_requestUpdatedFamilyCircle;	// IMP=0x00000000000f79d0
+ (_Bool)hasiCloudFamily;	// IMP=0x00000000000f78e0
- (void).cxx_destruct;	// IMP=0x00000000000f8ad9
- (_Bool)isWidgetSpecialCase;	// IMP=0x00000000000f8a4a
- (id)scoreWithCachedAppLaunchData:(id)arg1;	// IMP=0x00000000000f8836
@property(readonly, nonatomic) ATXAggregatedAppLaunchData *score;
- (_Bool)_isContactsWidget;	// IMP=0x00000000000f86dd
- (_Bool)_isSleepWidget;	// IMP=0x00000000000f85fa
- (_Bool)_isAppPredictionsWidget;	// IMP=0x00000000000f8547
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)arg1;	// IMP=0x00000000000f805d
- (double)_contactsWidgetiCloudFamilyScore;	// IMP=0x00000000000f7620
- (id)_appLaunchScoreForContactsWidget;	// IMP=0x00000000000f7393
- (id)_appLaunchScoreForSleepWidget;	// IMP=0x00000000000f6fe3
- (id)initWithWidget:(id)arg1 appLaunchHistogram:(id)arg2;	// IMP=0x00000000000f6f4a

@end

