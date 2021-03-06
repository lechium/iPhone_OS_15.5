//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDDataStreamDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDataStreamHAPSetupOperationDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDDataStreamSocketController-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMDDataStream, HMDDataStreamSetupOperation, HMDHAPAccessory, HMDService, HMFTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HMDDataStreamController : NSObject <HMDDataStreamHAPSetupOperationDelegate, HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamSocketController>
{
    _Bool _supportsDataStreamOverTCP;	// 8 = 0x8
    _Bool _supportsDataStreamOverHAP;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HMDService *_transferManagementService;	// 32 = 0x20
    HMDDataStream *_defaultDataStream;	// 40 = 0x28
    NSMutableArray *_pendingSocketRequests;	// 48 = 0x30
    HMDDataStreamSetupOperation *_setupInProgress;	// 56 = 0x38
    CDUnknownBlockType _dataStreamFactory;	// 64 = 0x40
    NSString *_logIdentifier;	// 72 = 0x48
    unsigned long long _maxControllerTransportMTU;	// 80 = 0x50
    HMFTimer *_idleTimer;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000038758c
- (void).cxx_destruct;	// IMP=0x0000000000386b29
@property(retain, nonatomic) HMFTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(nonatomic) _Bool supportsDataStreamOverHAP; // @synthesize supportsDataStreamOverHAP=_supportsDataStreamOverHAP;
@property(nonatomic) _Bool supportsDataStreamOverTCP; // @synthesize supportsDataStreamOverTCP=_supportsDataStreamOverTCP;
@property(readonly, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly, nonatomic) CDUnknownBlockType dataStreamFactory; // @synthesize dataStreamFactory=_dataStreamFactory;
@property(retain, nonatomic) HMDDataStreamSetupOperation *setupInProgress; // @synthesize setupInProgress=_setupInProgress;
@property(retain, nonatomic) NSMutableArray *pendingSocketRequests; // @synthesize pendingSocketRequests=_pendingSocketRequests;
@property(retain, nonatomic) HMDDataStream *defaultDataStream; // @synthesize defaultDataStream=_defaultDataStream;
@property(nonatomic) __weak HMDService *transferManagementService; // @synthesize transferManagementService=_transferManagementService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000003867f2
- (void)_stopIdleTimer;	// IMP=0x0000000000386687
- (void)_startIdleTimer;	// IMP=0x00000000003863dc
- (void)invalidate;	// IMP=0x000000000038636b
- (void)openBulkSendSessionForFileType:(id)arg1 reason:(id)arg2 metadata:(id)arg3 queue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000038611c
- (void)dataStreamDidUpdateActiveStatus:(id)arg1;	// IMP=0x000000000038607e
- (void)dataStreamDidReceiveRawFrame:(id)arg1;	// IMP=0x000000000038600d
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x0000000000385f3c
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x0000000000385e6b
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000385d6c
- (void)_resetDefaultDataStream;	// IMP=0x0000000000385d08
- (void)_createBulkStreamProtocol;	// IMP=0x0000000000385b57
- (void)_cancelStreamTransportWithError:(id)arg1;	// IMP=0x0000000000385954
- (void)dataStreamSetupOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000385801
- (void)dataStreamSetupOperation:(id)arg1 didSucceedWithTransport:(id)arg2 sessionEncryption:(id)arg3;	// IMP=0x0000000000385593
- (void)dataStreamInitializationSetupOperation:(id)arg1 didCompleteSupportReadWithStatus:(_Bool)arg2;	// IMP=0x0000000000385313
- (void)_initiateStreamSetup;	// IMP=0x0000000000384f43
- (_Bool)setupRequiresCharactertisticReads;	// IMP=0x0000000000384e28
- (_Bool)_isDataStreamCapable;	// IMP=0x0000000000384def
- (void)_createStreamSocketWithStreamProtocol:(id)arg1 applicationProtocolName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000384c52
- (id)_getStreamProtocol;	// IMP=0x0000000000384ab6
- (void)_failPendingSocketRequestsWithError:(id)arg1;	// IMP=0x00000000003848f9
- (void)_processPendingSocketRequests;	// IMP=0x0000000000384692
- (void)openStreamSocketWithApplicationProtocol:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003845b6
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;	// IMP=0x00000000003843fe
- (void)removeBulkSendListener:(id)arg1;	// IMP=0x0000000000383fc1
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;	// IMP=0x0000000000383b73
- (_Bool)canAcceptBulkSendListeners;	// IMP=0x0000000000383b61
- (id)_getActiveProtocolWithName:(id)arg1;	// IMP=0x0000000000383ab8
- (void)handleAccessoryDisconnected:(id)arg1;	// IMP=0x0000000000383a07
- (void)_handleAccessoryConnected;	// IMP=0x0000000000383729
- (void)_readRequiredTransportCharacteristicsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000038327b
- (_Bool)_isDataStreamConfigurationValid;	// IMP=0x000000000038231a
- (void)handleAccessoryConnected;	// IMP=0x00000000003822a9
- (void)_resetTransportInfo;	// IMP=0x0000000000382268
- (void)handleAccessoryConnected:(id)arg1;	// IMP=0x0000000000382256
- (void)deRegisterFromNotifications;	// IMP=0x0000000000382203
- (void)registerForNotifications;	// IMP=0x00000000003820ce
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 dataStreamFactory:(CDUnknownBlockType)arg4;	// IMP=0x0000000000381f19
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000381f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

