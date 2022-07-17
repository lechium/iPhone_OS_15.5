//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSSet, NSString, WFAlert, WFVariable;
@protocol WFUIKitUserInterface;

@interface WFTextTokenChooser : NSObject
{
    _Bool _showsClearButton;	// 8 = 0x8
    _Bool _showsDoneButton;	// 9 = 0x9
    NSString *_title;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    NSString *_noChoicesMessage;	// 32 = 0x20
    NSSet *_allowedVariableTypes;	// 40 = 0x28
    NSArray *_additionalButtons;	// 48 = 0x30
    long long _maximumSelectableItemsCount;	// 56 = 0x38
    WFVariable *_selectedVariable;	// 64 = 0x40
    NSIndexSet *_selectedButtonIndexes;	// 72 = 0x48
    CDUnknownBlockType _choiceHandler;	// 80 = 0x50
    CDUnknownBlockType _cancelHandler;	// 88 = 0x58
    NSArray *_auxiliaryButtons;	// 96 = 0x60
    WFAlert *_presentedAlert;	// 104 = 0x68
    id <WFUIKitUserInterface> _userInterface;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000002ecb25
@property(nonatomic) __weak id <WFUIKitUserInterface> userInterface; // @synthesize userInterface=_userInterface;
@property(retain, nonatomic) WFAlert *presentedAlert; // @synthesize presentedAlert=_presentedAlert;
@property(copy, nonatomic) NSArray *auxiliaryButtons; // @synthesize auxiliaryButtons=_auxiliaryButtons;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType choiceHandler; // @synthesize choiceHandler=_choiceHandler;
@property(retain, nonatomic) NSIndexSet *selectedButtonIndexes; // @synthesize selectedButtonIndexes=_selectedButtonIndexes;
@property(retain, nonatomic) WFVariable *selectedVariable; // @synthesize selectedVariable=_selectedVariable;
@property(nonatomic) long long maximumSelectableItemsCount; // @synthesize maximumSelectableItemsCount=_maximumSelectableItemsCount;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) _Bool showsClearButton; // @synthesize showsClearButton=_showsClearButton;
@property(copy, nonatomic) NSArray *additionalButtons; // @synthesize additionalButtons=_additionalButtons;
@property(copy, nonatomic) NSSet *allowedVariableTypes; // @synthesize allowedVariableTypes=_allowedVariableTypes;
@property(copy, nonatomic) NSString *noChoicesMessage; // @synthesize noChoicesMessage=_noChoicesMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)textTokenChooserButtonForVariable:(id)arg1 selected:(_Bool)arg2;	// IMP=0x00000000002ec862
- (void)updateButtonsInAlert:(id)arg1;	// IMP=0x00000000002ec4d0
- (void)updateButtonsInPresentedView;	// IMP=0x00000000002ec489
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ec37f
- (void)presentMenuFromPresentationAnchor:(id)arg1;	// IMP=0x00000000002ec174
- (_Bool)shouldShowVariable:(id)arg1 allowedVariableTypes:(id)arg2 variableProvider:(id)arg3 variableUIDelegate:(id)arg4;	// IMP=0x00000000002ebfd3
- (_Bool)displaysAnyVariablesWithAllowedVariableTypes:(id)arg1 variableProvider:(id)arg2 variableUIDelegate:(id)arg3;	// IMP=0x00000000002ebe77
- (void)presentWithVariableProvider:(id)arg1 variableUIDelegate:(id)arg2 presentationAnchor:(id)arg3;	// IMP=0x00000000002eb05b
- (id)init;	// IMP=0x00000000002eafb7

@end
