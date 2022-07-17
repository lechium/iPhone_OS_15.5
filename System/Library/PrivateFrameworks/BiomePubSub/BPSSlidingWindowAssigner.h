//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSWindowAssigner-Protocol.h>

@class BPSAggregator, NSString;

@interface BPSSlidingWindowAssigner : NSObject <BPSWindowAssigner>
{
    double _interval;	// 8 = 0x8
    double _slide;	// 16 = 0x10
    BPSAggregator *_aggregator;	// 24 = 0x18
    CDUnknownBlockType _timestamp;	// 32 = 0x20
    unsigned long long _identifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002ce31
- (id)assignWindowNonOverlappingIntervals:(id)arg1 timestamp:(id)arg2;	// IMP=0x000000000002ca64
- (id)assignWindowOverlappingIntervals:(id)arg1 timestamp:(id)arg2;	// IMP=0x000000000002c441
- (id)assignWindow:(id)arg1 input:(id)arg2;	// IMP=0x000000000002c3a3
- (id)initWithInterval:(double)arg1 slide:(double)arg2 timestamp:(CDUnknownBlockType)arg3 aggregator:(id)arg4;	// IMP=0x000000000002c1eb
- (id)initWithInterval:(double)arg1 slide:(double)arg2 aggregator:(id)arg3;	// IMP=0x000000000002c1b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
