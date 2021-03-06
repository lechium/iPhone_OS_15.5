//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject
{
    NSMutableDictionary *_functionsByName;	// 8 = 0x8
    double _percentComplete;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000058b07
@property(nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (double)valueForFunctionWithName:(id)arg1;	// IMP=0x0000000000058a84
- (id)timingFunctionNames;	// IMP=0x0000000000058a6e
- (void)addTimingFunctionWithName:(id)arg1 fromNormalizedAnimationSettings:(id)arg2;	// IMP=0x00000000000589b0
- (void)addTimingFunction:(id)arg1 withName:(id)arg2 constrainedToIntervalBetween:(double)arg3 and:(double)arg4;	// IMP=0x0000000000058917
- (void)addTimingFunction:(id)arg1 withName:(id)arg2;	// IMP=0x00000000000588fa
- (id)init;	// IMP=0x00000000000588a4

@end

