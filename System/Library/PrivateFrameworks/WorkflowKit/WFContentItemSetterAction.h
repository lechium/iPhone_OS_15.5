//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>

@class NSArray, NSString, WFContentProperty;

@interface WFContentItemSetterAction <WFDynamicEnumerationDataSource>
{
}

- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;	// IMP=0x0000000000209503
- (id)contentDestinationWithError:(id *)arg1;	// IMP=0x0000000000209331
- (id)appContentDestinationForSystemAppBundleIdentifier:(id)arg1;	// IMP=0x0000000000209263
- (id)setAdditionalPropertyIfNecessaryForValue:(id)arg1;	// IMP=0x0000000000208bbe
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000208685
- (void)userValueForSelectedPropertyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000208354
- (void)runAsynchronouslyWithInput:(id)arg1;	// IMP=0x0000000000207c1e
- (id)changeTransactionWithInput:(id)arg1;	// IMP=0x0000000000207c09
- (_Bool)enumerationShouldProvideValuesForParameterSummaryLocalization:(id)arg1;	// IMP=0x0000000000207c01
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x000000000020792c
- (id)possibleStatesForEnumeration:(id)arg1;	// IMP=0x00000000002076c1
- (id)displayStringForTransactionModeState:(id)arg1;	// IMP=0x0000000000207579
- (void)setPromptForSelectedParameter;	// IMP=0x00000000002071e8
- (id)parameterDefinitions;	// IMP=0x0000000000206045
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000205d6c
- (id)requiredResourceForProperty:(id)arg1;	// IMP=0x0000000000205b47
- (id)parameterKeyForProperty:(id)arg1;	// IMP=0x0000000000205a55
- (void)initializeParameters;	// IMP=0x0000000000205938
- (_Bool)outputsMultipleItems;	// IMP=0x0000000000205930
- (_Bool)inputsMultipleItems;	// IMP=0x0000000000205928
- (id)defaultOutputName;	// IMP=0x00000000002058c4
@property(readonly, nonatomic) WFContentProperty *selectedProperty;
- (id)outputContentClasses;	// IMP=0x000000000020574d
- (id)inputParameterKey;	// IMP=0x0000000000205740
- (_Bool)inputRequired;	// IMP=0x0000000000205738
- (id)keywords;	// IMP=0x00000000002056a0
- (id)descriptionSummary;	// IMP=0x00000000002055e1
- (id)parameterSummaryDefinition;	// IMP=0x0000000000204a68
- (id)name;	// IMP=0x00000000002049cb
@property(readonly, nonatomic) NSArray *properties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

