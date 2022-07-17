//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/IDSInvitationManagerDelegate-Protocol.h>

@class IDSInvitationManager, NSString;
@protocol HDIDSInvitationManagerDelegate, OS_dispatch_queue;

@interface HDIDSInvitationManager : NSObject <IDSInvitationManagerDelegate>
{
    id <HDIDSInvitationManagerDelegate> _delegate;	// 8 = 0x8
    Class _messageClass;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_IDSDelegateQueue;	// 32 = 0x20
    NSString *_schema;	// 40 = 0x28
    IDSInvitationManager *_invitationManager;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000676bbb
@property(retain, nonatomic) IDSInvitationManager *invitationManager; // @synthesize invitationManager=_invitationManager;
@property(nonatomic) __weak id <HDIDSInvitationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x0000000000676a1a
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x00000000006768bb
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x00000000006766e9
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x0000000000676517
- (void)declineInvitationWithUUID:(id)arg1 serverAcknowledgedBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000067624b
- (void)acceptInvitationWithUUID:(id)arg1 codableObject:(id)arg2 serverAcknowledgedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000675e7d
- (void)rescindInvitationWithUUID:(id)arg1 serverAcknowledgedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000675bb1
- (void)sendInvitationToIdentifier:(id)arg1 expirationDate:(id)arg2 codableObject:(id)arg3 serverAcknowledgedBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000067597f
- (id)initWithServiceIdentifier:(id)arg1 messageClass:(Class)arg2 schema:(id)arg3;	// IMP=0x000000000067581a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
