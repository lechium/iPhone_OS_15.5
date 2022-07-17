//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HAPAccessoryServerBrowserWiProxBTLE : HMFObject
{
    unsigned char _wholeHomeBluetooth;	// 8 = 0x8
}

@property(nonatomic) unsigned char wholeHomeBluetooth; // @synthesize wholeHomeBluetooth=_wholeHomeBluetooth;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;	// IMP=0x0000000000180e23
- (void)retrieveStateForTrackedAccessoryWithIdentifier:(id)arg1 stateNumber:(id *)arg2 isReachable:(_Bool *)arg3 linkQuality:(unsigned long long *)arg4 lastSeen:(id *)arg5;	// IMP=0x0000000000180e1d
- (void)resetLastSeenForTrackedAccessories:(id)arg1;	// IMP=0x0000000000180e17
- (id)trackedPeripheralForIdentifier:(id)arg1;	// IMP=0x0000000000180e0f
- (void)probeReachabilityForTrackedAccessoriesWithScanTuples:(id)arg1;	// IMP=0x0000000000180e09
- (void)stopTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;	// IMP=0x0000000000180e03
- (void)startTrackingHAPBLEAccessoriesWithIdentifiers:(id)arg1;	// IMP=0x0000000000180dfd
- (void)pauseScans;	// IMP=0x0000000000180df7
- (void)stopBrowsingForHAPBLEAccessories:(_Bool)arg1;	// IMP=0x0000000000180df1
- (void)startBrowsingForHAPBLEAccessories;	// IMP=0x0000000000180deb
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000180ddd

@end
