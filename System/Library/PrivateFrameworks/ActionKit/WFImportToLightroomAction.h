//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFImportToLightroomAction : WFHandleCustomIntentAction
{
}

- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000025ad57
- (_Bool)populatesInputFromInputParameter;	// IMP=0x000000000025ad4f
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000025a9b8
- (void)initializeParameters;	// IMP=0x000000000025a940
- (id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id *)arg4;	// IMP=0x000000000025a8e8

@end

