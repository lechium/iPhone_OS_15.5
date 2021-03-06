//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDDataStreamTransport-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

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

+ (id)logCategory;	// IMP=0x00000000006c4036
- (void).cxx_destruct;	// IMP=0x00000000006c3910
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
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x00000000006c37dd
- (void)_handleInterruptCharacteristicValue:(id)arg1;	// IMP=0x00000000006c3368
- (void)_handleCharacteristicsValueUpdated:(id)arg1;	// IMP=0x00000000006c32b7
- (void)_handleReceivedData:(id)arg1;	// IMP=0x00000000006c2fc1
- (void)_notifyWriteOperation:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000006c2ed8
- (void)_cancelAllPendingWritesWithError:(id)arg1;	// IMP=0x00000000006c2d40
- (void)_removeAndMarkCompleteAllCompletedWrites;	// IMP=0x00000000006c2b44
- (void)_stopTransportForWriteFailureError:(id)arg1;	// IMP=0x00000000006c2ae9
- (void)_handleCompletionWithResponseTuples:(id)arg1;	// IMP=0x00000000006c22b6
- (void)_doNextWriteOperation;	// IMP=0x00000000006c1dff
- (void)_writeCharacteristicRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c1c69
- (id)_buildWriteRequestWithError:(id *)arg1 shouldForceClose:(_Bool)arg2;	// IMP=0x00000000006c184d
- (id)_getPendingWritesUpToLength:(unsigned long long)arg1;	// IMP=0x00000000006c15cc
- (void)sendRawFrame:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c150c
- (void)_notifyDelegateDidReceiveFrame:(id)arg1;	// IMP=0x00000000006c145b
- (void)_notifyDelegateDidFailWithError:(id)arg1;	// IMP=0x00000000006c13aa
- (void)_notifyDelegateDidClose;	// IMP=0x00000000006c1339
- (void)_notifyDelegateDidOpen;	// IMP=0x00000000006c12c8
- (void)_deregisterForMessages;	// IMP=0x00000000006c1111
- (void)_registerForMessages;	// IMP=0x00000000006c0f58
- (void)_teardownSessionWithError:(id)arg1;	// IMP=0x00000000006c0ce7
- (void)_stopWithError:(id)arg1;	// IMP=0x00000000006c0bdd
- (void)close;	// IMP=0x00000000006c0a84
- (void)connect;	// IMP=0x00000000006c05e3
- (_Bool)_isRunning;	// IMP=0x00000000006c05b0
- (void)dealloc;	// IMP=0x00000000006c0581
- (id)initWithAccessory:(id)arg1 sessionIdentifier:(long long)arg2 maxControllerTransportMTU:(unsigned long long)arg3 workQueue:(id)arg4 logIdentifier:(id)arg5;	// IMP=0x00000000006c03ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

