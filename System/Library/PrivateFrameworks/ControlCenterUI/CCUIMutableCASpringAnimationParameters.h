//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCASpringAnimationParameters
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015a32
@property(nonatomic) unsigned int highFrameRateReason; // @dynamic highFrameRateReason;
@property(nonatomic) struct CAFrameRateRange frameRateRange; // @dynamic frameRateRange;
@property(copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @dynamic timingFunction;
@property(nonatomic) double damping; // @dynamic damping;
@property(nonatomic) double stiffness; // @dynamic stiffness;
@property(nonatomic) double mass; // @dynamic mass;

@end

