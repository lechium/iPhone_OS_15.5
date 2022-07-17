//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKCoherentNoiseSource
{
    int _seed;	// 8 = 0x8
    double _frequency;	// 16 = 0x10
    long long _octaveCount;	// 24 = 0x18
    double _lacunarity;	// 32 = 0x20
}

@property(nonatomic) int seed; // @synthesize seed=_seed;
@property(nonatomic) double lacunarity; // @synthesize lacunarity=_lacunarity;
@property(nonatomic) long long octaveCount; // @synthesize octaveCount=_octaveCount;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
- (id)cloneModule;	// IMP=0x0000000000041476
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x000000000004139e

@end
