//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MKTransitItemReferenceDateUpdaterDelegate;

@interface MKTransitItemReferenceDateUpdater : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _active;	// 12 = 0xc
    id <MKTransitItemReferenceDateUpdaterDelegate> _delegate;	// 16 = 0x10
}

+ (unsigned long long)_updaterCount;	// IMP=0x000000000027bf20
+ (void)_removeUpdater:(id)arg1;	// IMP=0x000000000027be9a
+ (void)_addUpdater:(id)arg1;	// IMP=0x000000000027bdbb
+ (void)_referenceDateUpdateTimerFired;	// IMP=0x000000000027bd08
+ (void)_cancelReferenceDateUpdate;	// IMP=0x000000000027bc58
+ (void)_scheduleReferenceDateUpdate;	// IMP=0x000000000027b9d3
+ (void)_updateReferenceDate;	// IMP=0x000000000027b5c1
+ (_Bool)_needsUpdateReferenceDate;	// IMP=0x000000000027b4a0
+ (double)referenceDateAsTimeInterval;	// IMP=0x000000000027b442
+ (id)referenceDate;	// IMP=0x000000000027b3df
+ (id)_currentTimeWithRoundedSeconds;	// IMP=0x000000000027b2b4
+ (void)initialize;	// IMP=0x000000000027b1a6
- (void).cxx_destruct;	// IMP=0x000000000027bfa7
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <MKTransitItemReferenceDateUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000027b1d1

@end
