//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFPHAssetCollectionState : WFVariableSubstitutableParameterState
{
}

+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x0000000000388c9c
+ (id)serializedRepresentationFromValue:(id)arg1;	// IMP=0x0000000000388bc0
+ (Class)processingValueClass;	// IMP=0x0000000000388baf
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000388923
- (id)initWithCollection:(id)arg1;	// IMP=0x000000000038885c

@end

