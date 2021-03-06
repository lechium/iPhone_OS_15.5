//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DataAccessExpress/DADisableableObject.h>

#import <DataAccess/ASAccountActorMessages-Protocol.h>

@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>
{
}

- (id)initWithDAAccount:(id)arg1;	// IMP=0x0000000000002a14
- (oneway void)_accountPasswordChanged;	// IMP=0x00000000000366c1
- (oneway void)_foldersThatExternalClientsCareAboutChanged;	// IMP=0x0000000000036640
- (oneway void)_folderHierarchyChanged;	// IMP=0x00000000000365bf
- (oneway void)_newASPolicyKeyNotification:(id)arg1;	// IMP=0x000000000003653e
- (oneway void)_folderUpdatedNotification:(id)arg1;	// IMP=0x00000000000364bd
- (oneway void)_daemonDiedNotification:(id)arg1;	// IMP=0x000000000003643c
- (oneway void)shutdown;	// IMP=0x00000000000363bb
- (oneway void)setAccount:(id)arg1;	// IMP=0x000000000003633a
- (oneway void)startup;	// IMP=0x0000000000002b21
- (id)draftsFolder;	// IMP=0x00000000000362b6
- (id)deletedItemsFolder;	// IMP=0x0000000000002d2e
- (id)sentItemsFolder;	// IMP=0x0000000000002caa
- (id)inboxFolder;	// IMP=0x0000000000002c26
- (_Bool)searchQueriesRunning;	// IMP=0x0000000000036232
- (oneway void)cancelAllSearchQueries;	// IMP=0x00000000000361b1
- (oneway void)cancelSearchQuery:(id)arg1;	// IMP=0x0000000000036130
- (oneway void)performSearchQuery:(id)arg1;	// IMP=0x00000000000360af
- (oneway void)cancelTaskWithID:(int)arg1;	// IMP=0x000000000003602e
- (void)performFolderChange:(id)arg1 isUserRequested:(_Bool)arg2;	// IMP=0x0000000000035fad
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000035f29
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000035ea5
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000035e21
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000035d9d
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 isUserRequested:(_Bool)arg5 consumer:(id)arg6;	// IMP=0x0000000000035d19
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 isUserRequested:(_Bool)arg5 consumer:(id)arg6;	// IMP=0x0000000000035c95
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;	// IMP=0x0000000000035c74
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;	// IMP=0x0000000000035c53
- (int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;	// IMP=0x0000000000035bcf
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(_Bool)arg8 isUserRequested:(_Bool)arg9 consumer:(id)arg10 context:(id)arg11;	// IMP=0x0000000000035b4b
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;	// IMP=0x0000000000035ac7
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;	// IMP=0x0000000000035a43
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;	// IMP=0x00000000000359bf
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;	// IMP=0x000000000003593b
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;	// IMP=0x00000000000358b7
- (id)foldersTag;	// IMP=0x0000000000035833
- (oneway void)stopMonitoringAllFolders;	// IMP=0x00000000000357b2
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;	// IMP=0x0000000000035731
- (oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(_Bool)arg2;	// IMP=0x00000000000356b0
- (oneway void)monitorFoldersForUpdates:(id)arg1;	// IMP=0x000000000003562f
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;	// IMP=0x00000000000355ae
- (oneway void)setCustomSignature:(id)arg1;	// IMP=0x000000000003552d
- (id)customSignature;	// IMP=0x00000000000354a9
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;	// IMP=0x0000000000035428
- (id)encryptionIdentityPersistentReference;	// IMP=0x00000000000353a4
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;	// IMP=0x0000000000035323
- (id)signingIdentityPersistentReference;	// IMP=0x000000000003529f
- (oneway void)setGeneratesBulletins:(_Bool)arg1;	// IMP=0x000000000003521e
- (_Bool)generatesBulletins;	// IMP=0x000000000003519a
- (int)supportsUniqueServerId;	// IMP=0x0000000000035116
- (int)supportsSmartForwardReply;	// IMP=0x0000000000035092
- (int)supportsDraftFolderSync;	// IMP=0x000000000003500e
- (int)supportsConversations;	// IMP=0x0000000000034f8a
- (int)supportsEmailFlagging;	// IMP=0x0000000000034f06
- (int)supportsMailboxSearch;	// IMP=0x0000000000034e82
- (int)mailNumberOfPastDaysToSync;	// IMP=0x0000000000034dfe
- (id)mailboxes;	// IMP=0x0000000000002ba2

@end

