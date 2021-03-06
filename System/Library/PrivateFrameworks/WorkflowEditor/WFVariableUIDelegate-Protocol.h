//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class NSString, UIResponder, UIView, WFAction, WFVariableEditingOptions;
@protocol WFVariableProvider;

@protocol WFVariableUIDelegate <NSObject>
- (void)revealAction:(WFAction *)arg1 fromSourceView:(UIView *)arg2 preScrollHandler:(void (^)(void))arg3 goBackHandler:(void (^)(void))arg4 scrolledAwayHandler:(void (^)(void))arg5;
- (void)showActionOutputPickerFromSourceResponder:(UIResponder *)arg1 allowShortcutInput:(_Bool)arg2 variableProvider:(id <WFVariableProvider>)arg3 completionHandler:(void (^)(WFVariable *))arg4;

@optional
- (void)showVariableEditorWithOptions:(WFVariableEditingOptions *)arg1 fromSourceRect:(struct CGRect)arg2;
- (void)showParameterEditingHint:(NSString *)arg1;
@end

