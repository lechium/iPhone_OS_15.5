//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageLegacy/EFPubliclyDescribable-Protocol.h>
#import <MessageLegacy/NSCopying-Protocol.h>

@class MFInvocationQueue, MFMessageCriterion, MFWeakReferenceHolder, MailAccount, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable>
{
    NSString *uniqueId;	// 8 = 0x8
    unsigned int _mailboxID;	// 16 = 0x10
    MFWeakReferenceHolder *_account;	// 24 = 0x18
    NSString *_pathComponent;	// 32 = 0x20
    unsigned int _attributes;	// 40 = 0x28
    MFWeakReferenceHolder *_parent;	// 48 = 0x30
    NSMutableArray *_children;	// 56 = 0x38
    MailAccount *_representedAccount;	// 64 = 0x40
    MFMessageCriterion *_criterion;	// 72 = 0x48
    _Bool allCriteriaMustBeSatisfied;	// 80 = 0x50
    NSString *_realFullPath;	// 88 = 0x58
    NSArray *_extraAttributes;	// 96 = 0x60
    NSNumber *_pendingLevel;	// 104 = 0x68
    int _type;	// 112 = 0x70
    NSMutableDictionary *_userInfo;	// 120 = 0x78
}

+ (_Bool)typeIsValidTransferDestination:(int)arg1;	// IMP=0x000000000002fc29
+ (_Bool)isSentMailboxType:(int)arg1;	// IMP=0x000000000002fc15
+ (_Bool)isDraftsMailboxType:(int)arg1;	// IMP=0x000000000002fc01
+ (_Bool)isOutgoingMailboxType:(int)arg1;	// IMP=0x000000000002fbe7
+ (_Bool)isStandardizedMailboxUidType:(int)arg1;	// IMP=0x000000000002fb30
+ (id)specialNameForType:(int)arg1;	// IMP=0x000000000002e4f9
+ (id)fileURLForMailboxURL:(id)arg1;	// IMP=0x000000000002ddac
@property(retain, nonatomic) NSArray *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)arg1;	// IMP=0x0000000000031288
@property(readonly, nonatomic) double suggestionsLostMessageSearchTimestamp;
@property(readonly, nonatomic) unsigned long long suggestionsLostMessageSearchResultCount;
- (void)addToPostOrderTraversal:(id)arg1;	// IMP=0x00000000000310cc
- (void)setLastViewedMessageID:(id)arg1;	// IMP=0x0000000000031074
- (id)lastViewedMessageDate;	// IMP=0x000000000003105b
- (id)lastViewedMessageID;	// IMP=0x0000000000031042
- (_Bool)alwaysWriteFullMessageFile;	// IMP=0x0000000000031035
- (_Bool)shouldRestoreMessagesAfterFailedDelete;	// IMP=0x000000000003100a
- (_Bool)isShared;	// IMP=0x0000000000030ffe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030ff3
- (id)store;	// IMP=0x0000000000030fa3
- (void)setCriterion:(id)arg1;	// IMP=0x0000000000030f41
- (id)criterion;	// IMP=0x0000000000030e3f
- (id)ancestralAccount;	// IMP=0x0000000000030de4
- (id)userInfoForSerialization;	// IMP=0x0000000000030d64
- (void)setUserInfoWithDictionary:(id)arg1;	// IMP=0x0000000000030cd0
- (id)userInfoDictionary;	// IMP=0x0000000000030c7e
- (_Bool)mergeWithUserInfo:(id)arg1;	// IMP=0x0000000000030c76
- (void)saveUserInfo;	// IMP=0x0000000000030b44
- (void)setUserInfoBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000030b16
- (_Bool)userInfoBoolForKey:(id)arg1;	// IMP=0x0000000000030af3
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000309d0
- (id)userInfoObjectForKey:(id)arg1;	// IMP=0x00000000000308e5
- (id)_loadUserInfo;	// IMP=0x0000000000030865
- (_Bool)isVisible;	// IMP=0x000000000003084d
- (void)setType:(int)arg1;	// IMP=0x0000000000030844
- (int)type;	// IMP=0x000000000003083b
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (id)_privacySafeDescription;	// IMP=0x0000000000030762
@property(readonly, copy) NSString *description;
- (_Bool)isDescendantOfMailbox:(id)arg1;	// IMP=0x00000000000306c1
- (long long)indexToInsertChildMailboxUid:(id)arg1;	// IMP=0x000000000003060d
- (long long)compareWithMailboxUid:(id)arg1;	// IMP=0x00000000000305ed
- (id)URLStringNonNil;	// IMP=0x00000000000305cb
- (unsigned int)mailboxID;	// IMP=0x0000000000030553
- (id)URLString;	// IMP=0x00000000000304fb
- (id)oldURLString;	// IMP=0x0000000000030424
- (id)URLStringWithAccount:(id)arg1;	// IMP=0x0000000000030383
- (id)URL;	// IMP=0x0000000000030303
- (id)pathRelativeToMailboxForDisplay:(id)arg1;	// IMP=0x000000000002ffcf
- (id)pathRelativeToMailbox:(id)arg1;	// IMP=0x000000000002ff7e
- (id)tildeAbbreviatedPath;	// IMP=0x000000000002fed8
- (id)realFullPath;	// IMP=0x000000000002fe51
- (id)fullPath;	// IMP=0x000000000002fdab
- (id)accountRelativePath;	// IMP=0x000000000002fd27
- (_Bool)isNotesMailboxUid;	// IMP=0x000000000002fcb2
- (_Bool)isOutgoingMailboxUid;	// IMP=0x000000000002fc6d
- (_Bool)isSentMailboxUid;	// IMP=0x000000000002fba3
- (_Bool)isSpecialMailboxUid;	// IMP=0x000000000002fb72
- (_Bool)isStandardizedMailboxUid;	// IMP=0x000000000002fb3e
- (_Bool)isStore;	// IMP=0x000000000002fb23
- (_Bool)isContainer;	// IMP=0x000000000002fb16
- (void)invalidate;	// IMP=0x000000000002fa2e
- (_Bool)isValid;	// IMP=0x000000000002fa15
- (id)account;	// IMP=0x000000000002f9e9
- (id)rootMailbox;	// IMP=0x000000000002f9cc
- (id)topMailbox;	// IMP=0x000000000002f992
- (id)representedAccount;	// IMP=0x000000000002f937
- (void)setRepresentedAccount:(id)arg1;	// IMP=0x000000000002f8ed
- (void)flushCriteria;	// IMP=0x000000000002f8ad
- (void)setParent:(id)arg1;	// IMP=0x000000000002f832
- (void)removeChild:(id)arg1;	// IMP=0x000000000002f7e7
- (id)parent;	// IMP=0x000000000002f7d1
- (void)sortChildren;	// IMP=0x000000000002f772
- (_Bool)setChildren:(id)arg1;	// IMP=0x000000000002f225
- (id)fullPathNonNil;	// IMP=0x000000000002f203
- (id)mutableCopyOfChildren;	// IMP=0x000000000002f02c
- (id)descendantWithExtraAttribute:(id)arg1;	// IMP=0x000000000002ef6d
- (id)childWithExtraAttribute:(id)arg1;	// IMP=0x000000000002eefd
- (id)childWithName:(id)arg1;	// IMP=0x000000000002ee98
- (unsigned long long)indexOfChild:(id)arg1;	// IMP=0x000000000002ed01
- (id)childAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002ecb1
- (unsigned long long)numberOfDescendants;	// IMP=0x000000000002eb67
- (unsigned long long)numberOfChildren;	// IMP=0x000000000002eb1d
- (id)depthFirstEnumerator;	// IMP=0x000000000002eabd
- (id)childEnumeratorIncludingHiddenChildren:(_Bool)arg1;	// IMP=0x000000000002ea82
- (id)childEnumerator;	// IMP=0x000000000002ea6b
- (_Bool)hasChildren;	// IMP=0x000000000002ea1b
- (id)_mutableChildren;	// IMP=0x000000000002e9c9
- (id)children;	// IMP=0x000000000002e9b7
- (_Bool)shouldUseNonDeletedForUnreadCount;	// IMP=0x000000000002e990
- (void)updateMostRecentStatusCount:(unsigned long long)arg1;	// IMP=0x000000000002e8d8
- (long long)statusCountDelta;	// IMP=0x000000000002e881
- (unsigned long long)nonDeletedCount;	// IMP=0x000000000002e829
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;	// IMP=0x000000000002e7cc
- (unsigned long long)unreadCount;	// IMP=0x000000000002e774
- (unsigned long long)serverUnreadOnlyOnServerCount;	// IMP=0x000000000002e71d
- (void)setAttributes:(unsigned int)arg1;	// IMP=0x000000000002e714
- (unsigned int)attributes;	// IMP=0x000000000002e70b
- (id)accountDisplayName;	// IMP=0x000000000002e6e0
- (void)setName:(id)arg1;	// IMP=0x000000000002e634
- (id)displayNameUsingSpecialNames;	// IMP=0x000000000002e5ac
- (id)name;	// IMP=0x000000000002e45c
- (id)displayName;	// IMP=0x000000000002e37c
- (id)uniqueId;	// IMP=0x000000000002e372
- (id)mutableDictionaryRepresentation;	// IMP=0x000000000002e360
- (id)dictionaryRepresentation;	// IMP=0x000000000002e34e
- (id)_dictionaryRepresentation;	// IMP=0x000000000002e0b5
- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3 extraAttributes:(id)arg4;	// IMP=0x000000000002e07a
- (id)_initWithName:(id)arg1 attributes:(unsigned int)arg2 forAccount:(id)arg3;	// IMP=0x000000000002e00c
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000002dfba
- (id)init;	// IMP=0x000000000002df3f
- (void)dealloc;	// IMP=0x000000000002de5f
@property(readonly, nonatomic) MFInvocationQueue *attachmentDownloadQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

