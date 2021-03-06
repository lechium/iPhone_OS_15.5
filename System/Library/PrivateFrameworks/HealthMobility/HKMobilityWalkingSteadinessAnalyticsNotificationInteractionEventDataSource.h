//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthMobility/HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider-Protocol.h>

@class HKHealthStore, NSString;

@interface HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSource : NSObject <HKMobilityWalkingSteadinessAnalyticsNotificationInteractionEventDataSourceProvider>
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    NSString *_category;	// 16 = 0x10
    NSString *_actionIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000004b03
- (id)_walkingSteadinessEventValueForCategory:(id)arg1;	// IMP=0x0000000000004a41
- (id)notificationTypeWithError:(id *)arg1;	// IMP=0x00000000000049c0
- (id)notificationInteractionTypeWithError:(id *)arg1;	// IMP=0x00000000000049a0
- (id)notificationClassificationWithError:(id *)arg1;	// IMP=0x000000000000491f
- (id)biologicalSexWithError:(id *)arg1;	// IMP=0x00000000000048fc
- (id)ageWithError:(id *)arg1;	// IMP=0x00000000000048d9
- (id)initWithHealthStore:(id)arg1 category:(id)arg2 action:(id)arg3;	// IMP=0x0000000000004822

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

