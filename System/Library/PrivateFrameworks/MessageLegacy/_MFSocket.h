//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject
{
    NSCondition *_condition;	// 8 = 0x8
    NSString *_protocol;	// 16 = 0x10
    NSString *_host;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    struct __CFString *_connectionServiceType;	// 40 = 0x28
    NSInvocation *_eventHandler;	// 48 = 0x30
    NSArray *_clientCertificates;	// 56 = 0x38
    int _lowThroughputCounter;	// 64 = 0x40
    int _numTimeoutSecs;	// 68 = 0x44
    _Bool _allowsTrustPrompt;	// 72 = 0x48
    _Bool _usesOpportunisticSockets;	// 73 = 0x49
    _Bool _socketCanRead;	// 74 = 0x4a
    _Bool _socketCanWrite;	// 75 = 0x4b
    _Bool _disableEphemeralDiffieHellmanCiphers;	// 76 = 0x4c
    NSString *_sourceApplicationBundleIdentifier;	// 80 = 0x50
    NSString *_accountIdentifier;	// 88 = 0x58
    NSString *_networkAccountIdentifier;	// 96 = 0x60
    MFStream *_stream;	// 104 = 0x68
}

@property(retain) MFStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) NSString *networkAccountIdentifier; // @synthesize networkAccountIdentifier=_networkAccountIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(nonatomic) _Bool disableEphemeralDiffieHellmanCiphers; // @synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers;
@property(nonatomic) _Bool usesOpportunisticSockets; // @synthesize usesOpportunisticSockets=_usesOpportunisticSockets;
@property(nonatomic) _Bool allowsTrustPrompt; // @synthesize allowsTrustPrompt=_allowsTrustPrompt;
@property(nonatomic) int timeout; // @synthesize timeout=_numTimeoutSecs;
- (void)enableThroughputMonitoring:(_Bool)arg1;	// IMP=0x00000000000072ba
@property(readonly, nonatomic) _Bool isCellularConnection;
@property(readonly, nonatomic) NSData *sourceIPAddress;
@property(readonly, nonatomic) unsigned int remotePortNumber;
@property(readonly, nonatomic) NSString *remoteHostname;
- (void)setEventHandler:(id)arg1;	// IMP=0x000000000000709c
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006c70
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000006919
- (unsigned int)_bufferedByteCount;	// IMP=0x000000000000685e
- (_Bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;	// IMP=0x0000000000005f12
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, nonatomic) _Bool isReadable;
- (void)abort;	// IMP=0x0000000000005e47
- (void)dealloc;	// IMP=0x0000000000005db9
- (id)init;	// IMP=0x0000000000005bec
- (void)setConnectionServiceType:(struct __CFString *)arg1;	// IMP=0x0000000000005b96
@property(readonly, nonatomic) NSArray *serverCertificates;
- (_Bool)setSecurityProtocol:(id)arg1;	// IMP=0x000000000000594b
- (id)securityProtocol;	// IMP=0x00000000000058e8
- (_Bool)_waitForSocketOpenAndFlag:(_Bool *)arg1;	// IMP=0x000000000000581c
- (_Bool)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id *)arg2;	// IMP=0x0000000000005008
- (id)_negotiatedProtocolVersion;	// IMP=0x0000000000004ef4
- (_Bool)_evaluateTrust:(struct __SecTrust *)arg1 errorPtr:(id *)arg2;	// IMP=0x00000000000047ae
- (void)_setCertificateIsTrusted:(_Bool)arg1 forAccount:(id)arg2;	// IMP=0x000000000000475f
- (_Bool)_certificateIsTrustedForAccount:(id)arg1;	// IMP=0x0000000000004727

@end

