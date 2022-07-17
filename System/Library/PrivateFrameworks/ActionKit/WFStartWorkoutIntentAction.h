//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFStartWorkoutIntentAction : WFHandleSystemIntentAction
{
}

+ (id)workoutActivityTypeToWorkoutIdentifier;	// IMP=0x00000000002d4243
+ (id)unitStringsToWorkoutGoalUnits;	// IMP=0x00000000002d4236
- (id)actionForAppIdentifier:(id)arg1;	// IMP=0x00000000002d422e
- (void)resourceAvailabilityChanged;	// IMP=0x00000000002d41f1
- (void)wasRemovedFromWorkflow:(id)arg1;	// IMP=0x00000000002d4179
- (void)wasAddedToWorkflow:(id)arg1;	// IMP=0x00000000002d40f1
- (void)initializeParameters;	// IMP=0x00000000002d4049
- (_Bool)isParameterHidden:(id)arg1;	// IMP=0x00000000002d3fd2
- (id)workoutTypeParameter;	// IMP=0x00000000002d3f6b
- (id)goalParameter;	// IMP=0x00000000002d3f04
- (unsigned long long)normalizedWorkoutActivityType:(unsigned long long)arg1;	// IMP=0x00000000002d3ed6
- (id)selectedAppNotSupportedError;	// IMP=0x00000000002d3d5f
- (id)identifierForActivityType:(unsigned long long)arg1;	// IMP=0x00000000002d3b59
- (id)workoutGoalUnitTypeNumberForUnitString:(id)arg1;	// IMP=0x00000000002d3abc
- (id)location;	// IMP=0x00000000002d396f
- (id)goalUnitTypeFromValue:(id)arg1;	// IMP=0x00000000002d386e
- (id)kjGoalConvertedToJ:(id)arg1;	// IMP=0x00000000002d3739
- (id)kmGoalConvertedToM:(id)arg1;	// IMP=0x00000000002d3604
- (_Bool)isKjGoal:(id)arg1;	// IMP=0x00000000002d35b6
- (_Bool)isKmGoal:(id)arg1;	// IMP=0x00000000002d3568
- (id)goalValueFromValue:(id)arg1;	// IMP=0x00000000002d3482
- (id)workoutNameForActivityType:(id)arg1;	// IMP=0x00000000002d3313
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000002d3096
- (id)parameterForSlot:(id)arg1;	// IMP=0x00000000002d2fb3
- (id)icon;	// IMP=0x00000000002d2ea1
- (id)appResource;	// IMP=0x00000000002d2e99
- (_Bool)skipsProcessingHiddenParameters;	// IMP=0x00000000002d2e91
- (_Bool)allowsContinueInAppWhenRunningRemotely;	// IMP=0x00000000002d2e89

@end
