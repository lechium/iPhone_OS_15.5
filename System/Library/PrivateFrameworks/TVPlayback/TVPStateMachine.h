//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface TVPStateMachine : NSObject
{
    CDUnknownBlockType _stateChangeHandler;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
    NSMutableDictionary *_handlers;	// 24 = 0x18
    NSMutableDictionary *_defaultHandlers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSMutableArray *_blocksToExecuteAfterStateTransition;	// 48 = 0x30
    _Bool _handlingEvent;	// 56 = 0x38
    _Bool _shouldAcceptEvents;	// 57 = 0x39
    _Bool _callsStateChangeHandlerSynchronously;	// 58 = 0x3a
    NSString *_loggingComponent;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_currentState;	// 80 = 0x50
    long long _mode;	// 88 = 0x58
    NSObject<OS_os_log> *_logObject;	// 96 = 0x60
    NSArray *_ignorableEvents;	// 104 = 0x68
}

+ (id)stateMachinesOfType:(Class)arg1;	// IMP=0x000000000000c0f6
+ (void)deregisterStateMachine:(id)arg1;	// IMP=0x000000000000c04d
+ (id)stateMachineWithName:(id)arg1;	// IMP=0x000000000000c034
+ (void)registerStateMachine:(id)arg1;	// IMP=0x000000000000bf78
+ (void)initialize;	// IMP=0x000000000000bf31
- (void).cxx_destruct;	// IMP=0x000000000000df3b
@property(nonatomic) _Bool callsStateChangeHandlerSynchronously; // @synthesize callsStateChangeHandlerSynchronously=_callsStateChangeHandlerSynchronously;
@property(copy) NSArray *ignorableEvents; // @synthesize ignorableEvents=_ignorableEvents;
@property(retain, nonatomic) NSObject<OS_os_log> *logObject; // @synthesize logObject=_logObject;
@property _Bool shouldAcceptEvents; // @synthesize shouldAcceptEvents=_shouldAcceptEvents;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(copy) NSString *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)logUnhandledEvents;	// IMP=0x000000000000d6fe
- (void)deregisterHandlers;	// IMP=0x000000000000d66b
- (void)executeBlockAfterCurrentStateTransition:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d593
- (void)registerStateTransitionFromState:(id)arg1 onEvent:(id)arg2 toState:(id)arg3;	// IMP=0x000000000000d3f3
- (void)registerDefaultHandlerForEvent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d263
- (void)registerHandlerForEvents:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000cfa5
- (void)registerHandlerForEvent:(id)arg1 onStates:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000cdec
- (void)registerHandlerForEvent:(id)arg1 onState:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000cbb9
- (void)purgeEventQueue;	// IMP=0x000000000000cb61
- (void)postEvent:(id)arg1 withContext:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000c7f6
- (void)postEvent:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000000c7e1
- (void)postEvent:(id)arg1;	// IMP=0x000000000000c7ca
@property(copy, nonatomic) NSString *loggingComponent; // @synthesize loggingComponent=_loggingComponent;
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3 stateChangeHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c531
- (id)initWithName:(id)arg1 initialState:(id)arg2 mode:(long long)arg3;	// IMP=0x000000000000c2a7
- (CDUnknownBlockType)_eventHandlerForEvent:(id)arg1;	// IMP=0x000000000000ed12
- (void)_dispatchEvent:(id)arg1;	// IMP=0x000000000000e9cc
- (void)_processEvent:(id)arg1;	// IMP=0x000000000000e612
- (void)_processNextEvent;	// IMP=0x000000000000e556
- (void)_executePostTransitionBlocks;	// IMP=0x000000000000e3e3
- (void)_transitionToState:(id)arg1 withEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000000000dfc6

@end
