//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FeatureDiscoveryModel, NSDate, NSString;
@protocol FeatureDiscoverySourceDelegate;

__attribute__((visibility("hidden")))
@interface DTMFeatureDiscoverySource : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _dismissed;	// 12 = 0xc
    _Bool _available;	// 13 = 0xd
    NSDate *_recentsCutoffDate;	// 16 = 0x10
    id <FeatureDiscoverySourceDelegate> _delegate;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    long long _transportType;	// 40 = 0x28
    long long _repeatedTransportType;	// 48 = 0x30
    FeatureDiscoveryModel *_model;	// 56 = 0x38
}

+ (void)resetAllPreviousDismissals;	// IMP=0x00200000003066f4
- (void).cxx_destruct;	// IMP=0x0020000000306821
@property(retain, nonatomic) FeatureDiscoveryModel *model; // @synthesize model=_model;
@property(nonatomic) long long repeatedTransportType; // @synthesize repeatedTransportType=_repeatedTransportType;
@property(nonatomic) long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <FeatureDiscoverySourceDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_targetForTransportType:(long long)arg1;	// IMP=0x001000000030679f
- (void)_recordDismissalForTransportType:(long long)arg1;	// IMP=0x0010000000306444
- (_Bool)_userPreviouslyDismissedTransportType:(long long)arg1;	// IMP=0x0010000000306379
- (long long)_performRemovalForTransportType;	// IMP=0x0010000000306332
- (void)_dismiss;	// IMP=0x00100000003062a4
- (void)_performDTMActionWithPreference:(long long)arg1;	// IMP=0x0010000000306058
- (void)_didDisplayModelForPreference:(long long)arg1;	// IMP=0x0010000000305e52
- (void)_reloadAvailability;	// IMP=0x0010000000305c93
- (id)_bestModelForCurrentState;	// IMP=0x0010000000304f1b
- (long long)_fetchRepeatedRecentTransportType;	// IMP=0x00100000003048c4
- (void)setTransportType:(long long)arg1 routeCollection:(id)arg2;	// IMP=0x001000000030467d
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)initWithPriority:(long long)arg1 delegate:(id)arg2;	// IMP=0x001000000030459c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
