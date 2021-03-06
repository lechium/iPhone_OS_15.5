//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMAVCore/AVConferenceDelegate-Protocol.h>

@class AVConference, NSLock, NSMutableArray, NSMutableDictionary, NSNumber;

@interface IMAVConferenceInterface <AVConferenceDelegate>
{
    NSMutableArray *_avConferencesToCleanup;	// 8 = 0x8
    NSMutableDictionary *_avConferences;	// 16 = 0x10
    NSLock *_avConferencesLock;	// 24 = 0x18
    _Bool _duringInit;	// 32 = 0x20
    _Bool _pendingCleanup;	// 33 = 0x21
    NSNumber *_sendingVideoExpected;	// 40 = 0x28
}

+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 cameraWillSwitch:(_Bool)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize)arg8;	// IMP=0x0000000000037e74
+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 contentRectChanged:(_Bool)arg5 cameraWillSwitch:(_Bool)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize)arg9 contentRect:(struct CGRect)arg10;	// IMP=0x0000000000037b41
+ (_Bool)_useMultipleAVConference;	// IMP=0x000000000002f272
- (void).cxx_destruct;	// IMP=0x000000000003e2a2
@property(retain, nonatomic, getter=isSendingVideoExpected) NSNumber *sendingVideoExpected; // @synthesize sendingVideoExpected=_sendingVideoExpected;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2 isFinalUpdate:(_Bool)arg3;	// IMP=0x000000000003da9d
- (_Bool)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;	// IMP=0x000000000003d9e8
- (_Bool)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;	// IMP=0x000000000003d764
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;	// IMP=0x000000000003d49c
- (void)chatRelayedStatusChanged:(id)arg1;	// IMP=0x000000000003d283
- (void)chatStateUpdated;	// IMP=0x000000000003d1cb
- (id)_controller;	// IMP=0x000000000003d165
@property(readonly, nonatomic) AVConference *controller;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;	// IMP=0x000000000003cd96
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003c93e
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003c4e6
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;	// IMP=0x000000000003bf97
- (_Bool)supportsRelay;	// IMP=0x000000000003bf8f
- (void)setLocalVideoBackLayer:(void *)arg1;	// IMP=0x000000000003bf18
- (void *)localVideoBackLayer;	// IMP=0x000000000003bea9
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;	// IMP=0x000000000003bea3
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1 forChat:(id)arg2;	// IMP=0x000000000003be9d
- (void)setLocalVideoLayer:(void *)arg1;	// IMP=0x000000000003be26
- (void *)localVideoLayer;	// IMP=0x000000000003bdb7
- (_Bool)supportsLayers;	// IMP=0x000000000003bdaf
- (void)serverDiedForConference:(id)arg1;	// IMP=0x000000000003bbae
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;	// IMP=0x000000000003b9d0
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(long long)arg3;	// IMP=0x000000000003b715
- (void)conference:(id)arg1 remoteVideoPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x000000000003b3d1
- (void)conference:(id)arg1 remoteAudioPaused:(_Bool)arg2 callID:(long long)arg3;	// IMP=0x000000000003b0b4
- (void)conference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000003aeba
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;	// IMP=0x000000000003ac55
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(_Bool)arg3;	// IMP=0x000000000003a96a
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(_Bool)arg3 isRemote:(_Bool)arg4;	// IMP=0x000000000003a664
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(_Bool)arg3;	// IMP=0x000000000003a481
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x000000000003a0c5
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;	// IMP=0x0000000000039d09
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;	// IMP=0x0000000000038e78
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x00000000000386d8
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;	// IMP=0x0000000000038087
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;	// IMP=0x000000000003774b
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;	// IMP=0x00000000000375df
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;	// IMP=0x0000000000037473
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;	// IMP=0x000000000003745e
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;	// IMP=0x0000000000036ffc
- (void)conference:(id)arg1 didStartSession:(_Bool)arg2 withUserInfo:(id)arg3;	// IMP=0x0000000000036743
- (_Bool)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(_Bool)arg4 callInfo:(id)arg5;	// IMP=0x0000000000035523
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;	// IMP=0x0000000000033ba6
- (id)natTypeForAVChat:(id)arg1;	// IMP=0x000000000003391b
- (id)getNatIPFromICEData:(id)arg1;	// IMP=0x0000000000033750
- (void)_notifyAboutPotentialCallForChat:(id)arg1;	// IMP=0x0000000000033645
- (void)cancelConferenceForAVChat:(id)arg1;	// IMP=0x00000000000330da
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;	// IMP=0x0000000000032bb5
- (void)_avChatDealloc:(id)arg1;	// IMP=0x0000000000032776
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;	// IMP=0x00000000000326f5
- (int)endConferenceForAVChat:(id)arg1;	// IMP=0x00000000000326e1
- (_Bool)stopPreview;	// IMP=0x000000000003269a
- (_Bool)startPreviewWithError:(id *)arg1;	// IMP=0x00000000000325e1
- (unsigned long long)capabilities;	// IMP=0x00000000000325d6
- (unsigned long long)capabilitiesOfCPU;	// IMP=0x00000000000325c4
- (unsigned long long)capabilitiesOfNetwork;	// IMP=0x00000000000325b2
- (void)conference:(id)arg1 callID:(long long)arg2 setPauseVideo:(_Bool)arg3;	// IMP=0x0000000000032487
- (void)avChat:(id)arg1 setSendingVideo:(_Bool)arg2;	// IMP=0x00000000000321ac
- (_Bool)isSendingVideoForAVChat:(id)arg1;	// IMP=0x0000000000031f59
- (void)avChat:(id)arg1 setSendingAudio:(_Bool)arg2;	// IMP=0x0000000000031c95
- (_Bool)isSendingAudioForAVChat:(id)arg1;	// IMP=0x0000000000031a3d
- (void)avChat:(id)arg1 setPaused:(_Bool)arg2;	// IMP=0x0000000000031a25
- (_Bool)isPausedForAVChat:(id)arg1;	// IMP=0x0000000000031a10
- (void)avChat:(id)arg1 setMute:(_Bool)arg2;	// IMP=0x000000000003187b
- (_Bool)isMuteForAVChat:(id)arg1;	// IMP=0x000000000003177f
- (void)_conferenceEnded:(id)arg1;	// IMP=0x0000000000031664
- (_Bool)isAVInterfaceReady;	// IMP=0x000000000003161d
- (void)initAVInterface;	// IMP=0x00000000000314b3
- (void)_queueAVConferenceForCleanup:(id)arg1;	// IMP=0x000000000003123e
- (void)_cleanupAVInterface;	// IMP=0x0000000000030f6c
- (int)_deviceRoleForAVChat:(id)arg1;	// IMP=0x0000000000030f50
- (id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;	// IMP=0x0000000000030b20
- (id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;	// IMP=0x0000000000030ac1
- (id)_avChatForConference:(id)arg1;	// IMP=0x0000000000030711
- (id)_conferenceForAVChat:(id)arg1;	// IMP=0x000000000003029a
- (id)_existingConferenceForAVChatGUID:(id)arg1;	// IMP=0x00000000000301d3
- (id)_existingConferenceForAVChat:(id)arg1;	// IMP=0x00000000000300aa
- (_Bool)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;	// IMP=0x000000000002ff97
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;	// IMP=0x000000000002fe74
- (id)_faceTimeUUID;	// IMP=0x000000000002fd29
- (void)dealloc;	// IMP=0x000000000002fc58
- (id)init;	// IMP=0x000000000002f33a

@end

