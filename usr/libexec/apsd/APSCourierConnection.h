//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSProtocolParser, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSTimer, PCConnectionManager;
@protocol APSCourierConnectionDelegate, APSTCPStream;

@interface APSCourierConnection : NSObject
{
    NSString *_domain;	// 8 = 0x8
    id <APSTCPStream> _streams[2];	// 16 = 0x10
    APSProtocolParser *_parsers[2];	// 32 = 0x20
    NSString *_redirectHost;	// 48 = 0x30
    unsigned char _redirectCount;	// 56 = 0x38
    PCConnectionManager *_connectionManagers[2];	// 64 = 0x40
    NSMutableDictionary *_contexts[2];	// 80 = 0x50
    NSTimer *_keepAliveTimers[2];	// 96 = 0x60
    _Bool _keepAliveV2Supported[2];	// 112 = 0x70
    NSString *_usingCachedIPAddress[2];	// 120 = 0x78
    _Bool _isConnecting[2];	// 136 = 0x88
    void *_keepAlivePowerAssertions[2];	// 144 = 0x90
    NSTimer *_connectionEstablishTimers[2];	// 160 = 0xa0
    void *_connectionEstablishPowerAssertions[2];	// 176 = 0xb0
    _Bool _isDualChannelAllowed;	// 192 = 0xc0
    id <APSCourierConnectionDelegate> _delegate;	// 200 = 0xc8
    long long _lastAttemptedInterface;	// 208 = 0xd0
    _Bool _remainsConnectedWhenWWANSuspends;	// 216 = 0xd8
    NSMutableArray *_connectionAttemptsInExpensiveConditions;	// 224 = 0xe0
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 232 = 0xe8
    unsigned long long _maxExpensiveConditionsConnectionAttempts;	// 240 = 0xf0
    double _expensiveConditionsBackOffInterval;	// 248 = 0xf8
    double _wifiKeepAliveEarlyFireConstantInterval;	// 256 = 0x100
    unsigned int _disconnectReason;	// 264 = 0x108
    NSDate *_lastConnected;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000816d1
@property(nonatomic) double wifiKeepAliveEarlyFireConstantInterval; // @synthesize wifiKeepAliveEarlyFireConstantInterval=_wifiKeepAliveEarlyFireConstantInterval;
@property(nonatomic) double expensiveConditionsBackOffInterval; // @synthesize expensiveConditionsBackOffInterval=_expensiveConditionsBackOffInterval;
@property(nonatomic) unsigned long long maxExpensiveConditionsConnectionAttempts; // @synthesize maxExpensiveConditionsConnectionAttempts=_maxExpensiveConditionsConnectionAttempts;
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(retain, nonatomic) NSString *redirectHost; // @synthesize redirectHost=_redirectHost;
@property(nonatomic) unsigned int disconnectReason; // @synthesize disconnectReason=_disconnectReason;
@property(retain, nonatomic) NSDate *lastConnected; // @synthesize lastConnected=_lastConnected;
@property(readonly, nonatomic) NSString *connectionDebugInfo;
- (void)tcpStreamDidFailToFindKeepAliveProxyInterface:(id)arg1;	// IMP=0x00100000000814d2
- (void)tcpStreamDidFailToObtainKeepAliveProxy:(id)arg1;	// IMP=0x001000000008148e
- (void)tcpStreamDidFailToForceKeepAliveProxyInterface:(id)arg1;	// IMP=0x001000000008144a
- (void)tcpStreamHasConnected:(id)arg1 context:(id)arg2 enabledPackedFormat:(_Bool)arg3 maxEncoderTableSize:(unsigned long long)arg4 maxDecoderTableSize:(unsigned long long)arg5 secureHandshakeEnabled:(_Bool)arg6;	// IMP=0x0010000000081373
- (void)tcpStream:(id)arg1 hasDeterminedServerHostname:(id)arg2;	// IMP=0x0010000000081308
- (void)tcpStream:(id)arg1 receivedServerBag:(id)arg2;	// IMP=0x00100000000812ec
- (void)tcpStream:(id)arg1 errorOccured:(id)arg2;	// IMP=0x00100000000811b4
- (void)tcpStreamEndEncountered:(id)arg1 withReason:(unsigned int)arg2;	// IMP=0x001000000008116b
- (unsigned long long)tcpStream:(id)arg1 dataReceived:(id)arg2 isWakingMessage:(_Bool)arg3;	// IMP=0x00100000000810b7
- (void)protocolParser:(id)arg1 receiveAPNSPackError:(id)arg2;	// IMP=0x001000000008104c
- (void)connectionManager:(id)arg1 handleEvent:(int)arg2 context:(id)arg3;	// IMP=0x0010000000080fbc
- (_Bool)isPackedFormatOnInterface:(long long)arg1;	// IMP=0x0010000000080fa5
- (_Bool)parseMessage:(id)arg1 parameters:(id *)arg2 isInvalid:(_Bool *)arg3 lengthParsed:(unsigned long long *)arg4 onInterface:(long long)arg5;	// IMP=0x0010000000080f8a
- (void)sendPubSubChannelListWithMetadata:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3 onInterface:(long long)arg4;	// IMP=0x0010000000080e51
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x0010000000080e03
- (_Bool)sendMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6 onInterface:(long long)arg7;	// IMP=0x0010000000080d9b
- (void)sendFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6 onInterface:(long long)arg7;	// IMP=0x0010000000080d3c
- (void)sendMessageTracingAckWithTopic:(id)arg1 tracingUUID:(id)arg2 status:(int)arg3 token:(id)arg4 onInterface:(long long)arg5;	// IMP=0x0010000000080ce4
- (void)sendAppTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 onInterface:(long long)arg4;	// IMP=0x0010000000080c96
- (void)sendKeepAliveMessageWithMetadata:(id)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000080c48
- (void)sendMessageTransportAcknowledgeMessageOnInterface:(long long)arg1;	// IMP=0x0010000000080bfa
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 onInterface:(long long)arg4;	// IMP=0x0010000000080bac
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2 onInterface:(long long)arg3;	// IMP=0x0010000000080b5e
- (void)sendSetActiveIntervalMessageWithInterval:(unsigned int)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000080b10
- (void)sendFlushResponseMessageWithPaddingLength:(unsigned long long)arg1 onInterface:(long long)arg2;	// IMP=0x0010000000080ac2
- (void)sendFlushMessageWithWantPaddingLength:(unsigned long long)arg1 paddingLength:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x0010000000080a74
- (void)sendConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 metadata:(id)arg4 certificate:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 tcpHandshakeTimeMilliseconds:(double)arg9 dnsResolveTimeMilliseconds:(double)arg10 tlsHandshakeTimeMilliseconds:(double)arg11 consecutiveConnectionFailureReason:(id)arg12 onInterface:(long long)arg13;	// IMP=0x0010000000080796
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 metadata:(id)arg5 certificate:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 onInterface:(long long)arg10;	// IMP=0x001000000008062a
- (void)holdPowerAssertionUntilStreamQuiesces;	// IMP=0x00100000000805ca
@property(readonly, nonatomic) _Bool didPushCauseWake;
@property(nonatomic) _Bool isDualChannelAllowed;
- (void)_handleDualModeState;	// IMP=0x00100000000800bc
- (unsigned long long)countOfGrowthActionsOnInterface:(long long)arg1;	// IMP=0x001000000008009b
- (_Bool)shouldClientScheduleReconnectDueToFailureOnInterface:(long long)arg1;	// IMP=0x001000000008007a
- (int)currentGrowthStageOnInterface:(long long)arg1;	// IMP=0x0010000000080059
- (id)currentKeepAliveStateOnInterface:(long long)arg1;	// IMP=0x001000000007ffcc
- (double)currentKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x001000000007ffab
@property(readonly, nonatomic) double minimumKeepAliveInterval;
@property(readonly, copy, nonatomic) NSString *ifname;
- (_Bool)isKeepAliveProxyConfiguredOnInterface:(long long)arg1;	// IMP=0x001000000007ff08
- (_Bool)isKeepAliveProxySupportedOnSocketOnInterface:(long long)arg1;	// IMP=0x001000000007fee7
- (_Bool)hasOpenConnectionOnInterface:(long long)arg1;	// IMP=0x001000000007fecf
@property(readonly, nonatomic) _Bool hasOpenConnection;
@property(readonly, nonatomic) unsigned long long countOpenConnections;
@property(readonly, nonatomic) unsigned long long countConnectedInterfaces;
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x001000000007fde5
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)generationMatches:(unsigned long long)arg1 forInterface:(long long)arg2;	// IMP=0x001000000007fd79
- (_Bool)setIsConnected:(_Bool)arg1 onInterface:(long long)arg2 withDisconnectReason:(unsigned int)arg3;	// IMP=0x001000000007f904
- (_Bool)setIsConnected:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007f8ec
- (id)serverHostnameForInterface:(long long)arg1;	// IMP=0x001000000007f7ec
- (id)serverIPAddressForInterface:(long long)arg1;	// IMP=0x001000000007f6ec
@property(readonly, nonatomic) long long lastAttemptedInterface;
@property(readonly, nonatomic) long long connectingInterface;
@property(readonly, nonatomic) long long preferredInterface;
@property(readonly, nonatomic) long long nextConnectionAttemptInterface;
@property(readonly, retain, nonatomic) NSString *tcpInfoDescription;
- (id)_currentStream;	// IMP=0x001000000007f527
@property(nonatomic) id <APSCourierConnectionDelegate> delegate;
- (id)objectForKey:(id)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007f491
- (void)setObject:(id)arg1 forKey:(id)arg2 onInterface:(long long)arg3;	// IMP=0x001000000007f393
- (void)_keepAliveResponseTimerFired:(id)arg1;	// IMP=0x001000000007f305
- (void)clearKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x001000000007f2a4
- (void)startKeepAliveResponseTimerOnInterface:(long long)arg1 shortInterval:(_Bool)arg2;	// IMP=0x001000000007f172
- (_Bool)hasKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x001000000007f15a
- (void)_connectionEstablishTimerFired:(id)arg1;	// IMP=0x001000000007f0c6
- (void)clearConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x001000000007f05c
- (void)startConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x001000000007ef3b
- (_Bool)hasConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x001000000007ef20
- (_Bool)hasConnectionEstablishTimer;	// IMP=0x001000000007ef03
- (void)_updateConnectionManagerKeepAliveIntervalNonCellular;	// IMP=0x001000000007eea8
- (void);	// IMP=0x001000000007ee67
- (void)_updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x001000000007ee0c
- (void)__updateConnectionManagerKeepAliveIntervalWWAN;	// IMP=0x001000000007edcb
- (int)lastKeepAliveActionOnInterface:(long long)arg1;	// IMP=0x001000000007ecdd
- (_Bool)keepAliveV2SupportedOnInterface:(long long)arg1;	// IMP=0x001000000007ec0f
- (void)setKeepAliveV2Supported:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007eb18
- (void)updateConnectionManagerKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x001000000007ea1a
- (void)setEnableNonCellularOnConnectionManager:(_Bool)arg1;	// IMP=0x001000000007ea04
- (void)setMinimumIntervalFallbackEnabled:(_Bool)arg1;	// IMP=0x001000000007e9c4
- (void)setKeepAliveGracePeriod:(double)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e8c1
- (double)keepAliveGracePeriodOnInterface:(long long)arg1;	// IMP=0x001000000007e7d2
- (void)setUsingServerStatsAggressively:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e6b9
- (void)setServerStatsExpectedKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e5b6
- (void)setServerStatsMinKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e4b3
- (void)setServerStatsMaxKeepAlive:(double)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e3b0
- (void)resumeManagerWithAction:(int)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007e21f
- (_Bool)isExpensiveToUseInterface:(long long)arg1;	// IMP=0x001000000007e1db
- (id)pcInterfaceMonitorOnInterface:(long long)arg1;	// IMP=0x001000000007e197
- (id)pcInterfaceMonitorNonCellular;	// IMP=0x001000000007e180
- (id)pcInterfaceMonitorWWAN;	// IMP=0x001000000007e16c
- (void)stopAndResetManagerOnInterface:(long long)arg1;	// IMP=0x001000000007e003
- (void)stopManagerOnInterface:(long long)arg1;	// IMP=0x001000000007de9a
- (void)stopManagers;	// IMP=0x001000000007de5f
- (void)closeStreamForInterface:(long long)arg1;	// IMP=0x001000000007ddf2
- (void)writeDataInBackground:(id)arg1;	// IMP=0x001000000007dd9d
- (void)writeDataInBackground:(id)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007dc9d
- (Class)tcpStreamClass;	// IMP=0x001000000007dc8c
- (void)connectToEnvironment:(id)arg1 onInterface:(long long)arg2 withIdentity:(struct __SecIdentity *)arg3 useAlternatePort:(_Bool)arg4 forceKeepAliveProxy:(_Bool)arg5;	// IMP=0x001000000007d88e
- (_Bool)shouldConnectOnInterface:(long long)arg1;	// IMP=0x001000000007d42a
- (void)setKeepAliveIntervalOverrideOnAudioAccessory;	// IMP=0x001000000007d34e
- (_Bool)isSuspendedOnInterface:(long long)arg1;	// IMP=0x001000000007d241
- (void)setIsSuspended:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007d128
- (void)setIsConnecting:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007d033
- (_Bool)isConnectingOnInterface:(long long)arg1;	// IMP=0x001000000007d019
- (void)setUsingCachedIPAddress:(id)arg1 onInterface:(long long)arg2;	// IMP=0x001000000007cf0e
- (id)usingCachedIPAddressOnInterface:(long long)arg1;	// IMP=0x001000000007cee9
- (unsigned char)redirectCount;	// IMP=0x001000000007cedf
- (void)clearRedirectCount;	// IMP=0x001000000007ced5
- (void)incrementRedirectCount;	// IMP=0x001000000007cecc
- (long long)_interfaceForConnectionManager:(id)arg1;	// IMP=0x001000000007ceac
- (long long)_interfaceForStream:(id)arg1;	// IMP=0x001000000007ce8c
- (long long)_interfaceForProtocolParser:(id)arg1;	// IMP=0x001000000007ce6c
- (void)dealloc;	// IMP=0x001000000007cd48
- (id)initWithEnvironment:(id)arg1;	// IMP=0x001000000007cae9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
