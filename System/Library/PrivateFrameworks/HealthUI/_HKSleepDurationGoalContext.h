//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKOverlayContext-Protocol.h>

@class HKDisplayType, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController, HKSampleType, NSString;
@protocol _HKContextChangeDelegate;

@interface _HKSleepDurationGoalContext : NSObject <HKOverlayContext>
{
    _Bool _isPrimaryContext;	// 8 = 0x8
    HKInteractiveChartOverlayViewController *_overlayChartController;	// 16 = 0x10
    HKDisplayType *_baseDisplayType;	// 24 = 0x18
    HKDisplayType *_overlayDisplayType;	// 32 = 0x20
    long long _overlayMode;	// 40 = 0x28
    HKDisplayTypeContextItem *_lastUpdatedItem;	// 48 = 0x30
    HKSampleType *_monitoringSampleType;	// 56 = 0x38
    id <_HKContextChangeDelegate> _contextChangeDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000024b4ae
@property(readonly, nonatomic) __weak id <_HKContextChangeDelegate> contextChangeDelegate; // @synthesize contextChangeDelegate=_contextChangeDelegate;
@property(retain, nonatomic) HKSampleType *monitoringSampleType; // @synthesize monitoringSampleType=_monitoringSampleType;
@property(retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem; // @synthesize lastUpdatedItem=_lastUpdatedItem;
@property(readonly, nonatomic) _Bool isPrimaryContext; // @synthesize isPrimaryContext=_isPrimaryContext;
@property(readonly, nonatomic) long long overlayMode; // @synthesize overlayMode=_overlayMode;
@property(readonly, nonatomic) HKDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property(readonly, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
@property(readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController; // @synthesize overlayChartController=_overlayChartController;
- (id)_goalGivenChartPoints:(id)arg1;	// IMP=0x000000000024b0fa
- (id)_durationContextItemWithGoal:(id)arg1;	// IMP=0x000000000024ae9a
- (void)overlayStateWillChange:(_Bool)arg1 contextItem:(id)arg2 chartController:(id)arg3;	// IMP=0x000000000024ae4e
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000024abe2
- (_Bool)unselectedContextShouldUseContextBaseType;	// IMP=0x000000000024abda
- (id)baseDisplayTypeForOverlay:(long long)arg1;	// IMP=0x000000000024ab95
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x000000000024ab83
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x000000000024ab71
- (id)contextItemForLastUpdate;	// IMP=0x000000000024ab5f
- (id)initWithBaseDisplayType:(id)arg1 overlayDisplayType:(id)arg2 overlayChartController:(id)arg3 overlayMode:(long long)arg4 isPrimaryContext:(_Bool)arg5 contextChangeDelegate:(id)arg6;	// IMP=0x000000000024aa0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
