//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet;

@interface MIOMultiArrayShapeConstraint : NSObject
{
    NSOrderedSet *_shapeSet;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    NSArray *_sizeRangeForDimension;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001cae1
@property(readonly, copy, nonatomic) NSArray *sizeRangeForDimension; // @synthesize sizeRangeForDimension=_sizeRangeForDimension;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001cac2
- (unsigned long long)hash;	// IMP=0x000000000001ca01
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c841
- (id)description;	// IMP=0x000000000001c499
@property(readonly, copy, nonatomic) NSArray *enumeratedShapes;
- (id)initWithSpecification:(const void *)arg1;	// IMP=0x000000000001c1c4
- (id)initWithEnumeratedShapes:(id)arg1;	// IMP=0x000000000001bbb6
- (id)initWithSizeRangeForDimension:(id)arg1;	// IMP=0x000000000001bb08
- (id)init;	// IMP=0x000000000001ba77

@end
