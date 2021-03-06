//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueDelay, VCEmulatedNetworkAlgorithmQueueLoss;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkQueue
{
    VCEmulatedNetworkAlgorithmQueueBandwidth *_queueBandwidthAlgorithm;	// 32 = 0x20
    VCEmulatedNetworkAlgorithmQueueLoss *_queueLossAlgorithm;	// 40 = 0x28
    VCEmulatedNetworkAlgorithmQueueDelay *_queueDelayAlgorithm;	// 48 = 0x30
    double _lastPolicyLoadingTime;	// 56 = 0x38
}

- (int)dequeuePacket:(id)arg1 time:(double)arg2;	// IMP=0x00000000002259ec
- (void)runUntilTime:(double)arg1;	// IMP=0x0000000000225777
- (int)enqueuePacket:(id)arg1;	// IMP=0x0000000000225698
- (int)write:(id)arg1;	// IMP=0x000000000022550f
- (void)markPacketLoss:(id)arg1;	// IMP=0x00000000002254f2
- (void)updateSettingsAtTime:(double)arg1;	// IMP=0x000000000022543c
- (void)dealloc;	// IMP=0x00000000002253b3
- (id)initWithPolicies:(id)arg1;	// IMP=0x0000000000225262

@end

