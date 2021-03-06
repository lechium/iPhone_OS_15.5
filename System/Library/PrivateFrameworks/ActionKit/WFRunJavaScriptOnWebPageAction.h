//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFRemoteQuarantinePolicyEvaluatorDelegate-Protocol.h>

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>
{
}

- (id)parameterSummary;	// IMP=0x00000000003692b0
- (id)name;	// IMP=0x000000000036929f
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000003691c7
- (id)noWebPageProvidedError;	// IMP=0x00000000003690b5
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;	// IMP=0x00000000003690a3
- (id)_getErrorFromScript:(id)arg1;	// IMP=0x0000000000368fa2
- (void)getWebPageFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000368eeb
- (void)evaluateQuarantineWithJavaScript:(id)arg1 webPageURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000368d3e
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000368bae
- (id)invalidJavaScriptErrorWithSyntaxErrorString:(id)arg1;	// IMP=0x0000000000368aa7
- (id)missingCompletionError;	// IMP=0x0000000000368995

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

