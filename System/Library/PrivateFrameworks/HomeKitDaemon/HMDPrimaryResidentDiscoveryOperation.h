//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDHome, HMDMessageDispatcher, HMDResidentDevice, HMFTimer, NSArray, NSEnumerator, NSString;

@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMFLogging, HMFTimerDelegate>
{
    HMDResidentDevice *_currentPrimaryResident;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    HMDMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    CDUnknownBlockType _responseHandler;	// 32 = 0x20
    NSEnumerator *_candidateDestinationsEnumerator;	// 40 = 0x28
    NSArray *_candidateDestinations;	// 48 = 0x30
    HMFTimer *_sendToNextDestinationTimer;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000042addc
- (void).cxx_destruct;	// IMP=0x000000000042a6c1
@property(retain) HMFTimer *sendToNextDestinationTimer; // @synthesize sendToNextDestinationTimer=_sendToNextDestinationTimer;
@property(readonly) NSArray *candidateDestinations; // @synthesize candidateDestinations=_candidateDestinations;
@property(retain) NSEnumerator *candidateDestinationsEnumerator; // @synthesize candidateDestinationsEnumerator=_candidateDestinationsEnumerator;
@property(readonly) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMDResidentDevice *currentPrimaryResident; // @synthesize currentPrimaryResident=_currentPrimaryResident;
- (id)logIdentifier;	// IMP=0x000000000042a574
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000042a2af
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000042a245
- (void)finish;	// IMP=0x000000000042a1db
- (void)main;	// IMP=0x0000000000429e1b
- (id)initWithHome:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000429b02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
