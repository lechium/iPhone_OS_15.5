//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WiFiPeerToPeer/WiFiAwareDatapathXPCDelegate-Protocol.h>

@class NSData, NSNumber, NSString, NSXPCConnection, WiFiAwareDiscoveryResult, WiFiAwareInternetSharingConfiguration, WiFiAwarePublishDatapathServiceSpecificInfo, WiFiMACAddress;
@protocol OS_dispatch_queue, WiFiAwareDataSessionDelegate, WiFiAwareDatapathXPC;

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSNumber *_datapathID;	// 24 = 0x18
    WiFiMACAddress *_initiatorDataAddress;	// 32 = 0x20
    id <WiFiAwareDatapathXPC> _datapathProxy;	// 40 = 0x28
    long long _internetSharingPolicy;	// 48 = 0x30
    unsigned int _localInterfaceIndex;	// 56 = 0x38
    WiFiAwareDiscoveryResult *_discoveryResult;	// 64 = 0x40
    long long _serviceType;	// 72 = 0x48
    WiFiAwarePublishDatapathServiceSpecificInfo *_serviceSpecificInfo;	// 80 = 0x50
    NSString *_passphrase;	// 88 = 0x58
    NSData *_pmk;	// 96 = 0x60
    NSData *_pmkID;	// 104 = 0x68
    WiFiAwareInternetSharingConfiguration *_internetSharingConfiguration;	// 112 = 0x70
    id <WiFiAwareDataSessionDelegate> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000093c4
@property(readonly, nonatomic) unsigned int localInterfaceIndex; // @synthesize localInterfaceIndex=_localInterfaceIndex;
@property(nonatomic) __weak id <WiFiAwareDataSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration; // @synthesize internetSharingConfiguration=_internetSharingConfiguration;
@property(readonly, nonatomic) NSData *pmkID; // @synthesize pmkID=_pmkID;
@property(readonly, nonatomic) NSData *pmk; // @synthesize pmk=_pmk;
@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(readonly, nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo; // @synthesize serviceSpecificInfo=_serviceSpecificInfo;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) WiFiAwareDiscoveryResult *discoveryResult; // @synthesize discoveryResult=_discoveryResult;
- (void)datapathTerminatedWithReason:(long long)arg1;	// IMP=0x00000000000092e1
- (void)datapathFailedToStartWithError:(long long)arg1;	// IMP=0x0000000000009283
- (void)datapathUpdatedInternetSharingPolicy:(long long)arg1;	// IMP=0x0000000000009279
@property(readonly, nonatomic) long long internetSharingPolicy;
- (void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned int)arg3;	// IMP=0x00000000000091cb
- (void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2;	// IMP=0x0000000000009142
- (void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned int)arg3;	// IMP=0x0000000000009082
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) WiFiMACAddress *localDataAddress;
- (void)generateStatisticsReportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008e3b
- (void)updateLinkStatus:(long long)arg1;	// IMP=0x0000000000008da8
- (void)reportIssue:(id)arg1;	// IMP=0x0000000000008c8f
- (void)stop;	// IMP=0x0000000000008c2a
- (void)start;	// IMP=0x0000000000008bab
- (void)startDatapathSync;	// IMP=0x00000000000086f7
- (_Bool)isConnected;	// IMP=0x00000000000086d7
- (void)resetState;	// IMP=0x000000000000866e
- (void)handleError;	// IMP=0x00000000000085f8
- (void)dealloc;	// IMP=0x0000000000008591
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4 pmkID:(id)arg5;	// IMP=0x0000000000008570
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4;	// IMP=0x0000000000008550
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4;	// IMP=0x000000000000852e
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3;	// IMP=0x0000000000008509
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 pmk:(id)arg5 pmkID:(id)arg6;	// IMP=0x0000000000008377

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

