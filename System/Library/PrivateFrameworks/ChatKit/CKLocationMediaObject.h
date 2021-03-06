//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/MKAnnotation-Protocol.h>

@class NSString;

@interface CKLocationMediaObject <MKAnnotation>
{
    struct CLLocationCoordinate2D _coordinate;	// 8 = 0x8
}

+ (id)placeholderPreviewCache;	// IMP=0x00000000002f721c
+ (_Bool)isPreviewable;	// IMP=0x00000000002f51b9
+ (id)fallbackFilenamePrefix;	// IMP=0x00000000002f499c
+ (id)UTITypes;	// IMP=0x00000000002f48e5
+ (id)placeholderPreviewForWidth:(double)arg1 orientation:(BOOL)arg2;	// IMP=0x00000000002f4887
+ (id)vcardDataFromCLLocation:(id)arg1;	// IMP=0x00000000002f4502
+ (Class)__ck_attachmentItemClass;	// IMP=0x00000000002f43ae
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange)arg2;	// IMP=0x00000000002f7b14
- (id)pasteboardItemProvider;	// IMP=0x00000000002f7a1a
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000002f73ec
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;	// IMP=0x00000000002f72e7
- (_Bool)isDroppedPin;	// IMP=0x00000000002f7277
- (id)vCardURLProperties;	// IMP=0x00000000002f7136
- (id)previewItemTitle;	// IMP=0x00000000002f695c
- (id)bbPreviewFillToSize:(struct CGSize)arg1;	// IMP=0x00000000002f6854
- (struct CGSize)bbSize;	// IMP=0x00000000002f683e
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000002f6155
- (id)transcriptTraitCollection;	// IMP=0x00000000002f60c7
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;	// IMP=0x00000000002f5337
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2 generateIntermediaries:(_Bool)arg3;	// IMP=0x00000000002f525e
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;	// IMP=0x00000000002f51c1
- (Class)placeholderBalloonViewClass;	// IMP=0x00000000002f51a8
- (Class)previewBalloonViewClass;	// IMP=0x00000000002f5197
- (Class)balloonViewClass;	// IMP=0x00000000002f5186
@property(readonly, copy, nonatomic) NSString *title;
- (int)mediaType;	// IMP=0x00000000002f4a68
- (id)initWithTransfer:(id)arg1 context:(id)arg2 forceInlinePreview:(_Bool)arg3;	// IMP=0x00000000002f4a17
- (id)attachmentSummary:(unsigned long long)arg1;	// IMP=0x00000000002f49a9
- (id)metricsCollectorMediaType;	// IMP=0x00000000002f4988
- (id)mapItem;	// IMP=0x00000000001bebfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;

@end

