//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_log, PRProximityEstimatorDelegate;

@interface PRProximityEstimator : NSObject
{
    _Bool usingST;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSMutableDictionary *devicesMonitered;	// 32 = 0x20
    id <PRProximityEstimatorDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000027958
@property(readonly) __weak id <PRProximityEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invokeDelegateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000278f2
- (_Bool)addRssiSample:(double)arg1 channel:(unsigned int)arg2 forPeer:(id)arg3 withError:(id *)arg4;	// IMP=0x000000000002755b
- (_Bool)stopEstimatingProximityFor:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000273b8
- (_Bool)startEstimatingProximityFor:(id)arg1 peerDeviceModel:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000026ff8
- (id)initSingleThresholdEstmatorWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x0000000000026e59
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x0000000000026cd9
- (id)init;	// IMP=0x0000000000026c9b

@end

