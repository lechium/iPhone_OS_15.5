//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPoint : NSObject <NSCopying, NSSecureCoding>
{
    double _x;	// 8 = 0x8
    double _y;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000962c5
+ (double)distanceBetweenPoint:(id)arg1 point:(id)arg2;	// IMP=0x00000000000962ad
+ (id)pointByApplyingVector:(id)arg1 toPoint:(id)arg2;	// IMP=0x00000000000961b7
+ (id)zeroPoint;	// IMP=0x0000000000096187
@property(readonly) double y; // @synthesize y=_y;
@property(readonly) double x; // @synthesize x=_x;
- (id)description;	// IMP=0x00000000000960ff
- (unsigned long long)hash;	// IMP=0x0000000000096089
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000095f92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000095f87
@property(readonly) struct CGPoint location;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000095ecc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000095e27
- (id)initWithX:(double)arg1 y:(double)arg2;	// IMP=0x0000000000095d7d
- (id)initWithLocation:(struct CGPoint)arg1;	// IMP=0x0000000000095d6b
- (id)init;	// IMP=0x0000000000095d53
- (double)distanceToPoint:(id)arg1;	// IMP=0x0000000000095cbb

@end

