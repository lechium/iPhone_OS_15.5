//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCBitrateArbiter, VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS
{
    double _lastTimestampForRemoteSendingFromNonPrimary;	// 712 = 0x2c8
    double _lastTimestampPreferredRemoteInterfaceUpdated;	// 720 = 0x2d0
    unsigned int _sentPacketCount[256];	// 728 = 0x2d8
    unsigned int _sentByteCount[256];	// 1752 = 0x6d8
    unsigned int _receivedPacketCount[256];	// 2776 = 0xad8
    unsigned int _receivedByteCount[256];	// 3800 = 0xed8
    VCSessionBitrateArbiter *_multiwayBitrateArbiter;	// 4824 = 0x12d8
    VCBitrateArbiter *_oneToOneBitrateArbiter;	// 4832 = 0x12e0
    _Bool _isMultiwaySession;	// 4840 = 0x12e8
    _Bool _optIntoExistingSubscribedStreams;	// 4841 = 0x12e9
}

- (_Bool)optIntoExistingSubscribedStreams;	// IMP=0x0000000000260d21
- (void)setOptIntoExistingSubscribedStreams:(_Bool)arg1;	// IMP=0x0000000000260a82
- (void)setLastPrimaryConnectionInUse:(id)arg1;	// IMP=0x0000000000260a62
- (void)setConnectionForDuplication:(id)arg1;	// IMP=0x0000000000260a42
- (void)setSecondaryConnection:(id)arg1;	// IMP=0x0000000000260a22
- (void)setPrimaryConnection:(id)arg1;	// IMP=0x0000000000260a02
- (id)lastPrimaryConnectionInUse;	// IMP=0x00000000002609e2
- (id)connectionForDuplication;	// IMP=0x00000000002609c2
- (id)secondaryConnection;	// IMP=0x00000000002609a2
- (id)primaryConnection;	// IMP=0x0000000000260982
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;	// IMP=0x0000000000260928
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;	// IMP=0x0000000000260908
- (void)didLinkProbingLockdownEnd;	// IMP=0x00000000002608cc
- (void)didUpdateLinkPreferenceOrder:(id)arg1;	// IMP=0x000000000026076d
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000002606a0
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000002605d3
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000260506
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x0000000000260439
- (_Bool)canOptOutAllStreamsForConnection:(id)arg1;	// IMP=0x0000000000260403
- (_Bool)shouldUpdateServerBasedConnection:(id)arg1;	// IMP=0x00000000002603da
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;	// IMP=0x0000000000260259
- (void)useConnectionAsPrimary:(id)arg1;	// IMP=0x0000000000260239
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x000000000025fce7
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;	// IMP=0x000000000025faef
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x000000000025fad2
- (void)updateDuplicationStateWithConnectionOperation:(int)arg1 isLocalOnWiFi:(_Bool)arg2 isRemoteOnWiFi:(_Bool)arg3;	// IMP=0x000000000025fa65
- (void)removeFromConnectionArray:(id)arg1;	// IMP=0x000000000025f948
- (_Bool)addConnectionToConnectionArray:(id)arg1;	// IMP=0x000000000025f1bc
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;	// IMP=0x000000000025f088
- (_Bool)shouldKeepAllConnections;	// IMP=0x000000000025f06d
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;	// IMP=0x000000000025f017
- (void)addLinkProbingTelemetry:(id)arg1;	// IMP=0x000000000025eda4
- (void)addDuplicationConnectionUpdateTelemetryWithSuggestedLinkTypeCombo:(id)arg1 payload:(id)arg2;	// IMP=0x000000000025ed33
- (void)updateConnectionForDuplication;	// IMP=0x000000000025e9bc
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x000000000025e8b1
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;	// IMP=0x000000000025e5b4
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x000000000025e549
- (void)setPreferredRemoteInterfaceForDuplication:(unsigned char)arg1;	// IMP=0x000000000025e3e8
- (void)setPreferredLocalInterfaceForDuplication:(unsigned char)arg1;	// IMP=0x000000000025e287
- (void)internalUpdateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x000000000025e22c
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x000000000025e1e2
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x000000000025e039
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x000000000025dfa0
- (void)updateCellularMTU:(int)arg1;	// IMP=0x000000000025de6e
- (id)getSecondaryConnectionToBeCompared;	// IMP=0x000000000025de5c
- (id)getPrimaryConnectionToBeCompared;	// IMP=0x000000000025de4a
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x000000000025ddf0
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x000000000025dd96
- (void)optOutAllStreamsForNonPrimaryConnections;	// IMP=0x000000000025db24
- (void)resetParticipantGenerationCounter;	// IMP=0x000000000025da7d
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x000000000025d9cc
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;	// IMP=0x000000000025d911
- (int)removeConnection:(id)arg1;	// IMP=0x000000000025d4eb
- (void)handleSecondaryConnectionRemoved;	// IMP=0x000000000025d189
- (void)reselectPrimaryConnection;	// IMP=0x000000000025cd5e
- (void)handlePrimaryConnectionRemoved;	// IMP=0x000000000025cd4c
- (int)addConnection:(id)arg1;	// IMP=0x000000000025c3cc
- (unsigned int)downlinkBitrateCapForConnection:(id)arg1;	// IMP=0x000000000025c308
- (unsigned int)uplinkBitrateCapForConnection:(id)arg1;	// IMP=0x000000000025c244
- (unsigned int)oneToOneBitrateCapForConnectionWithType:(unsigned int)arg1;	// IMP=0x000000000025c0a2
- (unsigned int)uplinkBitrateCapOneToOne:(id)arg1;	// IMP=0x000000000025c006
- (unsigned int)uplinkAudioOnlyBitrateCapOneToOne:(id)arg1;	// IMP=0x000000000025bf75
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;	// IMP=0x000000000025bd4e
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;	// IMP=0x000000000025bbd6
- (void)dealloc;	// IMP=0x000000000025bb39
- (id)initWithMultiwayEnabled:(_Bool)arg1;	// IMP=0x000000000025ba30

@end
