//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCMediaStreamMultiwayConfig, VCMediaStreamRateControlConfig, VCNetworkAddress, VCNetworkFeedbackController;

__attribute__((visibility("hidden")))
@interface VCMediaStreamConfig : NSObject
{
    long long _direction;	// 8 = 0x8
    VCNetworkAddress *_localAddress;	// 16 = 0x10
    NSString *_cName;	// 24 = 0x18
    unsigned int _localSSRC;	// 32 = 0x20
    VCNetworkAddress *_remoteAddress;	// 40 = 0x28
    unsigned int _remoteSSRC;	// 48 = 0x30
    unsigned long long _recommendedMTU;	// 56 = 0x38
    NSData *_sendMediaKey;	// 64 = 0x40
    NSMutableDictionary *_txPayloadMap;	// 72 = 0x48
    NSData *_receiveMediaKey;	// 80 = 0x50
    NSMutableDictionary *_rxPayloadMap;	// 88 = 0x58
    _Bool _latencySensitiveModeEnabled;	// 96 = 0x60
    long long _SRTPCipherSuite;	// 104 = 0x68
    _Bool _rtpTimeOutEnabled;	// 112 = 0x70
    double _rtpTimeOutInterval;	// 120 = 0x78
    _Bool _decryptionTimeOutEnabled;	// 128 = 0x80
    double _decryptionMKMRecoveryInterval;	// 136 = 0x88
    double _decryptionTimeOutInterval;	// 144 = 0x90
    unsigned int _rtpTimestampRate;	// 152 = 0x98
    struct tagVCSecurityKeyHolder *_securityKeyHolder;	// 160 = 0xa0
    int _sframeCipherSuite;	// 168 = 0xa8
    unsigned int _cellularUniqueTag;	// 172 = 0xac
    _Bool _rtcpEnabled;	// 176 = 0xb0
    double _rtcpSendInterval;	// 184 = 0xb8
    long long _SRTCPCipherSuite;	// 192 = 0xc0
    _Bool _rtcpTimeOutEnabled;	// 200 = 0xc8
    double _rtcpTimeOutInterval;	// 208 = 0xd0
    _Bool _rtcpReceiveCallbackEnabled;	// 216 = 0xd8
    unsigned short _rtcpRemotePort;	// 218 = 0xda
    _Bool _rateAdaptationEnabled;	// 220 = 0xdc
    VCMediaStreamMultiwayConfig *_multiwayConfig;	// 224 = 0xe0
    VCMediaStreamRateControlConfig *_rateControlConfig;	// 232 = 0xe8
    struct tagVCJBTargetEstimatorSynchronizer *_jbTargetEstimatorSynchronizer;	// 240 = 0xf0
    VCNetworkFeedbackController *_networkFeedbackController;	// 248 = 0xf8
    int _captureSource;	// 256 = 0x100
}

@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(nonatomic) int captureSource; // @synthesize captureSource=_captureSource;
@property(retain, nonatomic) VCMediaStreamRateControlConfig *rateControlConfig; // @synthesize rateControlConfig=_rateControlConfig;
@property(nonatomic, getter=isLatencySensitiveModeEnabled) _Bool latencySensitiveModeEnabled; // @synthesize latencySensitiveModeEnabled=_latencySensitiveModeEnabled;
@property(nonatomic, getter=isRTCPReceiveCallbackEnabled) _Bool rtcpReceiveCallbackEnabled; // @synthesize rtcpReceiveCallbackEnabled=_rtcpReceiveCallbackEnabled;
@property(retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig; // @synthesize multiwayConfig=_multiwayConfig;
@property(nonatomic, getter=isRateAdaptationEnabled) _Bool rateAdaptationEnabled; // @synthesize rateAdaptationEnabled=_rateAdaptationEnabled;
@property(readonly, nonatomic) NSDictionary *txPayloadMap; // @synthesize txPayloadMap=_txPayloadMap;
@property(readonly, nonatomic) NSDictionary *rxPayloadMap; // @synthesize rxPayloadMap=_rxPayloadMap;
@property(nonatomic) int sframeCipherSuite; // @synthesize sframeCipherSuite=_sframeCipherSuite;
@property(nonatomic) struct tagVCSecurityKeyHolder *securityKeyHolder; // @synthesize securityKeyHolder=_securityKeyHolder;
@property(nonatomic) long long SRTCPCipherSuite; // @synthesize SRTCPCipherSuite=_SRTCPCipherSuite;
@property(nonatomic) long long SRTPCipherSuite; // @synthesize SRTPCipherSuite=_SRTPCipherSuite;
@property(retain, nonatomic) NSData *receiveMediaKey; // @synthesize receiveMediaKey=_receiveMediaKey;
@property(retain, nonatomic) NSData *sendMediaKey; // @synthesize sendMediaKey=_sendMediaKey;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(nonatomic) double decryptionMKMRecoveryInterval; // @synthesize decryptionMKMRecoveryInterval=_decryptionMKMRecoveryInterval;
@property(nonatomic) double decryptionTimeOutInterval; // @synthesize decryptionTimeOutInterval=_decryptionTimeOutInterval;
@property(nonatomic) double rtcpTimeOutInterval; // @synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval;
@property(nonatomic) double rtpTimeOutInterval; // @synthesize rtpTimeOutInterval=_rtpTimeOutInterval;
@property(nonatomic, getter=isDecryptionTimeOutEnabled) _Bool decryptionTimeOutEnabled; // @synthesize decryptionTimeOutEnabled=_decryptionTimeOutEnabled;
@property(nonatomic) unsigned int rtpTimestampRate; // @synthesize rtpTimestampRate=_rtpTimestampRate;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled; // @synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled; // @synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled;
@property(nonatomic) double rtcpSendInterval; // @synthesize rtcpSendInterval=_rtcpSendInterval;
@property(nonatomic) unsigned short rtcpRemotePort; // @synthesize rtcpRemotePort=_rtcpRemotePort;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled; // @synthesize rtcpEnabled=_rtcpEnabled;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *cName; // @synthesize cName=_cName;
@property(retain, nonatomic) VCNetworkAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain, nonatomic) VCNetworkAddress *localAddress; // @synthesize localAddress=_localAddress;
@property(nonatomic) struct tagVCJBTargetEstimatorSynchronizer *jbTargetEstimatorSynchronizer;
- (void)applyMediaStreamClientDictionary:(id)arg1;	// IMP=0x00000000003279c4
- (void)setupMediaStreamConfig;	// IMP=0x0000000000327946
@property(readonly, nonatomic) long long primaryTxCodecType;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;	// IMP=0x0000000000327786
- (void)addTxPayloadType:(int)arg1;	// IMP=0x000000000032776f
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;	// IMP=0x0000000000327704
- (void)addRxPayloadType:(int)arg1;	// IMP=0x00000000003276ed
- (id)description;	// IMP=0x00000000003276ac
- (void)dealloc;	// IMP=0x00000000003275ce
- (id)initWithClientDictionary:(id)arg1;	// IMP=0x0000000000327505
- (id)init;	// IMP=0x0000000000327496

@end
