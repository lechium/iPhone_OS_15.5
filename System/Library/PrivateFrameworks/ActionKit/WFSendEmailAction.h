//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
{
    _Bool _contentManaged;	// 8 = 0x8
}

+ (id)userInterfaceProtocol;	// IMP=0x00000000003083dd
@property(nonatomic, getter=isContentManaged) _Bool contentManaged; // @synthesize contentManaged=_contentManaged;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000307130
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000306e85
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;	// IMP=0x0000000000306dfb
- (void)generateEmailFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000306c58
- (void)generateFilesFromCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000306b95
- (void)getRecipientsFromParameterValue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000306af2
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000306611
- (_Bool)requiresRemoteExecution;	// IMP=0x00000000003065e2
- (id)prioritizedParameterKeysForRemoteExecution;	// IMP=0x000000000030657b
- (id)showsWhenRunIfApplicable;	// IMP=0x0000000000306546
- (_Bool)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1;	// IMP=0x00000000003063b7
- (void)handleWatchResponse:(id)arg1;	// IMP=0x0000000000305e3d
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x0000000000305d40
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000305be4
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003059f6
- (_Bool)checkManagementLevel:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003054df
- (void)prepareEmailContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003052fb
- (_Bool)populatesInputFromInputParameter;	// IMP=0x00000000003052f3
- (id)requiredResourcesForIntentAvailableResource;	// IMP=0x00000000003051ef

@end
