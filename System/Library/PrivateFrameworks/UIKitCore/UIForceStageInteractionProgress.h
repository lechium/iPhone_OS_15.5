//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObservable-Protocol.h>
#import <UIKitCore/NSObserver-Protocol.h>

@class NSObservation, NSString;

@interface UIForceStageInteractionProgress <NSObservable, NSObserver>
{
    NSObservation *_observation;	// 8 = 0x8
    _Bool _completed;	// 16 = 0x10
    _Bool _started;	// 17 = 0x11
    _Bool _completesAtTargetState;	// 18 = 0x12
}

- (void).cxx_destruct;	// IMP=0x0000000000cbc837
@property(nonatomic) _Bool completesAtTargetState; // @synthesize completesAtTargetState=_completesAtTargetState;
- (void)_reset;	// IMP=0x0000000000cbc7fb
- (void)receiveObservedValue:(id)arg1;	// IMP=0x0000000000cbc64e
- (void)dealloc;	// IMP=0x0000000000cbc5ce
- (id)init;	// IMP=0x0000000000cbc52d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
