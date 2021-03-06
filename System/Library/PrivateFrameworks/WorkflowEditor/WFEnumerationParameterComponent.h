//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WFEnumerationParameter, WFEnumerationSegmentedControlComponent, WFVariableSubstitutableParameterState;
@protocol WFComponentNavigationContext, WFVariableProvider, WFVariableUIDelegate;

@interface WFEnumerationParameterComponent
{
    _Bool _processing;	// 8 = 0x8
    WFEnumerationParameter *_parameter;	// 16 = 0x10
    CDUnknownBlockType _updateBlock;	// 24 = 0x18
    WFVariableSubstitutableParameterState *_state;	// 32 = 0x20
    WFEnumerationSegmentedControlComponent *_segmentedControlComponent;	// 40 = 0x28
    id <WFVariableProvider> _variableProvider;	// 48 = 0x30
    id <WFVariableUIDelegate> _variableUIDelegate;	// 56 = 0x38
    id <WFComponentNavigationContext> _navigationContext;	// 64 = 0x40
}

+ (_Bool)editsMultipleValues;	// IMP=0x00000000002e8fd2
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;	// IMP=0x00000000002e83a9
+ (unsigned long long)variableResultTypeForParameter:(id)arg1;	// IMP=0x00000000002e8352
- (void).cxx_destruct;	// IMP=0x00000000002e9126
@property(readonly, nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, nonatomic) id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate; // @synthesize variableUIDelegate=_variableUIDelegate;
@property(readonly, nonatomic) __weak id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) WFEnumerationSegmentedControlComponent *segmentedControlComponent; // @synthesize segmentedControlComponent=_segmentedControlComponent;
@property(readonly, nonatomic) WFVariableSubstitutableParameterState *state; // @synthesize state=_state;
- (CDUnknownBlockType)updateBlock;	// IMP=0x00000000002e90a0
@property(readonly, nonatomic) __weak WFEnumerationParameter *parameter; // @synthesize parameter=_parameter;

@end

