//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;
@protocol OS_dispatch_queue;

@interface _PWTWidgetEventTracker : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    PETScalarEventTracker *_resizeTracker;	// 16 = 0x10
    PETGoalConversionEventTracker *_conversionTracker;	// 24 = 0x18
    PETScalarEventTracker *_updateTracker;	// 32 = 0x20
    PETDistributionEventTracker *_screenLingerTracker;	// 40 = 0x28
    PETScalarEventTracker *_foregroundingTracker;	// 48 = 0x30
    _Bool _hasReceivedActiveDisplayModeChangeNotificationOnce;	// 56 = 0x38
    _Bool _isCurrentlyVisible;	// 57 = 0x39
    _Bool _willBecomeVisible;	// 58 = 0x3a
    _Bool _didBecomeVisibleWhileLocked;	// 59 = 0x3b
    _Bool _widgetIsForeground;	// 60 = 0x3c
    _Bool _widgetWasEverForeground;	// 61 = 0x3d
    long long _activeDisplayMode;	// 64 = 0x40
    double _lastAppearTime;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_loggingQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000218d
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)userEngagedWithWidget;	// IMP=0x0000000000002138
- (void)widgetDidBecomeForeground:(_Bool)arg1;	// IMP=0x00000000000020df
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;	// IMP=0x0000000000002084
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;	// IMP=0x0000000000002035
- (void)widgetDidDisappear;	// IMP=0x0000000000001fd5
- (void)widgetWillDisappear;	// IMP=0x0000000000001fcf
- (void)widgetDidAppear;	// IMP=0x0000000000001f37
- (void)widgetWillAppear;	// IMP=0x0000000000001f2d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000183a

@end

