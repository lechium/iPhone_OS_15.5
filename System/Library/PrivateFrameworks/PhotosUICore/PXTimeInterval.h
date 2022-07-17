//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PXTimeInterval : NSObject
{
    long long _state;	// 8 = 0x8
    double _beginTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    NSMutableDictionary *_tokenToTransitionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000078fd80
@property(retain, nonatomic) NSMutableDictionary *tokenToTransitionHandler; // @synthesize tokenToTransitionHandler=_tokenToTransitionHandler;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)arg1;	// IMP=0x000000000078fbaf
- (void)reset;	// IMP=0x000000000078fb71
- (void)endIntervalWithTimeOverride:(double)arg1;	// IMP=0x000000000078fb0d
- (void)endInterval;	// IMP=0x000000000078fae9
- (void)beginIntervalWithTimeOverride:(double)arg1;	// IMP=0x000000000078fa83
- (void)beginInterval;	// IMP=0x000000000078fa5f
- (void)removeStateTransitionHandler:(id)arg1;	// IMP=0x000000000078f981
- (id)addStateTransitionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000078f844
@property(readonly, nonatomic) double duration;
- (id)init;	// IMP=0x000000000078f70a

@end
