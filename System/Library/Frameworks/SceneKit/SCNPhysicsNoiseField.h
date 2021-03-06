//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNPhysicsNoiseField
{
    double _smoothness;	// 128 = 0x80
    double _animationSpeed;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000499df
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000049905
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004987f
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000497b7
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000049708
- (_Bool)supportsDirection;	// IMP=0x0000000000049700
- (_Bool)supportsOffset;	// IMP=0x00000000000496f8
@property(nonatomic) double animationSpeed;
@property(nonatomic) double smoothness;
- (struct c3dPhysicsField *)_createField;	// IMP=0x00000000000494f8
- (id)init;	// IMP=0x00000000000494a0

@end

