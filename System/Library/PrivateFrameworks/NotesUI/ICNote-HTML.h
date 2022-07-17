//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICNote.h>

#import <NotesUI/TTTextStorageDelegate-Protocol.h>

@class ICCollaborationColorManager, NSArray, NSString, PKInk, TTTextStorage;

@interface ICNote (HTML) <TTTextStorageDelegate>
+ (id)hexStringForColor:(id)arg1;	// IMP=0x0000000000015397
+ (_Bool)isDefaultColor:(id)arg1;	// IMP=0x00000000000152d4
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014a22
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;	// IMP=0x00000000000149a0
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013baa
+ (void)fixTextColorsInAttributedString:(id)arg1;	// IMP=0x0000000000013a72
+ (void)fixFontsInAttributedString:(id)arg1;	// IMP=0x00000000000135af
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;	// IMP=0x000000000001350b
+ (void)fixDashedListsInAttributedString:(id)arg1;	// IMP=0x0000000000013171
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;	// IMP=0x0000000000013052
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;	// IMP=0x0000000000012ed7
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000012b8f
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;	// IMP=0x0000000000012b6a
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;	// IMP=0x0000000000012a65
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;	// IMP=0x0000000000012a4e
+ (id)attributedStringFromHTMLString:(id)arg1;	// IMP=0x0000000000012a37
+ (void)removeUsageOfHashtag:(id)arg1;	// IMP=0x0000000000051066
+ (id)thumbnailImageForAttachment:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_1b6d18a9 *)arg9;	// IMP=0x000000000004c624
+ (void)redactNote:(id)arg1;	// IMP=0x000000000004a22b
+ (id)createNoteFromNote:(id)arg1 inFolder:(id)arg2 isPasswordProtected:(_Bool)arg3 removingOriginalNote:(_Bool)arg4;	// IMP=0x0000000000049ab0
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(_Bool)arg2 removingOriginalNote:(_Bool)arg3;	// IMP=0x0000000000049a1e
+ (void)createNoteForAirDropDocument:(id)arg1 legacyContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008816b
- (id)htmlStringWithHTMLAttachments;	// IMP=0x00000000000128f5
- (id)htmlStringWithAttachmentConversionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001281d
- (id)htmlStringWithAttachments:(_Bool)arg1;	// IMP=0x00000000000127de
- (id)htmlString;	// IMP=0x000000000001279c
- (_Bool)isHashtagRowAtRange:(struct _NSRange)arg1 outRangeForAppending:(struct _NSRange *)arg2 outIndex:(long long *)arg3 forHashtagAttachment:(id)arg4 outHashtagCount:(long long *)arg5;	// IMP=0x00000000000512d0
- (void)removeHashtag:(id)arg1;	// IMP=0x0000000000050158
- (id)addHashtagToNoteBody:(id)arg1 onlyIfMissing:(_Bool)arg2;	// IMP=0x000000000004fbf9
- (id)addHashtagToNoteBodyIfMissing:(id)arg1;	// IMP=0x000000000004fbe2
- (id)firstAttachmentInTextStorage;	// IMP=0x000000000004faeb
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(_Bool)arg1;	// IMP=0x000000000004f95c
@property(nonatomic, getter=isHandwritingRecognitionEnabled) _Bool handwritingRecognitionEnabled;
@property(copy, nonatomic) PKInk *selectedInk;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange)arg1;	// IMP=0x000000000004f294
- (void)announceAccessibilitySelectionChangedByMerge;	// IMP=0x000000000004f0ff
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;	// IMP=0x000000000004ee18
- (void)notifyTextViewsNoteDidMerge;	// IMP=0x000000000004ec30
- (void)notifyTextViewsNoteWillMerge;	// IMP=0x000000000004ea48
- (void)markBlockAndInlineAttachmentsForDeletion:(_Bool)arg1 inAttributedString:(id)arg2;	// IMP=0x000000000004e653
- (void)textStorageDidChange:(id)arg1;	// IMP=0x000000000004e5b8
- (void)textStorageWillChange:(id)arg1;	// IMP=0x000000000004e51d
- (void)textStorageDidPerformUndo:(id)arg1;	// IMP=0x000000000004e50b
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;	// IMP=0x000000000004e363
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;	// IMP=0x000000000004e2c8
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000004d73f
- (void)createMissingAttachmentsInTextStorage;	// IMP=0x000000000004d6c0
- (void)textStorageWillProcessEditing:(id)arg1;	// IMP=0x000000000004d4b6
@property(nonatomic) _Bool isDrawingStroke;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;	// IMP=0x000000000004d3cc
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;	// IMP=0x000000000004d39e
- (void)updateModificationDateAndChangeCount;	// IMP=0x000000000004d210
- (void)saveAfterDelay;	// IMP=0x000000000004d1b5
- (void)save;	// IMP=0x000000000004cd0d
- (id)thumbnailImageCacheKeyWithItemSize:(struct CGSize)arg1 appearanceType:(unsigned long long)arg2;	// IMP=0x000000000004cc3c
- (void)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 appearanceInfo:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000004c696
- (id)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_1b6d18a9 *)arg8 attachment:(id *)arg9;	// IMP=0x000000000004c345
- (id)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 requireAppearance:(_Bool)arg4 imageScaling:(unsigned long long *)arg5 showAsFileIcon:(_Bool *)arg6 isMovie:(_Bool *)arg7 movieDuration:(CDStruct_1b6d18a9 *)arg8;	// IMP=0x000000000004c319
- (_Bool)updateThumbnailAttachmentIdentifier;	// IMP=0x000000000004be7d
- (id)attachmentFromRemoteFileWrapper:(id)arg1;	// IMP=0x000000000004bdd9
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;	// IMP=0x000000000004bcc9
- (id)attachmentFromStandardFileWrapper:(id)arg1;	// IMP=0x000000000004bc58
- (id)attachmentFromSystemPaperAttachment:(id)arg1;	// IMP=0x000000000004bbad
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;	// IMP=0x000000000004bae2
- (id)attachmentFromTableData:(id)arg1;	// IMP=0x000000000004bad0
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000004af53
- (void)_updateTextViewToPaperIfNecessary;	// IMP=0x000000000004ad7c
- (void)redactAuthorAttributions;	// IMP=0x000000000004ad0f
- (id)attachmentActivityItemsForSharingForRange:(struct _NSRange)arg1;	// IMP=0x0000000000049772
@property(readonly, nonatomic) NSArray *attachmentActivityItemsForSharing;
- (id)airDropActivityItemSource;	// IMP=0x00000000000495e2
- (id)noteActivityItemsForSharingWithNoteExporter:(id)arg1;	// IMP=0x00000000000490ef
@property(readonly, nonatomic) long long primaryWritingDirection;
- (id)uiAttributedString;	// IMP=0x000000000004905a
@property(readonly, nonatomic) TTTextStorage *textStorageWithoutCreating;
@property(readonly, nonatomic) TTTextStorage *textStorage;
- (_Bool)hasMentionForParticipant:(id)arg1;	// IMP=0x0000000000048c7f
@property(readonly, nonatomic) _Bool ic_hasLightBackground;
@property(readonly, retain, nonatomic) ICCollaborationColorManager *collaborationColorManager;
- (void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x000000000004863a
- (id)rangesModifiedAfterTimestamp:(id)arg1 inTextStorage:(id)arg2;	// IMP=0x00000000000484bb
- (void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x0000000000048361
- (void)noteDidReplaceDocument;	// IMP=0x00000000000482bb
- (void)noteDidSaveAndClearDecryptedData;	// IMP=0x00000000000481d3
- (void)noteWillReleaseTextStorage;	// IMP=0x0000000000048191
- (_Bool)shouldReleaseTextStorageWhenTurningIntoFault;	// IMP=0x00000000000480da
- (void)noteWillTurnIntoFault;	// IMP=0x0000000000048080
- (id)dataForTypeIdentifier:(id)arg1;	// IMP=0x0000000000085b60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
