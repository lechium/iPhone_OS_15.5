//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDMessagePersistenceStatistics.h>

@interface MFMessagePersistenceStatistics_iOS : EDMessagePersistenceStatistics
{
    _Bool _protectedDataAvailable;	// 8 = 0x8
    unsigned long long _protectedMessages;	// 16 = 0x10
    unsigned long long _protectedMessageData;	// 24 = 0x18
    unsigned long long _messagesMarkedAsJournaled;	// 32 = 0x20
    unsigned long long _mailboxesNeedingReconcilication;	// 40 = 0x28
}

@property(nonatomic) unsigned long long mailboxesNeedingReconcilication; // @synthesize mailboxesNeedingReconcilication=_mailboxesNeedingReconcilication;
@property(nonatomic) unsigned long long messagesMarkedAsJournaled; // @synthesize messagesMarkedAsJournaled=_messagesMarkedAsJournaled;
@property(nonatomic) unsigned long long protectedMessageData; // @synthesize protectedMessageData=_protectedMessageData;
@property(nonatomic) unsigned long long protectedMessages; // @synthesize protectedMessages=_protectedMessages;
@property(nonatomic) _Bool protectedDataAvailable; // @synthesize protectedDataAvailable=_protectedDataAvailable;

@end
