//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol WFContextualActionRunnerClientDelegate;

@interface WFContextualActionRunnerClient
{
}

- (void)start;	// IMP=0x00000000000035e1
- (void)handleWorkflowRunResult:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000033c9
- (id)initWithContextualAction:(id)arg1 actionContext:(id)arg2;	// IMP=0x0000000000003306

// Remaining properties
@property(nonatomic) __weak id <WFContextualActionRunnerClientDelegate> delegate; // @dynamic delegate;

@end

