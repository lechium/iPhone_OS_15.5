//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory10Key_Round
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x000000000098405c
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x00000000009839bb
- (_Bool)shouldUseRoundCornerForKey:(id)arg1;	// IMP=0x000000000098399f
- (id)shiftLockControlKeyTraits;	// IMP=0x000000000098394c
- (id)shiftedControlKeyTraits;	// IMP=0x000000000098382e
- (id)activeControlKeyTraits;	// IMP=0x0000000000983751
- (id)controlKeyTraits;	// IMP=0x0000000000983606
- (long long)lightHighQualityEnabledBlendForm;	// IMP=0x00000000009835bd
- (id)controlKeyBackgroundColorName;	// IMP=0x0000000000983565
- (id)controlKeyShadowColorName;	// IMP=0x0000000000983553
- (id)defaultKeyShadowColorName;	// IMP=0x0000000000983513
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 onKeyplane:(id)arg4;	// IMP=0x000000000098325c
- (unsigned long long)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x000000000098324f
- (unsigned long long)edgesWithInsetsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000983244
- (_Bool)useRoundCorner;	// IMP=0x000000000098323c
- (struct UIEdgeInsets)wideShadowPaddleInsets;	// IMP=0x000000000098321e
- (struct UIEdgeInsets)symbolFrameInsets;	// IMP=0x0000000000983207

@end

