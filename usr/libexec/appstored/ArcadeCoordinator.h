//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ArcadeCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

+ (id)sharedCoordinator;	// IMP=0x0020000000086985
- (void).cxx_destruct;	// IMP=0x00200000000884f6
- (_Bool)_removeBadgeIDs:(id)arg1 keepID:(_Bool)arg2 logKey:(id)arg3;	// IMP=0x0010000000088137
- (_Bool)_removeAllBadgeIDsWithLogKey:(id)arg1;	// IMP=0x0010000000088062
- (long long)_hardwareOfferCountWithLogKey:(id)arg1;	// IMP=0x0010000000087f5d
- (id)_allBadgeIDsIDsWithLogKey:(id)arg1 logResults:(_Bool)arg2;	// IMP=0x0010000000087e04
- (_Bool)_addBadgeIDMetrics:(id)arg1 forOfferID:(id)arg2 logKey:(id)arg3;	// IMP=0x0010000000087bee
- (void)_migrateBadgeIDsIfNeeded;	// IMP=0x00100000000878fe
- (_Bool)removeMetricsForBadgeIDs:(id)arg1 logKey:(id)arg2;	// IMP=0x00100000000877c7
- (_Bool)removeBadgeIDs:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000087693
- (_Bool)removeAllBadgeIDsWithLogKey:(id)arg1;	// IMP=0x0010000000087595
- (long long)badgeIDCountWithLogKey:(id)arg1;	// IMP=0x0010000000087495
- (id)allBadgeIDMetricsWithLogKey:(id)arg1;	// IMP=0x001000000008739b
- (id)allBadgeIDsWithLogKey:(id)arg1;	// IMP=0x0010000000087234
- (_Bool)addBadgeIDs:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000086fee
- (void)setupFollowingMigration;	// IMP=0x0010000000086f8d
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000086b23
- (id)init;	// IMP=0x0010000000086a0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

