//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKPositionConstraint
{
    SKRange *_xRange;	// 24 = 0x18
    SKRange *_yRange;	// 32 = 0x20
}

+ (id)constraintWithYRange:(id)arg1;	// IMP=0x00000000000eaddd
+ (id)constraintWithXRange:(id)arg1;	// IMP=0x00000000000ead33
+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000eac9f
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ea775
- (void).cxx_destruct;	// IMP=0x00000000000eaed5
@property(copy) SKRange *yRange; // @synthesize yRange=_yRange;
@property(copy) SKRange *xRange; // @synthesize xRange=_xRange;
- (_Bool)isEqualToPositionConstraint:(id)arg1;	// IMP=0x00000000000eab4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000eaa7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ea986
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ea848
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;	// IMP=0x00000000000ea77d

@end
