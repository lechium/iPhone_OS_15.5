//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/WFWorkflowRunnerClientDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC14WorkflowEditorP33_D3B5BE58827CE83B51740B96DEF4AF9020EditorShortcutRunner : NSObject <WFWorkflowRunnerClientDelegate>
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *workflow;	// 24 = 0x18
    MISSING_TYPE *runningState;	// 32 = 0x20
    MISSING_TYPE *runnerClient;	// 56 = 0x38
    MISSING_TYPE *actionIndexObservation;	// 64 = 0x40
    MISSING_TYPE *actionFractionCompletedObservation;	// 72 = 0x48
    MISSING_TYPE *workflowRunningProgress;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000128c20
- (id)init;	// IMP=0x0000000000128ba0
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4;	// IMP=0x0000000000128b10
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;	// IMP=0x0000000000128aa0

@end
