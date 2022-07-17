//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATStateMachine, CATTransport, CRKRemoteEndpoint, CRKTransportPreflightOperation, NSDictionary;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject
{
    CATStateMachine *mFSM;	// 8 = 0x8
    double mCurrentBackoffInterval;	// 16 = 0x10
    _Bool _requiresBeacon;	// 24 = 0x18
    id <CRKSessionDelegate> _delegate;	// 32 = 0x20
    CRKRemoteEndpoint *_endpoint;	// 40 = 0x28
    id <CRKGrowthFunction> _backoffGrowthFunction;	// 48 = 0x30
    CATTransport *_transport;	// 56 = 0x38
    double _lostBeaconTimeout;	// 64 = 0x40
    double _willLoseBeaconWarningTimeout;	// 72 = 0x48
    CRKTransportPreflightOperation *_transportPreflightOperation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000049dc5
@property(retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation; // @synthesize transportPreflightOperation=_transportPreflightOperation;
@property(nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;
@property(nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) id <CRKGrowthFunction> backoffGrowthFunction; // @synthesize backoffGrowthFunction=_backoffGrowthFunction;
@property(nonatomic) _Bool requiresBeacon; // @synthesize requiresBeacon=_requiresBeacon;
@property(readonly) CRKRemoteEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) __weak id <CRKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
- (void)processFinishedTransportPreflightOperation:(id)arg1;	// IMP=0x0000000000049ba2
- (void)transportPreflightOperationDidFinish:(id)arg1;	// IMP=0x0000000000049b29
- (void)stopPreflightingTransport;	// IMP=0x0000000000049acf
- (void)startPreflightingTransport:(id)arg1;	// IMP=0x000000000004993a
- (void)resetBackoff;	// IMP=0x0000000000049839
- (void)backoffDidFinish;	// IMP=0x0000000000049719
- (void)exitBackoffCanConnect;	// IMP=0x00000000000496f3
- (void)enterBackoffCanConnect;	// IMP=0x0000000000049679
- (void)enterNoNetwork;	// IMP=0x0000000000049667
- (void)enterOutOfRange;	// IMP=0x0000000000049655
- (void)delegateInvalidated;	// IMP=0x000000000004957c
- (void)delegateDisconnected;	// IMP=0x0000000000049425
- (void)delegateConnected;	// IMP=0x000000000004929a
- (void)delegateDidBecomeNotConnectableAndDidLoseBeacon;	// IMP=0x00000000000490d2
- (void)delegateDidBecomeNotConnectable;	// IMP=0x0000000000048f7b
- (void)delegateDidBecomeConnectable;	// IMP=0x0000000000048ecf
- (void)delegateDidLoseBeacon;	// IMP=0x0000000000048d78
- (void)delegateWillLoseBeacon;	// IMP=0x0000000000048c8d
- (void)cancelConnectionAttempt;	// IMP=0x0000000000048c7b
- (id)studentSocketOptions;	// IMP=0x0000000000048a79
- (void)tryConnecting;	// IMP=0x000000000004835d
- (void)registerDefaults;	// IMP=0x0000000000048254
- (void)failedToConnect;	// IMP=0x0000000000048134
- (void)didConnect;	// IMP=0x0000000000048014
- (void)lostBeacon;	// IMP=0x0000000000047ef4
@property(readonly, copy, nonatomic) NSDictionary *stateDictionary;
- (void)rejected;	// IMP=0x0000000000047c09
- (void)invalidate;	// IMP=0x0000000000047ae9
- (void)connect;	// IMP=0x00000000000479c9
- (void)lostConnection;	// IMP=0x00000000000478a9
- (void)localWiFiBecameUnavailable;	// IMP=0x0000000000047789
- (void)localWiFiBecameAvailable;	// IMP=0x0000000000047669
- (void)foundBeacon;	// IMP=0x00000000000474d7
- (id)initWithEndpoint:(id)arg1;	// IMP=0x00000000000469d7

@end
