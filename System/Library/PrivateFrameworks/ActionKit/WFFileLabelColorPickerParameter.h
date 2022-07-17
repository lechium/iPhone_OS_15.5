//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, NSDictionary;

@interface WFFileLabelColorPickerParameter : WFEnumerationParameter
{
    NSArray *_possibleStates;	// 8 = 0x8
    NSDictionary *_localizedLabelsForLabelNumbers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018f502
@property(readonly, nonatomic) NSDictionary *localizedLabelsForLabelNumbers; // @synthesize localizedLabelsForLabelNumbers=_localizedLabelsForLabelNumbers;
- (id)possibleStates;	// IMP=0x000000000018f4e0
- (id)accessoryColorForPossibleState:(id)arg1;	// IMP=0x000000000018f302
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x000000000018f260
- (Class)singleStateClass;	// IMP=0x000000000018f24f
- (id)initWithDefinition:(id)arg1;	// IMP=0x000000000018efae

@end
