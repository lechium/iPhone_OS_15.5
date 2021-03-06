//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutManager, _UIFieldEditorLayoutManager, _UITextCanvasView;

__attribute__((visibility("hidden")))
@interface _UIClassicTextLayoutController
{
    NSLayoutManager *_layoutManager;	// 8 = 0x8
    _UITextCanvasView *_canvasView;	// 16 = 0x10
    _UIFieldEditorLayoutManager *_fieldEditorlayoutManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023a6d0
- (void)resetFontForExtraBulletRendering;	// IMP=0x000000000023a6b3
- (id)styleEffectConfiguration;	// IMP=0x000000000023a696
- (void)setStyleEffectConfiguration:(id)arg1;	// IMP=0x000000000023a679
- (id)underlineColorForSpelling;	// IMP=0x000000000023a65c
- (void)setUnderlineColorForSpelling:(id)arg1;	// IMP=0x000000000023a63f
- (id)underlineColorForTextAlternatives;	// IMP=0x000000000023a622
- (void)setUnderlineColorForTextAlternatives:(id)arg1;	// IMP=0x000000000023a605
- (_Bool)drawsDebugBaselines;	// IMP=0x000000000023a5e8
- (void)setDrawsDebugBaselines:(_Bool)arg1;	// IMP=0x000000000023a5cb
- (_Bool)allowsNonContiguousLayout;	// IMP=0x000000000023a5ae
- (void)setAllowsNonContiguousLayout:(_Bool)arg1;	// IMP=0x000000000023a591
- (id)layoutManagerDelegate;	// IMP=0x000000000023a574
- (void)setLayoutManagerDelegate:(id)arg1;	// IMP=0x000000000023a557
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000023a53a
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000023a464
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x000000000023a359
- (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;	// IMP=0x000000000023a340
- (id)textRangeForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000023a327
- (struct _NSRange)characterRangeForTextRange:(id)arg1;	// IMP=0x000000000023a312
- (id)validatedPositionForPosition:(id)arg1;	// IMP=0x000000000023a161
- (id)validatedRangeForRange:(id)arg1;	// IMP=0x0000000000239fc8
- (id)layoutManager;	// IMP=0x0000000000239fb3
- (_Bool)canAccessLayoutManager;	// IMP=0x0000000000239fab
- (struct CGRect)boundingRectForRange:(id)arg1;	// IMP=0x0000000000239f6b
- (void)invalidateLayoutForRange:(id)arg1;	// IMP=0x0000000000239efb
- (void)ensureLayoutForRange:(id)arg1;	// IMP=0x0000000000239ebf
- (struct CGRect)usedRectForTextContainer:(id)arg1;	// IMP=0x0000000000239e81
- (void)ensureLayoutForTextContainer:(id)arg1;	// IMP=0x0000000000239e64
- (id)previewRendererForRange:(id)arg1 unifyRects:(_Bool)arg2;	// IMP=0x0000000000239df6
- (id)dequeueCanvasViewForTextContainer:(id)arg1;	// IMP=0x0000000000239da9
- (id)textContainerForPosition:(id)arg1;	// IMP=0x0000000000239d4f
- (id)textContainers;	// IMP=0x0000000000239c31
- (void)requestTextGeometryAtPosition:(id)arg1 typingAttributes:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000002399cc
- (double)baselineOffsetForFirstGlyph;	// IMP=0x0000000000239986
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x00000000002396b1
- (id)attributedTextInRange:(id)arg1;	// IMP=0x0000000000239612
- (void)removeInvisibleRange:(id)arg1;	// IMP=0x00000000002395d6
- (void)addInvisibleRange:(id)arg1;	// IMP=0x000000000023959a
- (void)removeAllGhostedRanges;	// IMP=0x000000000023957d
- (void)addGhostedRange:(id)arg1;	// IMP=0x0000000000239541
- (void)removeRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000239386
- (void)addRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000023931a
- (void)removeAnnotationAttribute:(id)arg1 forRange:(id)arg2;	// IMP=0x00000000002392ae
- (id)annotationAttribute:(id)arg1 atPosition:(id)arg2;	// IMP=0x0000000000239231
- (void)addAnnotationAttribute:(id)arg1 value:(id)arg2 forRange:(id)arg3;	// IMP=0x00000000002391ab
- (void)enumerateTextLineFragmentsInRange:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000239044
- (id)nearestPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000238e7d
- (id)cursorPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x00000000002389ae
- (id)selectionRectsForRange:(id)arg1 fromView:(id)arg2 forContainerPassingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000002381bc
- (long long)baseWritingDirectionAtPosition:(id)arg1;	// IMP=0x000000000023812f
- (id)attributesAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000237f79
- (id)textRangeForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2 layoutIfNeeded:(_Bool)arg3;	// IMP=0x0000000000237d21
- (struct CGRect)insertionRectForPosition:(id)arg1 typingAttributes:(id)arg2 placeholderAttachment:(id)arg3 textContainer:(id *)arg4;	// IMP=0x0000000000236da3
- (long long)affinityForPosition:(id)arg1;	// IMP=0x0000000000236d8e
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000236d2d
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000236d15
- (id)textRangeForLineEnclosingPosition:(id)arg1 effectiveAffinity:(long long)arg2;	// IMP=0x00000000002368d4
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2 affinity:(long long)arg3;	// IMP=0x0000000000236804
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000002367eb
- (id)emptyTextRangeAtPosition:(id)arg1;	// IMP=0x0000000000236772
- (id)documentRange;	// IMP=0x000000000023673e
- (id)endOfDocument;	// IMP=0x0000000000236709
- (id)beginningOfDocument;	// IMP=0x00000000002366f0
- (id)textStorage;	// IMP=0x00000000002366d3
- (unsigned long long)_textStorageLength;	// IMP=0x00000000002365dd
- (id)initWithTextContainer:(id)arg1;	// IMP=0x0000000000236567
- (id)initWithTextContainer:(id)arg1 textStorage:(id)arg2;	// IMP=0x00000000002363e0

@end

