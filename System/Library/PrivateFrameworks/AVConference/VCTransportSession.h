//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, TimingCollection, VCConnectionManager;
@protocol OS_dispatch_queue, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCTransportSession : NSObject
{
    _Bool _isCallActive;	// 8 = 0x8
    _Bool _requiresWiFi;	// 9 = 0x9
    _Bool _useCompressedConnectionData;	// 10 = 0xa
    unsigned int _basebandNotificationRegistrationToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_stateQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 24 = 0x18
    NSObject *_connectionSetupPiggybackBlob;	// 32 = 0x20
    NSString *_localFrameworkVersion;	// 40 = 0x28
    NSString *_remoteFrameworkVersion;	// 48 = 0x30
    struct opaqueRTCReporting *_reportingAgent;	// 56 = 0x38
    TimingCollection *_perfTimings;	// 64 = 0x40
    VCConnectionManager *_connectionManager;	// 72 = 0x48
    CDUnknownBlockType _eventHandler;	// 80 = 0x50
    NSMutableArray *_streams;	// 88 = 0x58
    struct _opaque_pthread_mutex_t _stateLock;	// 96 = 0x60
    id <VCConnectionProtocol> _registeredConnection;	// 160 = 0xa0
}

+ (int)vtpPacketTypeForStreamType:(unsigned int)arg1;	// IMP=0x0000000000235638
+ (unsigned int)trafficClassForStreamType:(unsigned int)arg1;	// IMP=0x0000000000235541
@property(retain, nonatomic) id <VCConnectionProtocol> registeredConnection; // @synthesize registeredConnection=_registeredConnection;
@property(retain, nonatomic) NSObject *connectionSetupPiggybackBlob; // @synthesize connectionSetupPiggybackBlob=_connectionSetupPiggybackBlob;
@property(readonly, nonatomic) unsigned int basebandNotificationRegistrationToken; // @synthesize basebandNotificationRegistrationToken=_basebandNotificationRegistrationToken;
@property(retain, nonatomic) TimingCollection *perfTimings; // @synthesize perfTimings=_perfTimings;
@property(nonatomic) _Bool requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(nonatomic) _Bool useCompressedConnectionData; // @synthesize useCompressedConnectionData=_useCompressedConnectionData;
@property(readonly, nonatomic) VCConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly) _Bool isIPv6;
@property(readonly) unsigned int networkMTU;
@property(readonly) int networkInterfaceType;
- (void)resetActiveConnection;	// IMP=0x000000000023553b
- (void)setOneToOneModeEnabled:(_Bool)arg1 isInitiator:(_Bool)arg2;	// IMP=0x0000000000235535
- (void)reportNetworkConditionsDegraded;	// IMP=0x000000000023552f
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;	// IMP=0x0000000000235529
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;	// IMP=0x0000000000235523
- (_Bool)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000023551b
@property(readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property(readonly, nonatomic) _Bool isRemoteOSPreLion;
@property(readonly, nonatomic) _Bool isHandoverSupported;
@property(readonly, nonatomic) int detailedErrorCode;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)arg1 remoteFrameworkVersion:(id)arg2;	// IMP=0x00000000002353b6
@property(nonatomic, setter=setCallActive:) _Bool isCallActive;
- (int)deregisterNotificationForTransportStream:(struct OpaqueVCTransportStream *)arg1;	// IMP=0x00000000002351ef
- (int)createVFD:(int *)arg1 forStreamType:(unsigned int)arg2;	// IMP=0x000000000023518e
- (int)createTransportStream:(struct OpaqueVCTransportStream **)arg1 withType:(unsigned int)arg2 options:(id)arg3;	// IMP=0x0000000000234f1b
- (void)handleTransportStreamDeactivated:(struct OpaqueVCTransportStream *)arg1;	// IMP=0x0000000000234eb5
- (void)callEventHandlerWithEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0000000000234d00
- (void)stop;	// IMP=0x0000000000234b49
- (void)start;	// IMP=0x0000000000234ae8
- (void)dealloc;	// IMP=0x0000000000234915
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;	// IMP=0x00000000002347fe

@end
