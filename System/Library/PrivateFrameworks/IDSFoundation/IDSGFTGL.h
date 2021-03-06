//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSMutableArray;

@interface IDSGFTGL
{
    NSArray *_remoteCandidatePairs;	// 848 = 0x350
    NSMutableArray *_virtualCandidatePairs;	// 856 = 0x358
    _Bool _allowE2E;	// 864 = 0x360
    unsigned int _keyMaterialDataCounter;	// 868 = 0x364
    NSData *_keyMaterialData;	// 872 = 0x368
    CDUnknownBlockType _keyMaterialSentHandler;	// 880 = 0x370
}

- (void).cxx_destruct;	// IMP=0x0000000000097dab
- (void)_discardKeyMaterialMessage:(long long)arg1;	// IMP=0x0000000000097d37
- (void)sendKeyMaterialMessageData:(id)arg1 relayGroupID:(id)arg2 destinationURIs:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000973f6
- (void)setTimeBase:(id)arg1;	// IMP=0x00000000000973df
- (void)updateURIToParticipantIDs:(id)arg1 relaySessionID:(id)arg2 sessionInfo:(id)arg3;	// IMP=0x000000000009704b
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)arg1;	// IMP=0x0000000000096adf
- (void)removeParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionStateCounter:(unsigned int)arg4;	// IMP=0x00000000000966a5
- (void)manageDesignatedDestinations:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 withType:(unsigned short)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x0000000000095d1c
- (_Bool)_processRemovedLocalAddressList:(id)arg1;	// IMP=0x00000000000956c9
- (void)_discardCandidatePairsWithOption:(_Bool)arg1;	// IMP=0x0000000000095543
- (void)enableUPlusOneSessionForTransition:(_Bool)arg1;	// IMP=0x00000000000953ce
- (void)setIsUPlusOneSession:(_Bool)arg1;	// IMP=0x00000000000952e1
- (void)receiveJoinNotificationFromAParticipant;	// IMP=0x000000000009524c
- (void)_sendConnectionDataWithRemovedAddressList:(id)arg1;	// IMP=0x0000000000095117
- (void)_disableE2E;	// IMP=0x0000000000094b66
- (void)_enableE2E;	// IMP=0x00000000000949c4
- (_Bool)_setupNewQRLinkIfNecessary:(id)arg1;	// IMP=0x000000000009475d
- (void)_sendRelayInterfaceInfo:(id)arg1;	// IMP=0x0000000000093eca
- (long long)_getQRAllocateType;	// IMP=0x0000000000093ebf
- (_Bool)_postProcessAllocbindResponse:(id)arg1 candidatePair:(id)arg2 candidatePairToken:(id)arg3;	// IMP=0x0000000000092cf1
- (void)_processCommandRelayInterfaceInfo:(id)arg1 candidatePairToken:(id)arg2;	// IMP=0x0000000000091412
- (void)_processReceivedRemoteCandidatePairs:(id)arg1;	// IMP=0x0000000000090182
- (id)_findVirtualCandidatePair:(id)arg1;	// IMP=0x000000000008ffb6
- (void)_setupVirtualCandidatePairs:(id)arg1 remoteCandidatePair:(id)arg2;	// IMP=0x000000000008f7ee
- (void)_notifyDefaultUnderlyingLinkChanged:(id)arg1 error:(long long)arg2;	// IMP=0x000000000008f7e8
- (void)setDefaultUnderlyingLink:(BOOL)arg1;	// IMP=0x000000000008f560
- (void)disconnectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008f51f
- (void)invalidate;	// IMP=0x000000000008f4a3
- (void)startWithOptions:(id)arg1;	// IMP=0x000000000008f276

@end

