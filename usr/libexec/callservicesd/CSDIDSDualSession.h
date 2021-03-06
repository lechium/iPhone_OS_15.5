//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSDIDSTransport, NSNumber, NSString;
@protocol CSDIDSDualSessionDelegate, CSDIDSDualSessionProvider;

@interface CSDIDSDualSession
{
    _Bool _initiator;	// 8 = 0x8
    _Bool _hasStartedConnecting;	// 9 = 0x9
    _Bool _hasConnected;	// 10 = 0xa
    int _endedReason;	// 12 = 0xc
    int _state;	// 16 = 0x10
    id <CSDIDSDualSessionDelegate> _delegate;	// 24 = 0x18
    NSNumber *_remoteProtocolVersionNumber;	// 32 = 0x20
    id <CSDIDSDualSessionProvider> _sessionProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000008d0d7
@property(readonly, nonatomic) id <CSDIDSDualSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(retain, nonatomic) NSNumber *remoteProtocolVersionNumber; // @synthesize remoteProtocolVersionNumber=_remoteProtocolVersionNumber;
@property(nonatomic) _Bool hasConnected; // @synthesize hasConnected=_hasConnected;
@property(nonatomic) _Bool hasStartedConnecting; // @synthesize hasStartedConnecting=_hasStartedConnecting;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic) int endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic) __weak id <CSDIDSDualSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 receivedSessionMessageFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000008cee6
- (void)sessionProvider:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000008cdd8
- (void)sessionProvider:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000008ccca
- (void)sessionProvider:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3;	// IMP=0x001000000008cbbc
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000008c6a6
- (void)sessionProvider:(id)arg1 invitationSentToPushTokens:(id)arg2 shouldBreakBeforeMake:(_Bool)arg3;	// IMP=0x001000000008c55b
- (void)sessionProviderStarted:(id)arg1;	// IMP=0x001000000008c3db
- (void)end;	// IMP=0x001000000008c2fd
- (void)reconnectSession;	// IMP=0x001000000008c231
- (void)_declineInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x001000000008c095
- (void)declineInvitation;	// IMP=0x001000000008bff3
- (void)_cancelInvitationWithData:(id)arg1 reason:(int)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x001000000008bd52
- (void)cancelInvitation;	// IMP=0x001000000008bcad
- (void)_acceptInvitationWithData:(id)arg1 alwaysSendData:(_Bool)arg2;	// IMP=0x001000000008bb11
- (void)acceptInvitation;	// IMP=0x001000000008ba6f
- (void)_sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2 alwaysSendData:(_Bool)arg3;	// IMP=0x001000000008b8e4
- (void)sendInvitation;	// IMP=0x001000000008b83f
- (void)sendData:(id)arg1;	// IMP=0x001000000008b697
@property(nonatomic) double invitationTimeout;
@property(readonly, nonatomic) CSDIDSTransport *transport;
- (void)setReceiverProtocolVersion:(int)arg1;	// IMP=0x001000000008b343
@property(readonly, nonatomic) int remoteProtocolVersion;
@property(readonly, nonatomic) long long underlyingErrorCode;
- (id)propertiesDescription;	// IMP=0x001000000008b127
- (id)initAsReceiverWithSessionProvider:(id)arg1 remoteProtocolVersion:(int)arg2;	// IMP=0x001000000008b09f
- (id)initAsInitiatorWithSessionProvider:(id)arg1;	// IMP=0x001000000008b085
- (id)initWithSessionProvider:(id)arg1 isInitiator:(_Bool)arg2 remoteProtocolVersion:(id)arg3;	// IMP=0x001000000008af8e
- (id)init;	// IMP=0x001000000008af04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

