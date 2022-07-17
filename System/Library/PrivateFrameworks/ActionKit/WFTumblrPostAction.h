//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSString, TMAPIClient;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource>
{
    TMAPIClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000025d2a4
- (id)generatedResourceNodes;	// IMP=0x000000000025cf39
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000025ce61
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000025ce48
- (id)inputContentClasses;	// IMP=0x000000000025caff
- (_Bool)inputsMultipleItems;	// IMP=0x000000000025ca83
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x000000000025c967
- (id)possibleStatesForEnumeration:(id)arg1;	// IMP=0x000000000025c859
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;	// IMP=0x000000000025c7a7
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000025c6b9
- (void)updateTagsParameterHidden;	// IMP=0x000000000025c562
- (void)openPostWithType:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000000025c285
- (void)openFiles:(id)arg1;	// IMP=0x000000000025bf66
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x000000000025b2c8
@property(readonly, nonatomic) TMAPIClient *client; // @synthesize client=_client;
- (void)initializeParameters;	// IMP=0x000000000025b155

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
