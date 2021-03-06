//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class WFHomeWorkflow;

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor
{
    WFHomeWorkflow *_homeWorkflow;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002864a6
- (void).cxx_destruct;	// IMP=0x0000000000286493
@property(readonly, nonatomic) WFHomeWorkflow *homeWorkflow; // @synthesize homeWorkflow=_homeWorkflow;
- (id)workflowRepresentationWithDatabase:(id)arg1 environment:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000028641e
- (id)description;	// IMP=0x000000000028637c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002862bf
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002861dc
- (id)initWithHomeWorkflow:(id)arg1;	// IMP=0x000000000028615b

@end

