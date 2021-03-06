//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>
#import <ActionKit/WFDynamicTagFieldDataSource-Protocol.h>

@class NSString;

@interface WFWordPressPostAction : WFAction <WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource>
{
    id _observer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000027af2f
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x000000000027ae32
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x000000000027ae19
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x000000000027ae04
- (id)possibleStatesForEnumeration:(id)arg1;	// IMP=0x000000000027a26a
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;	// IMP=0x000000000027a1f0
- (id)suggestedTagsForTagField:(id)arg1;	// IMP=0x0000000000279d11
- (void)updateHiddenStates;	// IMP=0x00000000002797cc
- (void)updatePossibleStates;	// IMP=0x0000000000279788
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002796b3
- (void)updateAccountMetadata;	// IMP=0x00000000002791cc
- (void)wasRemovedFromWorkflow:(id)arg1;	// IMP=0x0000000000279154
- (void)wasAddedToWorkflow:(id)arg1;	// IMP=0x0000000000279030
- (void)initializeParameters;	// IMP=0x0000000000278dc7
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000277f9c
- (void)generateHTMLFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000277e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

