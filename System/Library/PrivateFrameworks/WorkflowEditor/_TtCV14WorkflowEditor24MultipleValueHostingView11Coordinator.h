//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/WFMultipleValueEditorViewDelegate-Protocol.h>
#import <WorkflowEditor/WFVariableUIDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtCV14WorkflowEditor24MultipleValueHostingView11Coordinator : NSObject <WFVariableUIDelegate, WFMultipleValueEditorViewDelegate>
{
    MISSING_TYPE *configuration;	// 3484712 = 0x352c28
    MISSING_TYPE *onShowActionOutputPicker;	// 3484712 = 0x352c28
    MISSING_TYPE *onRevealAction;	// 63508 = 0xf814
}

- (void).cxx_destruct;	// IMP=0x0000000000153a90
- (id)init;	// IMP=0x0000000000153a30
- (void)showParameterEditingHint:(id)arg1;	// IMP=0x0000000000153890
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000153650
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowShortcutInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000153240
- (void)multipleValueEditorView:(id)arg1 didUpdateWithItem:(id)arg2;	// IMP=0x00000000001530a0

@end
