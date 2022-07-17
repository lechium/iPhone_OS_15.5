//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCTransport : NSObject
{
    struct tagHANDLE *tpHandle;	// 8 = 0x8
    NSMutableDictionary *iceBlocks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *delegateQueue;	// 24 = 0x18
    NSMutableDictionary *dataReceivedHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *dataReceivedHandlerQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000003bd51d
- (void)cleanup;	// IMP=0x00000000003be6ab
- (int)getRemoteICEVersion:(unsigned int)arg1 remoteICEVersion:(unsigned int *)arg2;	// IMP=0x00000000003be698
- (int)processRemoteInterfaceChangeMessageWithLocalCallID:(unsigned int)arg1 remoteCallID:(unsigned int)arg2 remoteData:(void *)arg3 remoteLen:(int)arg4 remoteCandidateVersion:(unsigned short)arg5;	// IMP=0x00000000003be678
- (void)setARPLHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003be667
- (int)getLoopbackIP:(struct tagIPPORT *)arg1;	// IMP=0x00000000003be656
- (int)updateQoS:(_Bool)arg1;	// IMP=0x00000000003be646
- (int)setICETimeout:(double)arg1;	// IMP=0x00000000003be638
- (int)setSKEState:(struct SKEStateOpaque *)arg1 forCallID:(unsigned int)arg2;	// IMP=0x00000000003be628
- (int)updateICERoleForCallID:(unsigned int)arg1 role:(int)arg2 remoteCallID:(unsigned int)arg3 sessionID:(struct __CFString *)arg4;	// IMP=0x00000000003be610
- (int)setForceIPv6ForCallID:(unsigned int)arg1;	// IMP=0x00000000003be600
- (int)setForceRelayForCallID:(unsigned int)arg1;	// IMP=0x00000000003be5f0
- (int)sendData:(id)arg1 localCallID:(unsigned int)arg2 remoteCallID:(unsigned int)arg3 encrypted:(_Bool)arg4 OFTType:(int)arg5;	// IMP=0x00000000003be586
- (int)sendUDPPacketReliableEncrypted:(id)arg1 localIPPort:(struct tagIPPORT *)arg2 destinationIPPort:(struct tagIPPORT *)arg3 oftType:(int)arg4;	// IMP=0x00000000003be511
- (_Bool)ipPortStillExists:(struct tagIPPORT *)arg1 requiresWifi:(_Bool)arg2;	// IMP=0x00000000003be4bf
- (int)startConnectionCheckForCallID:(unsigned int)arg1 remoteConnectionDataBlob:(id)arg2 relayDictionary:(id)arg3 iceTimeout:(double)arg4 securityIdentity:(struct __SecIdentity *)arg5 skeState:(struct SKEStateOpaque *)arg6 usedRelay:(int *)arg7;	// IMP=0x00000000003be41a
- (int)detailedErrorCodeForConnectionWithCallID:(unsigned int)arg1;	// IMP=0x00000000003be3bf
- (int)setupDTLSSecurity:(unsigned int)arg1 connectionResult:(struct tagCONNRESULT *)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003be3a9
- (int)getConnectionDataForCallID:(unsigned int)arg1 version:(unsigned char)arg2 useCompressedData:(_Bool)arg3 pConnectionData:(void **)arg4 connectDataSizeInBytes:(int *)arg5 relayDictionary:(struct __CFDictionary *)arg6 interfaceUpdate:(_Bool)arg7 nonCellularCandidateTimeout:(double)arg8;	// IMP=0x00000000003be2d7
- (int)discardRelayBindingForCallID:(unsigned int)arg1 withChannelNumber:(int)arg2;	// IMP=0x00000000003be2c5
- (int)discardRelayBindingForCallID:(unsigned int)arg1;	// IMP=0x00000000003be2b5
- (int)getNextBestCandidate:(struct tagCANDIDATE *)arg1 callID:(unsigned int)arg2 isLocal:(int)arg3 IPPortToExclude:(struct tagIPPORT *)arg4;	// IMP=0x00000000003be299
- (id)getRemoteCIDForDstIPPort:(struct tagIPPORT *)arg1 callID:(unsigned int)arg2;	// IMP=0x00000000003be21a
- (int)stopConnectivityCheckForCallID:(unsigned int)arg1;	// IMP=0x00000000003be20a
- (void)receivedDataPacket:(char *)arg1 length:(int)arg2 forCallID:(unsigned int)arg3 encrypted:(_Bool)arg4 OFTType:(int)arg5;	// IMP=0x00000000003be0ee
- (void)registerDataReceivedHandler:(CDUnknownBlockType)arg1 forCallID:(unsigned int)arg2;	// IMP=0x00000000003bdfd7
- (void)iceRemoveIPPort:(struct tagIPPORT *)arg1 forCallID:(unsigned int)arg2 isLocalInterface:(_Bool)arg3;	// IMP=0x00000000003bddbd
- (void)iceShouldNominateNewCandidate:(struct tagCANDIDATEPAIR *)arg1 forCallID:(unsigned int)arg2 interfaceMask:(int)arg3 nominated:(int *)arg4 demote:(int *)arg5 connectionPriority:(int *)arg6 replaceOnly:(int *)arg7;	// IMP=0x00000000003bdbf7
- (void)iceNewCandidatesForCallID:(unsigned int)arg1 blob:(char *)arg2 size:(int)arg3 newCandidateVersion:(unsigned short)arg4;	// IMP=0x00000000003bdad4
- (void)iceConnectedForCallID:(unsigned int)arg1 result:(struct tagCONNRESULT *)arg2 didReceivePacket:(int)arg3 useRelay:(int)arg4 secretKey:(struct __CFData *)arg5 skeResult:(int)arg6;	// IMP=0x00000000003bd966
- (int)updateInterfaceList:(unsigned int)arg1 shouldFilterCellInterface:(_Bool)arg2 isUpdateNeeded:(int *)arg3;	// IMP=0x00000000003bd8a1
- (void)registerICEBlockForCallID:(unsigned int)arg1 connectedBlock:(CDUnknownBlockType)arg2 newCandidatesBlock:(CDUnknownBlockType)arg3 newNominationBlock:(CDUnknownBlockType)arg4 removeIPPortBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000003bd5ac
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;	// IMP=0x00000000003bd59b
- (void)dealloc;	// IMP=0x00000000003bd488
- (id)init;	// IMP=0x00000000003bd09c

@end
