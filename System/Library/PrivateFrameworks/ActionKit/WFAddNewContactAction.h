//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFAddNewContactAction : WFAction
{
}

+ (id)userInterfaceXPCInterface;	// IMP=0x00000000001fe820
+ (id)userInterfaceProtocol;	// IMP=0x00000000001fe80f
+ (void)contactFromParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001fe0fd
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000001ff437
- (void)runWithoutUI;	// IMP=0x00000000001ff3a7
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000001ff16e

@end
