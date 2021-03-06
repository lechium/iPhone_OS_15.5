//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/MFAttachment.h>

#import <MessageUI/NSItemProviderWriting-Protocol.h>

@class NSArray, NSString;

@interface MFAttachment (NSItemProvider) <NSItemProviderWriting>
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000015e90
+ (id)attachmentElementHTMLStringWithAttributes:(id)arg1;	// IMP=0x000000000001ab44
+ (_Bool)_isPDF:(id)arg1;	// IMP=0x000000000001916b
+ (_Bool)isBasicImageMimeType:(id)arg1;	// IMP=0x00000000000190ad
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016020
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)markupStringForDisplayWithData:(id)arg1 allowAttachmentElement:(_Bool)arg2;	// IMP=0x000000000001a2a1
- (id)markupStringForCompositionWithPrependedBlankLine:(_Bool)arg1 imageScale:(unsigned long long)arg2 useAttachmentElement:(_Bool)arg3;	// IMP=0x0000000000019dd3
- (id)filenameStrippingZipIfNeededUseApplications:(_Bool)arg1;	// IMP=0x0000000000019aad
@property(readonly, nonatomic) _Bool isDisplayableInline;
@property(readonly, nonatomic) _Bool isDisplayableInsidePlugin;
@property(readonly, nonatomic) _Bool isDisplayableByWebKit;
@property(readonly, nonatomic) _Bool isDisplayableImage;
@property(readonly, nonatomic) _Bool isBasicImage;
@property(readonly, nonatomic) unsigned long long scaledFileSize;
- (unsigned long long)_imageScale;	// IMP=0x0000000000018f1a
- (void)enqueueScaleAttachmentWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018a0d
- (id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(_Bool)arg2 attachmentContextID:(id)arg3;	// IMP=0x0000000000017d90
- (unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1;	// IMP=0x0000000000017c9c
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;	// IMP=0x0000000000017c4b
- (void)_setImageScale:(unsigned long long)arg1;	// IMP=0x0000000000017bdd
- (_Bool)needsColorspaceConversion;	// IMP=0x0000000000017b7e
@property(readonly, nonatomic) unsigned long long imageScalingFlags;
@property(readonly, nonatomic) double constrainedWidth;
- (struct CGSize)markupSizeForImageScale:(unsigned long long)arg1;	// IMP=0x000000000001778a
- (struct CGSize)imageDimensions;	// IMP=0x00000000000175b2
- (void)setImageDimensions:(struct CGSize)arg1;	// IMP=0x0000000000017544
- (struct CGSize)imageDimensionsWithData:(id)arg1;	// IMP=0x00000000000173ef
@property(readonly, nonatomic) _Bool isCameraRollCompatibleVideo;
@property(readonly, nonatomic) _Bool isContentOpenable;
- (_Bool)_isContentTypeDisplayableByMobileMail;	// IMP=0x000000000001710e
- (_Bool)isCalendarFile;	// IMP=0x00000000000170af
@property(readonly, nonatomic) _Bool isPDFFile;
@property(readonly, nonatomic) _Bool isMedia;
- (void)decompressContentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016937
- (void)compressContentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001656d
@property(readonly, nonatomic) _Bool isContentCompressed;
@property(readonly, nonatomic) _Bool isRestrictedMIMEType;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) NSString *className;
- (id)_contentTypeByStrippingZipIfNeeded:(_Bool)arg1;	// IMP=0x000000000001614e
- (id)passWithError:(id *)arg1;	// IMP=0x000000000001acf6
- (_Bool)isPass;	// IMP=0x000000000001ace4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

