//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
    id _observer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d2bde
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002d2b66
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002d29d2
- (void)possibleStatesDidChange;	// IMP=0x00000000002d2978
- (void)updateBoards;	// IMP=0x00000000002d280d
- (void)wasRemovedFromWorkflow;	// IMP=0x00000000002d2772
- (void)wasAddedToWorkflow;	// IMP=0x00000000002d2625
- (Class)singleStateClass;	// IMP=0x00000000002d2614

@end

