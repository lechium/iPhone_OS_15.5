//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFSendMessageAction : WFHandleSystemIntentAction
{
}

+ (id)userInterfaceXPCInterface;	// IMP=0x000000000033594c
+ (id)userInterfaceProtocol;	// IMP=0x000000000033593b
- (_Bool)isPhotoOrVideo:(id)arg1;	// IMP=0x0000000000337a24
- (_Bool)shouldForceHandleInSiri:(id)arg1;	// IMP=0x00000000003378e4
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000337694
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x00000000003375ee
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(_Bool)arg2;	// IMP=0x000000000033702e
- (id)actionForAppIdentifier:(id)arg1;	// IMP=0x0000000000336cf1
- (void)selectedAppDidChange;	// IMP=0x0000000000336c6e
- (void)initializeParameters;	// IMP=0x0000000000336beb
- (id)recipientsParameter;	// IMP=0x0000000000336bd2
- (void)handleWatchResponse:(id)arg1;	// IMP=0x0000000000336882
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;	// IMP=0x00000000003367c4
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000033669c
- (void)getContentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000033648e
- (void)getAttachmentFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000336378
- (void)getRecipients:(CDUnknownBlockType)arg1;	// IMP=0x0000000000336283
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000033600b
- (id)localizedKeyParameterDisplayName;	// IMP=0x0000000000335ffa
- (id)minimumSupportedClientVersion;	// IMP=0x0000000000335dbd
- (_Bool)skipsProcessingHiddenParameters;	// IMP=0x0000000000335db5
- (_Bool)opensInApp;	// IMP=0x0000000000335d09
- (_Bool)isMessagesAppSelected;	// IMP=0x0000000000335c91
- (id)generatedResourceNodes;	// IMP=0x0000000000335a68

@end
