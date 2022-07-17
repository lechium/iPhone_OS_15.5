//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AMSUserNotificationStrategy;

@interface AMSUserNotificationCenter : NSObject
{
    id <AMSUserNotificationStrategy> _strategy;	// 8 = 0x8
}

+ (Class)_determineStrategyForBundleId:(id)arg1;	// IMP=0x0000000000255f18
+ (id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(_Bool)arg4;	// IMP=0x0000000000255e70
+ (id)removeNotification:(id)arg1 centerBundleId:(id)arg2;	// IMP=0x0000000000255de2
+ (id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;	// IMP=0x0000000000255d42
+ (_Bool)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000255923
+ (id)activeNotificationsWithCenterBundleId:(id)arg1;	// IMP=0x00000000002558bb
- (void).cxx_destruct;	// IMP=0x0000000000255f5d
@property(readonly, nonatomic) id <AMSUserNotificationStrategy> strategy; // @synthesize strategy=_strategy;

@end
