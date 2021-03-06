//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIEditorTemplateViewDelegate-Protocol.h>

@class NSString, SKUIButtonViewElement, SKUIEditorTemplateView, SKUIEditorTemplateViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorDocumentViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController>
{
    SKUIButtonViewElement *_doneButtonElement;	// 8 = 0x8
    SKUIEditorTemplateView *_editorView;	// 16 = 0x10
    _Bool _isTextChanged;	// 24 = 0x18
    struct CGRect _keyboardFrame;	// 32 = 0x20
    SKUIViewElementLayoutContext *_layoutContext;	// 64 = 0x40
    SKUIButtonViewElement *_resetButtonElement;	// 72 = 0x48
    SKUIEditorTemplateViewElement *_templateElement;	// 80 = 0x50
    struct CGRect _toolbarFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002530c6
- (void)_updateEditorViewInset;	// IMP=0x000000000025304d
- (void)_updateBiographyWithText:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000252b02
- (void)_sendDoneEventAndDismissWithText:(id)arg1;	// IMP=0x00000000002529fe
- (void)_sendCancelEventAndDismiss;	// IMP=0x000000000025292a
- (void)_resetTextView;	// IMP=0x00000000002528ab
- (void)_resetButtonAction;	// IMP=0x0000000000252398
- (id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2;	// IMP=0x00000000002521e9
- (void)_layoutNavigation;	// IMP=0x0000000000251f50
- (void)_layoutEditorView;	// IMP=0x0000000000251eca
- (id)_layoutContext;	// IMP=0x0000000000251dfe
- (id)_backgroundColor;	// IMP=0x0000000000251d55
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000251afd
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000251ace
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000251a7b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000251a28
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002519cb
- (void)loadView;	// IMP=0x0000000000251890
- (void)didChangeTextInEditorTemplateView:(id)arg1;	// IMP=0x000000000025186b
- (void)documentDidUpdate:(id)arg1;	// IMP=0x00000000002517d0
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000251731
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x000000000025161e
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000025150b
- (void)_cancelButtonAction;	// IMP=0x00000000002514f9
- (void)_doneButtonAction;	// IMP=0x0000000000251385
- (void)dealloc;	// IMP=0x00000000002512b3
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x00000000002511a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

