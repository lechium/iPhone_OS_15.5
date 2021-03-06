//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPButtonStyle, LPCaptionButtonPresentationProperties, UIButton;

__attribute__((visibility("hidden")))
@interface LPCaptionBarButtonView
{
    LPCaptionButtonPresentationProperties *_properties;	// 8 = 0x8
    LPButtonStyle *_style;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    UIButton *_collapsedButton;	// 32 = 0x20
    _Bool _collapsed;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000badac
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
- (id)_createCollapsedButton;	// IMP=0x00000000000bac62
- (id)_createButton;	// IMP=0x00000000000ba6aa
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000ba626
- (void)addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000ba5a2
- (struct CGSize)collapsedSizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ba585
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ba568
- (void)layoutComponentView;	// IMP=0x00000000000ba3c8
- (id)initWithHost:(id)arg1 properties:(id)arg2 style:(id)arg3;	// IMP=0x00000000000ba266
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000ba258

@end

