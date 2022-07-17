//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasEditor-Protocol.h>

@class NSSet, NSString, TSDCanvasEditorHelper, TSDCanvasSelection, TSDInteractiveCanvasController, TSKSelection, TSPObject, UIView;
@protocol TSDArrangeInspectorDelegate, TSDCanvasSelection, TSDInlineFloatingWrapInspectorDelegate, TSDTextSelection;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor>
{
    TSDInteractiveCanvasController *mInteractiveCanvasController;	// 8 = 0x8
    TSDCanvasEditorHelper *mCanvasEditorHelper;	// 16 = 0x10
    TSDCanvasSelection *mSelection;	// 24 = 0x18
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;	// 32 = 0x20
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;	// 40 = 0x28
    _Bool mPreventImageDataReplace;	// 48 = 0x30
    UIView *mInputView;	// 56 = 0x38
}

+ (CDUnknownBlockType)spatialInfoComparator;	// IMP=0x0000000000123395
+ (_Bool)physicalKeyboardIsSender:(id)arg1;	// IMP=0x00000000001228b2
+ (Class)canvasEditorHelperClass;	// IMP=0x0000000000121fdf
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;	// IMP=0x0000000000121d4e
+ (id)canvasSelectionWithInfos:(id)arg1;	// IMP=0x0000000000121d11
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000000123595
- (void)scrollToEndOfDocument:(id)arg1;	// IMP=0x00000000001234f1
- (void)scrollToBeginningOfDocument:(id)arg1;	// IMP=0x000000000012343d
- (void)insertBacktab:(id)arg1;	// IMP=0x0000000000123407
- (void)insertTab:(id)arg1;	// IMP=0x00000000001233d4
- (id)p_spatiallySortedDrawables;	// IMP=0x00000000001233a2
- (id)p_nextInfoInTabSequence:(int)arg1;	// IMP=0x0000000000122f84
- (void)connectWithConnectionLine:(id)arg1;	// IMP=0x0000000000122eb2
- (_Bool)canGroupDrawable:(id)arg1;	// IMP=0x0000000000122e9a
- (void)selectAll:(id)arg1;	// IMP=0x0000000000122dda
@property(readonly, nonatomic) NSSet *infosForSelectAllInRoot;
- (void)select:(id)arg1;	// IMP=0x0000000000122d9f
- (void)copy:(id)arg1;	// IMP=0x0000000000122d99
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;	// IMP=0x0000000000122d93
- (_Bool)canAddOrShowComment;	// IMP=0x0000000000122d8b
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000000122c2c
- (_Bool)canvasEditorCanUngroupWithSender:(id)arg1;	// IMP=0x0000000000122c1a
- (_Bool)canUngroupWithSender:(id)arg1;	// IMP=0x0000000000122be8
- (_Bool)canvasEditorCanGroupWithSender:(id)arg1;	// IMP=0x0000000000122bd6
- (_Bool)canGroupWithSender:(id)arg1;	// IMP=0x0000000000122a38
- (_Bool)canvasEditorCanSelectAllWithSender:(id)arg1;	// IMP=0x0000000000122a26
- (_Bool)canSelectAllWithSender:(id)arg1;	// IMP=0x00000000001229af
- (_Bool)canvasEditorCanDuplicateWithSender:(id)arg1;	// IMP=0x000000000012299d
- (_Bool)canvasEditorCanCopyStyleWithSender:(id)arg1;	// IMP=0x000000000012298b
- (_Bool)canvasEditorCanCutWithSender:(id)arg1;	// IMP=0x000000000012294f
- (_Bool)canvasEditorCanCopyWithSender:(id)arg1;	// IMP=0x000000000012291d
- (_Bool)canvasEditorCanDeleteWithSender:(id)arg1;	// IMP=0x00000000001228eb
- (_Bool)canCopyStyle;	// IMP=0x00000000001228e3
- (void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint)arg1;	// IMP=0x00000000001227d1
- (_Bool)allowAutomaticTextEditingToBeginWithDifferentEditor;	// IMP=0x00000000001227c9
- (id)pasteboardController;	// IMP=0x000000000012279e
- (void)setSelectionToRep:(id)arg1;	// IMP=0x0000000000122751
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;	// IMP=0x0000000000122601
@property(retain, nonatomic) TSKSelection *selection;
@property(readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
- (_Bool)shouldPushNewEditorForNewSelection;	// IMP=0x0000000000122588
- (id)drawables;	// IMP=0x0000000000122503
- (unsigned long long)countOfDrawables;	// IMP=0x00000000001224d8
- (_Bool)shouldUseAlternateSelectionHighlight;	// IMP=0x00000000001224d0
- (id)editorToPopToOnEndEditing;	// IMP=0x000000000012249e
- (Class)editorClassForSelection;	// IMP=0x000000000012246c
- (id)p_filterNonDisplayedInfos:(id)arg1;	// IMP=0x000000000012225e
- (void)repWasCreated:(id)arg1;	// IMP=0x0000000000122224
- (void)canvasInfosDidChange;	// IMP=0x000000000012219e
@property(readonly, nonatomic) TSPObject *modelForSelection;
- (_Bool)isSelectedInfo:(id)arg1;	// IMP=0x0000000000122133
@property(readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (id)documentRoot;	// IMP=0x0000000000122101
@property(readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
- (void)dealloc;	// IMP=0x0000000000122098
- (void)teardown;	// IMP=0x000000000012206f
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x0000000000121ff0
- (_Bool)canDeleteComment;	// IMP=0x0000000000121fb4
- (id)keyCommands;	// IMP=0x0000000000121e84
- (_Bool)isRepSelectable:(id)arg1;	// IMP=0x0000000000121e53
- (void)setSelectionToInfos:(id)arg1;	// IMP=0x0000000000121e22
- (void)setSelectionToInfo:(id)arg1;	// IMP=0x0000000000121dce
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;	// IMP=0x0000000000121d8e
- (id)canvasSelectionWithInfos:(id)arg1;	// IMP=0x0000000000121d3a
@property(readonly) _Bool wantsRawArrowKeyEvents;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(_Bool)arg2;	// IMP=0x0000000000121d03
- (id)selectionWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000121cfb
- (void)clearMarkedRange;	// IMP=0x0000000000121cf5
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(_Bool)arg2;	// IMP=0x0000000000121ceb
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x0000000000121ce5
- (void)extendSelectionRight;	// IMP=0x0000000000121cdf
- (void)extendSelectionLeft;	// IMP=0x0000000000121cd9
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0000000000121cd3
- (id)selectionRectsForRange:(struct _NSRange)arg1;	// IMP=0x0000000000121cc6
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;	// IMP=0x0000000000121ca8
- (id)textInRange:(struct _NSRange)arg1;	// IMP=0x0000000000121ca0
- (unsigned long long)textLength;	// IMP=0x0000000000121c98
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;	// IMP=0x0000000000121c90
- (void)endEditing;	// IMP=0x0000000000121c8a
- (struct _NSRange)editRange;	// IMP=0x0000000000121c78
@property(readonly, nonatomic) struct _NSRange markedRange;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;	// IMP=0x0000000000121c5e
- (_Bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0000000000121c56
- (_Bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(_Bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;	// IMP=0x0000000000121c4e
- (id)textFontAtCharIndex:(unsigned long long)arg1;	// IMP=0x0000000000121c46
- (id)textColorAtCharIndex:(unsigned long long)arg1;	// IMP=0x0000000000121c3e
- (long long)returnKeyType;	// IMP=0x0000000000121c36
@property(readonly, retain) UIView *inputAccessoryView;
- (void)insertText:(id)arg1;	// IMP=0x0000000000121be8
- (_Bool)wantsKeyboard;	// IMP=0x0000000000121be0
@property(readonly, retain) UIView *inputView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property(readonly) Class superclass;

@end
