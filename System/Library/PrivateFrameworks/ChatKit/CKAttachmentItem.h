//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/QLPreviewItem-Protocol.h>

@class NSDate, NSString, NSURL;

@interface CKAttachmentItem : NSObject <QLPreviewItem>
{
    struct CGSize _size;	// 8 = 0x8
    NSURL *_appendedBundleURL;	// 24 = 0x18
    _Bool _isSticker;	// 32 = 0x20
    _Bool _showDocumentIcon;	// 33 = 0x21
    _Bool _isIrisAsset;	// 34 = 0x22
    NSURL *_fileURL;	// 40 = 0x28
    NSString *_transferGUID;	// 48 = 0x30
    NSString *_guid;	// 56 = 0x38
    NSDate *_createdDate;	// 64 = 0x40
    NSString *_irisVideoPath;	// 72 = 0x48
    NSURL *_previewURL;	// 80 = 0x50
}

+ (unsigned long long)pxWidth;	// IMP=0x000000000047e79a
+ (id)UTITypes;	// IMP=0x000000000047ce24
+ (struct CGSize)defaultSize;	// IMP=0x000000000047ce0e
+ (id)previewSizingQueue;	// IMP=0x000000000047cdba
+ (id)previewCache;	// IMP=0x000000000047cda1
- (void).cxx_destruct;	// IMP=0x000000000047e913
@property(retain, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(nonatomic) _Bool isIrisAsset; // @synthesize isIrisAsset=_isIrisAsset;
@property(retain, nonatomic) NSString *irisVideoPath; // @synthesize irisVideoPath=_irisVideoPath;
@property(nonatomic) _Bool showDocumentIcon; // @synthesize showDocumentIcon=_showDocumentIcon;
@property(nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(retain, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)_getIrisBundleURL;	// IMP=0x000000000047e2b5
- (id)_getIrisBundleLocation;	// IMP=0x000000000047e17d
- (id)calculateIrisVideoPath;	// IMP=0x000000000047e0ff
- (id)getIrisVideoPath;	// IMP=0x000000000047e0f7
- (id)dragItem;	// IMP=0x000000000047de57
- (id)pasteboardItem;	// IMP=0x000000000047daf8
- (id)UTIType;	// IMP=0x000000000047da4a
- (void)startDeferredSetup;	// IMP=0x000000000047da44
- (id)cachedPreview;	// IMP=0x000000000047d83a
- (id)uncachedPreviewURL;	// IMP=0x000000000047d7ca
- (id)previewURL:(_Bool)arg1;	// IMP=0x000000000047d72f
- (void)_savePreview:(id)arg1;	// IMP=0x000000000047d476
- (_Bool)canShareItem;	// IMP=0x000000000047d461
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000047d44b
- (id)_savedPreviewFromURL:(id)arg1;	// IMP=0x000000000047d38c
- (id)fileIcon;	// IMP=0x000000000047d0ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047d041
@property(readonly, copy) NSString *description;
- (id)imageData;	// IMP=0x000000000047cf65
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;	// IMP=0x000000000047ce2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

