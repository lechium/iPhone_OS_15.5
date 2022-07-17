//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBSStatusBarStyleOverridesAssertion;
@protocol OS_dispatch_queue;

@interface CLLocationSubscriptionStatusBarAssertion : NSObject
{
    SBSStatusBarStyleOverridesAssertion *_assertion;	// 8 = 0x8
    int _pid;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    unsigned long long _timeStarted;	// 40 = 0x28
    _Bool _startedInBackground;	// 48 = 0x30
    _Bool _everBackgrounded;	// 49 = 0x31
    _Bool _backgrounded;	// 50 = 0x32
    int _registration;	// 52 = 0x34
    _Bool _metricValid;	// 56 = 0x38
}

+ (_Bool)isStatusBarAssertionAvailable;	// IMP=0x0020000000830a00
@property(readonly, nonatomic, getter=isMetricValid) _Bool metricValid; // @synthesize metricValid=_metricValid;
- (void)submit:(int)arg1;	// IMP=0x00100000008310d0
- (void)checkAssertion;	// IMP=0x0010000000831083
- (void)setBackgrounded:(_Bool)arg1;	// IMP=0x0010000000831072
- (_Bool)isEnabled;	// IMP=0x0010000000831064
- (void)setDesiredEnablementState:(_Bool)arg1;	// IMP=0x0010000000830c2a
- (void)invalidate:(int)arg1;	// IMP=0x0010000000830b33
- (void)dealloc;	// IMP=0x0010000000830add
- (id)initWithPid:(int)arg1 name:(id)arg2 queue:(id)arg3 backgrounded:(_Bool)arg4 registration:(int)arg5;	// IMP=0x0010000000830a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
