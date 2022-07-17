//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray, TSDContentPath;

@interface TSDContentPathAnimation
{
    NSArray *_contentLocations;	// 8 = 0x8
    CAMediaTimingFunction *_timingFunction;	// 16 = 0x10
    NSArray *_keyTimes;	// 24 = 0x18
    NSArray *_timingFunctions;	// 32 = 0x20
    double _duration;	// 40 = 0x28
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
@property(copy, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSArray *contentLocations; // @synthesize contentLocations=_contentLocations;
- (id)i_endLocation;	// IMP=0x000000000021e681
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000021e3b0
- (_Bool)i_canProduceAnimation;	// IMP=0x000000000021e3a8
@property(copy, nonatomic) TSDContentPath *contentPath;
- (void)dealloc;	// IMP=0x000000000021e2d9

@end
