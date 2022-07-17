//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMAnomalyEvent;
@protocol CMAnomalyDelegate, OS_dispatch_queue;

@interface CMAnomalyManager : NSObject
{
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fAppQueue;	// 16 = 0x10
    void *fLocationdConnection;	// 24 = 0x18
    CMAnomalyEvent *fLastReceivedEvent;	// 32 = 0x20
    CMAnomalyEvent *fLastDispatchedEvent;	// 40 = 0x28
    _Bool fRegisteredForNotification;	// 48 = 0x30
    id <CMAnomalyDelegate> _delegate;	// 56 = 0x38
}

+ (long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)arg1;	// IMP=0x0000000000132f50
+ (_Bool)isAnomalyDetectionAvailable;	// IMP=0x00000000001311f7
@property(nonatomic) id <CMAnomalyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateAnomalyEventSOSCallState:(id)arg1 withSOSSCallState:(long long)arg2;	// IMP=0x00000000001335c4
- (void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2;	// IMP=0x00000000001332c0
- (void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2;	// IMP=0x0000000000132fbc
- (void)_sendRegistrationForAnomalyEvent:(id)arg1;	// IMP=0x0000000000132a9e
- (void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2;	// IMP=0x00000000001329f3
- (void)_registerForAnomalyDetection:(_Bool)arg1;	// IMP=0x000000000013290f
- (void)stopAnomalyDetection;	// IMP=0x0000000000132864
- (void)startAnomalyDetection;	// IMP=0x00000000001327b9
- (void)dealloc;	// IMP=0x00000000001326c2
- (id)init;	// IMP=0x00000000001313a8

@end
