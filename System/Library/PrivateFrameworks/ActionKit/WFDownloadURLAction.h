//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFDownloadURLAction : WFAction
{
}

+ (_Bool)outputIsExemptFromTaintTrackingInheritance;	// IMP=0x000000000023c03d
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000023cb27
- (void)getContentDestinationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023ca5d
- (void)configureHTTPBodyForRequest:(id)arg1 withMethod:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000023c351
- (void)getContentsOfURLItem:(id)arg1 expectedByteCountHandler:(CDUnknownBlockType)arg2 writtenByteCountHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000023c0d0
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000023c04d
- (_Bool)isProgressIndeterminate;	// IMP=0x000000000023c045

@end
