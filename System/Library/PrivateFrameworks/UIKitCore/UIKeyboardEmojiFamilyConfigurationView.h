//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKBKeyViewContentView-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIKBTree, UIKeyboardEmojiWellView, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFamilyConfigurationView <UIKBKeyViewContentView>
{
    double _metachronalRhythmAnimationStartTime;	// 8 = 0x8
    _Bool _usesDarkStyle;	// 16 = 0x10
    _Bool _hasSplitFontSupport;	// 17 = 0x11
    NSMutableArray *_familyMemberStackViews;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    UIStackView *_previewWellStackView;	// 40 = 0x28
    UIKeyboardEmojiWellView *_neutralWellView;	// 48 = 0x30
    UIKeyboardEmojiWellView *_configuredWellView;	// 56 = 0x38
    NSIndexPath *_lastSelectedIndexPath;	// 64 = 0x40
    NSString *_baseEmojiString;	// 72 = 0x48
    NSMutableArray *_selectedVariantIndices;	// 80 = 0x50
    NSArray *_skinToneVariantRows;	// 88 = 0x58
    NSArray *_variantDisplayRows;	// 96 = 0x60
    UIKBTree *_representedKey;	// 104 = 0x68
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;	// IMP=0x00000000012b4da7
+ (id)_selectionAndSeparatorColorForDarkMode:(_Bool)arg1;	// IMP=0x00000000012b13d9
- (void).cxx_destruct;	// IMP=0x00000000012b5605
@property(nonatomic) _Bool hasSplitFontSupport; // @synthesize hasSplitFontSupport=_hasSplitFontSupport;
@property(retain, nonatomic) UIKBTree *representedKey; // @synthesize representedKey=_representedKey;
@property(retain, nonatomic) NSArray *variantDisplayRows; // @synthesize variantDisplayRows=_variantDisplayRows;
@property(retain, nonatomic) NSArray *skinToneVariantRows; // @synthesize skinToneVariantRows=_skinToneVariantRows;
@property(retain, nonatomic) NSMutableArray *selectedVariantIndices; // @synthesize selectedVariantIndices=_selectedVariantIndices;
@property(retain, nonatomic) NSString *baseEmojiString; // @synthesize baseEmojiString=_baseEmojiString;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView; // @synthesize configuredWellView=_configuredWellView;
@property(retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView; // @synthesize neutralWellView=_neutralWellView;
@property(retain, nonatomic) UIStackView *previewWellStackView; // @synthesize previewWellStackView=_previewWellStackView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSMutableArray *familyMemberStackViews; // @synthesize familyMemberStackViews=_familyMemberStackViews;
@property(nonatomic) _Bool usesDarkStyle; // @synthesize usesDarkStyle=_usesDarkStyle;
- (void)updateRenderConfig:(id)arg1;	// IMP=0x00000000012b53a1
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000012b516a
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000012b50a0
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000012b4dbd
- (void)layoutSubviews;	// IMP=0x00000000012b495e
- (void)_beginFamilyMetachronalRhythmAnimation;	// IMP=0x00000000012b43ce
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;	// IMP=0x00000000012b4169
- (_Bool)_hasCompletelyConfiguredSkinToneConfiguration;	// IMP=0x00000000012b40f9
- (void)_updatePreviewWellForCurrentSelection;	// IMP=0x00000000012b3ebe
- (void)_updateBottomRowForSelections:(id)arg1;	// IMP=0x00000000012b3acc
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;	// IMP=0x00000000012b33b7
- (id)_currentlySelectedSkinToneConfiguration;	// IMP=0x00000000012b3144
- (unsigned long long)_silhouetteFromCurrentSelections;	// IMP=0x00000000012b3053
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;	// IMP=0x00000000012b2ecf
- (void)_configureFamilyMemberWellStackViews;	// IMP=0x00000000012b240c
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;	// IMP=0x00000000012b1d8d
- (void)_colorConfigurationDidChange;	// IMP=0x00000000012b1ace
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000012b1448

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

