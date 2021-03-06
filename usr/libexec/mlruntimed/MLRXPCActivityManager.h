//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLRXPCActivityManager : NSObject
{
    _Bool _submissionWasAllowed;	// 8 = 0x8
    _Bool _hasRegistered;	// 9 = 0x9
}

+ (void)initialize;	// IMP=0x004000000001460f
- (id)createXPCActivityTasks;	// IMP=0x0020000000015611
- (void)setCriteriaForXPCActivityIfNeeded:(id)arg1 criteria:(id)arg2;	// IMP=0x001000000001550c
- (void)registerWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000154f9
- (void)unregisterXPCActivityWithIdentifier:(const char *)arg1;	// IMP=0x00100000000154ec
- (_Bool)shouldDeferForXPCActivity:(id)arg1;	// IMP=0x00100000000154df
- (void)addEligibilityChangedHandlerForActivity:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000154cf
- (long long);	// IMP=0x00100000000154c2
- (_Bool)setStateForXPCActivity:(id)arg1 state:(long long)arg2;	// IMP=0x001000000001545b
- (_Bool)submissionAllowed;	// IMP=0x0010000000015451
- (void)registerIfNeeded;	// IMP=0x0010000000014efb
- (void)runActivityTask:(id)arg1;	// IMP=0x00100000000149d2
- (void)handleDeferActivityTask:(id)arg1 withStartTime:(double)arg2;	// IMP=0x001000000001483f
- (void)handleCompleteActivityTask:(id)arg1 withError:(id)arg2;	// IMP=0x001000000001465d

@end

