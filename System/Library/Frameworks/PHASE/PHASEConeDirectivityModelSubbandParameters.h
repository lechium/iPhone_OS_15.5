//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHASEConeDirectivityModelSubbandParameters : NSObject
{
    double _frequency;	// 8 = 0x8
    double _innerAngle;	// 16 = 0x10
    double _outerAngle;	// 24 = 0x18
    double _outerGain;	// 32 = 0x20
}

@property(nonatomic) double outerGain; // @synthesize outerGain=_outerGain;
@property(readonly) double outerAngle; // @synthesize outerAngle=_outerAngle;
@property(readonly) double innerAngle; // @synthesize innerAngle=_innerAngle;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (void)setInnerAngle:(double)arg1 outerAngle:(double)arg2;	// IMP=0x000000000005dc31
- (id)init;	// IMP=0x000000000005db40

@end

