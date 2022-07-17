//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class EDAttachmentPersistenceManager, MFFileCompressionQueue, NSLock, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MFAttachmentManager : NSObject <EFLoggable>
{
    NSObject<OS_dispatch_queue> *_arrayAccessQueue;	// 8 = 0x8
    NSMutableDictionary *_providers;	// 16 = 0x10
    struct os_unfair_lock_s _providersLock;	// 24 = 0x18
    NSMutableDictionary *_attachments;	// 32 = 0x20
    NSMutableDictionary *_metadata;	// 40 = 0x28
    NSLock *_metaDataLock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_imageScalingQueue;	// 56 = 0x38
    MFFileCompressionQueue *_compressionQueue;	// 64 = 0x40
    EDAttachmentPersistenceManager *_persistenceManager;	// 72 = 0x48
}

+ (id)supportedDocumentUTIs;	// IMP=0x00000000000bd883
+ (id)defaultManager;	// IMP=0x00000000000bd66a
+ (id)allManagers;	// IMP=0x00000000000bd615
+ (id)log;	// IMP=0x00000000000bd538
- (void).cxx_destruct;	// IMP=0x00000000000c1c23
@property(retain, nonatomic) EDAttachmentPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
- (void)clearMetadataForAttachment:(id)arg1;	// IMP=0x00000000000c1b34
- (id)metadataForAttachment:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000c1a0f
- (void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000000c1815
- (id)_contentIDForAttachment:(id)arg1;	// IMP=0x00000000000c17ec
- (void)setContentID:(id)arg1 forAttachment:(id)arg2;	// IMP=0x00000000000c16c6
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c16c0
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c16ba
- (void)removeAttachmentForURL:(id)arg1;	// IMP=0x00000000000c16b4
- (_Bool)updateAttachment:(id)arg1 withNewData:(id)arg2;	// IMP=0x00000000000c16ac
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;	// IMP=0x00000000000c16a6
- (id)attachmentForItemProvider:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000c15ea
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000c15e2
- (void)_cancelFetchForAttachment:(id)arg1;	// IMP=0x00000000000c0f53
- (void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2;	// IMP=0x00000000000c062e
- (void)fetchDataSynchronouslyForAttachment:(id)arg1;	// IMP=0x00000000000c00e2
- (id)fetchDataForAttachment:(id)arg1;	// IMP=0x00000000000bfcd9
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 request:(id)arg3 syncLock:(id *)arg4;	// IMP=0x00000000000bfc41
- (void)insertMessageAttachmentMetadataToPersistence:(id)arg1 forMessage:(id)arg2;	// IMP=0x00000000000bf6d8
- (id)attachmentsForContext:(id)arg1;	// IMP=0x00000000000bf6d0
- (id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2;	// IMP=0x00000000000bf0a3
- (id)attachmentForContentID:(id)arg1;	// IMP=0x00000000000bf07f
- (id)attachmentForCID:(id)arg1;	// IMP=0x00000000000befbf
- (id)attachmentForTextAttachment:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bee90
- (id)attachmentsForURLs:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bec26
- (id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000beb3b
- (id)attachmentForURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000beb14
- (id)_dataProviderForAttachmentURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000be821
- (id)_filePathForAttachment:(id)arg1;	// IMP=0x00000000000be696
- (_Bool)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bdd9e
- (id)compressionQueue;	// IMP=0x00000000000bdcd5
- (id)imageScalingQueue;	// IMP=0x00000000000bdcc7
- (void)removeProvider:(id)arg1;	// IMP=0x00000000000bdb9e
- (void)removeProviderForBaseURL:(id)arg1;	// IMP=0x00000000000bdabc
- (void)addProvider:(id)arg1 forBaseURL:(id)arg2;	// IMP=0x00000000000bd938
- (id)init;	// IMP=0x00000000000bd707

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
