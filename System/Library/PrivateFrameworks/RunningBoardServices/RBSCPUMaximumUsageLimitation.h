//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RBSCPUMaximumUsageLimitation
{
    unsigned char _role;	// 8 = 0x8
    unsigned long long _percentage;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _violationPolicy;	// 32 = 0x20
}

+ (id)limitationForRole:(unsigned char)arg1 withPercentage:(unsigned long long)arg2 duration:(double)arg3 violationPolicy:(unsigned long long)arg4;	// IMP=0x000000000000633e
@property(readonly, nonatomic) unsigned char role; // @synthesize role=_role;
@property(readonly, nonatomic) unsigned long long violationPolicy; // @synthesize violationPolicy=_violationPolicy;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long percentage; // @synthesize percentage=_percentage;
- (unsigned long long)hash;	// IMP=0x000000000000694d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000068ad
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000067c7
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000066e7
- (id)description;	// IMP=0x00000000000065e6

@end
