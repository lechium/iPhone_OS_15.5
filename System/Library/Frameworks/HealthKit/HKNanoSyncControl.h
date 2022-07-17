//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKNanoSyncControlClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x0000000000043d29
- (void).cxx_destruct;	// IMP=0x00000000000442bf
- (id)remoteInterface;	// IMP=0x00000000000442b5
- (id)exportedInterface;	// IMP=0x00000000000442ab
- (void)connectionInvalidated;	// IMP=0x00000000000442a5
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000440c3
- (void)resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043fad
- (void)forceLastChanceNanoSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043f93
- (void)forceNanoSyncWithPullRequest:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043f7f
- (void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043e51
- (void)fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043d3b
- (id)initWithHealthStore:(id)arg1;	// IMP=0x0000000000043c33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
