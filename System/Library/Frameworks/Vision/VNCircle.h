//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class VNPoint;

@interface VNCircle : NSObject <NSCopying, NSSecureCoding>
{
    VNPoint *_center;	// 8 = 0x8
    double _radius;	// 16 = 0x10
}

+ (id)zeroCircle;	// IMP=0x00000000002571f1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002571e9
- (void).cxx_destruct;	// IMP=0x00000000002571d9
@property(readonly) double radius; // @synthesize radius=_radius;
@property(readonly) VNPoint *center; // @synthesize center=_center;
- (id)description;	// IMP=0x0000000000257100
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000256f86
- (unsigned long long)hash;	// IMP=0x0000000000256ec4
- (_Bool)containsPoint:(id)arg1 inCircumferentialRingOfWidth:(double)arg2;	// IMP=0x0000000000256d10
- (_Bool)containsPoint:(id)arg1;	// IMP=0x0000000000256bc9
@property(readonly) double diameter;
- (id)initWithCenter:(id)arg1 diameter:(double)arg2;	// IMP=0x0000000000256b98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000256b8d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000256b1e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000256a2d
- (id)initWithCenter:(id)arg1 radius:(double)arg2;	// IMP=0x0000000000256941
- (id)init;	// IMP=0x00000000002568ca

@end

