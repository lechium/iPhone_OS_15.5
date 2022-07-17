//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWUnitTestSampler-Protocol.h>

@class AWUnitTestFaceDetectOperation;
@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler>
{
    CDStruct_2c6bab44 _sampleStats;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_awQueue;	// 32 = 0x20
    AWUnitTestFaceDetectOperation *_lastOperation;	// 40 = 0x28
    CDUnknownBlockType _displayCallback;	// 48 = 0x30
    CDUnknownBlockType _smartCoverCallback;	// 56 = 0x38
    _Bool _facePresent;	// 64 = 0x40
    _Bool _pearlError;	// 65 = 0x41
    id <BKDevicePearlDelegate> _delegate;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    CDStruct_2c6bab44 *_sampleStatsPtr;	// 88 = 0x58
}

+ (id)sharedDevice;	// IMP=0x0000000000012ddd
- (void).cxx_destruct;	// IMP=0x0000000000012729
@property _Bool pearlError; // @synthesize pearlError=_pearlError;
@property _Bool facePresent; // @synthesize facePresent=_facePresent;
@property CDStruct_2c6bab44 *sampleStatsPtr; // @synthesize sampleStatsPtr=_sampleStatsPtr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPearlErrorState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001265f
- (void)setPearlErrorState:(_Bool)arg1;	// IMP=0x00000000000124db
- (void)setSmartCoverCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000001244e
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000012402
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x000000000001227e
- (void)setDisplayCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000121f1
- (void)setDisplayState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000121a5
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x0000000000012021
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011fc6
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;	// IMP=0x0000000000011e35
- (void)setSampleState:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011de9
- (void)setSampleState:(_Bool)arg1;	// IMP=0x0000000000011dd2
- (void)resetStats;	// IMP=0x0000000000011d87
- (void)getStatsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011cfa
- (void)deliverPearlDeviceState:(long long)arg1;	// IMP=0x0000000000011c7e
- (void)deliverPearlDeviceEvent:(long long)arg1;	// IMP=0x0000000000011c02
- (id)createPresenceDetectOperationWithError:(id *)arg1;	// IMP=0x0000000000011b49
- (id)init;	// IMP=0x0000000000011ae6

@end
