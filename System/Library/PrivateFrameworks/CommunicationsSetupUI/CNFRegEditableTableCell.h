//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSEditableTableCell.h>

@class CNFRegShadowView, UIImage;

__attribute__((visibility("hidden")))
@interface CNFRegEditableTableCell : PSEditableTableCell
{
    SEL _emptyStateSelector;	// 168 = 0xa8
    SEL _didBeginEditingSelector;	// 176 = 0xb0
    SEL _didEndEditingSelector;	// 184 = 0xb8
    id _textChangeObserver;	// 192 = 0xc0
    _Bool _textFieldIsEmpty;	// 200 = 0xc8
    _Bool _skipDelegateCallback;	// 201 = 0xc9
    UIImage *_shadowImage;	// 208 = 0xd0
    CNFRegShadowView *_shadowView;	// 216 = 0xd8
    UIImage *_customCheckmarkImage;	// 224 = 0xe0
    UIImage *_customCheckmarkImageSelected;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000006932e
@property(retain, nonatomic) UIImage *customCheckmarkImageSelected; // @synthesize customCheckmarkImageSelected=_customCheckmarkImageSelected;
@property(retain, nonatomic) UIImage *customCheckmarkImage; // @synthesize customCheckmarkImage=_customCheckmarkImage;
@property(retain, nonatomic) CNFRegShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) _Bool skipDelegateCallback; // @synthesize skipDelegateCallback=_skipDelegateCallback;
- (void)dealloc;	// IMP=0x0000000000069250
- (void)layoutSubviews;	// IMP=0x000000000006906c
- (void)setChecked:(_Bool)arg1;	// IMP=0x0000000000068e3e
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000068d67
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000068d26
- (void)notifyTextFieldDidEndEditing;	// IMP=0x0000000000068c63
- (void)notifyTextFieldDidBeginEditing;	// IMP=0x0000000000068ba0
- (void)_stopListeningForTextChanges;	// IMP=0x0000000000068b21
- (void)_startListeningForTextChanges;	// IMP=0x0000000000068938
- (void)_handleTextChanged;	// IMP=0x00000000000688f3
- (_Bool)_textFieldIsCurrentlyEmpty;	// IMP=0x000000000006882a
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;	// IMP=0x000000000006861d
- (void)textFieldChangedExternally;	// IMP=0x000000000006860b
- (void)setTitle:(id)arg1;	// IMP=0x00000000000685bc
- (void)notifyTextFieldEmptyStateChanged:(_Bool)arg1;	// IMP=0x00000000000684a9
- (void)_updateTextFieldOffsetWithDict:(id)arg1;	// IMP=0x000000000006842d

@end
