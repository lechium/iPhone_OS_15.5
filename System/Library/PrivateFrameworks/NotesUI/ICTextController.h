//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICAttachmentInsertionController, ICAuthorHighlightsController, ICHashtagController, ICMentionsController, ICNote, NSMutableArray, NSMutableDictionary, NSTextStorage;

@interface ICTextController
{
    _Bool _disableAddingExtraLinesIfNeeded;	// 8 = 0x8
    _Bool _isForPrint;	// 9 = 0x9
    _Bool _userChangedWritingDirection;	// 10 = 0xa
    _Bool _trackAddedExtraNewlineRanges;	// 11 = 0xb
    _Bool _isConvertingTables;	// 12 = 0xc
    _Bool _shouldMergeNoteAfterScrolling;	// 13 = 0xd
    _Bool _isAutoListInsertionDisabled;	// 14 = 0xe
    _Bool _fullTextStylingRefreshScheduled;	// 15 = 0xf
    ICNote *_note;	// 16 = 0x10
    ICAttachmentInsertionController *_attachmentInsertionController;	// 24 = 0x18
    NSMutableDictionary *_trackedToDoParagraphs;	// 32 = 0x20
    NSMutableArray *_trackedRangesForAddedExtraNewlines;	// 40 = 0x28
    unsigned long long _overrideAppearanceType;	// 48 = 0x30
    ICAuthorHighlightsController *_authorHighlightsController;	// 56 = 0x38
    ICMentionsController *_mentionsController;	// 64 = 0x40
    ICHashtagController *_hashtagController;	// 72 = 0x48
    unsigned long long _pauseMergeForScrollingCounter;	// 80 = 0x50
    NSTextStorage *_emptyTextStorage;	// 88 = 0x58
}

+ (id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg1 pasteRange:(struct _NSRange)arg2 textStorage:(id)arg3;	// IMP=0x00000000000c410a
+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(id)arg2;	// IMP=0x00000000000bf90f
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4;	// IMP=0x00000000000bf623
+ (double)extraWidthNeededForStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4;	// IMP=0x00000000000bf56e
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange)arg3;	// IMP=0x00000000000bebf8
+ (_Bool)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2;	// IMP=0x00000000000bead0
- (void).cxx_destruct;	// IMP=0x00000000000c4aaf
@property(retain, nonatomic) NSTextStorage *emptyTextStorage; // @synthesize emptyTextStorage=_emptyTextStorage;
@property(nonatomic) _Bool fullTextStylingRefreshScheduled; // @synthesize fullTextStylingRefreshScheduled=_fullTextStylingRefreshScheduled;
@property(nonatomic) _Bool isAutoListInsertionDisabled; // @synthesize isAutoListInsertionDisabled=_isAutoListInsertionDisabled;
@property(nonatomic) _Bool shouldMergeNoteAfterScrolling; // @synthesize shouldMergeNoteAfterScrolling=_shouldMergeNoteAfterScrolling;
@property(nonatomic) unsigned long long pauseMergeForScrollingCounter; // @synthesize pauseMergeForScrollingCounter=_pauseMergeForScrollingCounter;
@property(nonatomic) __weak ICHashtagController *hashtagController; // @synthesize hashtagController=_hashtagController;
@property(nonatomic) __weak ICMentionsController *mentionsController; // @synthesize mentionsController=_mentionsController;
@property(nonatomic) __weak ICAuthorHighlightsController *authorHighlightsController; // @synthesize authorHighlightsController=_authorHighlightsController;
@property(nonatomic) unsigned long long overrideAppearanceType; // @synthesize overrideAppearanceType=_overrideAppearanceType;
@property(nonatomic) _Bool isConvertingTables; // @synthesize isConvertingTables=_isConvertingTables;
@property(nonatomic) _Bool trackAddedExtraNewlineRanges; // @synthesize trackAddedExtraNewlineRanges=_trackAddedExtraNewlineRanges;
@property(retain, nonatomic) NSMutableArray *trackedRangesForAddedExtraNewlines; // @synthesize trackedRangesForAddedExtraNewlines=_trackedRangesForAddedExtraNewlines;
@property _Bool userChangedWritingDirection; // @synthesize userChangedWritingDirection=_userChangedWritingDirection;
@property(readonly, nonatomic) NSMutableDictionary *trackedToDoParagraphs; // @synthesize trackedToDoParagraphs=_trackedToDoParagraphs;
@property(nonatomic) __weak ICAttachmentInsertionController *attachmentInsertionController; // @synthesize attachmentInsertionController=_attachmentInsertionController;
@property(nonatomic) __weak ICNote *note; // @synthesize note=_note;
- (void)setIsForPrint:(_Bool)arg1;	// IMP=0x00000000000c4895
- (_Bool)isForPrint;	// IMP=0x00000000000c4885
@property(nonatomic) _Bool disableAddingExtraLinesIfNeeded; // @synthesize disableAddingExtraLinesIfNeeded=_disableAddingExtraLinesIfNeeded;
- (id)keyboardLanguageForTextView:(id)arg1;	// IMP=0x00000000000c40fd
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000c3c37
- (struct _NSRange)numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000c2c7a
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000c28c7
- (_Bool)shouldHighlightStyleAsLink:(unsigned int)arg1;	// IMP=0x00000000000c28bf
- (void)styleDataDetectorTypesForPreviewInTextStorage:(id)arg1;	// IMP=0x00000000000c23e5
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000c209a
- (void)addToTagsInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x00000000000c1e9b
- (_Bool)canAddToTagsInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x00000000000c1d20
- (void)convertInlineAttachmentToTextInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x00000000000c1aad
- (_Bool)canConvertInlineAttachmentToTextInTextView:(id)arg1 forRange:(struct _NSRange)arg2;	// IMP=0x00000000000c1a85
- (_Bool)inlineAttachmentInTextView:(id)arg1 atIndex:(unsigned long long)arg2 outAttachment:(id *)arg3;	// IMP=0x00000000000c1950
- (void)filterAttachmentsForPrintingInAttributedString:(id)arg1;	// IMP=0x00000000000c1679
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;	// IMP=0x00000000000c14f9
- (void)createToDoItemForCharacterRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;	// IMP=0x00000000000c132d
- (void)resetTrackedToDoParagraphs;	// IMP=0x00000000000c12fd
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;	// IMP=0x00000000000c0816
- (struct _NSRange)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange)arg2 actualLengthIncrease:(long long *)arg3;	// IMP=0x00000000000bfe1d
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange)arg1;	// IMP=0x00000000000bfb69
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 withLayoutManager:(id)arg3 firstVisibleCharLocation:(unsigned long long)arg4;	// IMP=0x00000000000bed87
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 withLayoutManager:(id)arg3;	// IMP=0x00000000000bed72
- (id)strippedTypingAttributesAtStartOfParagraph:(id)arg1 atTheEndOfDocument:(_Bool)arg2 isTyping:(_Bool)arg3;	// IMP=0x00000000000bea04
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;	// IMP=0x00000000000be946
- (void)targetedRefreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2 firstVisibleCharLocation:(unsigned long long)arg3;	// IMP=0x00000000000be6fa
- (_Bool)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange)arg3 andLocation:(unsigned long long)arg4;	// IMP=0x00000000000be48d
- (_Bool)deleteWordBackwardForSpecialCasesInTextView:(id)arg1;	// IMP=0x00000000000be193
- (_Bool)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange)arg3 blockBeforeEndEditing:(CDUnknownBlockType)arg4;	// IMP=0x00000000000bdf56
- (void)notifyInlineAttachmentsDeletedInRange:(struct _NSRange)arg1 ofTextStorage:(id)arg2;	// IMP=0x00000000000bddac
- (_Bool)deleteBackwardForSpecialCasesInTextView:(id)arg1;	// IMP=0x00000000000bd901
- (void)setParagraphWritingDirectionInRange:(struct _NSRange)arg1 toDirection:(long long)arg2 inTextView:(id)arg3;	// IMP=0x00000000000bd44a
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange)arg2 inTextView:(id)arg3 hashtagController:(id)arg4 mentionsController:(id)arg5 languageHasSpaces:(_Bool)arg6 parentAttachment:(id)arg7;	// IMP=0x00000000000bcb36
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange)arg2 inTextView:(id)arg3 languageHasSpaces:(_Bool)arg4;	// IMP=0x00000000000bcb03
- (void)setSelectionToIndex:(unsigned long long)arg1 onTextView:(id)arg2;	// IMP=0x00000000000bca78
- (_Bool)insertedSpaceInTextView:(id)arg1 replacementRange:(struct _NSRange)arg2;	// IMP=0x00000000000bc29d
- (_Bool)insertNewlineForSpecialCasesInTextView:(id)arg1;	// IMP=0x00000000000bbf4e
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;	// IMP=0x00000000000bbea5
- (struct _NSRange)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long *)arg5;	// IMP=0x00000000000bb93b
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3 textView:(id)arg4;	// IMP=0x00000000000bb5b5
- (void)updateAttachmentsInNote;	// IMP=0x00000000000baab5
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;	// IMP=0x00000000000baa49
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;	// IMP=0x00000000000ba926
- (id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(struct _NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4;	// IMP=0x00000000000ba6bb
- (void)unscriptRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000ba691
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000ba635
- (void)superscriptUpdate:(CDUnknownBlockType)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000ba250
- (id)scaleFont:(id)arg1 withScale:(double)arg2;	// IMP=0x00000000000ba1e6
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000ba071
- (_Bool)isTodoDoneRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000b9e83
- (void)refreshTypingAttributesForTextView:(id)arg1 textStorage:(id)arg2;	// IMP=0x00000000000b9d9d
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;	// IMP=0x00000000000b9c86
- (_Bool)setDone:(_Bool)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000b97e9
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(id)arg2;	// IMP=0x00000000000b9308
- (void)setTypingAttributesForUndo:(id)arg1;	// IMP=0x00000000000b9107
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4 inTextView:(id)arg5;	// IMP=0x00000000000b8842
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(_Bool)arg2 range:(struct _NSRange)arg3 inTextStorage:(id)arg4;	// IMP=0x00000000000b8826
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange)arg1 textStorage:(id)arg2 textView:(id)arg3;	// IMP=0x00000000000b8731
- (void)removeFontsAndColorsForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000b8571
- (_Bool)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000b8271
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3 inTextView:(id)arg4;	// IMP=0x00000000000b7f95
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000b7f72
- (_Bool)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000b7c5a
- (struct _NSRange)firstParagraphForSetListStyleRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000b7ae5
- (id)todoForRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000b788b
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4 forceUpdateAttributes:(_Bool)arg5;	// IMP=0x00000000000b6e35
- (void)indentRange:(struct _NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4;	// IMP=0x00000000000b6e19
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;	// IMP=0x00000000000b6cfa
- (_Bool)canIndentTextView:(id)arg1 byDelta:(long long)arg2 forRanges:(id)arg3;	// IMP=0x00000000000b664b
- (_Bool)canIndentTextView:(id)arg1 byDelta:(long long)arg2;	// IMP=0x00000000000b65cb
- (_Bool)attachmentsExistInRange:(struct _NSRange)arg1 textStorage:(id)arg2;	// IMP=0x00000000000b6486
- (long long)writingDirectionForRange:(struct _NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000b6391
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3;	// IMP=0x00000000000b636f
- (unsigned int)paragraphStyleForRange:(struct _NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(_Bool)arg4;	// IMP=0x00000000000b6221
- (void)dealloc;	// IMP=0x00000000000b61d9
- (id)init;	// IMP=0x00000000000b6182
- (void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(_Bool)arg6 isReadingSelectionFromPasteboard:(_Bool)arg7;	// IMP=0x0000000000069484
- (CDStruct_4bcfbbae)p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(CDStruct_4bcfbbae)arg4 filterPastedAttributes:(_Bool)arg5 isReadingSelectionFromPasteboard:(_Bool)arg6;	// IMP=0x0000000000068b6c
- (void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(_Bool)arg4 isReadingSelectionFromPasteboard:(_Bool)arg5;	// IMP=0x000000000006866c
- (id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;	// IMP=0x00000000000683f3
- (void)workAroundSageTables:(id)arg1;	// IMP=0x0000000000067fed
- (void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(_Bool)arg3 isReadingSelectionFromPasteboard:(_Bool)arg4;	// IMP=0x0000000000067a4a

@end

