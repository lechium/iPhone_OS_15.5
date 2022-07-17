//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSObject, NSSet, SFPeerDevice;
@protocol OS_dispatch_queue;

@interface UASimulatorController
{
    NSMutableSet *_simulators;	// 8 = 0x8
    unsigned int _simulatorPort;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQ;	// 24 = 0x18
    SFPeerDevice *_ourPeerDevice;	// 32 = 0x20
}

+ (void);	// IMP=0x0040000000046e5c
+ (id)simulatorControllerForCommandPort:(unsigned int)arg1;	// IMP=0x0010000000046db0
- (void).cxx_destruct;	// IMP=0x0020000000047b52
@property(retain) SFPeerDevice *ourPeerDevice; // @synthesize ourPeerDevice=_ourPeerDevice;
@property unsigned int simulatorPort; // @synthesize simulatorPort=_simulatorPort;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQ; // @synthesize dispatchQ=_dispatchQ;
- (id)simulatorStatus;	// IMP=0x001000000004777a
- (id)statusString;	// IMP=0x0010000000047500
- (_Bool)terminate;	// IMP=0x001000000004733a
- (_Bool)active;	// IMP=0x00100000000472e2
- (void)removeSimulator:(id)arg1;	// IMP=0x001000000004724c
- (void)addSimulator:(id)arg1;	// IMP=0x00100000000471ba
@property(readonly, retain) NSSet *simulators;
- (id)initWithManager:(id)arg1;	// IMP=0x0010000000046f4d

@end
