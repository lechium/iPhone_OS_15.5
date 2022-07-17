//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;
@protocol OS_dispatch_queue;

@interface WatchControlSettings : NSObject
{
    NSHashTable *_observers;	// 8 = 0x8
    struct os_unfair_lock_s _observersLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_localObserverQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000001a40
- (void).cxx_destruct;	// IMP=0x0000000000002490
- (id)watchControlDomainAccessor;	// IMP=0x00000000000023ec
- (id)accessibilityDomainAccessor;	// IMP=0x0000000000002345
- (void)informLocalObservers;	// IMP=0x000000000000201a
- (void)informObservers;	// IMP=0x0000000000001fdd
- (void)removeSettingsObserver:(id)arg1;	// IMP=0x0000000000001f2c
- (void)addSettingsObserver:(id)arg1;	// IMP=0x0000000000001e31
@property(nonatomic) _Bool featureEnabled;
- (void)dealloc;	// IMP=0x0000000000001c03
- (id)_init;	// IMP=0x0000000000001aa5
- (id)enabledInputSourceTypes;	// IMP=0x00000000000027aa
- (void)_updateInputSourceType:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x00000000000024e3
- (void)disableInputSourceType:(unsigned long long)arg1;	// IMP=0x00000000000024cf
- (void)enableInputSourceType:(unsigned long long)arg1;	// IMP=0x00000000000024b8
@property(nonatomic) _Bool actionMenuLargerSize;
@property(nonatomic) long long actionMenuPosition;
@property(retain, nonatomic) NSArray *actionMenuFavorites;
- (void)resetGreyEventActionCustomizations;	// IMP=0x00000000000037fd
- (id)greyEventActionCustomizations;	// IMP=0x00000000000036dd
- (void)setAction:(unsigned long long)arg1 forGreyEvent:(long long)arg2;	// IMP=0x000000000000336f
@property(readonly, nonatomic) NSArray *eligibleGreyActivationGestures;
@property(nonatomic) long long greyActivationGesture;
@property(nonatomic) _Bool greyQuickActionAutoScrollNotificationsEnabled;
@property(nonatomic) _Bool greyQuickActionsEnabled;
@property(nonatomic) _Bool hasShownInitialOnboarding;
- (void)resetMotionPointerEdgeActionCustomizations;	// IMP=0x0000000000004c75
- (id)motionPointerEdgeActionCustomizations;	// IMP=0x0000000000004b55
- (void)setAction:(unsigned long long)arg1 forMotionPointerEdge:(long long)arg2;	// IMP=0x000000000000466f
@property(nonatomic) unsigned long long motionPointerMovementTolerance;
@property(readonly, nonatomic) float motionPointerActivationDurationMax;
@property(readonly, nonatomic) float motionPointerActivationDurationMin;
@property(nonatomic) float motionPointerActivationDuration;
@property(readonly, nonatomic) float motionPointerSensitivityMax;
@property(readonly, nonatomic) float motionPointerSensitivityMin;
@property(nonatomic) float motionPointerSensitivity;
@property(nonatomic) unsigned long long dwellControlTimerAction;
@property(nonatomic) _Bool dwellControlShakeToStart;
@property(nonatomic) _Bool dwellControlEnabled;
@property(nonatomic) _Bool focusRingHighContrastEnabled;
@property(nonatomic) long long focusRingColor;
@property(nonatomic) unsigned long long defaultAutoScrollSpeed;
@property(nonatomic) unsigned long long autoFocusNavigationSpeed;
@property(nonatomic) long long focusMovementStyle;
@property(nonatomic) _Bool playDetectedGestureHapticFeedback;
@property(nonatomic) _Bool disablePPGDataSource;
@property(nonatomic) _Bool showGestureRecognizerIndicator;
@property(nonatomic) _Bool showDetectedGestureBanner;
@property(nonatomic) _Bool automationServerEnabled;
@property(nonatomic) _Bool falsePositiveLoggingEnabled;

@end
