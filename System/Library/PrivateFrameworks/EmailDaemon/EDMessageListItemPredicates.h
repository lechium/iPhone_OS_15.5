//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EDMessageListItemPredicates : NSObject
{
}

+ (id)predicateForSpotlightPredicate:(id)arg1;	// IMP=0x0000000000076c74
+ (id)predicateForBody:(id)arg1;	// IMP=0x0000000000076b08
+ (id)predicateForSubjectPredicate:(id)arg1;	// IMP=0x0000000000076971
+ (id)predicateForSenderPredicate:(id)arg1;	// IMP=0x0000000000076626
+ (id)predicateForAnyRecipientPredicate:(id)arg1;	// IMP=0x00000000000762c7
+ (id)predicateForMessageIDHeaderHashPredicate:(id)arg1;	// IMP=0x00000000000761c3
+ (id)_predicateForAnyMailboxWithPredicate:(id)arg1;	// IMP=0x00000000000760ca
+ (id)_objectIDsFromRightExpression:(id)arg1;	// IMP=0x0000000000075e56
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)arg1 objectIDConverter:(id)arg2;	// IMP=0x0000000000075c88
+ (id)predicateForMailboxTypePredicate:(id)arg1 mailboxes:(id)arg2;	// IMP=0x00000000000757fd
+ (id)_predicateForRecipientMessagesAddressesKey:(id)arg1 addresses:(id)arg2;	// IMP=0x0000000000075678
+ (id)predicateForMessagesThatCCAddresses:(id)arg1;	// IMP=0x000000000007564c
+ (id)predicateForMessagesToAddresses:(id)arg1;	// IMP=0x0000000000075620
+ (id)predicateForMessagesFromVIPs:(id)arg1;	// IMP=0x00000000000751a3

@end

