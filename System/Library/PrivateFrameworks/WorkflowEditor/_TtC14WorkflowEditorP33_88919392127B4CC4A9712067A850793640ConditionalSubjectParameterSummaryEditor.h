//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC14WorkflowEditorP33_88919392127B4CC4A9712067A850793640ConditionalSubjectParameterSummaryEditor
{
    MISSING_TYPE *chooser;	// 8 = 0x8
    MISSING_TYPE *homeServiceModal;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009e680
- (id)initWithParameter:(id)arg1 initialState:(id)arg2 initialArrayState:(id)arg3 arrayIndex:(long long)arg4 processing:(_Bool)arg5;	// IMP=0x000000000009e5d0
- (id)stateByReplacingVariableFromCurrentState:(id)arg1 withVariable:(id)arg2;	// IMP=0x000000000009c640
- (void)beginVariableMenuForSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x000000000009c5d0
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x000000000009c1b0
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x000000000009bcb0

@end
