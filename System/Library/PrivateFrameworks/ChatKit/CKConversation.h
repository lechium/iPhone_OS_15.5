//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSItemProviderWriting-Protocol.h>

@class CKComposition, CKEntity, CNGroupIdentity, IMChat, IMHandle, IMService, NSArray, NSAttributedString, NSDate, NSNumber, NSSet, NSString;

@interface CKConversation : NSObject <NSItemProviderWriting>
{
    NSArray *_recipients;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    IMChat *_chat;	// 24 = 0x18
    unsigned int _limitToLoad;	// 32 = 0x20
    struct {
        unsigned int ignoringTypingUpdates:1;
    } _conversationFlags;	// 36 = 0x24
    _Bool _needsReload;	// 40 = 0x28
    _Bool _shouldShowGroupPhotoUpdateBanner;	// 41 = 0x29
    _Bool _shouldShowGroupNameUpdateBanner;	// 42 = 0x2a
    _Bool _hasLoadedAllMessages;	// 43 = 0x2b
    _Bool _isReportedAsSpam;	// 44 = 0x2c
    _Bool _wasKnownSender;	// 45 = 0x2d
    _Bool _hasSetWasKnownSender;	// 46 = 0x2e
    _Bool _holdWasKnownSenderUpdates;	// 47 = 0x2f
    _Bool _needsUpdatedContactsForVisualIdentity;	// 48 = 0x30
    _Bool _needsUpdatedGroupPhotoForVisualIdentity;	// 49 = 0x31
    _Bool _needsUpdatedGroupNameForVisualIdentity;	// 50 = 0x32
    int _wasDetectedAsSMSSpam;	// 52 = 0x34
    int _wasDetectedAsSMSCategory;	// 56 = 0x38
    int _wasDetectedAsiMessageSpam;	// 60 = 0x3c
    NSArray *_pendingHandles;	// 64 = 0x40
    NSString *_conversationListCollectionViewPinnedItemIdentifier;	// 72 = 0x48
    NSString *_conversationListCollectionViewListItemIdentifier;	// 80 = 0x50
    NSString *_selectedLastAddressedHandle;	// 88 = 0x58
    NSString *_selectedLastAddressedSIMID;	// 96 = 0x60
    NSSet *_pendingRecipients;	// 104 = 0x68
    NSAttributedString *_groupName;	// 112 = 0x70
    NSString *_groupIdentityUpdateHandleID;	// 120 = 0x78
    NSAttributedString *_previewText;	// 128 = 0x80
    IMHandle *_businessHandle;	// 136 = 0x88
    NSNumber *_businessConversation;	// 144 = 0x90
    NSDate *_dateLastViewed;	// 152 = 0x98
    CNGroupIdentity *__conversationVisualIdentity;	// 160 = 0xa0
}

+ (_Bool)isSMSSpamFilteringEnabled;	// IMP=0x0000000000212f81
+ (id)conversationForContacts:(id)arg1 candidateConversation:(id)arg2;	// IMP=0x000000000020c125
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(_Bool)arg2 candidateConversation:(id)arg3;	// IMP=0x000000000020bc20
+ (id)newPendingConversation;	// IMP=0x000000000020bbfd
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x0000000000246e79
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;	// IMP=0x000000000033f808
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(_Bool)arg1;	// IMP=0x000000000033f734
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;	// IMP=0x000000000033f42b
+ (_Bool)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(_Bool)arg5 error:(id *)arg6;	// IMP=0x000000000033f169
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;	// IMP=0x000000000033f155
+ (_Bool)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(long long *)arg2;	// IMP=0x000000000033ed5e
+ (long long)_iMessage_maxAttachmentCount;	// IMP=0x000000000033ed46
+ (_Bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;	// IMP=0x000000000033ebe0
+ (_Bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;	// IMP=0x00000000003416f5
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;	// IMP=0x00000000003416c7
+ (id)_sms_localizedErrorForReason:(long long)arg1;	// IMP=0x0000000000341464
+ (_Bool)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000340c93
+ (_Bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4;	// IMP=0x0000000000340ae0
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3;	// IMP=0x0000000000340acb
+ (_Bool)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long *)arg4;	// IMP=0x0000000000340251
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2;	// IMP=0x000000000034007b
+ (_Bool)_sms_mediaObjectPassesRestriction:(id)arg1;	// IMP=0x000000000033fd2c
- (void).cxx_destruct;	// IMP=0x0000000000214cc7
@property(nonatomic) _Bool needsUpdatedGroupNameForVisualIdentity; // @synthesize needsUpdatedGroupNameForVisualIdentity=_needsUpdatedGroupNameForVisualIdentity;
@property(nonatomic) _Bool needsUpdatedGroupPhotoForVisualIdentity; // @synthesize needsUpdatedGroupPhotoForVisualIdentity=_needsUpdatedGroupPhotoForVisualIdentity;
@property(nonatomic) _Bool needsUpdatedContactsForVisualIdentity; // @synthesize needsUpdatedContactsForVisualIdentity=_needsUpdatedContactsForVisualIdentity;
@property(retain, nonatomic) CNGroupIdentity *_conversationVisualIdentity; // @synthesize _conversationVisualIdentity=__conversationVisualIdentity;
@property(nonatomic) _Bool holdWasKnownSenderUpdates; // @synthesize holdWasKnownSenderUpdates=_holdWasKnownSenderUpdates;
@property(nonatomic) _Bool hasSetWasKnownSender; // @synthesize hasSetWasKnownSender=_hasSetWasKnownSender;
@property(nonatomic) _Bool wasKnownSender; // @synthesize wasKnownSender=_wasKnownSender;
@property(retain, nonatomic) NSDate *dateLastViewed; // @synthesize dateLastViewed=_dateLastViewed;
@property(retain, nonatomic) NSNumber *businessConversation; // @synthesize businessConversation=_businessConversation;
@property(retain, nonatomic) IMHandle *businessHandle; // @synthesize businessHandle=_businessHandle;
@property(nonatomic) _Bool isReportedAsSpam; // @synthesize isReportedAsSpam=_isReportedAsSpam;
@property(nonatomic) _Bool hasLoadedAllMessages; // @synthesize hasLoadedAllMessages=_hasLoadedAllMessages;
@property(copy, nonatomic) NSAttributedString *previewText; // @synthesize previewText=_previewText;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) NSString *groupIdentityUpdateHandleID; // @synthesize groupIdentityUpdateHandleID=_groupIdentityUpdateHandleID;
@property(nonatomic) _Bool shouldShowGroupNameUpdateBanner; // @synthesize shouldShowGroupNameUpdateBanner=_shouldShowGroupNameUpdateBanner;
@property(nonatomic) _Bool shouldShowGroupPhotoUpdateBanner; // @synthesize shouldShowGroupPhotoUpdateBanner=_shouldShowGroupPhotoUpdateBanner;
@property(readonly, nonatomic) NSAttributedString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSSet *pendingRecipients; // @synthesize pendingRecipients=_pendingRecipients;
@property(retain, nonatomic) NSString *selectedLastAddressedSIMID; // @synthesize selectedLastAddressedSIMID=_selectedLastAddressedSIMID;
@property(retain, nonatomic) NSString *selectedLastAddressedHandle; // @synthesize selectedLastAddressedHandle=_selectedLastAddressedHandle;
@property(readonly, nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
- (id)contactNameByHandle;	// IMP=0x000000000021488d
- (id)_conversationList;	// IMP=0x0000000000214874
- (_Bool)isBlockedByCommunicationLimits;	// IMP=0x0000000000214827
@property(readonly, nonatomic) NSString *conversationListCollectionViewListItemIdentifier; // @synthesize conversationListCollectionViewListItemIdentifier=_conversationListCollectionViewListItemIdentifier;
@property(readonly, nonatomic) NSString *conversationListCollectionViewPinnedItemIdentifier; // @synthesize conversationListCollectionViewPinnedItemIdentifier=_conversationListCollectionViewPinnedItemIdentifier;
- (_Bool)_unknownFilteringEnabled;	// IMP=0x000000000021467f
- (void)updateWasKnownSender;	// IMP=0x00000000002145fd
- (_Bool)isKnownSender;	// IMP=0x000000000021446d
- (id)copyForPendingConversation;	// IMP=0x0000000000214408
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 shouldListParticipants:(_Bool)arg3;	// IMP=0x0000000000214336
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;	// IMP=0x0000000000213e63
- (id)_headerTitleForService:(id)arg1 shouldListParticipants:(_Bool)arg2;	// IMP=0x0000000000213958
- (id)_nameForHandle:(id)arg1;	// IMP=0x0000000000213839
@property(readonly, nonatomic) NSString *serviceDisplayName;
- (BOOL)outgoingBubbleColor;	// IMP=0x0000000000213781
@property(readonly, nonatomic) BOOL buttonColor;
@property(readonly, nonatomic) _Bool isPinned;
@property(readonly, nonatomic) NSSet *mergedPinningIdentifiers;
@property(readonly, nonatomic) _Bool isPreviewTextForAttachment;
- (id)fastPreviewTextIgnoringPluginContent;	// IMP=0x0000000000213286
@property(nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool hasDisplayName;
- (id)nameWithRawAddresses:(_Bool)arg1;	// IMP=0x0000000000212e78
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *rawAddressedName;
- (void)fetchSuggestedNameIfNecessary;	// IMP=0x0000000000212cb6
@property(readonly, nonatomic) unsigned long long disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) _Bool shouldShowCharacterCount;
@property(readonly, copy, nonatomic) NSString *senderIdentifier;
- (void)_clearTypingIndicatorsIfNecessary;	// IMP=0x00000000002128da
- (void)updateUserActivity;	// IMP=0x000000000021280d
@property(nonatomic) _Bool localUserIsRecording;
@property(nonatomic) _Bool localUserIsTyping;
@property(copy, nonatomic) NSString *localUserIsComposing;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2;	// IMP=0x000000000021252b
- (_Bool)_chatSupportsTypingIndicators;	// IMP=0x00000000002123fa
- (void)sendMessage:(id)arg1 newComposition:(_Bool)arg2;	// IMP=0x00000000002122a1
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(_Bool)arg3;	// IMP=0x00000000002113bc
- (id)messagesFromComposition:(id)arg1;	// IMP=0x000000000021131b
- (id)messageWithComposition:(id)arg1;	// IMP=0x000000000021127a
- (void)resortMessagesIfNecessary;	// IMP=0x00000000002110b8
- (double)maxTrimDurationForMediaType:(int)arg1;	// IMP=0x000000000021102d
- (_Bool)canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;	// IMP=0x0000000000210f95
- (_Bool)canSendComposition:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000210e31
- (_Bool)_allowedByScreenTime;	// IMP=0x0000000000210d9a
- (_Bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;	// IMP=0x0000000000210ca7
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, copy, nonatomic) NSArray *recipientStrings;
@property(readonly, copy, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (void)setPendingComposeRecipients:(id)arg1;	// IMP=0x00000000002106dd
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;	// IMP=0x00000000002106c3
- (id)shortDescription;	// IMP=0x0000000000210552
@property(readonly, copy) NSString *description;
- (_Bool)isPlaceholder;	// IMP=0x00000000002104b9
- (void)updateLastViewedDate;	// IMP=0x0000000000210466
- (void)markAllMessagesAsRead;	// IMP=0x00000000002103c7
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000021032f
- (_Bool)hasLoadedFromSpotlight;	// IMP=0x0000000000210323
- (void)clearConversationLoadFromSpotlight;	// IMP=0x0000000000210316
- (id)ensureMessageWithGUIDIsLoaded:(id)arg1;	// IMP=0x00000000002101d6
- (void)setLoadedMessageCount:(unsigned long long)arg1;	// IMP=0x00000000002101bf
- (void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(_Bool)arg2;	// IMP=0x000000000020ff4d
- (void)loadMoreMessages;	// IMP=0x000000000020feb1
- (void)loadFrequentReplies;	// IMP=0x000000000020fd2a
@property(readonly, nonatomic) NSArray *frequentReplies;
- (void)loadMoreMessagesAfterLastMessage;	// IMP=0x000000000020fbdb
- (void)loadMoreMessagesBeforeFirstMessage;	// IMP=0x000000000020fa57
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1;	// IMP=0x000000000020f9c1
- (void)loadAllMessages;	// IMP=0x000000000020f8c2
- (_Bool)_earlyReturnHistoryLoad;	// IMP=0x000000000020f86f
- (void)deleteAllMessagesAndRemoveGroup;	// IMP=0x000000000020f858
- (void)deleteAllMessages;	// IMP=0x000000000020f844
- (void)_deleteAllMessagesAndRemoveGroup:(_Bool)arg1;	// IMP=0x000000000020f48e
- (id)date;	// IMP=0x000000000020f390
@property(readonly, nonatomic) _Bool isToEmailAddress;
@property(readonly, nonatomic) unsigned long long recipientCount;
- (id)uniqueIdentifier;	// IMP=0x000000000020ee7a
@property(readonly, nonatomic) long long spamCategory;
@property(readonly, nonatomic) int wasDetectedAsSMSCategory; // @synthesize wasDetectedAsSMSCategory=_wasDetectedAsSMSCategory;
@property(readonly, nonatomic) int wasDetectedAsSMSSpam; // @synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam;
@property(readonly, nonatomic) int wasDetectedAsiMessageSpam; // @synthesize wasDetectedAsiMessageSpam=_wasDetectedAsiMessageSpam;
@property(readonly, nonatomic) int wasDetectedAsSpam;
@property(readonly, nonatomic) NSString *pinningIdentifier;
@property(readonly, nonatomic) NSString *deviceIndependentID;
@property(readonly, nonatomic) NSString *groupID; // @dynamic groupID;
- (_Bool)noAvailableServices;	// IMP=0x000000000020e9e7
- (BOOL)sendButtonColor;	// IMP=0x000000000020e8f0
- (void)_chatPropertiesChanged:(id)arg1;	// IMP=0x000000000020e8ac
- (void)_chatItemsDidChange:(id)arg1;	// IMP=0x000000000020e88c
- (void)_handlePreferredServiceChangedNotification:(id)arg1;	// IMP=0x000000000020e719
- (_Bool)_handleIsForThisConversation:(id)arg1;	// IMP=0x000000000020e58b
@property(readonly, nonatomic) IMService *sendingService;
- (void)refreshServiceForSending;	// IMP=0x000000000020e3b5
- (id)orderedContactsWithMaxCount:(unsigned long long)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000020db50
- (id)orderedContactsForAvatar3DTouchUIWithKeysToFetch:(id)arg1;	// IMP=0x000000000020db34
- (id)orderedContactsForAvatarView;	// IMP=0x000000000020db16
- (void)updateDisplayNameIfSMSSpam;	// IMP=0x000000000020dadf
- (id)entityMatchingHandle:(id)arg1;	// IMP=0x000000000020d871
- (void)removeRecipientHandles:(id)arg1;	// IMP=0x000000000020d7c5
- (void)addRecipientHandles:(id)arg1;	// IMP=0x000000000020d719
@property(readonly, nonatomic) _Bool canShareFocusStatus;
- (void)setSendReadReceipts:(_Bool)arg1;	// IMP=0x000000000020d689
@property(readonly, nonatomic, getter=shouldSendReadReceipts) _Bool sendReadReceipts;
- (void)setMutedUntilDate:(id)arg1;	// IMP=0x000000000020d5d3
- (void)unmute;	// IMP=0x000000000020d594
- (_Bool)hasReplyEnabled;	// IMP=0x000000000020d518
- (_Bool)hasVerifiedBusiness;	// IMP=0x000000000020d48f
- (_Bool)isMakoConversation;	// IMP=0x000000000020d430
- (_Bool)isAppleConversation;	// IMP=0x000000000020d3d1
- (_Bool)isBusinessConversation;	// IMP=0x000000000020d275
@property(readonly, nonatomic, getter=isMuted) _Bool muted;
- (_Bool)canInsertMoreRecipients;	// IMP=0x000000000020d0c6
- (long long)maximumRecipientsForSendingService;	// IMP=0x000000000020cff2
- (_Bool)isAdHocGroupConversation;	// IMP=0x000000000020cf5e
@property(readonly, nonatomic) _Bool supportsMutatingGroupMembers;
@property(readonly, nonatomic, getter=hasLeftGroupChat) _Bool leftGroupChat;
@property(readonly, nonatomic, getter=hasLeft) _Bool left;
@property(readonly, nonatomic) _Bool canLeave;
@property(readonly, nonatomic, getter=isGroupConversation) _Bool groupConversation;
@property(nonatomic) _Bool forceMMS; // @dynamic forceMMS;
@property(nonatomic, getter=isIgnoringTypingUpdates) _Bool ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
- (_Bool)isDowngraded;	// IMP=0x000000000020cc49
@property(retain, nonatomic) CKComposition *unsentComposition; // @dynamic unsentComposition;
- (void)updateUnsentCompositionByAppendingComposition:(id)arg1;	// IMP=0x000000000020cb45
- (void)_handleEngroupFinishedUpdating:(id)arg1;	// IMP=0x000000000020c9fa
- (void)_handleChatJoinStateDidChange:(id)arg1;	// IMP=0x000000000020c93e
- (void)_handleChatParticipantsDidChange:(id)arg1;	// IMP=0x000000000020c86f
- (void)acceptTransfer:(id)arg1;	// IMP=0x000000000020c729
@property(readonly, nonatomic) CKEntity *recipient; // @dynamic recipient;
- (_Bool)containsHandleWithUID:(id)arg1;	// IMP=0x000000000020c4d6
@property(readonly, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) _Bool hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned long long unreadCount; // @dynamic unreadCount;
- (void)reloadIfNeeded;	// IMP=0x000000000020c3e1
- (void)setNeedsReload;	// IMP=0x000000000020c3d7
- (void)resetCaches;	// IMP=0x000000000020c38b
- (void)resetNameCaches;	// IMP=0x000000000020c371
@property(readonly, nonatomic) NSString *lastAddressedSIMID;
@property(readonly, nonatomic) NSString *lastAddressedHandle;
- (void)didBecomeActive;	// IMP=0x000000000020b9d5
- (id)_groupPhotoFileURL;	// IMP=0x000000000020b707
- (id)groupPhotoData;	// IMP=0x000000000020b51e
- (void)_updateGroupNameForVisualIdentity;	// IMP=0x000000000020b4ce
- (void)updateConversationVisualIdentityDisplayNameWithSender:(id)arg1;	// IMP=0x000000000020b491
- (void)updateConversationVisualIdentityGroupPhotoWithSender:(id)arg1;	// IMP=0x000000000020b454
- (void)_updateGroupPhotoForVisualIdentity;	// IMP=0x000000000020b3d7
- (void)_updateContactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;	// IMP=0x000000000020b323
- (_Bool)_contactsForVisualIdentityHaveKeys:(id)arg1;	// IMP=0x000000000020b16e
- (id)_contactsForVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;	// IMP=0x000000000020b135
- (void)setNeedsUpdatedGroupNameForVisualIdentity;	// IMP=0x000000000020b11e
- (void)setNeedsUpdatedGroupPhotoForVisualIdentity;	// IMP=0x000000000020b107
- (void)setNeedsUpdatedContactOrderForVisualIdentity;	// IMP=0x000000000020b0f0
- (id)conversationVisualIdentityWithKeys:(id)arg1 requestedNumberOfContactsToFetch:(unsigned long long)arg2;	// IMP=0x000000000020ad5f
- (void)_createConversationVisualIdentityWithKeys:(id)arg1 numberOfContacts:(unsigned long long)arg2;	// IMP=0x000000000020ac22
- (void)willBecomeInactive;	// IMP=0x000000000020abd8
- (id)initWithChat:(id)arg1;	// IMP=0x000000000020ab86
- (id)init;	// IMP=0x000000000020ab4b
- (void)dealloc;	// IMP=0x000000000020aaf1
- (id)pinnedConversationDisplayNamePreferringShortName:(_Bool)arg1;	// IMP=0x00000000000fbc10
- (_Bool)__im_ff_commSafetyUIEnabled;	// IMP=0x000000000020aaa6
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000246e86
- (_Bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;	// IMP=0x000000000033f72c
- (_Bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;	// IMP=0x000000000033ed56
- (_Bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(_Bool)arg2;	// IMP=0x00000000003418a5
- (_Bool)_sms_supportsCharacterCountForAddresses:(id)arg1;	// IMP=0x000000000034023c
- (_Bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;	// IMP=0x0000000000340097
- (_Bool)supportsSurf;	// IMP=0x00000000004873c0
- (id)activityForNewScene;	// IMP=0x0000000000531d63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

