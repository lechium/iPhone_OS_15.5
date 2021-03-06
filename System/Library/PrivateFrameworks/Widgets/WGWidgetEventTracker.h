//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject
{
    NSDateComponents *_previousTodayViewAppearDateComponents;	// 8 = 0x8
    NSDate *_previousTodayViewAppearanceDate;	// 16 = 0x10
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;	// 24 = 0x18
    unsigned long long _location;	// 32 = 0x20
    PETDistributionEventTracker *_widgetLingerTracker;	// 40 = 0x28
    PETScalarEventTracker *_widgetShownTracker;	// 48 = 0x30
    PETScalarEventTracker *_widgetStatusTracker;	// 56 = 0x38
    PETDistributionEventTracker *_widgetListLingerTracker;	// 64 = 0x40
    PETScalarEventTracker *_widgetToggleContractTracker;	// 72 = 0x48
    PETScalarEventTracker *_widgetToggleExpandTracker;	// 80 = 0x50
    PETScalarEventTracker *_widgetListShownTracker;	// 88 = 0x58
    PETScalarEventTracker *_widgetToggleContract;	// 96 = 0x60
    PETScalarEventTracker *_widgetToggleExpand;	// 104 = 0x68
    _Bool _authenticated;	// 112 = 0x70
}

+ (id)sharedInstance;	// IMP=0x000000000003d466
- (void).cxx_destruct;	// IMP=0x000000000003ee76
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(_Bool)arg2;	// IMP=0x000000000003ed6e
- (id)widgetListShownTracker;	// IMP=0x000000000003ec59
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(_Bool)arg2 duration:(double)arg3;	// IMP=0x000000000003eb47
- (id)_widgetListLingerTracker;	// IMP=0x000000000003ea32
- (void)_trackWidgetExpandEventForWidget:(id)arg1;	// IMP=0x000000000003e968
- (id)widgetToggleExpandTracker;	// IMP=0x000000000003e87b
- (void)_trackWidgetContractEventForWidget:(id)arg1;	// IMP=0x000000000003e7b1
- (id)_widgetToggleContractTracker;	// IMP=0x000000000003e6c4
- (void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(_Bool)arg2;	// IMP=0x000000000003e5c2
- (id)_widgetStatusTracker;	// IMP=0x000000000003e4ad
- (void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(_Bool)arg3 mode:(long long)arg4;	// IMP=0x000000000003e348
- (id)_widgetShownTracker;	// IMP=0x000000000003e1de
- (void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(_Bool)arg3 mode:(long long)arg4 duration:(double)arg5;	// IMP=0x000000000003e066
- (id)_widgetLingerTracker;	// IMP=0x000000000003defc
- (id)_widgetProperty;	// IMP=0x000000000003dedc
- (id)_statusProperty;	// IMP=0x000000000003de0d
- (id)_modeProperty;	// IMP=0x000000000003dd3e
- (id)_locationProperty;	// IMP=0x000000000003dc2d
- (id)_authenticationProperty;	// IMP=0x000000000003db5e
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;	// IMP=0x000000000003db00
- (void)widget:(id)arg1 didDisappearInMode:(long long)arg2;	// IMP=0x000000000003da4f
- (void)widget:(id)arg1 didAppearInMode:(long long)arg2;	// IMP=0x000000000003d983
- (void)widgetViewDidDisappearWithWidget:(id)arg1;	// IMP=0x000000000003d95c
- (void)widgetViewDidAppearWithWidget:(id)arg1;	// IMP=0x000000000003d940
- (void)widgetListDidDisappearAtLocation:(unsigned long long)arg1;	// IMP=0x000000000003d8e6
- (void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3;	// IMP=0x000000000003d586
- (void)_lockedStateDidChange;	// IMP=0x000000000003d580
- (void)dealloc;	// IMP=0x000000000003d551
- (id)init;	// IMP=0x000000000003d4eb

@end

