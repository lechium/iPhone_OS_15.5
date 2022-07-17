//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, UIVisualEffectView, _UIContextMenuCellContentView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuSubmenuTitleView
{
    _Bool _highlighted;	// 8 = 0x8
    _Bool _allowsFocus;	// 9 = 0x9
    _UIContextMenuCellContentView *_contentView;	// 16 = 0x10
    UIVisualEffectView *_obscuringMaterialView;	// 24 = 0x18
    UIVisualEffectView *_bgView;	// 32 = 0x20
    UIView *_highlightedBgView;	// 40 = 0x28
    UIView *_separator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000008b07e7
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *highlightedBgView; // @synthesize highlightedBgView=_highlightedBgView;
@property(retain, nonatomic) UIVisualEffectView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIVisualEffectView *obscuringMaterialView; // @synthesize obscuringMaterialView=_obscuringMaterialView;
@property(readonly, nonatomic) _UIContextMenuCellContentView *contentView; // @synthesize contentView=_contentView;
- (_Bool)_wantsKeyEventsWhenDeferred;	// IMP=0x00000000008b070a
- (long long)_focusItemDeferralMode;	// IMP=0x00000000008b06f1
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000008b064e
- (_Bool)canBecomeFocused;	// IMP=0x00000000008b063c
- (void)addObscuringMaterialViewWithGroupName:(id)arg1;	// IMP=0x00000000008b04ee
- (void)setBackgroundMaterialGroupName:(id)arg1;	// IMP=0x00000000008b0280
- (void)didMoveToWindow;	// IMP=0x00000000008b018a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008afe2b

@end
