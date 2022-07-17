//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSDExternalIDSDualSession
{
    _Bool _receivedInvitationAccept;	// 8 = 0x8
    NSString *_remoteFromID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000176b3c
@property(nonatomic) _Bool receivedInvitationAccept; // @synthesize receivedInvitationAccept=_receivedInvitationAccept;
@property(copy, nonatomic) NSString *remoteFromID; // @synthesize remoteFromID=_remoteFromID;
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x00100000001769db
- (void)cancelInvitationWithReason:(int)arg1;	// IMP=0x0010000000176923
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0010000000176842
- (void)sendInvitationWithData:(id)arg1;	// IMP=0x001000000017675e
@property(readonly, nonatomic) unsigned long long initialLinkType;
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x00100000001766fd
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteFromID:(id)arg2 remoteProtocolVersion:(int)arg3;	// IMP=0x001000000017665a
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteFromID:(id)arg3 remoteProtocolVersion:(id)arg4;	// IMP=0x00100000001765c2
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x001000000017653b

@end
