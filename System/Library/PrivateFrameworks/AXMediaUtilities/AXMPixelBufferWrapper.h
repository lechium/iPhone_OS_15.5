//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXMPixelBufferWrapper : NSObject
{
    struct __CVBuffer *_pixelBuffer;	// 8 = 0x8
    unsigned int _orientation;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000007711e
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;	// IMP=0x00000000000770a1
@property(readonly, nonatomic) struct CGSize orientedSize;
@property(readonly, nonatomic) struct CGSize unorientedSize;
@property(readonly, nonatomic) unsigned int orientation;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (void)dealloc;	// IMP=0x00000000000771a7
- (id)_initWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;	// IMP=0x000000000007714d
- (id)init;	// IMP=0x00000000000770dc

@end

