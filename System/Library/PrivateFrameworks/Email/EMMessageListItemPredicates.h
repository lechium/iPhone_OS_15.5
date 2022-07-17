//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>
{
}

+ (id)_keyPathsForFlagChange:(id)arg1;	// IMP=0x0000000000054bd2
+ (_Bool)predicate:(id)arg1 appliesToFlagChange:(id)arg2;	// IMP=0x0000000000054b04
+ (id)_spotlightPredicateForPredicate:(id)arg1;	// IMP=0x000000000005486a
+ (id)spotlightPredicateForPredicate:(id)arg1;	// IMP=0x00000000000547bd
+ (id)mailboxURLsForPredicate:(id)arg1;	// IMP=0x00000000000543fe
+ (id)threadScopeForPredicate:(id)arg1;	// IMP=0x0000000000053aba
+ (id)mailboxScopeForPredicate:(id)arg1 withMailboxTypeResolver:(id)arg2;	// IMP=0x000000000005133f
+ (long long)dateSortOrderFromSortDescriptors:(id)arg1;	// IMP=0x0000000000051237
+ (id)sortDescriptorForDateAscending:(_Bool)arg1;	// IMP=0x0000000000051212
+ (id)predicateFromPredicate:(id)arg1 ignoringKeyPaths:(id)arg2;	// IMP=0x0000000000050c11
+ (id)predicateForAccount:(id)arg1;	// IMP=0x0000000000050aa2
+ (id)_predicateForMessagesInMailboxWithURL:(id)arg1;	// IMP=0x000000000005096a
+ (id)predicateForExcludingMessagesInMailboxWithURL:(id)arg1;	// IMP=0x00000000000508ef
+ (id)predicateForMessagesNewerThanDate:(id)arg1;	// IMP=0x00000000000507ee
+ (id)predicateForCCMeMessages;	// IMP=0x00000000000507ce
+ (id)predicateForToMeMessages;	// IMP=0x00000000000507ae
+ (id)predicateForIncludesMeMessages;	// IMP=0x000000000005068b
+ (id)predicateForTodayMessages;	// IMP=0x00000000000504fe
+ (id)predicateForMuteMessages;	// IMP=0x00000000000504de
+ (id)predicateForNotifyMessages;	// IMP=0x00000000000504be
+ (id)_predicateForKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00000000000503c1
+ (id)predicateForMessagesWithAttachments;	// IMP=0x000000000005039e
+ (id)predicateForReadMessages;	// IMP=0x000000000005037e
+ (id)predicateForUnreadMessages;	// IMP=0x000000000005035e
+ (id)predicateForUnflaggedMessages;	// IMP=0x000000000005033e
+ (id)predicateForFlagColor:(unsigned long long)arg1;	// IMP=0x00000000000501df
+ (id)predicateForFlaggedMessages;	// IMP=0x00000000000501bf
+ (id)predicateForVIPMessages;	// IMP=0x000000000005019f
+ (id)predicateForMessagesWithSender:(id)arg1;	// IMP=0x000000000005002d
+ (id)predicateForMessagesWithThreadScope:(id)arg1;	// IMP=0x000000000004fe0a
+ (id)predicateForMessagesWithMailboxScope:(id)arg1;	// IMP=0x000000000004f8cd
+ (id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg1;	// IMP=0x000000000004f7f8
+ (id)predicateForExcludingMessagesInMailboxes:(id)arg1;	// IMP=0x000000000004f723
+ (id)predicateForExcludingMessagesInMailboxObjectID:(id)arg1;	// IMP=0x000000000004f6a8
+ (id)predicateForExcludingMessagesInMailbox:(id)arg1;	// IMP=0x000000000004f62d
+ (id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg1;	// IMP=0x000000000004f558
+ (id)predicateForMessagesInMailboxes:(id)arg1;	// IMP=0x000000000004f483
+ (id)predicateForMessagesInMailboxWithObjectID:(id)arg1;	// IMP=0x000000000004f350
+ (id)predicateForMessagesInMailbox:(id)arg1;	// IMP=0x000000000004f250
+ (id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg1;	// IMP=0x000000000004f11f
+ (id)predicateForExcludingMessagesInMailboxWithType:(long long)arg1;	// IMP=0x000000000004f065
+ (id)predicateForMessagesInMailboxesWithTypes:(id)arg1;	// IMP=0x000000000004ef90
+ (id)_predicateForMessagesInMailboxWithType:(id)arg1;	// IMP=0x000000000004ee8f
+ (id)predicateForMessagesInMailboxWithType:(long long)arg1;	// IMP=0x000000000004ee15
+ (id)predicateForMessagesInConversation:(long long)arg1;	// IMP=0x000000000004ecf7
+ (id)log;	// IMP=0x000000000004ec1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
