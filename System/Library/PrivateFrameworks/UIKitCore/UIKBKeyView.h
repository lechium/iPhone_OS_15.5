//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSMutableDictionary, NSString, UIKBRenderConfig, UIKBRenderFactory, UIKBScreenTraits, UIKBTree, UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIKBKeyView <UIKBCacheableView>
{
    UIKBTree *m_keyplane;	// 8 = 0x8
    UIKBTree *m_key;	// 16 = 0x10
    struct CGRect m_drawFrame;	// 24 = 0x18
    struct __CFBoolean *m_allowsCaching;	// 56 = 0x38
    UIKBRenderConfig *m_renderConfig;	// 64 = 0x40
    UIKBRenderFactory *m_factory;	// 72 = 0x48
    NSMutableDictionary *_keyLayers;	// 80 = 0x50
    int _renderedKeyState;	// 88 = 0x58
    NSString *_cachedTraitsHashString;	// 96 = 0x60
    struct CGColor *_activeBackgroundColor;	// 104 = 0x68
    id _activeCompositingFilter;	// 112 = 0x70
    _Bool _singleRerender;	// 120 = 0x78
    double _cachedBackgroundOpacity;	// 128 = 0x80
    _Bool _cachedControlKeyRenderingPreference;	// 136 = 0x88
    _Bool _renderAsMask;	// 137 = 0x89
    unsigned long long _cachedAnchorCorner;	// 144 = 0x90
    unsigned long long _cachedShiftState;	// 152 = 0x98
    long long _cachedSelector;	// 160 = 0xa0
    UIKeyboardMenuView *_popupMenu;	// 168 = 0xa8
    double _endingTransitionDuration;	// 176 = 0xb0
    UIKBScreenTraits *_screenTraits;	// 184 = 0xb8
}

+ (_Bool)wantsScreenTraits;	// IMP=0x000000000095acca
@property(nonatomic) _Bool renderAsMask; // @synthesize renderAsMask=_renderAsMask;
@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(nonatomic) double endingTransitionDuration; // @synthesize endingTransitionDuration=_endingTransitionDuration;
@property(nonatomic) UIKeyboardMenuView *popupMenu; // @synthesize popupMenu=_popupMenu;
@property(nonatomic) _Bool cachedControlKeyRenderingPreference; // @synthesize cachedControlKeyRenderingPreference=_cachedControlKeyRenderingPreference;
@property(nonatomic) long long cachedSelector; // @synthesize cachedSelector=_cachedSelector;
@property(nonatomic) unsigned long long cachedShiftState; // @synthesize cachedShiftState=_cachedShiftState;
@property(nonatomic) unsigned long long cachedAnchorCorner; // @synthesize cachedAnchorCorner=_cachedAnchorCorner;
@property(retain, nonatomic) NSString *cachedTraitsHashString; // @synthesize cachedTraitsHashString=_cachedTraitsHashString;
@property(retain, nonatomic) UIKBRenderFactory *factory; // @synthesize factory=m_factory;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=m_renderConfig;
@property(nonatomic) struct CGRect drawFrame; // @synthesize drawFrame=m_drawFrame;
@property(readonly, nonatomic) UIKBTree *key; // @synthesize key=m_key;
@property(readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=m_keyplane;
- (void)changeBackgroundToActiveIfNecessary;	// IMP=0x000000000095e28b
- (void)changeBackgroundToEnabled;	// IMP=0x000000000095e14a
- (void)configureBackdropView:(id)arg1 forRenderConfig:(id)arg2;	// IMP=0x000000000095de34
- (id)_generateBackdropMaskImage;	// IMP=0x000000000095dd80
- (_Bool)_canDrawContent;	// IMP=0x000000000095dd78
- (void)drawContentsOfRenderers:(id)arg1;	// IMP=0x000000000095da09
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;	// IMP=0x000000000095cfb3
- (id)renderFlagsForTraits:(id)arg1;	// IMP=0x000000000095cc54
- (void)_populateLayer:(id)arg1 withContents:(id)arg2;	// IMP=0x000000000095c8e7
- (long long)imageOrientationForLayer:(id)arg1;	// IMP=0x000000000095c8a4
- (id)layerForRenderFlags:(long long)arg1;	// IMP=0x000000000095c707
- (void)removeFromSuperview;	// IMP=0x000000000095c6aa
- (void)prepareForDisplay;	// IMP=0x000000000095c30f
- (_Bool)requiresSublayers;	// IMP=0x000000000095c307
- (_Bool)_shouldUpdateLayers;	// IMP=0x000000000095c252
@property(readonly, nonatomic) _Bool hasRendered;
@property(readonly) long long cachedRenderFlags;
- (_Bool)allowBackgroundCachingForRenderFlags:(long long)arg1;	// IMP=0x000000000095bcf7
- (id)cacheKeysForRenderFlags:(id)arg1;	// IMP=0x000000000095b474
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) struct UIEdgeInsets displayInsets;
- (void)hideKeyCap:(_Bool)arg1;	// IMP=0x000000000095b292
- (void)dimKeys:(id)arg1;	// IMP=0x000000000095b13b
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000095b128
- (long long)didInputSubTree:(id)arg1;	// IMP=0x000000000095b120
- (id)subTreeHitTest:(struct CGPoint)arg1;	// IMP=0x000000000095b118
- (unsigned long long)focusableVariantCount;	// IMP=0x000000000095b0e1
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000095b082
- (void)_applyAppearanceInvocations;	// IMP=0x000000000095b07c
- (_Bool)_viewShouldBeOpaque;	// IMP=0x000000000095b074
@property(readonly, nonatomic) UIKBKeyView *contentsKeyView;
@property(readonly, nonatomic) struct CGRect variantFrame;
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000095afab
- (void)dealloc;	// IMP=0x000000000095aeab
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x000000000095ae7a
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4;	// IMP=0x000000000095ae26
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x000000000095acd2

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

