//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface LocalAccount
{
}

+ (id)csAccountTypeString;	// IMP=0x00000000000206ca
+ (id)accountTypeString;	// IMP=0x00000000000206bd
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;	// IMP=0x0000000000020558
+ (id)localAccount;	// IMP=0x00000000000204b9
+ (id)accountTypeIdentifier;	// IMP=0x00000000000204b1
- (_Bool)supportsArchiving;	// IMP=0x0000000000020e41
- (_Bool)supportsAppend;	// IMP=0x0000000000020e39
- (_Bool)deleteInPlaceForMailbox:(id)arg1;	// IMP=0x0000000000020e1d
- (id)_infoForMatchingURL:(id)arg1;	// IMP=0x0000000000020d1a
- (id)_URLScheme;	// IMP=0x0000000000020d0d
- (id)transientDraftsFolder;	// IMP=0x0000000000020cf6
- (id)transientDraftsFolderShouldCreate:(_Bool)arg1;	// IMP=0x0000000000020c62
- (void)resetSpecialMailboxes;	// IMP=0x0000000000020c1f
- (id)mailboxUidForFileSystemPath:(id)arg1;	// IMP=0x0000000000020a9d
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;	// IMP=0x0000000000020911
- (_Bool)_setChildren:(id)arg1 forMailboxUid:(id)arg2;	// IMP=0x000000000002087a
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;	// IMP=0x00000000000207f8
- (void)_synchronouslyLoadListingForParent:(id)arg1;	// IMP=0x0000000000020721
- (_Bool)supportsPurge;	// IMP=0x0000000000020719
- (_Bool)canGoOffline;	// IMP=0x0000000000020711
- (_Bool)_shouldConfigureMailboxCache;	// IMP=0x0000000000020709
- (_Bool)canFetch;	// IMP=0x0000000000020701
- (void)setPassword:(id)arg1;	// IMP=0x00000000000206fb
- (void)setUsername:(id)arg1;	// IMP=0x00000000000206f5
- (void)setHostname:(id)arg1;	// IMP=0x00000000000206ef
- (id)displayName;	// IMP=0x00000000000206d5
- (id)pushedMailboxUids;	// IMP=0x00000000000206a4
- (id)primaryMailboxUid;	// IMP=0x0000000000020690
- (id)mailboxPathExtension;	// IMP=0x0000000000020683
- (Class)storeClass;	// IMP=0x0000000000020672
- (id)uniqueId;	// IMP=0x0000000000020665
- (_Bool)isActive;	// IMP=0x000000000002065d
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;	// IMP=0x0000000000020565

@end
