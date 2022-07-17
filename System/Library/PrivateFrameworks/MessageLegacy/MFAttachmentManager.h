//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MFAttachmentManager : NSObject
{
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;	// 8 = 0x8
    NSMutableDictionary *_providers;	// 16 = 0x10
    NSMutableDictionary *_attachments;	// 24 = 0x18
    NSMutableDictionary *_metadata;	// 32 = 0x20
    NSLock *_metaDataLock;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_imageScalingQueue;	// 48 = 0x30
}

+ (id)supportedDocumentUTIs;	// IMP=0x000000000004be4c
+ (id)defaultManager;	// IMP=0x000000000004bcbd
+ (id)allManagers;	// IMP=0x000000000004bc78
- (void)clearMetadataForAttachment:(id)arg1;	// IMP=0x000000000004ded6
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000004de46
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000004dd1c
- (id)_contentIDForAttachment:(id)arg1;	// IMP=0x000000000004dd03
- (void)setContentID:(id)arg1 forAttachment:(id)arg2;	// IMP=0x000000000004dc54
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x000000000004dc4e
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x000000000004dc48
- (void)removeAttachmentForURL:(id)arg1;	// IMP=0x000000000004dc42
- (_Bool)updateAttachment:(id)arg1 withNewData:(id)arg2;	// IMP=0x000000000004dc3a
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;	// IMP=0x000000000004dc34
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;	// IMP=0x000000000004dc2c
- (void)cancelFetchForAttachment:(id)arg1;	// IMP=0x000000000004d9a6
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;	// IMP=0x000000000004d407
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;	// IMP=0x000000000004d03a
- (void)fetchDataForAttachment:(id)arg1;	// IMP=0x000000000004cea6
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 syncLock:(id *)arg3;	// IMP=0x000000000004ce73
- (id)attachmentsForContext:(id)arg1;	// IMP=0x000000000004ce6b
- (id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2;	// IMP=0x000000000004cb46
- (id)attachmentForContentID:(id)arg1;	// IMP=0x000000000004cb32
- (id)attachmentForCID:(id)arg1;	// IMP=0x000000000004cace
- (id)attachmentForTextAttachment:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ca52
- (id)attachmentsForURLs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c89e
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004c81b
- (id)attachmentForURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c804
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004c68b
- (id)_filePathForAttachment:(id)arg1;	// IMP=0x000000000004c5ba
- (_Bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004c306
- (id)imageScalingQueue;	// IMP=0x000000000004c2fc
- (void)removeProvider:(id)arg1;	// IMP=0x000000000004c191
- (void)removeProviderForBaseURL:(id)arg1;	// IMP=0x000000000004c106
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;	// IMP=0x000000000004c057
- (void)dealloc;	// IMP=0x000000000004bdb3
- (id)init;	// IMP=0x000000000004bcf4

@end
