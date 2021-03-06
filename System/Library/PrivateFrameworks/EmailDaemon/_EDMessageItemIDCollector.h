//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMessageQueryHelperDelegate-Protocol.h>

@class NSConditionLock, NSMutableArray, NSString;
@protocol EFScheduler;

@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate>
{
    id <EFScheduler> _scheduler;	// 8 = 0x8
    NSMutableArray *_messageItemIDs;	// 16 = 0x10
    NSConditionLock *_collectionLock;	// 24 = 0x18
    NSString *_errorString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000008954a
- (void)queryHelperNeedsRestart:(id)arg1;	// IMP=0x00000000000894db
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;	// IMP=0x00000000000894d5
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;	// IMP=0x00000000000894cf
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;	// IMP=0x00000000000894c9
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;	// IMP=0x00000000000894c3
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;	// IMP=0x00000000000894bd
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;	// IMP=0x00000000000894b7
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;	// IMP=0x00000000000894b1
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;	// IMP=0x00000000000894ab
- (void)queryHelperDidFindAllMessages:(id)arg1;	// IMP=0x000000000008945f
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;	// IMP=0x00000000000893f4
- (id)collectItemIDsWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 errorString:(id *)arg5;	// IMP=0x0000000000089198
- (id)init;	// IMP=0x00000000000890b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

