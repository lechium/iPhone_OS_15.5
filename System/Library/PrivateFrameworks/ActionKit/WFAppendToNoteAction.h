//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFAppendToNoteAction : WFHandleSystemIntentAction
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000001e3e50
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x00000000001e3d17
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e3a5a
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001e37fb
- (_Bool)skipsProcessingHiddenParameters;	// IMP=0x00000000001e37f3

@end

