//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIKeyShortcutHUDSearchButton, _UIKeyShortcutHUDShortcutInputView;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDSearchTextField
{
    _UIKeyShortcutHUDSearchButton *_searchButton;	// 8 = 0x8
    _UIKeyShortcutHUDShortcutInputView *_shortcutInputView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000030a400
@property(retain, nonatomic) _UIKeyShortcutHUDShortcutInputView *shortcutInputView; // @synthesize shortcutInputView=_shortcutInputView;
@property(retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton; // @synthesize searchButton=_searchButton;
- (_Bool)_suppressSoftwareKeyboard;	// IMP=0x000000000030a3c2
- (id)preferredFocusEnvironments;	// IMP=0x000000000030a329
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000030a2f6
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000030a2c3
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000030a1a5
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000030a0d0
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x000000000030a01e

@end

