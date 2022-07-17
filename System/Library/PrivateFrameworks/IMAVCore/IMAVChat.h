//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMAVCore/IMSystemMonitorListener-Protocol.h>

@class IMAVChatParticipant, IMAccount, IMHandle, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;	// 8 = 0x8
    NSString *_conferenceID;	// 16 = 0x10
    NSMutableArray *_participants;	// 24 = 0x18
    IMHandle *_initiator;	// 32 = 0x20
    IMAVChatParticipant *_localParticipant;	// 40 = 0x28
    NSMutableDictionary *_conferenceStateCache;	// 48 = 0x30
    NSNumber *_natType;	// 56 = 0x38
    NSMutableDictionary *_extraServerContext;	// 64 = 0x40
    NSDate *_dateCreated;	// 72 = 0x48
    NSDate *_dateStartedConnecting;	// 80 = 0x50
    NSDate *_dateConnected;	// 88 = 0x58
    NSDate *_dateEnded;	// 96 = 0x60
    NSDate *_dateReceivedRelayInitiate;	// 104 = 0x68
    NSDate *_dateReceivedRelayUpdate;	// 112 = 0x70
    NSDate *_interruptionBegan;	// 120 = 0x78
    NSDictionary *_pingTestResults;	// 128 = 0x80
    NSNumber *_frontCameraCaptureTime;	// 136 = 0x88
    NSNumber *_backCameraCaptureTime;	// 144 = 0x90
    NSNumber *_dataRate;	// 152 = 0x98
    NSNumber *_dataUploaded;	// 160 = 0xa0
    NSNumber *_dataDownloaded;	// 168 = 0xa8
    IMTimingCollection *_timingCollection;	// 176 = 0xb0
    unsigned long long _localNetworkConnectionType;	// 184 = 0xb8
    unsigned long long _remoteNetworkConnectionType;	// 192 = 0xc0
    long long _pingTestResult;	// 200 = 0xc8
    long long _networkCheckResult;	// 208 = 0xd0
    NSDictionary *_callerProperties;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_conferenceQueue;	// 224 = 0xe0
    NSData *_relayRemotePrimaryIdentifier;	// 232 = 0xe8
    unsigned int _sessionID;	// 240 = 0xf0
    NSError *_error;	// 248 = 0xf8
    unsigned int _localState;	// 256 = 0x100
    unsigned int _lastPostedState;	// 260 = 0x104
    NSString *_callStatisticsGUID;	// 264 = 0x108
    double _connectionTimeoutTime;	// 272 = 0x110
    double _invitationTimeoutTime;	// 280 = 0x118
    _Bool _hasGatheredInfo;	// 288 = 0x120
    _Bool _hasReceivedFirstFrame;	// 289 = 0x121
    _Bool _hasPendingAccept;	// 290 = 0x122
    _Bool _hasPendingInit;	// 291 = 0x123
    _Bool _isCaller;	// 292 = 0x124
    _Bool _isVideo;	// 293 = 0x125
    int _connectionType;	// 296 = 0x128
    _Bool _needsVideoRestart;	// 300 = 0x12c
    _Bool _needsAudioRestart;	// 301 = 0x12d
    _Bool _isVideoInterrupted;	// 302 = 0x12e
    _Bool _isAudioInterrupted;	// 303 = 0x12f
    _Bool _connectionStarted;	// 304 = 0x130
    _Bool _relayed;	// 305 = 0x131
    _Bool _mayRequireBreakBeforeMake;	// 306 = 0x132
    _Bool _terminating;	// 307 = 0x133
    _Bool _didRemoteMute;	// 308 = 0x134
    _Bool _didRemotePause;	// 309 = 0x135
    _Bool _airplaneModeEnabled;	// 310 = 0x136
    _Bool _metadataFinalized;	// 311 = 0x137
    id _conferenceController;	// 312 = 0x138
    NSTimer *_inviteTimeoutTimer;	// 320 = 0x140
    NSDate *_inviteTimeoutTimerStart;	// 328 = 0x148
    NSTimer *_firstFrameTimeoutTimer;	// 336 = 0x150
    NSTimer *_connectionTimeoutTimer;	// 344 = 0x158
    struct CGSize _portraitAspectRatios;	// 352 = 0x160
    struct CGSize _landscapeAspectRatios;	// 368 = 0x170
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(_Bool)arg2;	// IMP=0x0000000000009734
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;	// IMP=0x000000000002457a
+ (double)defaultConnectionTimeoutTime;	// IMP=0x000000000002456c
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;	// IMP=0x000000000002455e
+ (double)defaultInvitationTimeoutTime;	// IMP=0x0000000000024550
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(_Bool)arg2;	// IMP=0x000000000002e5ee
+ (id)_avChatConnectingFromIMHandle:(id)arg1;	// IMP=0x000000000002e371
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;	// IMP=0x000000000002e110
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;	// IMP=0x000000000002deba
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;	// IMP=0x000000000002d447
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;	// IMP=0x000000000002d1d1
+ (id)_acceptedChats;	// IMP=0x000000000002d0cc
+ (id)_connectedChats;	// IMP=0x000000000002d0b5
+ (id)_connectingChats;	// IMP=0x000000000002d09e
+ (id)_outgoingInvitations;	// IMP=0x000000000002d087
+ (id)_incomingInvitations;	// IMP=0x000000000002d070
+ (id)_avChatWithGUID:(id)arg1;	// IMP=0x000000000002ce02
+ (id)_avChatWithConferenceID:(id)arg1;	// IMP=0x000000000002cb94
+ (id)_chatListLock;	// IMP=0x000000000002cb3f
+ (id)_nonFinalChat;	// IMP=0x000000000002c940
+ (id)_activeChat;	// IMP=0x000000000002c70e
+ (id)_connectedChat;	// IMP=0x000000000002c6af
+ (id)_chatList;	// IMP=0x000000000002c5cf
+ (id)_chatWithSessionID:(unsigned int)arg1;	// IMP=0x000000000002c3ec
+ (id)_avChatArray;	// IMP=0x000000000002c39d
+ (id)avChatWithGUID:(id)arg1;	// IMP=0x000000000002c12f
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;	// IMP=0x000000000002bf10
+ (id)acceptedChats;	// IMP=0x000000000002be0b
+ (id)connectedChats;	// IMP=0x000000000002bdf4
+ (id)connectingChats;	// IMP=0x000000000002bddd
+ (id)outgoingInvitations;	// IMP=0x000000000002bdc6
+ (id)incomingInvitations;	// IMP=0x000000000002bdaf
+ (id)nonFinalChat;	// IMP=0x000000000002bbd4
+ (id)activeChat;	// IMP=0x000000000002b9a2
+ (id)connectedChat;	// IMP=0x000000000002b8a1
+ (id)chatList;	// IMP=0x000000000002b84a
+ (id)_proxyRepresentationForIMHandle:(id)arg1;	// IMP=0x00000000000412b7
+ (id)_imHandleFromProxyRepresentation:(id)arg1;	// IMP=0x000000000004113b
- (void).cxx_destruct;	// IMP=0x0000000000010328
@property(nonatomic, setter=_setMetadataFinalized:) _Bool metadataFinalized; // @synthesize metadataFinalized=_metadataFinalized;
@property(nonatomic, setter=_setAirplaneModeEnabled:) _Bool airplaneModeEnabled; // @synthesize airplaneModeEnabled=_airplaneModeEnabled;
@property(nonatomic, setter=_setDidRemotePause:) _Bool didRemotePause; // @synthesize didRemotePause=_didRemotePause;
@property(nonatomic, setter=_setDidRemoteMute:) _Bool didRemoteMute; // @synthesize didRemoteMute=_didRemoteMute;
@property(nonatomic, getter=isTerminating, setter=_setTerminating:) _Bool terminating; // @synthesize terminating=_terminating;
@property(nonatomic, setter=_setLandscapeAspectRatios:) struct CGSize landscapeAspectRatios; // @synthesize landscapeAspectRatios=_landscapeAspectRatios;
@property(nonatomic, setter=_setPortraitAspectRatios:) struct CGSize portraitAspectRatios; // @synthesize portraitAspectRatios=_portraitAspectRatios;
@property(retain, nonatomic, setter=_setConnectionTimeoutTimer:) NSTimer *connectionTimeoutTimer; // @synthesize connectionTimeoutTimer=_connectionTimeoutTimer;
@property(retain, nonatomic, setter=_setFirstFrameTimeoutTimer:) NSTimer *firstFrameTimeoutTimer; // @synthesize firstFrameTimeoutTimer=_firstFrameTimeoutTimer;
@property(retain, nonatomic, setter=_setInviteTimeoutTimerStart:) NSDate *inviteTimeoutTimerStart; // @synthesize inviteTimeoutTimerStart=_inviteTimeoutTimerStart;
@property(retain, nonatomic, setter=_setInviteTimeoutTimer:) NSTimer *inviteTimeoutTimer; // @synthesize inviteTimeoutTimer=_inviteTimeoutTimer;
@property(nonatomic) _Bool mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property(nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property(nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property(retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property(readonly) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
@property(retain, nonatomic, setter=_setGUID:) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic, setter=_setConferenceID:) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(readonly, nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic, getter=isRelayed) _Bool relayed; // @synthesize relayed=_relayed;
@property(retain, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // @synthesize _relayRemotePrimaryIdentifier;
@property(nonatomic, setter=_setConnectionStarted:) _Bool _connectionStarted; // @synthesize _connectionStarted;
@property(nonatomic, setter=_setIsAudioInterrupted:) _Bool _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property(nonatomic, setter=_setIsVideoInterrupted:) _Bool _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property(retain, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // @synthesize dataDownloaded=_dataDownloaded;
@property(retain, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // @synthesize dataUploaded=_dataUploaded;
@property(retain, nonatomic, setter=setDataRate:) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property(retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property(retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property(retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic, setter=_setNeedsVideoRestart:) _Bool _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) _Bool _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property(nonatomic, setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // @synthesize _conferenceQueue;
- (_Bool)_cachedBoolForKey:(id)arg1;	// IMP=0x000000000000fe2d
- (_Bool)_hasCachedBoolForKey:(id)arg1;	// IMP=0x000000000000fdc0
- (void)_cacheBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x000000000000fd1f
- (void)_clearCache;	// IMP=0x000000000000fd09
- (id)_timings;	// IMP=0x000000000000fcf8
- (void)_noteFirstFrame;	// IMP=0x000000000000fc64
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000fb24
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000000f9fa
- (void)_handleAVError:(id)arg1;	// IMP=0x000000000000f61d
@property(readonly, nonatomic) NSArray *_imHandles;
@property(readonly, nonatomic) _Bool isUsingWifi;
@property(readonly, nonatomic) _Bool _usesRelay;
@property(readonly, nonatomic) NSNumber *_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *_callDuration;
@property(readonly, nonatomic) NSNumber *_connectDuration;
@property(readonly, nonatomic) NSNumber *_currentNatType;
@property(readonly, nonatomic) NSNumber *_remoteNatType;
- (_Bool)isConferenceSilent;	// IMP=0x000000000000ed34
@property(readonly, nonatomic) long long _bustedCallID;
- (void)_setDateConnected;	// IMP=0x000000000000eb76
- (void)_setCreationDate;	// IMP=0x000000000000ea95
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) IMAccount *account;
@property(readonly, nonatomic) _Bool _isProxy;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
- (id)participantMatchingIMHandle:(id)arg1;	// IMP=0x000000000000e634
- (id)vcPartyIDForIMHandle:(id)arg1;	// IMP=0x000000000000e4c0
- (id)participantWithID:(id)arg1;	// IMP=0x000000000000e3e4
- (id)participantWithAVConferenceCallID:(long long)arg1;	// IMP=0x000000000000e283
- (void)_applicationWillTerminate:(id)arg1;	// IMP=0x000000000000e27d
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x000000000000e180
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(_Bool)arg4;	// IMP=0x000000000000de27
- (void)_responseToVCInvite:(id)arg1;	// IMP=0x000000000000dd0a
- (void)__responseToVCInvite:(id)arg1;	// IMP=0x000000000000db62
- (_Bool)_processVCResponseDict:(id)arg1;	// IMP=0x000000000000d7e7
- (void)_setStateDisconnected;	// IMP=0x000000000000d713
- (void)declineInvitation;	// IMP=0x000000000000d698
- (void)declineInvitationWithResponse:(unsigned int)arg1;	// IMP=0x000000000000d50e
- (void)acceptInvitation;	// IMP=0x000000000000d16a
- (void)invite:(id)arg1;	// IMP=0x000000000000d156
- (void)invite:(id)arg1 additionalPeers:(id)arg2;	// IMP=0x000000000000d141
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;	// IMP=0x000000000000cb95
- (void)cancelInvitation;	// IMP=0x000000000000cb7c
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;	// IMP=0x000000000000cb2b
- (void)inviteAll;	// IMP=0x000000000000c8eb
- (_Bool)_isVideoUpgradeTo:(id)arg1;	// IMP=0x000000000000c6d7
- (_Bool)_isCallUpgradeTo:(id)arg1;	// IMP=0x000000000000c62b
- (id)inviteesInfo;	// IMP=0x000000000000c352
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;	// IMP=0x000000000000bad2
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;	// IMP=0x000000000000b69a
- (void)endChatWithError:(int)arg1;	// IMP=0x000000000000b5ab
- (void)endChatWithReason:(unsigned int)arg1;	// IMP=0x000000000000b4d6
- (void)endChat;	// IMP=0x000000000000b387
- (void)beginChat;	// IMP=0x000000000000b20e
- (id)description;	// IMP=0x000000000000af0d
- (void)dealloc;	// IMP=0x000000000000a729
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3 GUID:(id)arg4;	// IMP=0x000000000000a0bc
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3;	// IMP=0x000000000000a0a7
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2;	// IMP=0x000000000000a092
- (id)_initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3 GUID:(id)arg4;	// IMP=0x0000000000009a98
- (id)initIncomingFrom:(id)arg1 isVideo:(_Bool)arg2 callerProperties:(id)arg3;	// IMP=0x000000000000922b
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 isRelayed:(_Bool)arg4 GUID:(id)arg5 video:(_Bool)arg6 extraProperties:(id)arg7;	// IMP=0x00000000000089de
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(_Bool)arg5 extraProperties:(id)arg6;	// IMP=0x00000000000089af
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;	// IMP=0x0000000000023e10
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;	// IMP=0x0000000000023da6
@property(nonatomic) void *localVideoBackLayer;
@property(nonatomic) void *localVideoLayer;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;	// IMP=0x00000000000243bb
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;	// IMP=0x0000000000024398
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 cameraWillSwitch:(_Bool)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize)arg8;	// IMP=0x0000000000023f69
- (_Bool)stopPreview;	// IMP=0x0000000000023f1e
- (_Bool)startPreviewWithError:(id *)arg1;	// IMP=0x0000000000023ec4
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
- (void)_firstFrameTimeout:(id)arg1;	// IMP=0x000000000002516e
- (void)_setFirstFrameTimeoutTimer;	// IMP=0x0000000000024fcf
- (void)_clearFirstFrameTimeoutTimer;	// IMP=0x0000000000024ef2
- (void)_reduceInvitationTimeoutTime;	// IMP=0x0000000000024dcc
- (void)_invitationTimeout:(id)arg1;	// IMP=0x0000000000024c9e
- (void)_setInvitationTimeoutTimer;	// IMP=0x0000000000024ae8
- (void)_clearInvitationTimeoutTimer;	// IMP=0x0000000000024a0b
- (void)_connectionTimeout:(id)arg1;	// IMP=0x00000000000248b3
- (void)_setConnectionTimeoutTimer;	// IMP=0x0000000000024748
- (void)_clearConnectionTimeoutTimer;	// IMP=0x000000000002466b
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;	// IMP=0x00000000000269de
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;	// IMP=0x00000000000267a0
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;	// IMP=0x000000000002650e
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;	// IMP=0x00000000000262d0
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(_Bool)arg2;	// IMP=0x00000000000260e6
- (void)conferencePersonWithID:(id)arg1 didDegrade:(_Bool)arg2;	// IMP=0x0000000000025efc
- (void)conferencePersonWithID:(id)arg1 didPause:(_Bool)arg2;	// IMP=0x0000000000025ce4
- (void)conferencePersonWithID:(id)arg1 didMute:(_Bool)arg2;	// IMP=0x0000000000025acf
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(_Bool)arg2;	// IMP=0x0000000000025882
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(_Bool)arg2;	// IMP=0x00000000000257a7
- (void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(_Bool)arg2;	// IMP=0x0000000000025691
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000254cd
- (void)_vccInitDidFinish:(id)arg1;	// IMP=0x0000000000025313
@property(nonatomic) _Bool isSendingAudio;
@property(nonatomic, setter=setRemoteMute:) _Bool isRemoteMute;
- (void)toggleMute;	// IMP=0x0000000000026e3c
@property(nonatomic, setter=setMute:) _Bool isMute;
@property(nonatomic) _Bool isSendingVideo;
- (void)togglePaused;	// IMP=0x000000000002730d
@property(nonatomic, setter=setPaused:) _Bool isPaused;
@property(readonly, nonatomic) _Bool hasReceivedFirstFrame;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x0000000000027d2a
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x000000000002789c
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x000000000002744d
- (void)_entitlementsChanged:(id)arg1;	// IMP=0x000000000002a245
- (void)_airplaneModeChanged:(id)arg1;	// IMP=0x000000000002a23f
- (void)systemWillShutdown;	// IMP=0x000000000002a1a1
- (void)notificationCenterDidDisappear;	// IMP=0x000000000002a113
- (void)notificationCenterWillAppear;	// IMP=0x000000000002a085
- (void)systemApplicationDidResumeForEventsOnly;	// IMP=0x0000000000029fd8
- (void)systemApplicationDidResume;	// IMP=0x0000000000029f2b
- (void)systemApplicationDidSuspend;	// IMP=0x0000000000029e8d
- (void)systemApplicationWillEnterForeground;	// IMP=0x0000000000029de0
- (void)systemApplicationDidEnterBackground;	// IMP=0x0000000000029d42
- (void)systemApplicationDidBecomeActive;	// IMP=0x0000000000029c95
- (void)_resumeVideoState;	// IMP=0x0000000000029bcb
- (void)_resumeAudioState;	// IMP=0x0000000000029b01
- (void)_saveVideoRestartState;	// IMP=0x00000000000299f4
- (void)_saveAudioRestartState;	// IMP=0x00000000000298e7
- (void)systemDidFastUserSwitchOut;	// IMP=0x00000000000298b0
- (void)_postStateToDelegateIfNecessary;	// IMP=0x0000000000029178
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;	// IMP=0x0000000000028283
- (void)_setActiveConference;	// IMP=0x000000000002810e
@property(readonly, nonatomic) _Bool isActive; // @dynamic isActive;
@property(readonly, nonatomic) _Bool isStateFinal; // @dynamic isStateFinal;
- (id)_participantMatchingVCPartyID:(id)arg1;	// IMP=0x000000000002b62a
@property(readonly, nonatomic) _Bool _allParticipantsUsingICE;
@property(readonly, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;
@property(readonly, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
- (_Bool)_participantsCheckOut;	// IMP=0x000000000002ae7d
- (void)_initParticipantsWithIMHandles:(id)arg1;	// IMP=0x000000000002aa0b
- (_Bool)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;	// IMP=0x000000000002a82a
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000002a6fc
- (void)_updateIMHandleInBuddyList:(id)arg1;	// IMP=0x000000000002a58e
- (void)_peerID:(id)arg1 changedTo:(id)arg2;	// IMP=0x000000000002a24b
- (void)setMetadataFinalized;	// IMP=0x0000000000041f3e
- (id)_proxyRepresentation;	// IMP=0x000000000004158c
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;	// IMP=0x000000000004145b
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;	// IMP=0x0000000000045d8f
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;	// IMP=0x0000000000045d89
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;	// IMP=0x000000000004506a
- (void)_submitCallInterruptionEndedLogging;	// IMP=0x0000000000045064
- (void)_submitCallInterruptionBeganLogging;	// IMP=0x000000000004505e
- (void)_submitCallConnectedLogging;	// IMP=0x0000000000045058
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(_Bool)arg2 isVideo:(_Bool)arg3;	// IMP=0x0000000000045052

@end
