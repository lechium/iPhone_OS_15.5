//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001d306d
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000001d2f17
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (Class)singleStateClass;	// IMP=0x00000000001d2e2d

@end

