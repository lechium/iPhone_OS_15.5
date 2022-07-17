//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCAudioStreamConfig, AVCNetworkAddress, AVCTextStreamConfig, AVCVideoStreamConfig, NSData, NSString;

@interface AVCMediaStreamConfig : NSObject
{
    AVCNetworkAddress *_localAddress;	// 8 = 0x8
    AVCNetworkAddress *_remoteAddress;	// 16 = 0x10
    long long _direction;	// 24 = 0x18
    unsigned long long _txPayloadType;	// 32 = 0x20
    unsigned long long _rxPayloadType;	// 40 = 0x28
    unsigned int _localSSRC;	// 48 = 0x30
    unsigned int _remoteSSRC;	// 52 = 0x34
    NSString *_cName;	// 56 = 0x38
    _Bool _rateAdaptationEnabled;	// 64 = 0x40
    _Bool _rtcpEnabled;	// 65 = 0x41
    _Bool _rtcpXREnabled;	// 66 = 0x42
    unsigned short _rtcpRemotePort;	// 68 = 0x44
    double _rtcpSendInterval;	// 72 = 0x48
    _Bool _rtpTimeOutEnabled;	// 80 = 0x50
    _Bool _rtcpTimeOutEnabled;	// 81 = 0x51
    double _rtpTimeOutInterval;	// 88 = 0x58
    double _rtcpTimeOutInterval;	// 96 = 0x60
    unsigned long long _recommendedMTU;	// 104 = 0x68
    NSData *_sendMediaKey;	// 112 = 0x70
    NSData *_receiveMediaKey;	// 120 = 0x78
    long long _SRTPCipherSuite;	// 128 = 0x80
    long long _SRTCPCipherSuite;	// 136 = 0x88
    AVCAudioStreamConfig *_audio;	// 144 = 0x90
    AVCVideoStreamConfig *_video;	// 152 = 0x98
    AVCTextStreamConfig *_text;	// 160 = 0xa0
}

+ (id)dictionaryForCommonStreamConfig:(id)arg1;	// IMP=0x00000000003b9e63
+ (long long)clientCipherSuiteWithCipherSuite:(long long)arg1;	// IMP=0x00000000003b9980
+ (long long)cipherSuiteWithClientCipherSuite:(long long)arg1;	// IMP=0x00000000003b9961
+ (long long)clientStreamDirectionWithDirection:(long long)arg1;	// IMP=0x00000000003b994d
+ (long long)streamDirectionWithClientDirection:(long long)arg1;	// IMP=0x00000000003b9939
@property(retain, nonatomic) AVCTextStreamConfig *text; // @synthesize text=_text;
@property(retain, nonatomic) AVCVideoStreamConfig *video; // @synthesize video=_video;
@property(retain, nonatomic) AVCAudioStreamConfig *audio; // @synthesize audio=_audio;
@property(nonatomic) long long SRTCPCipherSuite; // @synthesize SRTCPCipherSuite=_SRTCPCipherSuite;
@property(nonatomic) long long SRTPCipherSuite; // @synthesize SRTPCipherSuite=_SRTPCipherSuite;
@property(retain, nonatomic) NSData *receiveMediaKey; // @synthesize receiveMediaKey=_receiveMediaKey;
@property(retain, nonatomic) NSData *sendMediaKey; // @synthesize sendMediaKey=_sendMediaKey;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) double rtcpTimeOutInterval; // @synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval;
@property(nonatomic) double rtpTimeOutInterval; // @synthesize rtpTimeOutInterval=_rtpTimeOutInterval;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled; // @synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled; // @synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled;
@property(nonatomic) double rtcpSendInterval; // @synthesize rtcpSendInterval=_rtcpSendInterval;
@property(nonatomic) unsigned short rtcpRemotePort; // @synthesize rtcpRemotePort=_rtcpRemotePort;
@property(nonatomic, getter=isRTCPXREnabled) _Bool rtcpXREnabled; // @synthesize rtcpXREnabled=_rtcpXREnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled; // @synthesize rtcpEnabled=_rtcpEnabled;
@property(nonatomic, getter=isRateAdaptationEnabled) _Bool rateAdaptationEnabled; // @synthesize rateAdaptationEnabled=_rateAdaptationEnabled;
@property(nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) unsigned long long rxPayloadType; // @synthesize rxPayloadType=_rxPayloadType;
@property(nonatomic) unsigned long long txPayloadType; // @synthesize txPayloadType=_txPayloadType;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *cName; // @synthesize cName=_cName;
@property(retain, nonatomic) AVCNetworkAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain, nonatomic) AVCNetworkAddress *localAddress; // @synthesize localAddress=_localAddress;
- (_Bool)isAudioCodecValid;	// IMP=0x00000000003ba4f1
- (id)dictionary;	// IMP=0x00000000003b9db8
- (void)setUpWithDictionary:(id)arg1;	// IMP=0x00000000003b999f
- (id)description;	// IMP=0x00000000003b990e
- (_Bool)isValidTextConfig;	// IMP=0x00000000003b9883
- (_Bool)isValidVideoConfig;	// IMP=0x00000000003b97d6
- (_Bool)isValidAudioConfig;	// IMP=0x00000000003b978f
- (void)dealloc;	// IMP=0x00000000003b96ef
- (id)init;	// IMP=0x00000000003b95fb
@property(retain, nonatomic) NSData *receiveMasterKey;
@property(retain, nonatomic) NSData *sendMasterKey;

@end
