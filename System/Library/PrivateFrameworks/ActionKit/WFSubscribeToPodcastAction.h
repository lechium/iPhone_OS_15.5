//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFSubscribeToPodcastAction : WFAction
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000363b21
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000363af9
- (id)errorSubscribingToPodcast:(unsigned int)arg1;	// IMP=0x0000000000363abb
- (id)genericSubscribeFailedError;	// IMP=0x00000000003639a1
- (id)contentNotFoundError;	// IMP=0x0000000000363887
- (void)subscribeToPodcast:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003635db
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x00000000003634e8

@end
