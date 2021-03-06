//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICAttachment.h>

@class ICDocCamImageQuad, ICNotePasteboardData, LPLinkMetadata, NSString, UIImage;

@interface ICAttachment (PDFGalleryVersion)
+ (id)imageCache;	// IMP=0x00000000000da51f
+ (id)imageLoadingOperationQueue;	// IMP=0x00000000000d95c6
+ (id)thumbnailOperationQueue;	// IMP=0x00000000000d9534
@property(readonly, nonatomic) long long docCamPDFVersion;
- (id)dataForTypeIdentifier:(id)arg1;	// IMP=0x0000000000038af5
- (id)fileURLForTypeIdentifier:(id)arg1;	// IMP=0x00000000000387e3
- (id)fallbackMapMetadata;	// IMP=0x00000000000d56f5
- (id)fallbackWebMetadata;	// IMP=0x00000000000d5626
- (id)mapPreviewGenerationQueue;	// IMP=0x00000000000d55cf
- (id)webPreviewGenerationQueue;	// IMP=0x00000000000d5578
- (id)filePreviewGenerationQueue;	// IMP=0x00000000000d5521
- (id)archiveLinkmetadata:(id)arg1;	// IMP=0x00000000000d5254
- (id)lpImageFromPreviewImage:(id)arg1;	// IMP=0x00000000000d4fcd
@property(readonly, nonatomic) NSString *quotedText;
- (void)requestFileMetadataIfNecessary;	// IMP=0x00000000000d4d44
@property(readonly, nonatomic) LPLinkMetadata *loadingAttachmentsMetadata;
- (void)requestRemoteMetadata;	// IMP=0x00000000000d4ba3
@property(readonly, nonatomic) LPLinkMetadata *plainURLMetadata;
@property(readonly, nonatomic) LPLinkMetadata *fallbackRemoteAttachmentMetadata;
@property(readonly, nonatomic) LPLinkMetadata *synapseBasedMetadata;
@property(readonly, nonatomic) LPLinkMetadata *fileMetadata;
@property(readonly, nonatomic) LPLinkMetadata *scannedDocumentsMetadata;
- (void)addPreviewImageToMetadata:(id)arg1;	// IMP=0x00000000000d432e
@property(readonly, nonatomic) _Bool alwaysUsesSmallSize;
@property(readonly, nonatomic) _Bool usesLinkPresentation;
@property(readonly, nonatomic) _Bool metadataExists;
- (void)persistLinkMetadata:(id)arg1;	// IMP=0x00000000000d3fe2
- (id)retrieveLinkMetadata;	// IMP=0x00000000000d3a3f
- (void)redactAuthorAttributions;	// IMP=0x00000000000db754
- (void)notifyDocCamFrameworkAttachmentWasDeleted;	// IMP=0x00000000000db738
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 appearanceInfo:(id)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8 aboutToLoadHandler:(CDUnknownBlockType)arg9;	// IMP=0x00000000000db36c
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 requireAppearance:(_Bool)arg5 imageScaling:(unsigned long long *)arg6 showAsFileIcon:(_Bool *)arg7 isMovie:(_Bool *)arg8 movieDuration:(CDStruct_1b6d18a9 *)arg9;	// IMP=0x00000000000db0b1
- (_Bool)thumbnailImage:(id *)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_1b6d18a9 *)arg7;	// IMP=0x00000000000db082
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 appearanceType:(unsigned long long)arg3 scaleWhenDrawing:(_Bool)arg4 metadata:(id)arg5 sendNotification:(_Bool)arg6;	// IMP=0x00000000000daf99
- (id)updateAttachmentPreviewImageWithImage:(id)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5;	// IMP=0x00000000000daf6f
- (id)deviceInfosWithoutPreviewImagesFromDeviceInfos:(id)arg1;	// IMP=0x00000000000dadbe
@property(readonly, nonatomic) NSString *movieDurationForSpeaking;
@property(readonly, nonatomic) NSString *modificationDateForSpeaking;
- (id)activityItems;	// IMP=0x00000000000da9f7
@property(readonly, nonatomic) ICNotePasteboardData *pasteboardData;
- (id)attributedString;	// IMP=0x00000000000da653
- (id)cachedImage;	// IMP=0x00000000000da5cc
- (void)setCachedImage:(id)arg1;	// IMP=0x00000000000da531
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;	// IMP=0x00000000000d9d02
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d9ceb
@property(copy, nonatomic) ICDocCamImageQuad *croppingQuad;
@property(readonly, nonatomic) UIImage *unprocessedDocumentImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool supportsPresentingFromScrapPaperPIP;
@property(readonly, nonatomic) _Bool isUnsupportedOnCurrentPlatform;
- (id)inlineAttachmentWithTTAttachment:(id)arg1;	// IMP=0x00000000000dbf04
- (id)inlineAttachmentFromObject:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x00000000000dbb5c
- (void)filterInlineAttachmentsInTableColumnTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000db7c1
@end

