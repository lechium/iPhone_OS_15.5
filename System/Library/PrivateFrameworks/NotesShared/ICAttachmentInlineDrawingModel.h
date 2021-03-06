//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKDrawing;

@interface ICAttachmentInlineDrawingModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;	// IMP=0x0000000000002e70
- (id)newDrawingFromMergeableData;	// IMP=0x00000000000032c7
- (void)setHandwritingRecognitionDrawing:(id)arg1;	// IMP=0x00000000000032b1
@property(readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)arg1;	// IMP=0x0000000000003293
- (_Bool)canConvertToHTMLForSharing;	// IMP=0x000000000000328b
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;	// IMP=0x0000000000003141
- (id)searchableTextContentInNote;	// IMP=0x00000000000030b3
- (id)additionalIndexableTextContentInNote;	// IMP=0x0000000000003063
- (id)standaloneTitleForNote;	// IMP=0x0000000000002f6b
- (_Bool)providesStandaloneTitleForNote;	// IMP=0x0000000000002f63
- (_Bool)showThumbnailInNoteList;	// IMP=0x0000000000002ed8
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;	// IMP=0x0000000000002ebc
- (_Bool)preferLocalPreviewImages;	// IMP=0x0000000000002eb4
- (_Bool)previewsSupportMultipleAppearances;	// IMP=0x0000000000002eac
- (_Bool)hasPreviews;	// IMP=0x0000000000002ea4
- (_Bool)shouldShowInContentInfoText;	// IMP=0x0000000000002e9c

@end

