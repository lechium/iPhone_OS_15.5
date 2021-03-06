//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailMessageLibrary, MFMessageCriterion, NSDate;

@interface MFLibraryStore
{
    MFMailMessageLibrary *_library;	// 80 = 0x50
    NSDate *_earliestReceivedDate;	// 88 = 0x58
    MFMessageCriterion *_criterion;	// 96 = 0x60
    unsigned long long _fetchWindow;	// 104 = 0x68
}

+ (_Bool)storeAtPathIsWritable:(id)arg1;	// IMP=0x000000000003ba49
+ (_Bool)createEmptyStoreForPath:(id)arg1;	// IMP=0x000000000003b99a
+ (id)sharedInstanceIfExists;	// IMP=0x00000000000360b0
+ (id)sharedInstance;	// IMP=0x000000000003607e
+ (id)storeWithMailbox:(id)arg1;	// IMP=0x0000000000035dc7
+ (unsigned int)defaultLoadOptions;	// IMP=0x0000000000035c01
- (void).cxx_destruct;	// IMP=0x000000000003c6d1
@property(retain, nonatomic) NSDate *earliestReceivedDate; // @synthesize earliestReceivedDate=_earliestReceivedDate;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;	// IMP=0x000000000003c61f
- (void)_queueMessagesWereCompacted:(id)arg1;	// IMP=0x000000000003c5ab
- (void)_queueMessagesWillBeCompacted:(id)arg1;	// IMP=0x000000000003c537
- (void)_queueMessageFlagsChanged:(id)arg1;	// IMP=0x000000000003c4c3
- (void)_queueMessagesAdded:(id)arg1;	// IMP=0x000000000003c402
- (_Bool)hasMessageForAccount:(id)arg1;	// IMP=0x000000000003c2eb
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;	// IMP=0x000000000003c110
- (void)purgeMessages:(id)arg1;	// IMP=0x000000000003c0f2
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x000000000003c033
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x000000000003bf74
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x000000000003beb5
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x000000000003be9f
- (id)newObjectCache;	// IMP=0x000000000003bc12
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;	// IMP=0x000000000003bb86
- (unsigned long long)unreadCount;	// IMP=0x000000000003bb2e
- (unsigned long long)serverUnreadOnlyOnServerCount;	// IMP=0x000000000003bad6
- (id)URLString;	// IMP=0x000000000003b936
- (id)criterion;	// IMP=0x000000000003b8d2
- (void)_setNeedsAutosave;	// IMP=0x000000000003b8cc
- (void)updateMetadata;	// IMP=0x000000000003b8c6
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;	// IMP=0x000000000003b899
- (void)compactMessages:(id)arg1;	// IMP=0x000000000003b832
- (void)doCompact;	// IMP=0x000000000003b794
- (_Bool)canCompact;	// IMP=0x000000000003b74b
- (_Bool)allowsAppend;	// IMP=0x000000000003b718
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;	// IMP=0x000000000003b6fa
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;	// IMP=0x000000000003b664
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000000003b637
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000000003b487
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;	// IMP=0x000000000003b2d6
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;	// IMP=0x000000000003ab87
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;	// IMP=0x000000000003a566
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;	// IMP=0x000000000003a53b
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 usePartDatas:(_Bool)arg5 didDownload:(_Bool *)arg6;	// IMP=0x0000000000039ffb
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(_Bool)arg3;	// IMP=0x0000000000039816
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;	// IMP=0x0000000000039516
- (_Bool)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 withConsumer:(id)arg4 downloadIfNecessary:(_Bool)arg5 didDownload:(_Bool *)arg6;	// IMP=0x0000000000038928
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4 didDownload:(_Bool *)arg5;	// IMP=0x00000000000387fd
- (_Bool)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange)arg2 isComplete:(_Bool *)arg3 consumer:(id)arg4;	// IMP=0x00000000000387f5
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 didDownload:(_Bool *)arg4;	// IMP=0x00000000000387ed
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 downloadIfNecessary:(_Bool)arg3 partial:(_Bool *)arg4;	// IMP=0x0000000000038716
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x00000000000386e9
- (_Bool)bodyFetchRequiresNetworkActivity;	// IMP=0x00000000000386e1
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;	// IMP=0x000000000003860e
- (void)dealloc;	// IMP=0x000000000003859c
- (void)handleMessagesWillBeCompacted:(id)arg1;	// IMP=0x000000000003853c
- (void)handleMessagesCompacted:(id)arg1;	// IMP=0x000000000003845d
- (id)_memberMessagesWithCompactionNotification:(id)arg1;	// IMP=0x0000000000038090
- (void)handleMessageFlagsChanged:(id)arg1;	// IMP=0x0000000000037e39
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;	// IMP=0x0000000000037a4d
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;	// IMP=0x00000000000379a5
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;	// IMP=0x0000000000037761
- (id)filterMessagesByMembership:(id)arg1;	// IMP=0x00000000000374ea
- (unsigned long long)fetchWindowCap;	// IMP=0x0000000000037471
- (unsigned long long)fetchWindow;	// IMP=0x0000000000037410
- (unsigned long long)growFetchWindow;	// IMP=0x00000000000373b7
- (_Bool)shouldGrowFetchWindow;	// IMP=0x0000000000037354
- (void)invalidateFetchWindow;	// IMP=0x0000000000037317
- (unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(_Bool)arg1;	// IMP=0x000000000003720b
- (unsigned long long)_fetchWindowMinimum;	// IMP=0x0000000000037174
- (unsigned long long)_fetchWindowMultiple;	// IMP=0x00000000000370f1
- (void)willFetchMessages;	// IMP=0x000000000003702d
- (id)dateOfOldestNonIndexedNonSearchResultMessage;	// IMP=0x0000000000036f5a
- (id)serverSearchResults;	// IMP=0x0000000000036e8c
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;	// IMP=0x0000000000036d69
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000036ba0
- (id)copyOfAllMessages;	// IMP=0x0000000000036b89
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;	// IMP=0x0000000000036aba
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000036aa5
- (id)copyOfMessageInfos;	// IMP=0x0000000000036a0f
- (id)copyOfMessagesInRange:(struct _NSRange)arg1 options:(unsigned int)arg2 generation:(unsigned long long *)arg3;	// IMP=0x0000000000036592
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;	// IMP=0x0000000000036512
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;	// IMP=0x0000000000036492
- (unsigned long long)totalCount;	// IMP=0x00000000000363b9
- (void)openSynchronously;	// IMP=0x0000000000036346
- (void)_addInvocationToQueue:(id)arg1;	// IMP=0x000000000003629b
- (_Bool)shouldCancel;	// IMP=0x0000000000036293
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(_Bool)arg2;	// IMP=0x00000000000360d9
- (id)mailbox;	// IMP=0x00000000000360c1
- (id)library;	// IMP=0x0000000000036069
- (void)setLibrary:(id)arg1;	// IMP=0x0000000000035e25
- (id)initWithMailbox:(id)arg1;	// IMP=0x0000000000035db2
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x0000000000035d1a
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(_Bool)arg3;	// IMP=0x0000000000035c0c

@end

