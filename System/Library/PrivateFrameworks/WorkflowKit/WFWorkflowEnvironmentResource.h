//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFWorkflowReferencing-Protocol.h>

@class NSString, WFWorkflow;

@interface WFWorkflowEnvironmentResource <WFWorkflowReferencing>
{
    WFWorkflow *_workflow;	// 8 = 0x8
}

+ (_Bool)mustBeAvailableForDisplay;	// IMP=0x0000000000335f84
- (void).cxx_destruct;	// IMP=0x00000000003361fd
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void)refreshAvailability;	// IMP=0x00000000003361b1
- (_Bool)workflowEnvironmentIsValid;	// IMP=0x0000000000335fbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

