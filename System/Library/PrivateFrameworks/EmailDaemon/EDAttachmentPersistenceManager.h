//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDAttachmentPersistence, EDMessagePersistence, NSString, NSURL;

@interface EDAttachmentPersistenceManager : NSObject <EFLoggable>
{
    EDAttachmentPersistence *_attachmentPersistence;	// 8 = 0x8
    EDMessagePersistence *_messagePersistence;	// 16 = 0x10
    NSURL *_tempDirectoryForArchiveAttachments;	// 24 = 0x18
}

+ (id)attachmentDirectoryURLWithBasePath:(id)arg1;	// IMP=0x000000000000fae1
+ (id)log;	// IMP=0x000000000000fa04
- (void).cxx_destruct;	// IMP=0x0000000000015cb1
@property(retain, nonatomic) NSURL *tempDirectoryForArchiveAttachments; // @synthesize tempDirectoryForArchiveAttachments=_tempDirectoryForArchiveAttachments;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, nonatomic) EDAttachmentPersistence *attachmentPersistence; // @synthesize attachmentPersistence=_attachmentPersistence;
- (void)persistenceIsDeletingMessages:(id)arg1 generationWindow:(id)arg2;	// IMP=0x0000000000015ba1
- (void)persistenceWillDeleteMessages:(id)arg1;	// IMP=0x0000000000015ad1
- (void)isDeletingMessages:(id)arg1;	// IMP=0x0000000000014f93
- (id)_accountIdentifiersByAttachmentIDs:(id)arg1;	// IMP=0x0000000000014c0c
- (void)willDeleteAttachmentsForMessages:(id)arg1;	// IMP=0x0000000000014558
- (id)_tempDirectoryForArchiveAttachmentsWithParentDirectory:(id)arg1;	// IMP=0x000000000001445d
- (_Bool)_writeFileWrapper:(id)arg1 toURL:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000013ea8
- (_Bool)_writeAttachment:(id)arg1 toDirectory:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000001386a
- (id)attachmentURLForMessageAttachmentID:(long long)arg1 basePath:(id)arg2;	// IMP=0x0000000000013566
- (_Bool)_moveAttachmentAtURL:(id)arg1 toURL:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000133d0
- (id)attachmentDirectoryURLForMessageID:(long long)arg1 basePath:(id)arg2;	// IMP=0x00000000000133a4
- (id)attachmentURLForGlobalMessageID:(long long)arg1 remoteURL:(id)arg2 basePath:(id)arg3;	// IMP=0x0000000000012f9b
- (id)attachmentURLForGlobalMessageID:(long long)arg1 mimePartNumber:(id)arg2 basePath:(id)arg3;	// IMP=0x0000000000012b92
- (_Bool)removeFilesystemAttachmentsByAccountIdentifier:(id)arg1;	// IMP=0x000000000001258f
- (_Bool)removeDatabaseAttachments:(id)arg1;	// IMP=0x0000000000012482
- (_Bool)persistAttachmentMetadata:(id)arg1;	// IMP=0x0000000000011e21
- (_Bool)_persistAttachmentWithWrapper:(id)arg1 orURL:(id)arg2 attachmentMetadata:(id)arg3 basePath:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000011231
- (_Bool)persistAttachmentWithURL:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000011204
- (_Bool)persistAttachment:(id)arg1 attachmentMetadata:(id)arg2 basePath:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000111da
- (_Bool)_persistAndUpdateAttachmentPersistenceTableFromFileWrapper:(id)arg1 orURL:(id)arg2 attachmentMetadata:(id)arg3 basePath:(id)arg4 shouldUpdateAttachmentID:(_Bool)arg5;	// IMP=0x000000000000fdc9
- (id)_updateFileWrapperNameToStaticFileName:(id)arg1;	// IMP=0x000000000000fbf3
- (id)initWithDatabase:(id)arg1 messagePersistence:(id)arg2;	// IMP=0x000000000000fb12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
