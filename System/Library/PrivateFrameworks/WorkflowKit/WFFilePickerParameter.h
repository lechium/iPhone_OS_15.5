//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFWorkflowReferencing-Protocol.h>

@class NSArray, NSString, WFWorkflow;

@interface WFFilePickerParameter <WFWorkflowReferencing>
{
    _Bool _allowsMultipleSelection;	// 8 = 0x8
    _Bool _shouldShowFullContextualPath;	// 9 = 0x9
    WFWorkflow *_workflow;	// 16 = 0x10
    NSArray *_supportedTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e9ec2
@property(readonly) _Bool shouldShowFullContextualPath; // @synthesize shouldShowFullContextualPath=_shouldShowFullContextualPath;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(readonly, nonatomic) NSArray *supportedTypes; // @synthesize supportedTypes=_supportedTypes;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (_Bool)usesDefaultValue;	// IMP=0x00000000001e9d9f
- (id)defaultSerializedRepresentation;	// IMP=0x00000000001e9ca1
- (_Bool)displaysMultipleValueEditor;	// IMP=0x00000000001e9c99
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x00000000001e9c14
- (Class)singleStateClass;	// IMP=0x00000000001e9c03
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001e99a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

