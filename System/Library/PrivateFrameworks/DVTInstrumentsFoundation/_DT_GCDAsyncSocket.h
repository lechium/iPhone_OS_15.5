//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, _DT_GCDAsyncReadPacket, _DT_GCDAsyncSocketPreBuffer, _DT_GCDAsyncWritePacket;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _DT_GCDAsyncSocket : NSObject
{
    unsigned int flags;	// 8 = 0x8
    unsigned short config;	// 12 = 0xc
    id delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *delegateQueue;	// 24 = 0x18
    int socket4FD;	// 32 = 0x20
    int socket6FD;	// 36 = 0x24
    int stateIndex;	// 40 = 0x28
    NSData *connectInterface4;	// 48 = 0x30
    NSData *connectInterface6;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *socketQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *accept4Source;	// 72 = 0x48
    NSObject<OS_dispatch_source> *accept6Source;	// 80 = 0x50
    NSObject<OS_dispatch_source> *connectTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *readSource;	// 96 = 0x60
    NSObject<OS_dispatch_source> *writeSource;	// 104 = 0x68
    NSObject<OS_dispatch_source> *readTimer;	// 112 = 0x70
    NSObject<OS_dispatch_source> *writeTimer;	// 120 = 0x78
    NSMutableArray *readQueue;	// 128 = 0x80
    NSMutableArray *writeQueue;	// 136 = 0x88
    _DT_GCDAsyncReadPacket *currentRead;	// 144 = 0x90
    _DT_GCDAsyncWritePacket *currentWrite;	// 152 = 0x98
    unsigned long long socketFDBytesAvailable;	// 160 = 0xa0
    _DT_GCDAsyncSocketPreBuffer *preBuffer;	// 168 = 0xa8
    struct {
        long long version;
        void *info;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType copyDescription;
    } streamContext;	// 176 = 0xb0
    struct __CFReadStream *readStream;	// 216 = 0xd8
    struct __CFWriteStream *writeStream;	// 224 = 0xe0
    struct SSLContext *sslContext;	// 232 = 0xe8
    _DT_GCDAsyncSocketPreBuffer *sslPreBuffer;	// 240 = 0xf0
    unsigned long long sslWriteCachedLength;	// 248 = 0xf8
    int sslErrCode;	// 256 = 0x100
    void *IsOnSocketQueueOrTargetQueueKey;	// 264 = 0x108
    id userData;	// 272 = 0x110
}

+ (id)ZeroData;	// IMP=0x00000000000389fa
+ (id)LFData;	// IMP=0x00000000000389d5
+ (id)CRData;	// IMP=0x00000000000389b0
+ (id)CRLFData;	// IMP=0x000000000003898b
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 family:(char *)arg3 fromAddress:(id)arg4;	// IMP=0x00000000000387c1
+ (_Bool)getHost:(id *)arg1 port:(unsigned short *)arg2 fromAddress:(id)arg3;	// IMP=0x00000000000387a9
+ (_Bool)isIPv6Address:(id)arg1;	// IMP=0x000000000003874e
+ (_Bool)isIPv4Address:(id)arg1;	// IMP=0x00000000000386f3
+ (unsigned short)portFromAddress:(id)arg1;	// IMP=0x00000000000386c0
+ (id)hostFromAddress:(id)arg1;	// IMP=0x000000000003865a
+ (unsigned short)portFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x0000000000038649
+ (unsigned short)portFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x0000000000038638
+ (id)hostFromSockaddr6:(const struct sockaddr_in6 *)arg1;	// IMP=0x00000000000385bb
+ (id)hostFromSockaddr4:(const struct sockaddr_in *)arg1;	// IMP=0x000000000003853e
+ (id)lookupHost:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x0000000000038198
+ (void)unscheduleCFStreams:(id)arg1;	// IMP=0x00000000000373b6
+ (void)scheduleCFStreams:(id)arg1;	// IMP=0x00000000000372a7
+ (void)cfstreamThread;	// IMP=0x0000000000037110
+ (void)stopCFStreamThreadIfNeeded;	// IMP=0x0000000000037017
+ (void)startCFStreamThreadIfNeeded;	// IMP=0x0000000000036ee4
+ (void)ignore:(id)arg1;	// IMP=0x0000000000036ede
+ (id)gaiError:(int)arg1;	// IMP=0x000000000002f39a
- (void).cxx_destruct;	// IMP=0x0000000000038a1f
- (struct SSLContext *)sslContext;	// IMP=0x000000000003816c
- (struct __CFWriteStream *)writeStream;	// IMP=0x0000000000038124
- (struct __CFReadStream *)readStream;	// IMP=0x00000000000380dc
- (int)socket6FD;	// IMP=0x00000000000380b1
- (int)socket4FD;	// IMP=0x0000000000038086
- (int)socketFD;	// IMP=0x0000000000038053
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003801b
- (void)unmarkSocketQueueTargetQueue:(id)arg1;	// IMP=0x0000000000038003
- (void)markSocketQueueTargetQueue:(id)arg1;	// IMP=0x0000000000037fe7
@property _Bool autoDisconnectOnClosedReadStream;
- (_Bool)openStreams;	// IMP=0x0000000000037d27
- (void)removeStreamsFromRunLoop;	// IMP=0x0000000000037bce
- (_Bool)addStreamsToRunLoop;	// IMP=0x0000000000037a73
- (_Bool)registerForStreamCallbacksIncludingReadWrite:(_Bool)arg1;	// IMP=0x000000000003764d
- (_Bool)createReadAndWriteStream;	// IMP=0x00000000000374c5
- (void)cf_startTLS;	// IMP=0x0000000000036be2
- (void)cf_abortSSLHandshake:(id)arg1;	// IMP=0x0000000000036bb7
- (void)cf_finishSSLHandshake;	// IMP=0x0000000000036a7d
- (void)ssl_shouldTrustPeer:(_Bool)arg1 stateIndex:(int)arg2;	// IMP=0x00000000000369f6
- (void)ssl_continueSSLHandshake;	// IMP=0x000000000003634b
- (void)ssl_startTLS;	// IMP=0x0000000000034eeb
- (int)sslWriteWithBuffer:(const void *)arg1 length:(unsigned long long *)arg2;	// IMP=0x0000000000034e51
- (int)sslReadWithBuffer:(void *)arg1 length:(unsigned long long *)arg2;	// IMP=0x0000000000034bee
- (void)maybeStartTLS;	// IMP=0x0000000000034aff
- (void)startTLS:(id)arg1;	// IMP=0x000000000003498c
- (void)doWriteTimeoutWithExtension:(double)arg1;	// IMP=0x00000000000348c7
- (void)doWriteTimeout;	// IMP=0x000000000003470a
- (void)setupWriteTimerWithTimeout:(double)arg1;	// IMP=0x00000000000345cc
- (void)endCurrentWrite;	// IMP=0x0000000000034585
- (void)completeCurrentWrite;	// IMP=0x000000000003440b
- (void)doWriteData;	// IMP=0x0000000000033dc4
- (void)maybeDequeueWrite;	// IMP=0x0000000000033be7
- (float)progressOfWriteReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;	// IMP=0x00000000000339de
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;	// IMP=0x00000000000338a0
- (void)doReadTimeoutWithExtension:(double)arg1;	// IMP=0x00000000000337db
- (void)doReadTimeout;	// IMP=0x000000000003361e
- (void)setupReadTimerWithTimeout:(double)arg1;	// IMP=0x00000000000334e0
- (void)endCurrentRead;	// IMP=0x0000000000033499
- (void)completeCurrentRead;	// IMP=0x00000000000331d7
- (void)doReadEOF;	// IMP=0x0000000000032f5d
- (void)doReadData;	// IMP=0x000000000003222e
- (void)flushSSLBuffers;	// IMP=0x0000000000031f3b
- (void)maybeDequeueRead;	// IMP=0x0000000000031d01
- (float)progressOfReadReturningTag:(long long *)arg1 bytesDone:(unsigned long long *)arg2 total:(unsigned long long *)arg3;	// IMP=0x0000000000031b01
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 maxLength:(unsigned long long)arg5 tag:(long long)arg6;	// IMP=0x0000000000031957
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;	// IMP=0x0000000000031930
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;	// IMP=0x000000000003190e
- (void)readDataToData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;	// IMP=0x00000000000318e7
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;	// IMP=0x0000000000031788
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;	// IMP=0x000000000003176b
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;	// IMP=0x0000000000031615
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;	// IMP=0x00000000000315fa
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;	// IMP=0x00000000000315db
- (void)resumeWriteSource;	// IMP=0x00000000000315b8
- (void)suspendWriteSource;	// IMP=0x0000000000031595
- (void)resumeReadSource;	// IMP=0x0000000000031572
- (void)suspendReadSource;	// IMP=0x000000000003154f
- (_Bool)usingSecureTransportForTLS;	// IMP=0x000000000003153c
- (_Bool)usingCFStreamForTLS;	// IMP=0x0000000000031529
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg1;	// IMP=0x0000000000031240
- (void)getInterfaceAddress4:(id *)arg1 address6:(id *)arg2 fromDescription:(id)arg3 port:(unsigned short)arg4;	// IMP=0x0000000000030d84
@property(readonly) _Bool isSecure;
@property(readonly) _Bool isIPv6;
@property(readonly) _Bool isIPv4;
@property(readonly) NSData *localAddress;
@property(readonly) NSData *connectedAddress;
- (unsigned short)localPortFromSocket6:(int)arg1;	// IMP=0x00000000000306c1
- (unsigned short)localPortFromSocket4:(int)arg1;	// IMP=0x0000000000030647
- (id)localHostFromSocket6:(int)arg1;	// IMP=0x00000000000305e0
- (id)localHostFromSocket4:(int)arg1;	// IMP=0x000000000003055a
- (unsigned short)connectedPortFromSocket6:(int)arg1;	// IMP=0x00000000000304ff
- (unsigned short)connectedPortFromSocket4:(int)arg1;	// IMP=0x0000000000030485
- (id)connectedHostFromSocket6:(int)arg1;	// IMP=0x000000000003041e
- (id)connectedHostFromSocket4:(int)arg1;	// IMP=0x0000000000030398
- (unsigned short)localPort6;	// IMP=0x000000000003037a
- (unsigned short)localPort4;	// IMP=0x000000000003035c
- (id)localHost6;	// IMP=0x000000000003032e
- (id)localHost4;	// IMP=0x0000000000030300
- (unsigned short)connectedPort6;	// IMP=0x00000000000302e2
- (unsigned short)connectedPort4;	// IMP=0x00000000000302c4
- (id)connectedHost6;	// IMP=0x0000000000030296
- (id)connectedHost4;	// IMP=0x0000000000030268
@property(readonly) unsigned short localPort;
@property(readonly) NSString *localHost;
@property(readonly) unsigned short connectedPort;
@property(readonly) NSString *connectedHost;
@property(readonly) _Bool isConnected;
@property(readonly) _Bool isDisconnected;
- (id)otherError:(id)arg1;	// IMP=0x000000000002fad4
- (id)connectionClosedError;	// IMP=0x000000000002f9fc
- (id)writeTimeoutError;	// IMP=0x000000000002f924
- (id)readTimeoutError;	// IMP=0x000000000002f84c
- (id)readMaxedOutError;	// IMP=0x000000000002f774
- (id)connectTimeoutError;	// IMP=0x000000000002f69c
- (id)sslError:(int)arg1;	// IMP=0x000000000002f617
- (id)errnoError;	// IMP=0x000000000002f54b
- (id)errnoErrorWithReason:(id)arg1;	// IMP=0x000000000002f452
- (id)badParamError:(id)arg1;	// IMP=0x000000000002f326
- (id)badConfigError:(id)arg1;	// IMP=0x000000000002f2b2
- (void)maybeClose;	// IMP=0x000000000002f197
- (void)disconnectAfterReadingAndWriting;	// IMP=0x000000000002f10b
- (void)disconnectAfterWriting;	// IMP=0x000000000002f07f
- (void)disconnectAfterReading;	// IMP=0x000000000002eff3
- (void)disconnect;	// IMP=0x000000000002ef3e
- (void)closeWithError:(id)arg1;	// IMP=0x000000000002eafb
- (void)doConnectTimeout;	// IMP=0x000000000002eaa2
- (void)endConnectTimeout;	// IMP=0x000000000002ea3b
- (void)startConnectTimeout:(double)arg1;	// IMP=0x000000000002e8fd
- (void)didNotConnect:(int)arg1 error:(id)arg2;	// IMP=0x000000000002e838
- (void)didConnect:(int)arg1;	// IMP=0x000000000002e2d4
- (_Bool)connectWithAddress4:(id)arg1 address6:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ddcd
- (void)lookup:(int)arg1 didFail:(id)arg2;	// IMP=0x000000000002dcf7
- (void)lookup:(int)arg1 didSucceedWithAddress4:(id)arg2 address6:(id)arg3;	// IMP=0x000000000002dafd
- (_Bool)connectToAddress:(id)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;	// IMP=0x000000000002d6cc
- (_Bool)connectToAddress:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;	// IMP=0x000000000002d6b5
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d696
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 viaInterface:(id)arg3 withTimeout:(double)arg4 error:(id *)arg5;	// IMP=0x000000000002cdfe
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;	// IMP=0x000000000002cde3
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000002cdc9
- (_Bool)preConnectWithInterface:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002cb18
- (_Bool)doAccept:(int)arg1;	// IMP=0x000000000002c7d7
- (_Bool)acceptOnInterface:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;	// IMP=0x000000000002bc39
- (_Bool)acceptOnPort:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x000000000002bc20
@property(retain) id userData;
@property(getter=isIPv4PreferredOverIPv6) _Bool IPv4PreferredOverIPv6;
@property(getter=isIPv6Enabled) _Bool IPv6Enabled;
@property(getter=isIPv4Enabled) _Bool IPv4Enabled;
- (void)synchronouslySetDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000002b5bd
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000002b5a8
- (void)setDelegate:(id)arg1 delegateQueue:(id)arg2 synchronously:(_Bool)arg3;	// IMP=0x000000000002b45a
- (void)getDelegate:(id *)arg1 delegateQueue:(id *)arg2;	// IMP=0x000000000002b2ae
- (void)synchronouslySetDelegateQueue:(id)arg1;	// IMP=0x000000000002b297
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)setDelegateQueue:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x000000000002b1a5
- (void)synchronouslySetDelegate:(id)arg1;	// IMP=0x000000000002b094
@property __weak id delegate;
- (void)setDelegate:(id)arg1 synchronously:(_Bool)arg2;	// IMP=0x000000000002afa2
- (void)dealloc;	// IMP=0x000000000002ad8e
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 socketQueue:(id)arg3;	// IMP=0x000000000002a9e7
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000002a9d2
- (id)initWithSocketQueue:(id)arg1;	// IMP=0x000000000002a9b9
- (id)init;	// IMP=0x000000000002a9a0

@end
