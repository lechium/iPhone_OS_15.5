//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol WFVariableProvider;

@interface _TtC14WorkflowEditor33NumberFieldParameterSummaryEditor
{
    MISSING_TYPE *autocompleteDataSource;	// 8 = 0x8
    MISSING_TYPE *hasStagedChanges;	// 16 = 0x10
    MISSING_TYPE *isPickingActionOutput;	// 17 = 0x11
    MISSING_TYPE *autocompleteCoordinator;	// 24 = 0x18
}

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;	// IMP=0x0000000000090250
- (void).cxx_destruct;	// IMP=0x00000000000913b0
- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(long long)arg4 processing:(_Bool)arg5;	// IMP=0x00000000000912e0
- (void)stageState:(id)arg1;	// IMP=0x0000000000090e60
- (void)textEntryDidFinish;	// IMP=0x0000000000090df0
- (void)textEntryTextDidChange:(id)arg1;	// IMP=0x0000000000090cf0
- (_Bool)textEntryShouldChangeText:(id)arg1;	// IMP=0x00000000000909b0
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;	// IMP=0x0000000000090690
- (id)stateByReplacingVariableFromCurrentState:(id)arg1 withVariable:(id)arg2;	// IMP=0x00000000000902a0
@property(nonatomic, retain) id <WFVariableProvider> variableProvider;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x000000000008fa70
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x000000000008f840

@end

