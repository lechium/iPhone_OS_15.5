//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorV2
{
}

+ (unsigned int)capabilitiesWithMomentSettings:(id)arg1;	// IMP=0x000000000000636a
+ (void)dumpRemoteNegotiationData:(id)arg1 forceFileDump:(_Bool)arg2;	// IMP=0x00000000000045cc
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;	// IMP=0x000000000000370f
+ (id)newDecompressedBlob:(id)arg1;	// IMP=0x0000000000003139
+ (id)newCompressedBlob:(id)arg1;	// IMP=0x0000000000002f05
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)arg1;	// IMP=0x0000000000007a72
- (_Bool)setupStreamGroupsWithRemoteMediaBlob:(id)arg1;	// IMP=0x000000000000771e
- (_Bool)negotiateStreamGroupConfig:(id)arg1;	// IMP=0x0000000000006812
- (_Bool)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)arg1;	// IMP=0x0000000000006414
- (_Bool)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)arg1;	// IMP=0x0000000000005bf1
- (id)remoteFeatureStringWithRemoteMediaBlob:(id)arg1;	// IMP=0x0000000000005aa1
- (_Bool)selectBestVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 remoteVideoRuleCollection:(id)arg4;	// IMP=0x000000000000557e
- (_Bool)selectBestDecodeVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 remoteVideoRuleCollection:(id)arg3;	// IMP=0x00000000000051fc
- (void)applyCellularPreferredRule:(id)arg1;	// IMP=0x0000000000004fd2
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg1 decodeRules:(id)arg2 isEncoder:(_Bool)arg3;	// IMP=0x0000000000004ce7
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)arg1;	// IMP=0x0000000000004b99
- (void)setupNegotiatedAudioPayloadsWithRemoteMediaBlob:(id)arg1;	// IMP=0x000000000000489d
- (_Bool)setupNegotiatedResultsWithRemoteMediaBlob:(id)arg1;	// IMP=0x000000000000475e
- (_Bool)appendStreamGroupsToMediaBlob:(id)arg1;	// IMP=0x00000000000043fe
- (_Bool)appendMomentsSettingsToMediaBlob:(id)arg1;	// IMP=0x0000000000004195
- (_Bool)appendCameraOneToOneSettingsToMediaBlob:(id)arg1;	// IMP=0x000000000000400d
- (_Bool)appendMicrophoneOneToOneSettingsToMediaBlob:(id)arg1;	// IMP=0x0000000000003f06
- (_Bool)appendCodecFeaturesToMediaBlob:(id)arg1;	// IMP=0x0000000000003e30
- (_Bool)appendBandwidthSettingsToMediaBlob:(id)arg1;	// IMP=0x0000000000003d54
- (_Bool)appendGeneralInfoToMediaBlob:(id)arg1;	// IMP=0x0000000000003c22
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x000000000000398a
- (_Bool)processRemoteNegotiationData:(id)arg1;	// IMP=0x0000000000003327
- (id)negotiationData;	// IMP=0x0000000000002ce7

@end

