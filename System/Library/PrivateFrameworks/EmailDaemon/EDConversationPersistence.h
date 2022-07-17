//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDConversationDailyCloudExporterDelegate-Protocol.h>
#import <EmailDaemon/EDConversationSubscriptionProvider-Protocol.h>
#import <EmailDaemon/EDPersistenceDatabaseSchemaProvider-Protocol.h>
#import <EmailDaemon/EDUbiquitousConversationManagerDelegate-Protocol.h>

@class EDPersistenceDatabase, EDPersistenceHookRegistry, EDUbiquitousConversationManager, NSString;
@protocol OS_dispatch_queue;

@interface EDConversationPersistence : NSObject <EDUbiquitousConversationManagerDelegate, EDConversationDailyCloudExporterDelegate, EDPersistenceDatabaseSchemaProvider, EDConversationSubscriptionProvider>
{
    EDPersistenceDatabase *_database;	// 8 = 0x8
    EDUbiquitousConversationManager *_conversationManager;	// 16 = 0x10
    EDPersistenceHookRegistry *_hookRegistry;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
}

+ (unsigned long long)conversationFlagsForConversationNotificationLevel:(long long)arg1;	// IMP=0x000000000001e06d
+ (long long)conversationNotificationLevelForConversationFlags:(unsigned long long)arg1;	// IMP=0x000000000001e054
+ (id)conversationIDMessageIDTableSchema;	// IMP=0x000000000001dea3
+ (id)conversationsTableSchema;	// IMP=0x000000000001dd2d
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;	// IMP=0x000000000001dbdf
+ (id)conversationsTableName;	// IMP=0x000000000001dbd2
+ (id)log;	// IMP=0x000000000001daf5
- (void).cxx_destruct;	// IMP=0x0000000000022086
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(readonly, nonatomic) EDUbiquitousConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) __weak EDPersistenceDatabase *database; // @synthesize database=_database;
- (id)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;	// IMP=0x0000000000021c55
- (void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;	// IMP=0x0000000000021a45
- (long long)currentSyncAnchorForDailyExport;	// IMP=0x00000000000217bb
- (long long)previousSyncAnchorForDailyExport;	// IMP=0x00000000000214ef
@property(readonly, nonatomic) _Bool hasSubscribedConversations;
- (void)_postChangeNotificationForConversationID:(long long)arg1 flags:(unsigned long long)arg2 oldFlags:(unsigned long long)arg3 reason:(long long)arg4;	// IMP=0x00000000000210f1
- (void)_notifyOfFlagChangeForConversationID:(long long)arg1 oldFlags:(unsigned long long)arg2 newFlags:(unsigned long long)arg3 reason:(long long)arg4 generationWindow:(id)arg5;	// IMP=0x0000000000021010
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;	// IMP=0x0000000000020baf
- (void)pruneConversationTables:(double)arg1;	// IMP=0x0000000000020977
- (void)updateConversationNotificationLevel:(long long)arg1 forConversationWithID:(long long)arg2;	// IMP=0x000000000002087b
- (void)updateAssociationTableForMessageID:(id)arg1 dateSent:(id)arg2 conversationID:(long long)arg3;	// IMP=0x0000000000020365
- (void)updateAssociationTableForMessageIDs:(id)arg1 conversationID:(long long)arg2;	// IMP=0x00000000000201e0
- (void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;	// IMP=0x00000000000201cd
- (void)updateAssociationTableForMessagePersistentIDs:(id)arg1 conversationID:(long long)arg2;	// IMP=0x000000000001fda0
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;	// IMP=0x000000000001f740
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 forConversationIDs:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000001f3d5
- (void)markConversationWithIDs:(id)arg1 notify:(_Bool)arg2;	// IMP=0x000000000001f3b4
- (void)markConversationWithIDs:(id)arg1 mute:(_Bool)arg2;	// IMP=0x000000000001f38f
- (long long)createConversationWithFlags:(unsigned long long)arg1;	// IMP=0x000000000001f0f5
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;	// IMP=0x000000000001ed88
- (long long)conversationIDForMessageIDs:(id)arg1;	// IMP=0x000000000001e9a2
- (id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000001e58e
- (id)syncedConversationIDsBySyncKey;	// IMP=0x000000000001e241
- (void)initializeConversationManagerAndPerformInitialSync;	// IMP=0x000000000001e15a
- (id)initWithDatabase:(id)arg1 hookRegistry:(id)arg2;	// IMP=0x000000000001e089

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
