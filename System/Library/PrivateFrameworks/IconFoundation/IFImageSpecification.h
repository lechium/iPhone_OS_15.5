//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IFImageSpecification : NSObject
{
    double _scale;	// 8 = 0x8
    NSSet *_tags;	// 16 = 0x10
    IFImageSpecification *_smallerSpecification;	// 24 = 0x18
    IFImageSpecification *_largerSpecification;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
    struct CGSize _pixelsSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000007a5a
@property(retain, nonatomic) IFImageSpecification *largerSpecification; // @synthesize largerSpecification=_largerSpecification;
@property(retain, nonatomic) IFImageSpecification *smallerSpecification; // @synthesize smallerSpecification=_smallerSpecification;
@property(readonly) NSSet *tags; // @synthesize tags=_tags;
@property(readonly) struct CGSize pixelsSize; // @synthesize pixelsSize=_pixelsSize;
@property(readonly) double scale; // @synthesize scale=_scale;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (struct CGSize)pixelSize;	// IMP=0x0000000000007944
- (id)description;	// IMP=0x00000000000077fb
- (unsigned long long)hash;	// IMP=0x000000000000771f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000768b
- (_Bool)isEqualToImageSpecification:(id)arg1;	// IMP=0x00000000000075e3
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 tags:(id)arg3;	// IMP=0x0000000000007534
- (double)dimension;	// IMP=0x0000000000007b63
- (struct CGSize)minimumSize;	// IMP=0x0000000000007a8d

@end
