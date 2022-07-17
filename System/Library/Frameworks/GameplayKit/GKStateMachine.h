//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKState, NSDictionary;

@interface GKStateMachine : NSObject
{
    NSDictionary *_states;	// 8 = 0x8
    GKState *_currentState;	// 16 = 0x10
}

+ (id)stateMachineWithStates:(id)arg1;	// IMP=0x000000000004e13c
- (void).cxx_destruct;	// IMP=0x000000000004ee1b
@property(readonly, nonatomic) GKState *currentState; // @synthesize currentState=_currentState;
- (id)_dotStringInstanceData;	// IMP=0x000000000004ea88
- (id)_instanceData;	// IMP=0x000000000004e5c8
- (id)stateForClass:(Class)arg1;	// IMP=0x000000000004e5b2
- (_Bool)canEnterState:(Class)arg1;	// IMP=0x000000000004e528
- (_Bool)enterState:(Class)arg1;	// IMP=0x000000000004e4e5
- (void)forceEnterState:(Class)arg1;	// IMP=0x000000000004e41f
- (void)updateWithDeltaTime:(double)arg1;	// IMP=0x000000000004e3d0
- (id)initWithStates:(id)arg1;	// IMP=0x000000000004e185
- (id)init;	// IMP=0x000000000004e0f0

@end
