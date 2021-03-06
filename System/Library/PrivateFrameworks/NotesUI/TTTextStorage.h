//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSTextStorage.h>

#import <NotesUI/TTMergeableStringDelegate-Protocol.h>
#import <NotesUI/TTTextUndoTarget-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSMutableAttributedString, NSNumber, NSObject, NSString, NSUUID, NSUndoManager, TTMergeableAttributedString, TTMergeableStringUndoGroup, TTMergeableStringVersionedDocument;
@protocol TTTextStorageDelegate, TTTextStorageStyler, TTTextUndoTarget;

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate, TTTextUndoTarget>
{
    NSMutableAttributedString *_attributedString;	// 8 = 0x8
    unsigned long long _temporaryAttributeEditing;	// 16 = 0x10
    _Bool _directlyEditing;	// 24 = 0x18
    _Bool _previouslyHadMarkedText;	// 25 = 0x19
    _Bool _wantsUndoCommands;	// 26 = 0x1a
    _Bool _wantsUpdateTrackingForInitialLoading;	// 27 = 0x1b
    _Bool _shouldInhibitAddingExtraNewlinesAtEndDuringFixup;	// 28 = 0x1c
    _Bool _convertAttributes;	// 29 = 0x1d
    _Bool _shouldConvertTablesToTabs;	// 30 = 0x1e
    _Bool _retainOriginalFormatting;	// 31 = 0x1f
    _Bool _filterSubstringAttributes;	// 32 = 0x20
    _Bool _filterPastedAttributes;	// 33 = 0x21
    _Bool _filterSubstringAttributesForPlainText;	// 34 = 0x22
    _Bool _isFixing;	// 35 = 0x23
    _Bool _disableUndoCoalesceBreaking;	// 36 = 0x24
    _Bool _isDictating;	// 37 = 0x25
    _Bool _isPerformingAccessibilityUndoableTextInsertion;	// 38 = 0x26
    _Bool _isHandlingTextCheckingResults;	// 39 = 0x27
    _Bool _isTypingOrMarkingText;	// 40 = 0x28
    _Bool _isSelectingText;	// 41 = 0x29
    _Bool _hasEditedCharactersAfterTextSelection;	// 42 = 0x2a
    _Bool _isDragging;	// 43 = 0x2b
    _Bool _isDropping;	// 44 = 0x2c
    _Bool _isResettingBaseWritingDirection;	// 45 = 0x2d
    _Bool _isReadingSelectionFromPasteboard;	// 46 = 0x2e
    _Bool _shouldRemoveLeadingWhitespaceForChecklistDrop;	// 47 = 0x2f
    _Bool _isChangingSelectionByGestures;	// 48 = 0x30
    _Bool _isApplyingUndoCommand;	// 49 = 0x31
    _Bool _isEndingEditing;	// 50 = 0x32
    _Bool _isZombie;	// 51 = 0x33
    _Bool _isEditingTemporaryAttributes;	// 52 = 0x34
    _Bool _pendingFixupAfterEditing;	// 53 = 0x35
    _Bool _delayedFixupAfterEditingWantsUndoCommand;	// 54 = 0x36
    NSUndoManager *_undoManager;	// 56 = 0x38
    NSObject<TTTextUndoTarget> *_overrideUndoTarget;	// 64 = 0x40
    id <TTTextStorageStyler> _styler;	// 72 = 0x48
    NSMutableArray *_deletedRanges;	// 80 = 0x50
    TTMergeableStringVersionedDocument *_document;	// 88 = 0x58
    NSArray *_pasteboardTypes;	// 96 = 0x60
    NSMutableArray *_undoCommands;	// 104 = 0x68
    TTMergeableStringUndoGroup *_coalescingUndoGroup;	// 112 = 0x70
    unsigned long long _editingCount;	// 120 = 0x78
    unsigned long long _ttEditedMask;	// 128 = 0x80
    long long _ttChangeInLength;	// 136 = 0x88
    long long _skipTimestampUpdatesCount;	// 144 = 0x90
    NSDate *_now;	// 152 = 0x98
    NSNumber *_currentTimestamp;	// 160 = 0xa0
    struct _NSRange _beforeEndEditedRange;	// 168 = 0xa8
    struct _NSRange _ttEditedRange;	// 184 = 0xb8
    struct _NSRange _lastUndoEditRange;	// 200 = 0xc8
}

+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2 forPlainText:(_Bool)arg3 forStandardizedText:(_Bool)arg4 fixAttachments:(_Bool)arg5 insertListMarkers:(_Bool)arg6;	// IMP=0x00000000000436be
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1 forPlainText:(_Bool)arg2 forStandardizedText:(_Bool)arg3;	// IMP=0x0000000000043563
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(_Bool)arg2;	// IMP=0x0000000000043299
+ (id)removeDataDetectorLinksForAttributedString:(id)arg1;	// IMP=0x000000000004307d
+ (id)standardizedAttributedStringFromAttributedString:(id)arg1 withStyler:(id)arg2 fixAttachments:(_Bool)arg3 translateTTFont:(_Bool)arg4 context:(id)arg5;	// IMP=0x0000000000042865
+ (double)listItemGlyphPointSizeForUnorderedListStyle:(unsigned int)arg1 zoomFactor:(double)arg2;	// IMP=0x0000000000042794
+ (id)bulletTextAttributesWithTextFont:(id)arg1 paragraphStyle:(id)arg2 zoomFactor:(double)arg3;	// IMP=0x0000000000042449
- (void).cxx_destruct;	// IMP=0x0000000000085a98
@property(copy, nonatomic) NSNumber *currentTimestamp; // @synthesize currentTimestamp=_currentTimestamp;
@property(nonatomic) struct _NSRange lastUndoEditRange; // @synthesize lastUndoEditRange=_lastUndoEditRange;
@property(nonatomic) _Bool previouslyHadMarkedText; // @synthesize previouslyHadMarkedText=_previouslyHadMarkedText;
@property(nonatomic) _Bool directlyEditing; // @synthesize directlyEditing=_directlyEditing;
@property(copy, nonatomic) NSDate *now; // @synthesize now=_now;
@property(nonatomic) long long skipTimestampUpdatesCount; // @synthesize skipTimestampUpdatesCount=_skipTimestampUpdatesCount;
@property(nonatomic) _Bool delayedFixupAfterEditingWantsUndoCommand; // @synthesize delayedFixupAfterEditingWantsUndoCommand=_delayedFixupAfterEditingWantsUndoCommand;
@property(nonatomic) long long ttChangeInLength; // @synthesize ttChangeInLength=_ttChangeInLength;
@property(nonatomic) unsigned long long ttEditedMask; // @synthesize ttEditedMask=_ttEditedMask;
@property(nonatomic) struct _NSRange ttEditedRange; // @synthesize ttEditedRange=_ttEditedRange;
@property(nonatomic) _Bool pendingFixupAfterEditing; // @synthesize pendingFixupAfterEditing=_pendingFixupAfterEditing;
@property(nonatomic) _Bool isEditingTemporaryAttributes; // @synthesize isEditingTemporaryAttributes=_isEditingTemporaryAttributes;
@property(nonatomic) unsigned long long editingCount; // @synthesize editingCount=_editingCount;
@property(retain, nonatomic) TTMergeableStringUndoGroup *coalescingUndoGroup; // @synthesize coalescingUndoGroup=_coalescingUndoGroup;
@property(retain, nonatomic) NSMutableArray *undoCommands; // @synthesize undoCommands=_undoCommands;
@property(nonatomic) _Bool isZombie; // @synthesize isZombie=_isZombie;
@property(nonatomic) _Bool isEndingEditing; // @synthesize isEndingEditing=_isEndingEditing;
@property(nonatomic) _Bool isApplyingUndoCommand; // @synthesize isApplyingUndoCommand=_isApplyingUndoCommand;
@property(nonatomic) _Bool isChangingSelectionByGestures; // @synthesize isChangingSelectionByGestures=_isChangingSelectionByGestures;
@property(nonatomic) _Bool shouldRemoveLeadingWhitespaceForChecklistDrop; // @synthesize shouldRemoveLeadingWhitespaceForChecklistDrop=_shouldRemoveLeadingWhitespaceForChecklistDrop;
@property(nonatomic) _Bool isReadingSelectionFromPasteboard; // @synthesize isReadingSelectionFromPasteboard=_isReadingSelectionFromPasteboard;
@property(nonatomic) _Bool isResettingBaseWritingDirection; // @synthesize isResettingBaseWritingDirection=_isResettingBaseWritingDirection;
@property(nonatomic) _Bool isDropping; // @synthesize isDropping=_isDropping;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool hasEditedCharactersAfterTextSelection; // @synthesize hasEditedCharactersAfterTextSelection=_hasEditedCharactersAfterTextSelection;
@property(nonatomic) _Bool isSelectingText; // @synthesize isSelectingText=_isSelectingText;
@property(nonatomic) _Bool isTypingOrMarkingText; // @synthesize isTypingOrMarkingText=_isTypingOrMarkingText;
@property(nonatomic) _Bool isHandlingTextCheckingResults; // @synthesize isHandlingTextCheckingResults=_isHandlingTextCheckingResults;
@property(nonatomic) _Bool isPerformingAccessibilityUndoableTextInsertion; // @synthesize isPerformingAccessibilityUndoableTextInsertion=_isPerformingAccessibilityUndoableTextInsertion;
@property(nonatomic) _Bool isDictating; // @synthesize isDictating=_isDictating;
@property(nonatomic) _Bool disableUndoCoalesceBreaking; // @synthesize disableUndoCoalesceBreaking=_disableUndoCoalesceBreaking;
@property(nonatomic) _Bool isFixing; // @synthesize isFixing=_isFixing;
@property(nonatomic) _Bool filterSubstringAttributesForPlainText; // @synthesize filterSubstringAttributesForPlainText=_filterSubstringAttributesForPlainText;
@property(nonatomic) _Bool filterPastedAttributes; // @synthesize filterPastedAttributes=_filterPastedAttributes;
@property(nonatomic) _Bool filterSubstringAttributes; // @synthesize filterSubstringAttributes=_filterSubstringAttributes;
@property(nonatomic) _Bool retainOriginalFormatting; // @synthesize retainOriginalFormatting=_retainOriginalFormatting;
@property(copy, nonatomic) NSArray *pasteboardTypes; // @synthesize pasteboardTypes=_pasteboardTypes;
@property(nonatomic) _Bool shouldConvertTablesToTabs; // @synthesize shouldConvertTablesToTabs=_shouldConvertTablesToTabs;
@property(nonatomic) _Bool convertAttributes; // @synthesize convertAttributes=_convertAttributes;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property(nonatomic) struct _NSRange beforeEndEditedRange; // @synthesize beforeEndEditedRange=_beforeEndEditedRange;
@property(readonly, nonatomic) NSMutableArray *deletedRanges; // @synthesize deletedRanges=_deletedRanges;
@property(retain, nonatomic) id <TTTextStorageStyler> styler; // @synthesize styler=_styler;
@property(nonatomic) _Bool shouldInhibitAddingExtraNewlinesAtEndDuringFixup; // @synthesize shouldInhibitAddingExtraNewlinesAtEndDuringFixup=_shouldInhibitAddingExtraNewlinesAtEndDuringFixup;
@property(nonatomic) _Bool wantsUpdateTrackingForInitialLoading; // @synthesize wantsUpdateTrackingForInitialLoading=_wantsUpdateTrackingForInitialLoading;
@property(nonatomic) _Bool wantsUndoCommands; // @synthesize wantsUndoCommands=_wantsUndoCommands;
@property __weak NSObject<TTTextUndoTarget> *overrideUndoTarget; // @synthesize overrideUndoTarget=_overrideUndoTarget;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void)setTimestamp:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000085336
- (void)endSkippingTimestampUpdates;	// IMP=0x00000000000851fd
- (void)beginSkippingTimestampUpdates;	// IMP=0x00000000000851cb
@property(readonly, nonatomic) _Bool isSkippingTimestampUpdates;
@property(readonly, nonatomic) _Bool wantsTimestampUpdates;
- (void)styleTextInRange:(struct _NSRange)arg1;	// IMP=0x00000000000850a7
- (_Bool)hasNamedStyle:(unsigned int)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x0000000000084f04
- (_Bool)isEditing;	// IMP=0x0000000000084eeb
- (void)endTemporaryAttributeEditing;	// IMP=0x0000000000084ebd
- (void)beginTemporaryAttributeEditing;	// IMP=0x0000000000084e8f
- (void)endTemporaryAttributes;	// IMP=0x0000000000084e52
- (void)beginTemporaryAttributes;	// IMP=0x0000000000084e41
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000084a2d
- (_Bool)ic_containsAttribute:(id)arg1 InRange:(struct _NSRange)arg2;	// IMP=0x0000000000084932
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000084848
- (void)dd_resetResults;	// IMP=0x000000000008453e
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000000844b0
- (_Bool)_shouldSetOriginalFontAttribute;	// IMP=0x00000000000844a8
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x00000000000843c3
- (id)correctParagraphStyleReuseForRange:(struct _NSRange)arg1 withNewAttributedString:(id)arg2;	// IMP=0x0000000000084097
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;	// IMP=0x0000000000083ffb
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;	// IMP=0x0000000000083f78
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x0000000000083ef6
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0000000000083e91
- (_Bool)validateIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;	// IMP=0x0000000000083e4c
- (void)replaceWithDocument:(id)arg1;	// IMP=0x0000000000083c8a
- (unsigned long long)mergeWithDocument:(id)arg1;	// IMP=0x0000000000083bde
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1 affinity:(unsigned long long)arg2;	// IMP=0x0000000000083b60
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000083b4c
- (void)restoreSelection:(id)arg1;	// IMP=0x00000000000835e5
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;	// IMP=0x0000000000083244
@property(readonly, nonatomic) NSArray *textViews;
@property(readonly, nonatomic) _Bool hasMultipleTextViews;
- (void)beginEditing;	// IMP=0x0000000000082db5
- (void)coordinateAccess:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082d1c
- (void)coordinateEditing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082c83
- (void)coordinateReading:(CDUnknownBlockType)arg1;	// IMP=0x0000000000082bea
- (void)redactAuthorAttributions;	// IMP=0x0000000000082b16
- (id)edits;	// IMP=0x0000000000082ae2
- (id)editsInRange:(struct _NSRange)arg1;	// IMP=0x00000000000829fe
- (void)enumerateEditsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000082981
- (id)editAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000082922
- (_Bool)mergeableStringIsEqualAfterSerialization:(id)arg1;	// IMP=0x00000000000821b0
- (void)endEditing;	// IMP=0x0000000000081b4e
- (void)fixupAfterEditingDelayedToEndOfRunLoop;	// IMP=0x0000000000081aca
- (void)executeDelayedFixupAfterEditing;	// IMP=0x0000000000081919
- (void)forceFixupAfterEditingIfDelayed;	// IMP=0x0000000000081896
- (void)fixupAfterEditing;	// IMP=0x000000000008157a
- (void)resetUndoManager;	// IMP=0x000000000008148f
- (void)breakUndoCoalescing;	// IMP=0x0000000000081416
- (id)newCoalescingUndoGroup;	// IMP=0x0000000000081405
- (void)applyUndoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000080f4d
- (void)applyUndoGroup:(id)arg1;	// IMP=0x0000000000080e5f
- (void)addUndoCommand:(id)arg1;	// IMP=0x0000000000080df6
@property(readonly, nonatomic) NSObject<TTTextUndoTarget> *undoTarget;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;	// IMP=0x0000000000080b8a
@property(readonly, nonatomic) TTMergeableAttributedString *mergeableString;
- (struct _NSRange)logicalRangeForLocation:(unsigned long long)arg1;	// IMP=0x0000000000080b55
- (id)string;	// IMP=0x0000000000080ad0
- (unsigned long long)length;	// IMP=0x0000000000080a57
- (void)editedAttributeRange:(struct _NSRange)arg1;	// IMP=0x0000000000080a37
- (void)editedRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;	// IMP=0x0000000000080a17
- (void)resetTTEdits;	// IMP=0x00000000000809e7
- (void)restoreAttributedString:(id)arg1;	// IMP=0x000000000008096f
@property(readonly, nonatomic) _Bool hasAnyTextViewWithDarkAppearance;
@property(readonly, copy, nonatomic) NSUUID *replicaID;
- (id)initWithData:(id)arg1 replicaID:(id)arg2;	// IMP=0x00000000000807f6
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000080612
- (id)_icaxUnfilteredAttributedString;	// IMP=0x00000000000448d1
- (struct _NSRange)safeCharacterRangeForRange:(struct _NSRange)arg1;	// IMP=0x0000000000044885
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x0000000000042f54
- (id)filteredAttributedSubstringFromRange:(struct _NSRange)arg1;	// IMP=0x0000000000042eb6
- (id)filteredAttributedSubstringFromRange:(struct _NSRange)arg1 insertListMarkers:(_Bool)arg2;	// IMP=0x0000000000042e13
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000042cde
- (id)standardizedAttributedStringFixingTextAttachmentsForRange:(struct _NSRange)arg1 styler:(id)arg2 context:(id)arg3;	// IMP=0x0000000000042bfa
- (id)standardizedAttributedStringFixingTextAttachmentsForRange:(struct _NSRange)arg1 context:(id)arg2;	// IMP=0x0000000000042b68
- (id)standardizedAttributedStringFixingTextAttachmentsInContext:(id)arg1;	// IMP=0x0000000000042adc
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x0000000000041f03
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;	// IMP=0x0000000000041479
- (void)convertNSTablesToTabs:(id)arg1;	// IMP=0x0000000000040fea
- (_Bool)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;	// IMP=0x0000000000040e61
- (_Bool)isDeletingContentAttachmentWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;	// IMP=0x0000000000040d36
- (_Bool)textViewHasMarkedText:(id)arg1;	// IMP=0x0000000000040d00
- (_Bool)isEditingOrConvertingMarkedText:(_Bool)arg1;	// IMP=0x0000000000040bce
- (_Bool)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;	// IMP=0x0000000000040b65
- (void)preReplaceCharactersInRange:(struct _NSRange)arg1 withStringLength:(unsigned long long)arg2;	// IMP=0x00000000000409a7
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2 sourceZoomController:(id)arg3 keepSourceZoomController:(_Bool)arg4 existingStyler:(id)arg5;	// IMP=0x00000000000406f6
- (id)initWithAttributedString:(id)arg1 replicaID:(id)arg2;	// IMP=0x0000000000040616
- (id)itemProviderForRange:(struct _NSRange)arg1 andNote:(id)arg2;	// IMP=0x000000000007ebce
- (id)filteredAttributedStringForUTI:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000012a21f
- (id)copyDataForUTI:(id)arg1 range:(struct _NSRange)arg2 persistenceHelper:(id)arg3;	// IMP=0x0000000000129d09
- (id)customPasteboardDataFromRange:(struct _NSRange)arg1 persistenceHelper:(id)arg2;	// IMP=0x0000000000129b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <TTTextStorageDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

