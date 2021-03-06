//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTStateMachineEventHandler-Protocol.h>

@class MTStateMachine, NSString;

@interface MTStateMachineState : NSObject <MTStateMachineEventHandler>
{
    MTStateMachine *_stateMachine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000082916
@property(nonatomic) __weak MTStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)didEnterWithPreviousState:(id)arg1;	// IMP=0x00000000000828e9
- (void)didExitWithNextState:(id)arg1;	// IMP=0x00000000000828e3
- (void)willEnterWithPreviousState:(id)arg1;	// IMP=0x00000000000828dd
- (void)willExitWithNextState:(id)arg1;	// IMP=0x00000000000828d7
- (id)initWithStateMachine:(id)arg1;	// IMP=0x0000000000082873

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

