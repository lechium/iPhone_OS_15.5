//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUCVPixelBuffer : NSObject
{
    struct __CVBuffer *_CVPixelBuffer;	// 8 = 0x8
}

@property(readonly, nonatomic) struct __CVBuffer *CVPixelBuffer; // @synthesize CVPixelBuffer=_CVPixelBuffer;
- (void)dealloc;	// IMP=0x00000000001cd2d7
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000001ccf5b
- (id)init;	// IMP=0x00000000001ccbe8

@end
