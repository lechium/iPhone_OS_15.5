//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CARApplicationInfo, NSString;

@interface _CARAnalyticsAppInfo
{
    _Bool _wasVisibleBeforeCarScreen;	// 8 = 0x8
    _Bool _wasVisibleInDashboardBeforeCarScreen;	// 9 = 0x9
    _Bool _wasVisibleBeforeSiri;	// 10 = 0xa
    CARApplicationInfo *_appInfo;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    unsigned long long _category;	// 32 = 0x20
    unsigned long long _numberOfSiriPresentations;	// 40 = 0x28
    unsigned long long _dashboardWidgetType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000036ac4
@property(nonatomic) unsigned long long dashboardWidgetType; // @synthesize dashboardWidgetType=_dashboardWidgetType;
@property(nonatomic) unsigned long long numberOfSiriPresentations; // @synthesize numberOfSiriPresentations=_numberOfSiriPresentations;
@property(nonatomic) _Bool wasVisibleBeforeSiri; // @synthesize wasVisibleBeforeSiri=_wasVisibleBeforeSiri;
@property(nonatomic) _Bool wasVisibleInDashboardBeforeCarScreen; // @synthesize wasVisibleInDashboardBeforeCarScreen=_wasVisibleInDashboardBeforeCarScreen;
@property(nonatomic) _Bool wasVisibleBeforeCarScreen; // @synthesize wasVisibleBeforeCarScreen=_wasVisibleBeforeCarScreen;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CARApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
- (id)debugDescription;	// IMP=0x001000000003693e
- (void)stopCountingDashboardVisibleTime;	// IMP=0x0010000000036925
- (void)stopCountingVisibleTime;	// IMP=0x001000000003690c
- (void)startCountingDashboardVisibleTime;	// IMP=0x00100000000368f3
- (void)startCountingVisibleTime;	// IMP=0x00100000000368da
- (id)initWithBundleIdentifier:(id)arg1 appDeclaration:(id)arg2 policyEvaluator:(id)arg3;	// IMP=0x0010000000036773
- (id)initWithAppInfo:(id)arg1 policyEvaluator:(id)arg2;	// IMP=0x0010000000036699

@end

