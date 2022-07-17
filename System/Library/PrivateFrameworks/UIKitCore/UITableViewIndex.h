//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAccessibilityHUDGestureDelegate-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDGestureManager, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UITableViewIndex <UIAccessibilityHUDGestureDelegate>
{
    NSArray *_titles;	// 120 = 0x78
    UIFont *_font;	// 128 = 0x80
    long long _selectedSection;	// 136 = 0x88
    _Bool _pastTop;	// 144 = 0x90
    _Bool _pastBottom;	// 145 = 0x91
    struct CGSize _cachedSize;	// 152 = 0x98
    struct CGSize _cachedSizeToFit;	// 168 = 0xa8
    UIColor *_indexColor;	// 184 = 0xb8
    UIColor *_indexBackgroundColor;	// 192 = 0xc0
    UIColor *_indexTrackingBackgroundColor;	// 200 = 0xc8
    double _topPadding;	// 208 = 0xd0
    double _bottomPadding;	// 216 = 0xd8
    double _verticalTextHeightEstimate;	// 224 = 0xe0
    NSArray *_entries;	// 232 = 0xe8
    long long _idiom;	// 240 = 0xf0
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;	// 248 = 0xf8
    struct UIEdgeInsets _drawingInsets;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x0000000000f6b6e7
@property(nonatomic) struct UIEdgeInsets drawingInsets; // @synthesize drawingInsets=_drawingInsets;
@property(readonly, nonatomic) _Bool pastBottom; // @synthesize pastBottom=_pastBottom;
@property(readonly, nonatomic) _Bool pastTop; // @synthesize pastTop=_pastTop;
@property(readonly, nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
- (long long)_indexForEntryAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f6b554
- (_Bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;	// IMP=0x0000000000f6b54c
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000f6b546
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000f6b53e
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;	// IMP=0x0000000000f6b487
- (void)_largeContentViewerEnabledStatusDidChange:(id)arg1;	// IMP=0x0000000000f6b475
- (void)_setupAXHUDGestureIfNecessary;	// IMP=0x0000000000f6b3c4
- (void)didMoveToWindow;	// IMP=0x0000000000f6b383
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000f6b342
- (_Bool)canBecomeFocused;	// IMP=0x0000000000f6b2c9
- (id)_externalDotImage;	// IMP=0x0000000000f6b1c2
- (id)_dotImage;	// IMP=0x0000000000f6b13a
- (void)tintColorDidChange;	// IMP=0x0000000000f6b0f9
@property(retain, nonatomic) UIColor *indexBackgroundColor;
@property(retain, nonatomic) UIColor *indexTrackingBackgroundColor;
@property(retain, nonatomic) UIColor *indexColor;
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000f6aee0
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f6ae17
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f6adb3
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f6ad84
- (_Bool)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000f6ac4c
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000f6a47b
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000f6a408
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;	// IMP=0x0000000000f6a0ee
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;	// IMP=0x0000000000f6a080
@property(readonly, nonatomic) NSString *selectedSectionTitle;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) NSArray *titles;
- (struct CGRect)_effectiveBounds;	// IMP=0x0000000000f69ec3
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000f69d82
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000f69853
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000f69703
- (void)_cacheAndMeasureTitles;	// IMP=0x0000000000f68e83
- (id)_displayTitles;	// IMP=0x0000000000f689d9
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;	// IMP=0x0000000000f689c7
- (double)_minLineSpacingForIdiom:(long long)arg1;	// IMP=0x0000000000f6878b
- (id)_fontForIdiom:(long long)arg1;	// IMP=0x0000000000f6875a
- (void)_setIdiom:(long long)arg1;	// IMP=0x0000000000f686d5
- (long long)_idiom;	// IMP=0x0000000000f68656

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
