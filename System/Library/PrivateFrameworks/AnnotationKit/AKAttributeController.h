//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController, AKPageModelController, NSDictionary, PKInk, UIColor, UIFont;

@interface AKAttributeController : NSObject
{
    _Bool _strokeIsDashed;	// 8 = 0x8
    _Bool _hasShadow;	// 9 = 0x9
    AKPageModelController *modelControllerToObserveForSelections;	// 16 = 0x10
    UIColor *_strokeColor;	// 24 = 0x18
    UIColor *_fillColor;	// 32 = 0x20
    PKInk *_ink;	// 40 = 0x28
    double _strokeWidth;	// 48 = 0x30
    long long _brushStyle;	// 56 = 0x38
    unsigned long long _arrowHeadStyle;	// 64 = 0x40
    UIFont *_font;	// 72 = 0x48
    NSDictionary *_textAttributes;	// 80 = 0x50
    long long _highlightStyle;	// 88 = 0x58
    AKController *_controller;	// 96 = 0x60
}

+ (void)initialize;	// IMP=0x0000000000039c23
+ (id)defaultTextAttributes;	// IMP=0x0000000000039a94
+ (id)defaultFont;	// IMP=0x0000000000039a6c
- (void).cxx_destruct;	// IMP=0x000000000003fd43
@property __weak AKController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(retain) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain) UIFont *font; // @synthesize font=_font;
@property unsigned long long arrowHeadStyle; // @synthesize arrowHeadStyle=_arrowHeadStyle;
@property long long brushStyle; // @synthesize brushStyle=_brushStyle;
@property _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property _Bool strokeIsDashed; // @synthesize strokeIsDashed=_strokeIsDashed;
@property double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(retain) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections; // @synthesize modelControllerToObserveForSelections;
- (void)_updateStateOnSenderFromSelf:(id)arg1 segment:(long long)arg2;	// IMP=0x000000000003f950
- (_Bool)_updateStateOnSender:(id)arg1 segment:(long long)arg2 fromSelectedAnnotations:(id)arg3;	// IMP=0x000000000003f22c
- (void)_allAnnotations:(id)arg1 all:(_Bool *)arg2 atLeastOneShare:(_Bool *)arg3 attributeFromTag:(long long)arg4;	// IMP=0x000000000003ef23
- (void)_updateStateOnSender:(id)arg1 segment:(long long)arg2;	// IMP=0x000000000003ee6c
- (_Bool)_isEnabledForSender:(id)arg1 segment:(long long)arg2 withSelectedAnnotations:(id)arg3;	// IMP=0x000000000003df7e
- (void)syncStrokeColorOnSelectionToUI;	// IMP=0x000000000003dc48
- (void)syncFillColorOnSelectionToUI;	// IMP=0x000000000003d914
- (void)_syncAttributesFromSelectedAnnotationsToUI;	// IMP=0x000000000003d885
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 segment:(long long)arg2;	// IMP=0x000000000003b17e
- (void)_restorePersistedAttributes;	// IMP=0x000000000003ad0a
- (void)_persistCurrentAttributes;	// IMP=0x000000000003aaf5
- (void)_updateInk;	// IMP=0x000000000003aa1a
- (void)updateInkIfNeeded:(id)arg1;	// IMP=0x000000000003a910
- (void)resetToLastDrawingInk;	// IMP=0x000000000003a7bb
- (void)setDefaultInk;	// IMP=0x000000000003a72c
- (void)restoreStrokeColorToSystemDefault;	// IMP=0x000000000003a63a
- (_Bool)strokeColorIsEqualTo:(id)arg1;	// IMP=0x000000000003a5c3
- (void)updateAttributeSenderState:(id)arg1 segment:(long long)arg2 enabled:(_Bool)arg3;	// IMP=0x000000000003a54d
- (_Bool)isAttributeSenderEnabled:(id)arg1 segment:(long long)arg2;	// IMP=0x000000000003a4ac
- (void)performAttributeActionForSender:(id)arg1 segment:(long long)arg2;	// IMP=0x000000000003a49a
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003a2a3
- (void)toggleRuler;	// IMP=0x000000000003a158
- (void)forceHideRuler;	// IMP=0x000000000003a088
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000039fe5
- (id)initWithController:(id)arg1;	// IMP=0x0000000000039f68

@end

