//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFAction.h>

@interface WFAppendVariableAction : WFAction
{
}

- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;	// IMP=0x000000000021aa39
- (id)accessibilityName;	// IMP=0x000000000021a9a5
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;	// IMP=0x000000000021a7da
- (id)providedVariableNames;	// IMP=0x000000000021a742
- (id)variableName;	// IMP=0x000000000021a6eb
- (_Bool)setParameterState:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000021a57b
- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;	// IMP=0x000000000021a566
- (void)runWithInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000021a2ed

@end
