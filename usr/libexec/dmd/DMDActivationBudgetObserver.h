//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSNumber, NSSet, NSString, USBudget, USUsageMonitor;

@interface DMDActivationBudgetObserver
{
    NSString *_calendarIdentifier;	// 8 = 0x8
    NSSet *_notificationTimes;	// 16 = 0x10
    NSNumber *_remainingTime;	// 24 = 0x18
    NSMutableArray *_expiredNotificationTimes;	// 32 = 0x20
    USBudget *_usageBudget;	// 40 = 0x28
    USUsageMonitor *_usageMonitor;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000af7a
@property(retain, nonatomic) USUsageMonitor *usageMonitor; // @synthesize usageMonitor=_usageMonitor;
@property(retain, nonatomic) USBudget *usageBudget; // @synthesize usageBudget=_usageBudget;
@property(retain, nonatomic) NSMutableArray *expiredNotificationTimes; // @synthesize expiredNotificationTimes=_expiredNotificationTimes;
@property(retain, nonatomic) NSNumber *remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) NSSet *notificationTimes; // @synthesize notificationTimes=_notificationTimes;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
- (_Bool)_registerPredicateObserver;	// IMP=0x001000000000ab6e
- (_Bool)_budgetDays:(id)arg1 duration:(id)arg2 calendar:(id)arg3 schedule:(id)arg4;	// IMP=0x001000000000a789
- (_Bool)_extractComponentsFromCompositeBudgetPredicate:(id)arg1;	// IMP=0x0010000000009f9f
- (_Bool)_extractComponentsFromBudgetPredicate:(id)arg1;	// IMP=0x00100000000097d6
- (id)metadata;	// IMP=0x00100000000096bc
- (void)invalidate;	// IMP=0x001000000000941f
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x0010000000008d19
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 compositeBudgetPredicate:(id)arg3;	// IMP=0x0010000000008c24
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 budgetPredicate:(id)arg3;	// IMP=0x0010000000008b2f

@end

