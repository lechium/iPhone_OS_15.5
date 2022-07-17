//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDDataStreamTransport-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDCharacteristic, HMDDataStreamFrameReader, HMDHAPAccessory, NSMutableArray, NSNumber, NSString;
@protocol HMDDataStreamTransportDelegate, OS_dispatch_queue;

@interface HMDDataStreamHAPTransport : NSObject <HMFLogging, HMDDataStreamTransport>
{
    _Bool _isWriteInProgress;	// 8 = 0x8
    _Bool _lastAccessoryRequestToSendFlag;	// 9 = 0x9
    id <HMDDataStreamTransportDelegate> delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDHAPAccessory *_accessory;	// 32 = 0x20
    HMDCharacteristic *_transportCharacteristic;	// 40 = 0x28
    HMDCharacteristic *_interruptCharacteristic;	// 48 = 0x30
    NSNumber *_sessionIdentifier;	// 56 = 0x38
    unsigned long long _maxControllerTransportMTU;	// 64 = 0x40
    HMDDataStreamFrameReader *_byteReader;	// 72 = 0x48
    NSString *_logIdentifier;	// 80 = 0x50
    NSString *_notificationClientIdentifier;	// 88 = 0x58
    NSMutableArray *_pendingWrites;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00000000006573a1
- (void).cxx_destruct;	// IMP=0x0000000000656c7b
@property _Bool lastAccessoryRequestToSendFlag; // @synthesize lastAccessoryRequestToSendFlag=_lastAccessoryRequestToSendFlag;
@property _Bool isWriteInProgress; // @synthesize isWriteInProgress=_isWriteInProgress;
@property(readonly) NSMutableArray *pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property(readonly) NSString *notificationClientIdentifier; // @synthesize notificationClientIdentifier=_notificationClientIdentifier;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDDataStreamFrameReader *byteReader; // @synthesize byteReader=_byteReader;
@property(readonly) unsigned long long maxControllerTransportMTU; // @synthesize maxControllerTransportMTU=_maxControllerTransportMTU;
@property(readonly) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain) HMDCharacteristic *interruptCharacteristic; // @synthesize interruptCharacteristic=_interruptCharacteristic;
@property(retain) HMDCharacteristic *transportCharacteristic; // @synthesize transportCharacteristic=_transportCharacteristic;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDDataStreamTransportDelegate> delegate; // @synthesize delegate;
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x0000000000656b48
- (void)_handleInterruptCharacteristicValue:(id)arg1;	// IMP=0x00000000006566d3
- (void)_handleCharacteristicsValueUpdated:(id)arg1;	// IMP=0x0000000000656622
- (void)_handleReceivedData:(id)arg1;	// IMP=0x000000000065632c
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000000656243
- (void)_cancelAllPendingWritesWithError:(id)arg1;	// IMP=0x00000000006560ab
- (void)_removeAndMarkCompleteAllCompletedWrites;	// IMP=0x0000000000655eaf
- (void)_stopTransportForWriteFailureError:(id)arg1;	// IMP=0x0000000000655e54
- (void)_handleCompletionWithResponseTuples:(id)arg1;	// IMP=0x0000000000655621
- (void)_doNextWriteOperation;	// IMP=0x000000000065516a
- (void)_writeCharacteristicRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000654fd4
- (id)_buildWriteRequestWithError:(id *)arg1 shouldForceClose:(_Bool)arg2;	// IMP=0x0000000000654bb8
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;	// IMP=0x0000000000654937
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000654877
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;	// IMP=0x00000000006547c6
- (void)_notifyDelegateDidFailWithError:(id)arg1;	// IMP=0x0000000000654715
- (void)_notifyDelegateDidClose;	// IMP=0x00000000006546a4
- (void)_notifyDelegateDidOpen;	// IMP=0x0000000000654633
- (void)_deregisterForMessages;	// IMP=0x000000000065447c
- (void)_registerForMessages;	// IMP=0x00000000006542c3
- (void)_teardownSessionWithError:(id)arg1;	// IMP=0x0000000000654052
- (void)_stopWithError:(id)arg1;	// IMP=0x0000000000653f48
- (void)close;	// IMP=0x0000000000653def
- (void)connect;	// IMP=0x000000000065394e
- (_Bool)_isRunning;	// IMP=0x000000000065391b
- (void)dealloc;	// IMP=0x00000000006538ec
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;	// IMP=0x0000000000653716

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
