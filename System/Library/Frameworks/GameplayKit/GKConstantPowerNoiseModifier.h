//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKConstantPowerNoiseModifier
{
    double _power;	// 16 = 0x10
}

- (id)cloneModule;	// IMP=0x0000000000036579
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000364c6
- (int)requiredInputModuleCount;	// IMP=0x00000000000364bb
- (id)initWithConstantPower:(double)arg1;	// IMP=0x000000000003646c
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x0000000000036451
- (id)init;	// IMP=0x0000000000036436

@end
