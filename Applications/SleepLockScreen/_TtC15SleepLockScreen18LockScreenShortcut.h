//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15SleepLockScreen18LockScreenShortcut : NSObject
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *subtitle;	// 24 = 0x18
    MISSING_TYPE *icon;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_gregorianCalendar;	// 0 = 0x0
    MISSING_TYPE *analyticsStore;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *workflow;	// 0 = 0x0
    MISSING_TYPE *localizedAppName;	// 0 = 0x0
    MISSING_TYPE *runnerClient;	// 0 = 0x0
    MISSING_TYPE *progressObservation;	// 0 = 0x0
    MISSING_TYPE *progress;	// 0 = 0x0
    MISSING_TYPE *completedResetTimer;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000004190
- (id)init;	// IMP=0x0010000000004130
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x00100000000040c0
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;	// IMP=0x0010000000003fa0

@end

