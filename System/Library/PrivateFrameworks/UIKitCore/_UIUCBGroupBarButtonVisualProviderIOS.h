//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS
{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;	// 56 = 0x38
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;	// 64 = 0x40
    _Bool _lightKeyboard;	// 72 = 0x48
    UIColor *_tintColor;	// 80 = 0x50
}

+ (id)darkKeyboardProvider;	// IMP=0x000000000012dc60
+ (id)lightKeyboardProvider;	// IMP=0x000000000012dc43
- (void).cxx_destruct;	// IMP=0x000000000012e514
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
- (void)setTintColor:(id)arg1;	// IMP=0x000000000012e4e3
- (id)tintColor;	// IMP=0x000000000012e4d2
- (struct CGPoint)menuAnchorPoint;	// IMP=0x000000000012e310
- (_Bool)shouldLift;	// IMP=0x000000000012e2ea
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x000000000012df6a
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;	// IMP=0x000000000012df4b
- (id)imageSymbolConfiguration;	// IMP=0x000000000012dea4
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x000000000012dda5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012dd49
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012dc85
- (long long)_securePasteButtonSite;	// IMP=0x000000000012dc7d

@end
