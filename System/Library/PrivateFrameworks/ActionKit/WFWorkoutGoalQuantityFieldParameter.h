//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFQuantityFieldParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSArray, NSString, WFAction;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>
{
    NSArray *_possibleUnits;	// 8 = 0x8
    id _defaultSerializedRepresentation;	// 16 = 0x10
    WFAction *_action;	// 24 = 0x18
}

+ (id)unitConversion;	// IMP=0x000000000026ff7a
- (void).cxx_destruct;	// IMP=0x000000000026fafa
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)setPossibleUnits:(id)arg1;	// IMP=0x000000000026fad0
- (id)possibleUnits;	// IMP=0x000000000026fabf
- (id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3;	// IMP=0x000000000026f9e4
- (_Bool)parameterStateIsValid:(id)arg1;	// IMP=0x000000000026f922
- (void)updatePossibleUnits;	// IMP=0x000000000026f6ad
- (void)updateCurrentStateWithNewUnitString:(id)arg1 currentState:(id)arg2;	// IMP=0x000000000026f5af
- (id)defaultState;	// IMP=0x000000000026f37d
- (id)defaultSerializedRepresentation;	// IMP=0x000000000026f302
- (void)availableUnitsForWorkoutActivityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000026f2e9
- (unsigned long long)currentWorkoutActivityType;	// IMP=0x000000000026f202
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;	// IMP=0x000000000026f141
- (void)wasRemovedFromWorkflow;	// IMP=0x000000000026f0bf
- (void)wasAddedToWorkflow;	// IMP=0x000000000026f036

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

