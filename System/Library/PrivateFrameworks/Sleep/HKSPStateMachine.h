//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sleep/HKSPStateMachineDelegate-Protocol.h>
#import <Sleep/HKSPStateMachineEventHandler-Protocol.h>
#import <Sleep/HKSPStateMachineInfoProvider-Protocol.h>

@class HKSPStateMachineState, NSString;
@protocol HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, NAScheduler;

@interface HKSPStateMachine : NSObject <HKSPStateMachineDelegate, HKSPStateMachineInfoProvider, HKSPStateMachineEventHandler>
{
    _Bool _initialized;	// 8 = 0x8
    HKSPStateMachineState *_currentState;	// 16 = 0x10
    id <HKSPStateMachineDelegate> _delegate;	// 24 = 0x18
    id <HKSPStateMachineInfoProvider> _infoProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005aa0
@property(readonly, nonatomic) __weak id <HKSPStateMachineInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
@property(readonly, nonatomic) __weak id <HKSPStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(readonly, nonatomic) HKSPStateMachineState *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy) NSString *description;
- (id)stateMachineName;	// IMP=0x000000000000597e
- (unsigned long long)loggingCategory;	// IMP=0x0000000000005976
- (void)notifyDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000575a
- (void)updateState;	// IMP=0x00000000000054fa
- (_Bool)enterState:(id)arg1 context:(id)arg2;	// IMP=0x00000000000050f4
- (_Bool)enterState:(id)arg1;	// IMP=0x00000000000050e0
- (void)setInitialState:(id)arg1;	// IMP=0x0000000000004fc3
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;	// IMP=0x0000000000004f22

// Remaining properties
@property(readonly, nonatomic) id <NAScheduler> callbackScheduler;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

