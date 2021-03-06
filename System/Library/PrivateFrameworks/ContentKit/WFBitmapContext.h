//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFBitmapContext : NSObject
{
    double _scale;	// 8 = 0x8
    struct CGContext *_CGContext;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

+ (id)currentContextWithScale:(double)arg1;	// IMP=0x0000000000020c41
+ (id)contextWithDeviceScreenScaleAndSize:(struct CGSize)arg1;	// IMP=0x0000000000020c2c
+ (id)contextWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000020bdb
@property(readonly, nonatomic) struct CGContext *CGContext; // @synthesize CGContext=_CGContext;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)resignCurrent;	// IMP=0x000000000002089c
- (void)becomeCurrent;	// IMP=0x000000000002075c
- (id)imageWithOrientation:(unsigned int)arg1;	// IMP=0x00000000000206bf
- (void)dealloc;	// IMP=0x0000000000020685
- (id)initWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3 colorspace:(struct CGColorSpace *)arg4;	// IMP=0x000000000002037e
- (id)initWithSize:(struct CGSize)arg1 opaque:(_Bool)arg2 scale:(double)arg3;	// IMP=0x0000000000020367
- (id)initWithCGContext:(struct CGContext *)arg1 scale:(double)arg2;	// IMP=0x0000000000020275
- (id)image;	// IMP=0x0000000000020bc4

@end

