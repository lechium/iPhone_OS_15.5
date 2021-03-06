//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFWorkflowWizardNameViewControllerDelegate-Protocol.h>

@class NSString, UINavigationController, UIViewController, WFDatabase, WFWizardNamePresentationManager, WFWorkflow;
@protocol WFComposeFlowControllerDelegate;

@interface WFComposeFlowController : NSObject <WFWorkflowWizardNameViewControllerDelegate>
{
    id <WFComposeFlowControllerDelegate> _delegate;	// 8 = 0x8
    UIViewController *_presenter;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
    WFDatabase *_database;	// 32 = 0x20
    WFWorkflow *_workflow;	// 40 = 0x28
    WFWizardNamePresentationManager *_presentationManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001872b7
@property(retain, nonatomic) WFWizardNamePresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(readonly, nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) __weak UIViewController *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) __weak id <WFComposeFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)workflowWizardNameViewController:(id)arg1 didFinishWithName:(id)arg2;	// IMP=0x0000000000186f4d
- (void)finishEditing:(_Bool)arg1;	// IMP=0x0000000000186bbf
- (void)startSaveFlow;	// IMP=0x0000000000186a2f
- (void)startCancelFlowWithButton:(id)arg1;	// IMP=0x000000000018678c
@property(readonly, nonatomic) _Bool workflowHasContent;
- (id)initWithPresenter:(id)arg1 navigationController:(id)arg2 database:(id)arg3 workflow:(id)arg4;	// IMP=0x00000000001865be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

