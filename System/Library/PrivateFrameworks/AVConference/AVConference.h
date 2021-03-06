//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSMutableDictionary, NSTimer;
@protocol AVConferenceDelegate, OS_dispatch_queue;

@interface AVConference : NSObject
{
    AVConferenceXPCClient *connection;	// 8 = 0x8
    id opaqueConf;	// 16 = 0x10
    _Bool useServer;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    NSDictionary *serverBag;	// 40 = 0x28
    _Bool _isUsingFrontCamera;	// 48 = 0x30
    _Bool _microphoneMuted;	// 49 = 0x31
    NSMutableDictionary *_stateCacheForCallID;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_stateQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 72 = 0x48
    long long _inputAudioPowerSpectrumToken;	// 80 = 0x50
    long long _outputAudioPowerSpectrumToken;	// 88 = 0x58
    _Bool shouldDisplayNetworkQualityGraph_;	// 96 = 0x60
    NSTimer *networkQualityUpdateTimer_;	// 104 = 0x68
    CALayer *networkQualityGraphLayer_;	// 112 = 0x70
}

+ (unsigned int)doBlockingConnectionCheck:(_Bool)arg1;	// IMP=0x00000000000213d1
+ (unsigned int)doBlockingConnectionCheck;	// IMP=0x00000000000213b3
+ (_Bool)hasActiveAudioSession;	// IMP=0x000000000001ee0f
+ (void)stopAudioSession;	// IMP=0x000000000001edf6
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001eddd
+ (void)startAudioSession;	// IMP=0x000000000001edc4
+ (void)setAudioSessionProperties:(id)arg1;	// IMP=0x000000000001edab
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;	// IMP=0x000000000001ed13
+ (short)addressPointerFromBlob:(id)arg1;	// IMP=0x000000000001ecfa
+ (void)refreshLoggingParameters;	// IMP=0x000000000001e136
@property(readonly) long long outputAudioPowerSpectrumToken; // @synthesize outputAudioPowerSpectrumToken=_outputAudioPowerSpectrumToken;
@property(readonly) long long inputAudioPowerSpectrumToken; // @synthesize inputAudioPowerSpectrumToken=_inputAudioPowerSpectrumToken;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_microphoneMuted;
@property(retain) CALayer *networkQualityGraphLayer; // @synthesize networkQualityGraphLayer=networkQualityGraphLayer_;
@property(retain) NSTimer *networkQualityUpdateTimer; // @synthesize networkQualityUpdateTimer=networkQualityUpdateTimer_;
@property _Bool shouldDisplayNetworkQualityGraph; // @synthesize shouldDisplayNetworkQualityGraph=shouldDisplayNetworkQualityGraph_;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(long long)arg2;	// IMP=0x000000000002312a
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(long long)arg2;	// IMP=0x0000000000023114
- (void)setConferenceState:(unsigned int)arg1 forCallID:(long long)arg2;	// IMP=0x0000000000023004
- (void)shouldSendBlackFrames:(_Bool)arg1 callID:(long long)arg2;	// IMP=0x0000000000022ffe
- (void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(_Bool)arg3;	// IMP=0x0000000000022ff8
- (void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(_Bool)arg3;	// IMP=0x0000000000022d85
- (void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(_Bool)arg3;	// IMP=0x0000000000022b12
- (void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2;	// IMP=0x0000000000022a9a
- (void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;	// IMP=0x0000000000022a22
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000000229a4
- (void)videoConference:(id)arg1 localAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x000000000002291d
- (void)videoConference:(id)arg1 remoteAudioEnabled:(_Bool)arg2 forCallID:(unsigned int)arg3;	// IMP=0x000000000002289e
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;	// IMP=0x0000000000022826
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000022795
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000022717
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(_Bool)arg3;	// IMP=0x0000000000022698
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x0000000000022611
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x0000000000022593
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;	// IMP=0x0000000000022515
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;	// IMP=0x0000000000022497
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(_Bool)arg2;	// IMP=0x000000000002241e
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;	// IMP=0x00000000000223a5
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;	// IMP=0x000000000002232c
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00000000000222b4
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x000000000002223c
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x00000000000221be
- (void)videoConference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x000000000002212c
- (void)videoConference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x000000000002209a
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;	// IMP=0x0000000000022002
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;	// IMP=0x0000000000021eba
- (void)videoConference:(id)arg1 remoteMediaStalled:(_Bool)arg2 callID:(unsigned int)arg3;	// IMP=0x0000000000021d64
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;	// IMP=0x0000000000021be3
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x0000000000021970
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseVideo:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000218d6
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000002183c
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 isSendingAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000217a2
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000021648
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;	// IMP=0x000000000002148c
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;	// IMP=0x00000000000213f2
- (unsigned int)doBlockingConnectionCheck;	// IMP=0x00000000000213d9
- (void)setLocalScreenAttributes:(id)arg1;	// IMP=0x000000000002137b
- (id)localScreenAttributesForVideoAttributes:(id)arg1;	// IMP=0x0000000000021343
- (_Bool)setServerInfo:(id)arg1;	// IMP=0x0000000000021215
- (id)capabilitiesForCallID:(long long)arg1;	// IMP=0x000000000002120d
- (void)updateCapabilities:(id)arg1 forCallID:(long long)arg2;	// IMP=0x0000000000020eca
- (_Bool)setPauseVideo:(_Bool)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000020e7e
- (_Bool)setPauseAudio:(_Bool)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000020e32
- (_Bool)setSendingAudio:(_Bool)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000020e17
@property(readonly) unsigned int natType;
@property(getter=isSpeakerPhoneEnabled) _Bool enableSpeakerPhone;
- (id)statsForCallID:(long long)arg1;	// IMP=0x0000000000020bc3
- (double)roundTripTimeForCallID:(long long)arg1;	// IMP=0x0000000000020bad
- (double)localPacketLossRateForCallID:(long long)arg1;	// IMP=0x0000000000020b97
- (double)remotePacketLossRateForCallID:(long long)arg1;	// IMP=0x0000000000020b81
- (int)remoteFrameWidthForCallID:(long long)arg1;	// IMP=0x0000000000020b66
- (int)remoteFrameHeightForCallID:(long long)arg1;	// IMP=0x0000000000020b4b
@property(readonly) int localFrameWidth;
@property(readonly) int localFrameHeight;
- (double)remoteBitrateForCallID:(long long)arg1;	// IMP=0x0000000000020b09
- (double)remoteFramerateForCallID:(long long)arg1;	// IMP=0x0000000000020af3
- (double)localBitrateForCallID:(long long)arg1;	// IMP=0x0000000000020add
- (double)localFramerateForCallID:(long long)arg1;	// IMP=0x0000000000020ac7
- (long long)videoStreamTokenForCallID:(long long)arg1;	// IMP=0x0000000000020abe
- (void)setRemoteVideoBackLayer:(void *)arg1;	// IMP=0x0000000000020a03
- (void)setRemoteVideoLayer:(void *)arg1;	// IMP=0x0000000000020948
- (void *)remoteVideoBackLayer;	// IMP=0x000000000002088b
- (void *)remoteVideoLayer;	// IMP=0x00000000000207ce
- (void)stopNetworkQualityUpdateTimer;	// IMP=0x0000000000020791
- (void)startNetworkQualityUpdateTimer;	// IMP=0x00000000000206c4
- (_Bool)updateNetworkQualityGraph;	// IMP=0x0000000000020338
- (float)networkQuality;	// IMP=0x000000000002030c
- (_Bool)setAudioOutputDevice:(id)arg1;	// IMP=0x00000000000202f3
- (_Bool)setAudioInputDevice:(id)arg1;	// IMP=0x00000000000202da
- (id)currentAudioOutputDevice;	// IMP=0x00000000000202c1
- (id)currentAudioInputDevice;	// IMP=0x00000000000202a8
@property(readonly) float inputMeterLevel;
- (_Bool)getIsVideoPaused:(_Bool *)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000020255
- (_Bool)getIsAudioPaused:(_Bool *)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000002023f
- (_Bool)getIsSendingAudio:(_Bool *)arg1 callID:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000020237
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) _Bool outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) _Bool inputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) _Bool inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled;
- (void)processRemoteIPChange:(id)arg1 callID:(long long)arg2;	// IMP=0x000000000002015b
- (void)setLastActiveCallID:(long long)arg1;	// IMP=0x0000000000020145
- (long long)lastActiveCallID;	// IMP=0x000000000002012c
- (_Bool)setActive:(_Bool)arg1;	// IMP=0x0000000000020116
- (void)setCallReport:(long long)arg1 withReport:(id)arg2;	// IMP=0x0000000000020100
- (void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3;	// IMP=0x00000000000200fa
- (void)remoteCancelledCallID:(long long)arg1;	// IMP=0x00000000000200c2
- (void)cancelCallID:(long long)arg1;	// IMP=0x000000000001ffa2
- (void)stopCallID:(long long)arg1;	// IMP=0x000000000001fe82
- (_Bool)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(_Bool)arg5 capabilities:(id)arg6 error:(id *)arg7;	// IMP=0x000000000001fe10
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 error:(id *)arg8;	// IMP=0x000000000001fda1
- (_Bool)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(_Bool)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id *)arg8;	// IMP=0x000000000001fd32
- (_Bool)startConnectionWithCallID:(long long)arg1 inviteData:(id)arg2 isCaller:(_Bool)arg3 capabilities:(id)arg4 destination:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001fcaf
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id *)arg9;	// IMP=0x000000000001fc40
- (_Bool)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(_Bool)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;	// IMP=0x000000000001f778
- (id)convertBlobtoNewBlob:(id)arg1;	// IMP=0x000000000001f6af
- (id)convertBlobtoOldBlob:(id)arg1;	// IMP=0x000000000001f5e6
@property(nonatomic) _Bool requiresWifi;
- (double)networkQualityForCallID:(long long)arg1;	// IMP=0x000000000001f5a4
- (void)setSessionID:(id)arg1 callID:(long long)arg2;	// IMP=0x000000000001f58e
- (void)setPeerReportingIdentifier:(id)arg1 sessionIdentifier:(id)arg2 forCallID:(long long)arg3;	// IMP=0x000000000001f45a
- (void)setPeerCN:(id)arg1 callID:(long long)arg2;	// IMP=0x000000000001f444
- (id)callMetadataForCallID:(long long)arg1;	// IMP=0x000000000001f42e
- (void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x000000000001f392
- (id)newRandomParticipantID;	// IMP=0x000000000001f357
- (void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(_Bool)arg3;	// IMP=0x000000000001f30b
- (void)sendARPLData:(id)arg1 toCallID:(long long)arg2;	// IMP=0x000000000001f1cc
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000000001f1c6
- (void)setSetSessionID:(id)arg1 forCallID:(long long)arg2;	// IMP=0x000000000001f1c0
@property(getter=isUsingViceroyBlobFormat) _Bool useViceroyBlobFormat;
- (void)dealloc;	// IMP=0x000000000001ee28
- (void)warmupForCall;	// IMP=0x000000000001eb20
- (long long)initializeNewCallWithDeviceRole:(int)arg1 reportingHierarchyToken:(id)arg2;	// IMP=0x000000000001e96a
- (long long)initializeNewCallWithDeviceRole:(int)arg1;	// IMP=0x000000000001e956
- (long long)initializeNewCall;	// IMP=0x000000000001e940
@property(nonatomic) NSObject<AVConferenceDelegate> *delegate;
- (id)initWithClientUUID:(id)arg1 transportType:(unsigned int)arg2;	// IMP=0x000000000001e188
- (id)initWithClientUUID:(id)arg1;	// IMP=0x000000000001e174
- (id)init;	// IMP=0x000000000001e160
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;	// IMP=0x000000000001e124
- (void)updateGKSConnectivitySettings;	// IMP=0x000000000001e11e
- (void)stopListeningForNotifications;	// IMP=0x000000000001e0e6
- (void)listenForNotifications;	// IMP=0x000000000001e09a
- (void)setCallState:(id)arg1 forCallID:(id)arg2;	// IMP=0x00000000000269c6
- (id)callStateForCallID:(id)arg1;	// IMP=0x000000000002688d
- (void)serverDied;	// IMP=0x0000000000026711
- (void)serverReconnected;	// IMP=0x00000000000265ad
- (void)deregisterBlocksForVCNotifications;	// IMP=0x0000000000026388
- (void)registerBlocksForVCNotifications;	// IMP=0x00000000000231bf

@end

