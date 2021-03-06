//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBPowerAssertionManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSString, RBProcessMap, RBSystemPowerAssertion;
@protocol OS_dispatch_queue, RBPowerAssertionManagerDelegate;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing>
{
    RBProcessMap *_stateMap;	// 8 = 0x8
    RBProcessMap *_assertionMap;	// 16 = 0x10
    RBSystemPowerAssertion *_systemAssertion;	// 24 = 0x18
    unsigned long long _assertionCount;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <RBPowerAssertionManagerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000a33d
@property(nonatomic) __weak id <RBPowerAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)arg1;	// IMP=0x000000000000a18f
- (id)_unitTest_nameOfPowerAssertionForSystem;	// IMP=0x000000000000a0ab
- (_Bool)_unitTest_hasPowerAssertionForProcess:(id)arg1;	// IMP=0x0000000000009ee1
- (_Bool)_unitTest_hasSystemPowerAssertion;	// IMP=0x0000000000009e2a
- (id)captureState;	// IMP=0x0000000000009dee
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)removeProcess:(id)arg1;	// IMP=0x0000000000009c67
- (void)addProcess:(id)arg1;	// IMP=0x0000000000009af6
- (void)applySystemState:(id)arg1;	// IMP=0x00000000000097a1
- (void)removeStateForProcessIdentity:(id)arg1;	// IMP=0x0000000000009643
- (void)didUpdateProcessStates:(id)arg1;	// IMP=0x00000000000092e8
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0000000000008e36
- (id)init;	// IMP=0x0000000000008d84

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

