//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAccessibilityHUDGestureDelegate-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, UIAccessibilityHUDGestureManager, UIColor, UIGestureRecognizer, UIPointerInteraction, UIScreen, UIView, _UIStatusBarAction, _UIStatusBarData, _UIStatusBarDataAggregator, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarActionable, _UIStatusBarVisualProvider;

@interface _UIStatusBar <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, UIPointerInteractionDelegate>
{
    id <_UIStatusBarVisualProvider> _visualProvider;	// 120 = 0x78
    _Bool _needsLayoutUpdateForPartFrames;	// 128 = 0x80
    UIScreen *_targetScreen;	// 136 = 0x88
    NSDictionary *_visualProviderInfo;	// 144 = 0x90
    long long _style;	// 152 = 0x98
    UIColor *_foregroundColor;	// 160 = 0xa0
    long long _mode;	// 168 = 0xa8
    long long _orientation;	// 176 = 0xb0
    _UIStatusBarData *_currentData;	// 184 = 0xb8
    UIGestureRecognizer *_actionGestureRecognizer;	// 192 = 0xc0
    NSArray *_enabledPartIdentifiers;	// 200 = 0xc8
    NSMutableDictionary *_items;	// 208 = 0xd0
    NSMutableDictionary *_displayItemStates;	// 216 = 0xd8
    CDUnknownBlockType _updateCompletionHandler;	// 224 = 0xe0
    UIView *_foregroundView;	// 232 = 0xe8
    id <_UIStatusBarActionable> _targetActionable;	// 240 = 0xf0
    UIPointerInteraction *_pointerInteraction;	// 248 = 0xf8
    id <_UIStatusBarActionable> _hoveredActionable;	// 256 = 0x100
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;	// 264 = 0x108
    Class _visualProviderClass;	// 272 = 0x110
    NSDictionary *_regions;	// 280 = 0x118
    _UIStatusBarDataAggregator *_dataAggregator;	// 288 = 0x120
    _UIStatusBarData *_currentAggregatedData;	// 296 = 0x128
    _UIStatusBarStyleAttributes *_styleAttributes;	// 304 = 0x130
    _UIStatusBarAction *_action;	// 312 = 0x138
    CDUnknownBlockType _regionActionValidationBlock;	// 320 = 0x140
    struct CGRect _avoidanceFrame;	// 328 = 0x148
}

+ (struct CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(_Bool)arg3 isAzulBLinked:(_Bool)arg4;	// IMP=0x0000000000e3908d
+ (struct CGSize)intrinsicContentSizeForTargetScreen:(id)arg1 orientation:(long long)arg2 onLockScreen:(_Bool)arg3;	// IMP=0x0000000000e39075
+ (id)sensorActivityIndicatorPartIdentifier;	// IMP=0x0000000000e39061
+ (id)sensorActivityIndicator;	// IMP=0x0000000000e31fe0
+ (void)setSensorActivityIndicator:(id)arg1;	// IMP=0x0000000000e31fcc
+ (id)stringForStatusBarStyle:(long long)arg1;	// IMP=0x0000000000e31f70
- (void).cxx_destruct;	// IMP=0x0000000000e3a763
@property(copy, nonatomic) CDUnknownBlockType regionActionValidationBlock; // @synthesize regionActionValidationBlock=_regionActionValidationBlock;
@property(retain, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(readonly, nonatomic) _UIStatusBarData *currentAggregatedData; // @synthesize currentAggregatedData=_currentAggregatedData;
@property(readonly, nonatomic) _UIStatusBarDataAggregator *dataAggregator; // @synthesize dataAggregator=_dataAggregator;
@property(readonly, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property(retain, nonatomic, getter=_visualProviderClass, setter=_setVisualProviderClass:) Class visualProviderClass; // @synthesize visualProviderClass=_visualProviderClass;
@property(retain, nonatomic) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager; // @synthesize accessibilityHUDGestureManager=_accessibilityHUDGestureManager;
@property(nonatomic) __weak id <_UIStatusBarActionable> hoveredActionable; // @synthesize hoveredActionable=_hoveredActionable;
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(nonatomic) __weak id <_UIStatusBarActionable> targetActionable; // @synthesize targetActionable=_targetActionable;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property(retain, nonatomic) NSMutableDictionary *displayItemStates; // @synthesize displayItemStates=_displayItemStates;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(nonatomic) struct CGRect avoidanceFrame; // @synthesize avoidanceFrame=_avoidanceFrame;
@property(copy, nonatomic) NSArray *enabledPartIdentifiers; // @synthesize enabledPartIdentifiers=_enabledPartIdentifiers;
@property(readonly, nonatomic) UIGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(readonly, nonatomic) _UIStatusBarData *currentData; // @synthesize currentData=_currentData;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSDictionary *visualProviderInfo; // @synthesize visualProviderInfo=_visualProviderInfo;
@property(retain, nonatomic) UIScreen *targetScreen; // @synthesize targetScreen=_targetScreen;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;	// IMP=0x0000000000e3a460
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;	// IMP=0x0000000000e3a3b0
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;	// IMP=0x0000000000e3a39c
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000e3a394
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000e3a38e
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;	// IMP=0x0000000000e3a0e0
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000e3a097
- (id)_statusBarWindowForAccessibilityHUD;	// IMP=0x0000000000e3a085
- (id)dataEntryKeysForItemsWithIdentifiers:(id)arg1;	// IMP=0x0000000000e39e79
- (id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000e39d41
- (id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1;	// IMP=0x0000000000e39a3f
- (struct CGRect)frameForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000e39865
- (id)itemsDependingOnKeys:(id)arg1;	// IMP=0x0000000000e396fc
- (id)stateForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000e396df
- (id)regionWithIdentifier:(id)arg1;	// IMP=0x0000000000e39672
- (id)displayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000e395bc
- (id)itemWithIdentifier:(id)arg1;	// IMP=0x0000000000e395a5
- (id)_itemWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000e394cb
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e39421
@property(readonly, nonatomic, getter=areAnimationsEnabled) _Bool animationsEnabled;
@property(readonly, nonatomic) unsigned int animationContextId;
@property(readonly, nonatomic) UIView *containerView;
@property(readonly, nonatomic) NSSet *dependentDataEntryKeys;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e3903f
- (struct CGRect)frameForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2;	// IMP=0x0000000000e38d38
- (long long)styleForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e386fd
- (void)setStyle:(long long)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e384af
- (double)alphaForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e382f8
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e3816e
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e37fe9
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e37e96
- (id)actionForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e37e17
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e37cbb
- (id)_regionsForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2;	// IMP=0x0000000000e37a04
- (id)_actionablesForPartWithIdentifier:(id)arg1 includeInternalItems:(_Bool)arg2 onlyVisible:(_Bool)arg3;	// IMP=0x0000000000e3768a
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000e37314
- (void)statusBarGesture:(id)arg1;	// IMP=0x0000000000e37089
- (_Bool)_gestureRecognizer:(id)arg1 pressInsideActionable:(id)arg2;	// IMP=0x0000000000e36f6a
- (_Bool)_gestureRecognizer:(id)arg1 touchInsideActionable:(id)arg2;	// IMP=0x0000000000e36ecd
- (_Bool)_gestureRecognizer:(id)arg1 isInsideActionable:(id)arg2;	// IMP=0x0000000000e36e4e
- (void)_updateActionGestureRecognizerAllowableTouchTypesIfNeeded;	// IMP=0x0000000000e36def
- (struct CGRect)_frameForActionable:(id)arg1 actionInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000e36c44
- (struct CGRect)_pressFrameForActionable:(id)arg1;	// IMP=0x0000000000e36c0b
- (struct CGRect)_frameForActionable:(id)arg1;	// IMP=0x0000000000e36b8a
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000e36687
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000e36674
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000e365c5
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0000000000e35ed1
- (_Bool)_cursorLocation:(struct CGPoint)arg1 isInsideHoverableActionable:(id)arg2;	// IMP=0x0000000000e35def
- (_Bool)_cursorLocation:(struct CGPoint)arg1 isInsideActionable:(id)arg2;	// IMP=0x0000000000e35d93
- (struct CGRect)_extendedHoverFrameForActionable:(id)arg1;	// IMP=0x0000000000e35ca3
- (void)_rearrangeOverflowedItems;	// IMP=0x0000000000e35a4e
- (void)_updateRegionItems;	// IMP=0x0000000000e351b2
- (void)layoutSubviews;	// IMP=0x0000000000e35034
- (void)updateConstraints;	// IMP=0x0000000000e34ff3
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;	// IMP=0x0000000000e34d5a
- (void)_fixupDisplayItemAttributes;	// IMP=0x0000000000e34bc8
- (void)_performAnimations:(id)arg1;	// IMP=0x0000000000e34999
- (void)updateWithAnimations:(id)arg1;	// IMP=0x0000000000e34980
- (void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2;	// IMP=0x0000000000e3488f
- (void)_prepareAnimations:(id)arg1;	// IMP=0x0000000000e34421
- (void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3;	// IMP=0x0000000000e33f3c
- (void)_updateWithAggregatedData:(id)arg1;	// IMP=0x0000000000e33c9d
- (void)_updateWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000e33a0c
@property(copy, nonatomic) _UIStatusBarData *overlayData;
- (void)updateWithData:(id)arg1;	// IMP=0x0000000000e3385e
- (void)_updateStyleAttributes;	// IMP=0x0000000000e337d9
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000e335fc
- (long long)_effectiveStyleFromStyle:(long long)arg1;	// IMP=0x0000000000e335a4
- (void)_performWithInheritedAnimation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e3313f
- (id)_traitCollectionForChildEnvironment:(id)arg1;	// IMP=0x0000000000e330a3
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000e33046
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e32fb0
- (void)resetVisualProvider;	// IMP=0x0000000000e32cc5
- (void)_prepareVisualProviderIfNeeded;	// IMP=0x0000000000e325eb
@property(readonly, nonatomic, getter=_effectiveTargetScreen) UIScreen *effectiveTargetScreen;
@property(readonly, nonatomic) id <_UIStatusBarVisualProvider> visualProvider;
@property(retain, nonatomic, getter=_visualProviderClassName, setter=_setVisualProviderClassName:) NSString *visualProviderClassName;
@property(readonly, copy) NSString *description;
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000e32001
- (_Bool)_forceLayoutEngineSolutionInRationalEdges;	// IMP=0x0000000000e31ff9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

