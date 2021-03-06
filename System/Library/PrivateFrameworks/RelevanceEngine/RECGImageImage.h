//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RECGImageImage
{
    struct CGImage *_CGImage;	// 8 = 0x8
    double _scale;	// 16 = 0x10
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007d5df
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d4e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007d420
- (unsigned long long)hash;	// IMP=0x000000000007d3d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007d379
- (void)dealloc;	// IMP=0x000000000007d333
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;	// IMP=0x000000000007d2c7

@end

