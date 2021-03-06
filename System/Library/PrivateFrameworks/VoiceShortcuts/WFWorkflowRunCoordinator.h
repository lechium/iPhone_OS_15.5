//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/UNUserNotificationCenterDelegate-Protocol.h>
#import <VoiceShortcuts/WFDialogPresentationManagerDelegate-Protocol.h>
#import <VoiceShortcuts/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString, WFApplicationTerminationMonitor, WFDialogPresentationManager, WFLSApplicationStateObserver, WFUIPresenter, WFUserNotificationManager, WFWorkflowRunQueue;
@protocol OS_dispatch_queue, WFDatabaseProvider;

@interface WFWorkflowRunCoordinator : NSObject <WFDialogPresentationManagerDelegate, WFOutOfProcessWorkflowControllerDelegate, UNUserNotificationCenterDelegate>
{
    WFUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    WFUIPresenter *_userInterfacePresenter;	// 16 = 0x10
    id <WFDatabaseProvider> _databaseProvider;	// 24 = 0x18
    WFWorkflowRunQueue *_runRequestQueue;	// 32 = 0x20
    NSMutableDictionary *_runningWorkflowCompletionHandlers;	// 40 = 0x28
    NSMutableDictionary *_runningWorkflowControllers;	// 48 = 0x30
    NSMutableDictionary *_runEvents;	// 56 = 0x38
    NSMutableDictionary *_runRequests;	// 64 = 0x40
    WFDialogPresentationManager *_dialogPresentationManager;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSMutableDictionary *_parentRunningContexts;	// 96 = 0x60
    WFApplicationTerminationMonitor *_terminationMonitor;	// 104 = 0x68
    WFLSApplicationStateObserver *_applicationStateObserver;	// 112 = 0x70
}

+ (long long)outOfProcessWorkflowControllerPresentationModeFromVCShortcutPresentationMode:(unsigned long long)arg1;	// IMP=0x000000000004f185
+ (id)errorWithActionCategory;	// IMP=0x000000000004f043
+ (id)errorCategory;	// IMP=0x000000000004f016
- (void).cxx_destruct;	// IMP=0x000000000004dae7
@property(readonly, nonatomic) WFLSApplicationStateObserver *applicationStateObserver; // @synthesize applicationStateObserver=_applicationStateObserver;
@property(readonly, nonatomic) WFApplicationTerminationMonitor *terminationMonitor; // @synthesize terminationMonitor=_terminationMonitor;
@property(readonly, nonatomic) NSMutableDictionary *parentRunningContexts; // @synthesize parentRunningContexts=_parentRunningContexts;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) WFDialogPresentationManager *dialogPresentationManager; // @synthesize dialogPresentationManager=_dialogPresentationManager;
@property(readonly, nonatomic) NSMutableDictionary *runRequests; // @synthesize runRequests=_runRequests;
@property(readonly, nonatomic) NSMutableDictionary *runEvents; // @synthesize runEvents=_runEvents;
@property(readonly, nonatomic) NSMutableDictionary *runningWorkflowControllers; // @synthesize runningWorkflowControllers=_runningWorkflowControllers;
@property(readonly, nonatomic) NSMutableDictionary *runningWorkflowCompletionHandlers; // @synthesize runningWorkflowCompletionHandlers=_runningWorkflowCompletionHandlers;
@property(readonly, nonatomic) WFWorkflowRunQueue *runRequestQueue; // @synthesize runRequestQueue=_runRequestQueue;
@property(readonly, nonatomic) id <WFDatabaseProvider> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
@property(readonly, nonatomic) WFUIPresenter *userInterfacePresenter; // @synthesize userInterfacePresenter=_userInterfacePresenter;
@property(readonly, nonatomic) WFUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d7a5
- (id)queue_contextForWorkflowController:(id)arg1;	// IMP=0x000000000004d4d9
- (id)queue_workflowControllerWithContext:(id)arg1;	// IMP=0x000000000004d430
- (void)getCurrentProgressCompletedForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d322
- (void)stopAllRunningWorkflows;	// IMP=0x000000000004d278
- (_Bool)shortcutWithIdentifierIsRunning:(id)arg1;	// IMP=0x000000000004d143
- (id)allRunningWorkflows;	// IMP=0x000000000004d015
- (void)postNotificationAboutFailure:(id)arg1 inWorkflow:(id)arg2 dialogAttributions:(id)arg3;	// IMP=0x000000000004c5ff
- (void)presentationManager:(id)arg1 updateSmartPromptStateData:(id)arg2 actionUUID:(id)arg3 context:(id)arg4 reference:(id)arg5;	// IMP=0x000000000004c357
- (void)presentationManager:(id)arg1 pauseExecutionOfWorkflowWithContext:(id)arg2;	// IMP=0x000000000004c220
- (void)presentationManager:(id)arg1 cancelExecutionOfWorkflowWithContext:(id)arg2;	// IMP=0x000000000004c0e9
- (void)presentationManager:(id)arg1 didEnqueueDialogRequest:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000004c035
- (unsigned long long)presentationManager:(id)arg1 dialogPresentationModeForRequest:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000004bf44
- (id)presentationManager:(id)arg1 runningContextForContext:(id)arg2;	// IMP=0x000000000004bf2f
- (id)unsupportedDialogResponseWithRequest:(id)arg1;	// IMP=0x000000000004bea9
- (id)presentationManager:(id)arg1 responseForDialogRequest:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000004bdc4
- (_Bool)presentationManager:(id)arg1 shouldPresentDialogRequest:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000004bd16
- (void)queue_notifyObserversWorkflowDidFinishRunningWithResult:(id)arg1 context:(id)arg2;	// IMP=0x000000000004ba3c
- (_Bool)queue_callWorkflowCompletionForContext:(id)arg1 withResult:(id)arg2;	// IMP=0x000000000004b953
- (void)queue_finishWorkflowWithContext:(id)arg1 result:(id)arg2;	// IMP=0x000000000004b725
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithResult:(id)arg2 reference:(id)arg3 dialogAttributions:(id)arg4;	// IMP=0x000000000004b5ea
- (void)outOfProcessWorkflowController:(id)arg1 didStartFromWorkflowReference:(id)arg2 dialogAttributions:(id)arg3;	// IMP=0x000000000004b36d
- (void)queue_runNextQueuedRequestWithType:(unsigned long long)arg1 inQueue:(id)arg2;	// IMP=0x000000000004aefc
- (void)showSingleStepCompletionWithWebClipMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ae20
- (void)stopRunningWorkflowWithRunningContext:(id)arg1;	// IMP=0x000000000004ad6f
- (void)resumeWorkflowFromContext:(id)arg1 withRequest:(id)arg2 presentationMode:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004ac56
- (void)queue_runWorkflowWithRequest:(id)arg1 context:(id)arg2 error:(out id *)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a159
- (void)runWorkflowWithRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a04f
- (void)runWorkflowWithRequest:(id)arg1 context:(id)arg2;	// IMP=0x0000000000049f73
- (_Bool)queue_shouldQueueRunRequest:(id)arg1 queueType:(unsigned long long *)arg2;	// IMP=0x0000000000049922
- (unsigned long long)queueTypeForRunRequest:(id)arg1;	// IMP=0x0000000000049791
- (_Bool)shortcutShouldShowRunningProgress:(id)arg1;	// IMP=0x0000000000049774
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000496c3
- (void)addObserver:(id)arg1;	// IMP=0x0000000000049612
- (id)contextForDialogPresentationForContext:(id)arg1;	// IMP=0x000000000004948a
- (void)removeStaleNotifications;	// IMP=0x000000000004940f
- (id)initWithUserNotificationManager:(id)arg1 databaseProvider:(id)arg2;	// IMP=0x0000000000049009

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

