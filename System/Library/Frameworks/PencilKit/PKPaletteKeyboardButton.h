//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKTextInputLanguageSelectionToken, UIImage, UIMenu;

@interface PKPaletteKeyboardButton
{
    UIImage *_indicatorImage;	// 56 = 0x38
    PKTextInputLanguageSelectionToken *_observerToken;	// 64 = 0x40
    _Bool _enableKeyboardToggle;	// 72 = 0x48
    long long _floatingKeyboardType;	// 80 = 0x50
    UIMenu *_keyboardSelectionMenu;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000204b4b
@property(retain, nonatomic) UIMenu *keyboardSelectionMenu; // @synthesize keyboardSelectionMenu=_keyboardSelectionMenu;
@property(nonatomic) _Bool enableKeyboardToggle; // @synthesize enableKeyboardToggle=_enableKeyboardToggle;
@property(nonatomic) long long floatingKeyboardType; // @synthesize floatingKeyboardType=_floatingKeyboardType;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000002047aa
- (void)_updateKeyboardToggleState;	// IMP=0x00000000002046f0
- (void)_updateButtonImage;	// IMP=0x00000000002045ae
- (void)dealloc;	// IMP=0x0000000000204548
- (id)initWithImage:(id)arg1;	// IMP=0x00000000002042e6

@end

