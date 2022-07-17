//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EMMessageListItem-Protocol.h>

@class ECMessageFlags, ECSubject, NSArray, NSDate, NSIndexSet, NSString;
@protocol EMCollectionItemID;

@protocol EMMutableMessageListItem <EMMessageListItem>
@property long long _internalID;
@property(retain) id <EMCollectionItemID> displayMessageItemID;
@property(copy) NSArray *mailboxes;
@property(copy) NSArray *mailboxObjectIDs;
@property long long conversationID;
@property unsigned long long count;
@property long long conversationNotificationLevel;
@property _Bool hasAttachments;
@property _Bool isBlocked;
@property _Bool isVIP;
@property(copy) NSIndexSet *flagColors;
@property _Bool hasUnflagged;
@property(retain) ECMessageFlags *flags;
@property _Bool isCCMe;
@property _Bool isToMe;
@property(copy) NSArray *ccList;
@property(copy) NSArray *toList;
@property(copy) NSArray *senderList;
@property(copy) NSString *summary;
@property(retain) ECSubject *subject;
@property(retain) NSDate *date;
@end
