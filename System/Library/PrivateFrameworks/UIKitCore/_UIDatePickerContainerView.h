//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView, _UIDatePickerOverlayPresentation, _UIPassthroughScrollInteraction;

__attribute__((visibility("hidden")))
@interface _UIDatePickerContainerView
{
    _Bool _lastHitTestWasPassedThrough;	// 120 = 0x78
    _UIDatePickerOverlayPresentation *_presentation;	// 128 = 0x80
    _UIPassthroughScrollInteraction *_passthroughInteraction;	// 136 = 0x88
    UIView *_contentView;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000011719b0
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool lastHitTestWasPassedThrough; // @synthesize lastHitTestWasPassedThrough=_lastHitTestWasPassedThrough;
@property(retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // @synthesize passthroughInteraction=_passthroughInteraction;
@property(retain, nonatomic) _UIDatePickerOverlayPresentation *presentation; // @synthesize presentation=_presentation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000011715fc
- (_Bool)isTransparentFocusItem;	// IMP=0x00000000011715f4
- (void)didMoveToWindow;	// IMP=0x000000000117155a
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000011714e9
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000117137e
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001171213
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011710af

@end
