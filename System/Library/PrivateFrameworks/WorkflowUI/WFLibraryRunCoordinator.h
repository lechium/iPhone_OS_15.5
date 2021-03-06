//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFWorkflowControllerDelegate-Protocol.h>
#import <WorkflowUI/WFWorkflowRunnerClientDelegate-Protocol.h>

@class NSHashTable, NSProgress, NSString, WFAction, WFDatabase, WFDialogTransformer, WFShortcutsAppRunnerClient, WFWorkflowController, WFWorkflowReference, WFWorkflowRunEvent;
@protocol WFLibraryRunCoordinatorDelegate;

@interface WFLibraryRunCoordinator : NSObject <WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate>
{
    _Bool _waiting;	// 8 = 0x8
    _Bool _isRunOutOfProcess;	// 9 = 0x9
    float _progress;	// 12 = 0xc
    WFWorkflowController *_workflowController;	// 16 = 0x10
    id <WFLibraryRunCoordinatorDelegate> _delegate;	// 24 = 0x18
    WFWorkflowReference *_runningWorkflow;	// 32 = 0x20
    NSString *_source;	// 40 = 0x28
    WFShortcutsAppRunnerClient *_workflowRunnerClient;	// 48 = 0x30
    WFDatabase *_database;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    WFAction *_currentlyRunningAction;	// 72 = 0x48
    CDUnknownBlockType _completionHandler;	// 80 = 0x50
    WFWorkflowRunEvent *_runEvent;	// 88 = 0x58
    WFDialogTransformer *_dialogTransformer;	// 96 = 0x60
    NSProgress *_runningWorkflowProgress;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000189d69
@property(readonly, nonatomic) _Bool isRunOutOfProcess; // @synthesize isRunOutOfProcess=_isRunOutOfProcess;
@property(retain, nonatomic) NSProgress *runningWorkflowProgress; // @synthesize runningWorkflowProgress=_runningWorkflowProgress;
@property(retain, nonatomic) WFDialogTransformer *dialogTransformer; // @synthesize dialogTransformer=_dialogTransformer;
@property(retain, nonatomic) WFWorkflowRunEvent *runEvent; // @synthesize runEvent=_runEvent;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) WFAction *currentlyRunningAction; // @synthesize currentlyRunningAction=_currentlyRunningAction;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) WFShortcutsAppRunnerClient *workflowRunnerClient; // @synthesize workflowRunnerClient=_workflowRunnerClient;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) WFWorkflowReference *runningWorkflow; // @synthesize runningWorkflow=_runningWorkflow;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <WFLibraryRunCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WFWorkflowController *workflowController; // @synthesize workflowController=_workflowController;
- (id)userInterfaceForWorkflowController:(id)arg1;	// IMP=0x0000000000189b24
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;	// IMP=0x0000000000189b12
- (void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;	// IMP=0x0000000000189b0c
- (_Bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000189997
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;	// IMP=0x0000000000189208
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000018916e
- (void)workflowControllerWillRun:(id)arg1;	// IMP=0x0000000000188fd0
- (void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4;	// IMP=0x0000000000188891
- (void)workflowRunnerClient:(id)arg1 didStartRunningWorkflowWithProgress:(id)arg2;	// IMP=0x00000000001887f3
- (_Bool)hasApplication;	// IMP=0x0000000000188789
- (void)accessibilityAnnounce:(id)arg1;	// IMP=0x00000000001886df
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000018866d
- (void)registerObserver:(id)arg1;	// IMP=0x00000000001885fb
- (void)updateProgress:(double)arg1 waiting:(_Bool)arg2 cancelled:(_Bool)arg3 forWorkflow:(id)arg4;	// IMP=0x00000000001883b8
- (void)didFinishRunningWorkflow:(id)arg1 withError:(id)arg2;	// IMP=0x00000000001881d0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000018813f
- (id)view;	// IMP=0x0000000000188031
- (void)stop;	// IMP=0x0000000000187fd4
- (void)runWorkflow:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 state:(id)arg4 requestOutput:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000187bb2
- (void)openWorkflowReferenceAndRun:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 state:(id)arg4 requestOutput:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001879e0
- (void)runWorkflowReference:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 requestOutput:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001879bf
- (void)resumeWorkflowReference:(id)arg1 fromSource:(id)arg2 withState:(id)arg3;	// IMP=0x000000000018799e
- (void)dealloc;	// IMP=0x0000000000187890
- (id)initWithSource:(id)arg1 database:(id)arg2;	// IMP=0x00000000001875ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

