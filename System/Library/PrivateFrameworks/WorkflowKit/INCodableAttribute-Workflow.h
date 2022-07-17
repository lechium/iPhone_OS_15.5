//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableAttribute.h>

#import <WorkflowKit/WFIntentParameterDescription-Protocol.h>

@class NSString;

@interface INCodableAttribute (Workflow) <WFIntentParameterDescription>
- (id)wf_processedParameterValueForValue:(id)arg1;	// IMP=0x00000000001c6330
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x00000000001c62cb
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x00000000001c62c3
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c62b0
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x00000000001c5d60
@property(readonly, nonatomic) Class wf_parameterClass;
@property(readonly, nonatomic) _Bool wf_multipleValues;
- (id)wf_outputDisplayNameWithLocalizer:(id)arg1;	// IMP=0x00000000001c5d2d
@property(readonly, nonatomic) Class wf_contentItemClass;
@property(readonly, nonatomic) Class wf_facadeClass;
@property(readonly, nonatomic) Class wf_objectClass;
@property(readonly, nonatomic) NSString *wf_slotName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
