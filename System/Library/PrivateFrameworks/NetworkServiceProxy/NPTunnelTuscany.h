//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPTuscanyOnRamp, NSDate, NSObject;
@protocol OS_nw_connection;

@interface NPTunnelTuscany
{
    unsigned long long _nextFlowID;	// 72 = 0x48
    NSObject<OS_nw_connection> *_UDPSession;	// 80 = 0x50
    void *_connectionTimer;	// 88 = 0x58
    _Bool _shouldReportUsage;	// 96 = 0x60
    void *_pingTimer;	// 104 = 0x68
    void *_usageReportTimer;	// 112 = 0x70
    NPTuscanyOnRamp *_onRamp;	// 120 = 0x78
    unsigned int _waldoTimestamp;	// 128 = 0x80
    _Bool _ignoreWaldoTimestamp;	// 132 = 0x84
    _Bool _isFirstTunnel;	// 133 = 0x85
    void *_clientRef;	// 136 = 0x88
    CDUnknownBlockType _pendingPingCompletionHandler;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000060676
@property(nonatomic) _Bool isFirstTunnel; // @synthesize isFirstTunnel=_isFirstTunnel;
@property(copy, nonatomic) CDUnknownBlockType pendingPingCompletionHandler; // @synthesize pendingPingCompletionHandler=_pendingPingCompletionHandler;
@property(nonatomic) _Bool ignoreWaldoTimestamp; // @synthesize ignoreWaldoTimestamp=_ignoreWaldoTimestamp;
@property(nonatomic) void *clientRef; // @synthesize clientRef=_clientRef;
- (_Bool)isTFOProbeSucceeded;	// IMP=0x00000000000605d5
@property(readonly, nonatomic) NSDate *dayPassCreationDate;
@property(readonly, nonatomic) unsigned int dayPassSessionCounter;
- (_Bool)flowIsFirstFlow:(id)arg1;	// IMP=0x000000000006053e
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;	// IMP=0x00000000000603fb
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060237
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;	// IMP=0x00000000000601db
- (void)handleHelloAck:(unsigned int)arg1;	// IMP=0x0000000000060175
- (id)createConnectionInfo;	// IMP=0x000000000005fcb7
- (unsigned long long)initialWindowSize;	// IMP=0x000000000005fcad
- (_Bool)canHandleMoreData;	// IMP=0x000000000005fc70
- (unsigned long long)allocateFlowID;	// IMP=0x000000000005fc49
- (long long)sendData:(id)arg1 forFlow:(id)arg2;	// IMP=0x000000000005f9ea
- (void)closeFlow:(id)arg1;	// IMP=0x000000000005f929
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;	// IMP=0x000000000005f65c
- (void)handleFlowUsedTunnel;	// IMP=0x000000000005f5db
@property(readonly, nonatomic) unsigned long long maxFrameSize;
@property(readonly, nonatomic) long long currentMTU;
- (void)destroyConnection;	// IMP=0x000000000005f468
- (void)handleFallbackForFlow:(id)arg1;	// IMP=0x000000000005f3e3
- (void)sendDataOnUDPSession:(id)arg1;	// IMP=0x000000000005f09c
- (void)cancelConnection;	// IMP=0x000000000005eef6
- (void)cancelConnectionTimer;	// IMP=0x000000000005eeca
- (void)startConnectionTimer;	// IMP=0x000000000005ec6f
- (_Bool)start;	// IMP=0x000000000005e9aa
- (void)dealloc;	// IMP=0x000000000005e92c
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;	// IMP=0x000000000005e845
- (void)createTuscanyClient;	// IMP=0x000000000005e7e3
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;	// IMP=0x000000000005e74d
- (void)writeInitialData;	// IMP=0x000000000005e62e
- (void)handleDataWrittenWithError:(int)arg1;	// IMP=0x000000000005e580
- (void)handleEOF;	// IMP=0x000000000005e4ce
- (void)handleReadData:(struct nw_frame_array_s *)arg1;	// IMP=0x000000000005e41e
- (void)handleInputAvailable;	// IMP=0x000000000005e39c
- (void)handleConnectionError;	// IMP=0x000000000005e1eb
- (void)handleDisconnected;	// IMP=0x000000000005e0c7
- (void)handleConnected;	// IMP=0x000000000005ddf4

@end

