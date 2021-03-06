//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIFont, UIImage, UITraitCollection;

@interface WFCustomButtonComponent
{
    struct CGSize _intrinsicSize;	// 8 = 0x8
    NSAttributedString *_attributedTitle;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    UIFont *_titleFont;	// 40 = 0x28
    UIImage *_image;	// 48 = 0x30
    UIImage *_backgroundImage;	// 56 = 0x38
    struct UIEdgeInsets _contentEdgeInsets;	// 64 = 0x40
    double _spacing;	// 96 = 0x60
    long long _numberOfLines;	// 104 = 0x68
    UITraitCollection *_traitCollection;	// 112 = 0x70
}

+ (id)newWithTitles:(const void *)arg1 attributedTitles:(const void *)arg2 titleColors:(const void *)arg3 images:(const void *)arg4 backgroundImages:(const void *)arg5 titleFont:(id)arg6 selected:(_Bool)arg7 enabled:(_Bool)arg8 traitCollection:(id)arg9 action:(CKTypedComponentAction_e16478d5)arg10 size:(const struct CKComponentSize *)arg11 buttonClass:(const void *)arg12 attributes:(const void *)arg13 titleLabelAttributes:(const void *)arg14 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg15;	// IMP=0x000000000027170a
+ (id)newWithTitles:(const void *)arg1 attributedTitles:(const void *)arg2 titleColors:(const void *)arg3 images:(const void *)arg4 backgroundImages:(const void *)arg5 titleFont:(id)arg6 selected:(_Bool)arg7 enabled:(_Bool)arg8 action:(CKTypedComponentAction_e16478d5)arg9 size:(const struct CKComponentSize *)arg10 buttonClass:(const void *)arg11 attributes:(const void *)arg12 accessibilityConfiguration:(struct CKButtonComponentAccessibilityConfiguration)arg13;	// IMP=0x0000000000271565
- (void).cxx_destruct;	// IMP=0x00000000002746dc
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;	// IMP=0x0000000000274599

@end

