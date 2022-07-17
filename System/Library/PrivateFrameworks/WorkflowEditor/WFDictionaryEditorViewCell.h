//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, WFTextTokenEditorView;

@interface WFDictionaryEditorViewCell
{
    UIView *_separatorView;	// 120 = 0x78
    WFTextTokenEditorView *_keyEditor;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000225f41
@property(readonly, nonatomic) __weak WFTextTokenEditorView *keyEditor; // @synthesize keyEditor=_keyEditor;
@property(readonly, nonatomic) __weak UIView *separatorView; // @synthesize separatorView=_separatorView;
- (void)setAllowedVariableTypes:(id)arg1;	// IMP=0x0000000000225e7b
- (void)setVariablesDisabled:(_Bool)arg1;	// IMP=0x0000000000225e04
- (void)setVariableProvider:(id)arg1;	// IMP=0x0000000000225d70
- (void)configureEditorViewController:(id)arg1;	// IMP=0x0000000000225c3a
- (void)updateEditorBlocks;	// IMP=0x0000000000225937
- (void)beginEditingWithContext:(id)arg1;	// IMP=0x0000000000225872
- (void)setValue:(id)arg1;	// IMP=0x000000000022578e
- (id)valueEditorValue;	// IMP=0x0000000000225736
- (id)valueTitle;	// IMP=0x00000000002256bc
- (void)updateWithValueState:(id)arg1;	// IMP=0x00000000002254ab
- (_Bool)becomeFirstResponder;	// IMP=0x0000000000225467
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002253f3
- (void)layoutSubviews;	// IMP=0x0000000000225039
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000224df9

@end
