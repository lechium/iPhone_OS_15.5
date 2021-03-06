//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NWEndpoint, NWParameters, NWPath;
@protocol NWTCPConnectionAuthenticationDelegate, OS_nw_connection;

@interface NWTCPConnection : NSObject <NWPrettyDescription>
{
    _Bool _viable;	// 8 = 0x8
    _Bool _hasBetterPath;	// 9 = 0x9
    long long _state;	// 16 = 0x10
    NWEndpoint *_endpoint;	// 24 = 0x18
    NSError *_internalError;	// 32 = 0x20
    NSObject<OS_nw_connection> *_internalConnection;	// 40 = 0x28
    id <NWTCPConnectionAuthenticationDelegate> _delegate;	// 48 = 0x30
    NWParameters *_parameters;	// 56 = 0x38
}

+ (id)stringFromNWTCPConnectionState:(long long)arg1;	// IMP=0x0000000000003880
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000037d0
- (void).cxx_destruct;	// IMP=0x0000000000007080
@property(readonly, nonatomic) NWParameters *parameters; // @synthesize parameters=_parameters;
@property __weak id <NWTCPConnectionAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_nw_connection> *internalConnection; // @synthesize internalConnection=_internalConnection;
@property(retain) NSError *internalError; // @synthesize internalError=_internalError;
@property(retain, nonatomic) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) _Bool hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property(nonatomic, getter=isViable) _Bool viable; // @synthesize viable=_viable;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *metadata;
@property(readonly, nonatomic) NSDictionary *TCPInfo;
@property(readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property(readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property(readonly, nonatomic) unsigned long long multipathConnectedSubflowCount;
@property(readonly, nonatomic) unsigned long long multipathSubflowCount;
@property(readonly, nonatomic) _Bool isMultipath;
@property(readonly, nonatomic) _Bool TFOSucceeded;
- (_Bool)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;	// IMP=0x00000000000068d0
- (_Bool)startInternal;	// IMP=0x0000000000006590
- (void)setupEventHandler;	// IMP=0x00000000000063b0
- (void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061c0
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005c60
- (void)writeClose;	// IMP=0x0000000000005bd0
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005a10
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000058b0
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005890
- (void)cancel;	// IMP=0x0000000000005800
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSData *txtRecord;
@property(readonly, nonatomic) NWEndpoint *remoteAddress;
@property(readonly, nonatomic) NWEndpoint *localAddress;
@property(readonly, nonatomic) NWPath *connectedPath;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;	// IMP=0x0000000000005490
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x0000000000005390
- (void)dealloc;	// IMP=0x00000000000052e0
- (id)initWithUpgradeForConnection:(id)arg1;	// IMP=0x0000000000004830
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000004810
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000003eb0
- (id)initWithAcceptedInternalConnection:(id)arg1;	// IMP=0x0000000000003930

@end

