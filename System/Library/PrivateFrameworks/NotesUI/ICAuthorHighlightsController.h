//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDisplayLink, ICNote, NSCache, NSDate, NSMutableSet, TTTextEditGrouper;

@interface ICAuthorHighlightsController : NSObject
{
    _Bool _allowsAnimations;	// 8 = 0x8
    NSMutableSet *_textStorageDocumentsBeingUpdated;	// 16 = 0x10
    NSMutableSet *_textStorageDocumentsNeedingHighlightUpdates;	// 24 = 0x18
    ICDisplayLink *_highlightAnimationsDisplayLink;	// 32 = 0x20
    TTTextEditGrouper *_editGrouper;	// 40 = 0x28
    NSCache *_editGroupsForTextStorageDocument;	// 48 = 0x30
    ICNote *_note;	// 56 = 0x38
    NSDate *_now;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006ec18
@property(copy, nonatomic) NSDate *now; // @synthesize now=_now;
@property(nonatomic) _Bool allowsAnimations; // @synthesize allowsAnimations=_allowsAnimations;
@property(readonly, nonatomic) ICNote *note; // @synthesize note=_note;
- (void)textStorageDidProcessEndEditing:(id)arg1;	// IMP=0x000000000006eaf3
- (void)setTextHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange)arg3 inTextStorage:(id)arg4;	// IMP=0x000000000006e2c2
- (void)setCheckmarkHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange)arg3 inTextStorage:(id)arg4;	// IMP=0x000000000006def2
- (void)setAttachmentHighlightValue:(double)arg1 highlightColor:(id)arg2 forRange:(struct _NSRange)arg3 inTextStorage:(id)arg4;	// IMP=0x000000000006db22
- (void)setHighlightAttributesForHighlightValue:(double)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3 editGroups:(id)arg4;	// IMP=0x000000000006d6aa
- (void)updateHighlightAttributesForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x000000000006d18b
- (id)editGroupsForTextStorage:(id)arg1;	// IMP=0x000000000006d00a
@property(readonly, nonatomic) NSCache *editGroupsForTextStorageDocument; // @synthesize editGroupsForTextStorageDocument=_editGroupsForTextStorageDocument;
@property(readonly, nonatomic) TTTextEditGrouper *editGrouper; // @synthesize editGrouper=_editGrouper;
- (void)updateHighlightAnimationsIfNeeded;	// IMP=0x000000000006c94e
@property(readonly, nonatomic) ICDisplayLink *highlightAnimationsDisplayLink; // @synthesize highlightAnimationsDisplayLink=_highlightAnimationsDisplayLink;
@property(readonly, nonatomic) NSMutableSet *textStorageDocumentsNeedingHighlightUpdates; // @synthesize textStorageDocumentsNeedingHighlightUpdates=_textStorageDocumentsNeedingHighlightUpdates;
- (void)extendHighlightsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2 reverse:(_Bool)arg3;	// IMP=0x000000000006c4df
- (void)extendHighlightsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x000000000006c404
- (_Bool)rangeHasOrNeedsHighlights:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x000000000006c1cb
- (_Bool)isPerformingHighlightUpdatesForTextStorage:(id)arg1;	// IMP=0x000000000006c135
- (void)performHighlightUpdatesForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2 updates:(CDUnknownBlockType)arg3;	// IMP=0x000000000006be44
@property(readonly, nonatomic) NSMutableSet *textStorageDocumentsBeingUpdated; // @synthesize textStorageDocumentsBeingUpdated=_textStorageDocumentsBeingUpdated;
- (void)flashHighlightsForRange:(struct _NSRange)arg1 withDuration:(id)arg2 inTextStorage:(id)arg3;	// IMP=0x000000000006baf1
- (void)removeHighlightAnimationsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x000000000006b7fd
- (void)setHighlightAnimation:(id)arg1 forRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x000000000006b2c6
- (_Bool)shouldAnimateInTextStorage:(id)arg1;	// IMP=0x000000000006b21c
- (_Bool)isAnimating;	// IMP=0x000000000006b1d4
- (void)removeHighlightValueForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x000000000006b1af
- (void)setHighlightValue:(double)arg1 aboveImplicitHighlights:(_Bool)arg2 forRange:(struct _NSRange)arg3 inTextStorage:(id)arg4;	// IMP=0x000000000006b104
@property(readonly, nonatomic) double highlightedMultiplier;
@property(readonly, nonatomic) double fadedMultiplier;
@property(readonly, nonatomic) double implicitHighlightValue;
- (void)dealloc;	// IMP=0x000000000006afa1
- (id)initWithNote:(id)arg1;	// IMP=0x000000000006aede

@end

