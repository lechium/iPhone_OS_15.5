//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFRSSFeedExtractAction : WFAction
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x00000000001cf5d8
- (void)getContentDestinationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cf54a
- (void)addRSSFeedItemsFromHTML:(id)arg1 baseURL:(id)arg2 encoding:(id)arg3;	// IMP=0x00000000001cf24d
- (void)getURLsFromInputWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cf11c
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000001cf0d0

@end

