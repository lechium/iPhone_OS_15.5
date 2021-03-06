//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDPersistenceDatabase, NSString;

@interface EDAttachmentPersistence : NSObject <EFLoggable>
{
    EDPersistenceDatabase *_database;	// 8 = 0x8
}

+ (id)hashForAttachmentName:(id)arg1;	// IMP=0x000000000000a913
+ (id)hashForAttachmentData:(id)arg1;	// IMP=0x000000000000a810
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;	// IMP=0x000000000000a519
+ (id)messageAttachmentTableSchema;	// IMP=0x0000000000009e9f
+ (id)attachmentTableSchema;	// IMP=0x0000000000009b93
+ (id)attachmentColumnNameHash;	// IMP=0x0000000000009b86
+ (id)attachmentIDColumnNameInMessageAttachmentsTable;	// IMP=0x0000000000009b79
+ (id)globalMessageIDColumnNameInMessageAttachmentTable;	// IMP=0x0000000000009b6c
+ (id)messageAttachmentsTableName;	// IMP=0x0000000000009b5f
+ (id)attachmentsTableName;	// IMP=0x0000000000009b52
+ (id)log;	// IMP=0x0000000000009a75
- (void).cxx_destruct;	// IMP=0x000000000000f9f4
@property(retain, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (id)attachmentMetadataForMessageAttachmentID:(long long)arg1;	// IMP=0x000000000000f42a
- (id)attachmentMetadataForMessage:(long long)arg1 remoteURL:(id)arg2;	// IMP=0x000000000000ec93
- (id)attachmentMetadataForMessage:(long long)arg1 mimePartNumber:(id)arg2;	// IMP=0x000000000000e535
- (id)uniqueAttachmentDataForHash:(id)arg1;	// IMP=0x000000000000dfa0
- (id)messageAttachmentMetadataForMessageID:(long long)arg1;	// IMP=0x000000000000d917
- (_Bool)messageAttachmentExistsForGlobalMessageID:(long long)arg1 remoteURL:(id)arg2 hasAttachmentEntry:(_Bool *)arg3;	// IMP=0x000000000000d122
- (_Bool)messageAttachmentExistsForGlobalMessageID:(long long)arg1 mimePartNumber:(id)arg2 hasAttachmentEntry:(_Bool *)arg3;	// IMP=0x000000000000c980
- (_Bool)removeAttachments:(id)arg1;	// IMP=0x000000000000c61c
- (id)globalMessageIDsForAttachment:(id)arg1;	// IMP=0x000000000000c15d
- (id)attachmentsForGlobalMessageIDs:(id)arg1;	// IMP=0x000000000000bc9e
- (_Bool)updateAttachmentIDForMessageAttachment:(id)arg1;	// IMP=0x000000000000b65f
- (_Bool)insertMessageAttachmentMetadata:(id)arg1;	// IMP=0x000000000000aef0
- (long long)insertAttachmentMetadata:(id)arg1;	// IMP=0x000000000000aa10
- (id)initWithDatabase:(id)arg1;	// IMP=0x000000000000a991

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

