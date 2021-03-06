//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

@interface TSDContentAnimationGroup
{
    NSArray *_animations;	// 8 = 0x8
    CAMediaTimingFunction *_timingFunction;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (id)i_endLocation;	// IMP=0x000000000021ea64
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000021e7aa
- (_Bool)i_canProduceAnimation;	// IMP=0x000000000021e7a2
- (void)dealloc;	// IMP=0x000000000021e74a

@end

