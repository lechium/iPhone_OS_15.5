//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, VCMediaStreamConfig;

__attribute__((visibility("hidden")))
@interface VCMediaStreamTransport : NSObject
{
    VCMediaStreamConfig *_streamConfig;	// 8 = 0x8
    unsigned int _localSSRC;	// 16 = 0x10
    struct tagHANDLE *_rtpHandle;	// 24 = 0x18
    _Bool _isSRTPInitialized;	// 32 = 0x20
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 40 = 0x28
    int _payloadType;	// 48 = 0x30
    CDStruct_cd00b3f0 _transportStreamInfo;	// 56 = 0x38
    struct tagVCCryptor *_receiverSframeCryptor;	// 80 = 0x50
    struct tagVCCryptor *_transmitterSframeCryptor;	// 88 = 0x58
    _Bool _encryptionInfoReceived;	// 96 = 0x60
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;	// IMP=0x0000000000285876
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;	// IMP=0x0000000000285861
+ (int)getSRTPMediaKeyLength:(long long)arg1;	// IMP=0x0000000000285844
@property(readonly, nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property(readonly, nonatomic) struct tagVCCryptor *transmitterSframeCryptor; // @synthesize transmitterSframeCryptor=_transmitterSframeCryptor;
@property(readonly, nonatomic) struct tagVCCryptor *receiverSframeCryptor; // @synthesize receiverSframeCryptor=_receiverSframeCryptor;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(readonly, nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(readonly, nonatomic) VCMediaStreamConfig *streamConfig; // @synthesize streamConfig=_streamConfig;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;	// IMP=0x0000000000287bf7
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;	// IMP=0x0000000000287a86
- (_Bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x0000000000287902
@property(readonly, nonatomic) unsigned short idsStreamId;
@property(nonatomic) long long streamDirection;
- (_Bool)setThrottlingInterval:(double)arg1;	// IMP=0x0000000000287878
- (_Bool)sendIntervalDidElapse:(int *)arg1 remainingTime:(double *)arg2;	// IMP=0x000000000028785e
@property(nonatomic) double decryptionMKMRecoveryInterval;
@property(nonatomic) double decryptionTimeoutInterval;
@property(nonatomic, getter=isDecryptionTimeoutEnabled) _Bool decryptionTimeoutEnabled;
@property(nonatomic) double rtcpTimeoutInterval;
@property(nonatomic, getter=isRTCPTimeoutEnabled) _Bool rtcpTimeoutEnabled;
@property(nonatomic) double rtpTimeoutInterval;
@property(nonatomic, getter=isRTPTimeoutEnabled) _Bool rtpTimeoutEnabled;
@property(readonly, nonatomic, getter=isRTCPSendEnabled) _Bool rtcpSendEnabled;
@property(nonatomic) double rtcpSendInterval;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)handleEncryptionInfoChange:(id)arg1;	// IMP=0x00000000002873c6
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
- (id)rxNetworkPayloads;	// IMP=0x0000000000287010
- (void)registerRTPPayloadMappings;	// IMP=0x0000000000286c0c
- (_Bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x0000000000286afd
- (_Bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x0000000000286a4e
- (_Bool)setupRTPForIDS:(id *)arg1;	// IMP=0x0000000000286979
- (_Bool)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000028689d
- (int)setupRTPWithTransportStreams;	// IMP=0x00000000002866e3
- (_Bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x000000000028660f
- (int)setupSRTP;	// IMP=0x0000000000285bfd
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMediaKey:(id)arg2;	// IMP=0x000000000028589b
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;	// IMP=0x0000000000285833
- (void)resetPayloadMapping;	// IMP=0x0000000000285825
- (void)reset;	// IMP=0x0000000000285817
- (_Bool)setupSframeCryptorsWithError:(id *)arg1;	// IMP=0x000000000028567b
- (struct tagVCCryptor *)createSframeCryptorWithStreamConfig:(id)arg1 ssrc:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000002854fc
- (_Bool)isSendingMedia:(id)arg1;	// IMP=0x00000000002854bc
- (_Bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg2 reducedSizeRTCPPackets:(_Bool)arg3 hopByHopEncryptRTCPPackets:(_Bool)arg4 statisticsCollector:(id)arg5 basebandCongestionDetector:(id)arg6 error:(id *)arg7;	// IMP=0x00000000002843b5
- (void)onStop;	// IMP=0x000000000028439e
- (int)onStart;	// IMP=0x0000000000284350
- (void)updateLastGeneratedKeyMaterial;	// IMP=0x000000000028409b
- (_Bool)isSameSRTPConfig:(id)arg1;	// IMP=0x0000000000283f88
- (void)dealloc;	// IMP=0x0000000000283ec2
- (id)initWithHandle:(struct tagHANDLE *)arg1 localSSRC:(unsigned int)arg2;	// IMP=0x0000000000283e50

@end
