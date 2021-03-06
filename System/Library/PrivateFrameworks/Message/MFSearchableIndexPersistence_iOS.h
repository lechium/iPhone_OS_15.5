//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDSearchableIndexPersistence.h>

#import <Message/EFLoggable-Protocol.h>

@class NSString;

@interface MFSearchableIndexPersistence_iOS : EDSearchableIndexPersistence <EFLoggable>
{
}

+ (id)log;	// IMP=0x000000000014802d
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;	// IMP=0x0000000000148dc4
- (id)_verificationDataFromMessage:(id)arg1 messageIDTransactionIDDictionary:(id)arg2;	// IMP=0x0000000000148b90
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 mailboxID:(long long)arg4 result:(CDUnknownBlockType)arg5;	// IMP=0x0000000000148b8a
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 attachmentPersistentID:(id)arg2 messagePersistentID:(id)arg3 name:(id)arg4 mailboxID:(long long)arg5 result:(CDUnknownBlockType)arg6;	// IMP=0x000000000014820c
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;	// IMP=0x00000000001481e3
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3;	// IMP=0x0000000000148117
- (id)additionalFilterClause;	// IMP=0x000000000014810a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

