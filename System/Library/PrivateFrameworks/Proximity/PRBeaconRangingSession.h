//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/PRBeaconListenerDelegate-Protocol.h>

@class NSString, PRBeaconDescriptor, PRBeaconListener;
@protocol OS_dispatch_queue, OS_os_log, PRBeaconRangingSessionDelegate;

@interface PRBeaconRangingSession : NSObject <PRBeaconListenerDelegate>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    PRBeaconListener *_beaconListener;	// 24 = 0x18
    unsigned long long _beaconListenerState;	// 32 = 0x20
    PRBeaconDescriptor *_activeDescriptor;	// 40 = 0x28
    id <PRBeaconRangingSessionDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000009f5e
@property __weak id <PRBeaconRangingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)beaconListener:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000009f22
- (void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0000000000009e9c
- (void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2;	// IMP=0x0000000000009a6e
- (void)didFailWithError:(id)arg1;	// IMP=0x00000000000099f2
- (void)stopRangingInternal;	// IMP=0x00000000000098d6
- (void)startRangingInternal;	// IMP=0x00000000000096f0
- (void)stopRangingWithBeaconsMatchingDescriptor:(id)arg1;	// IMP=0x00000000000096bf
- (void)startRangingWithBeaconsMatchingDescriptor:(id)arg1;	// IMP=0x00000000000095fc
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000009532
- (id)init;	// IMP=0x0000000000009507

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
