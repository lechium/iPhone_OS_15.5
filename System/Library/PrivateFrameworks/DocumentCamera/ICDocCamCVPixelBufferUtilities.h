//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICDocCamCVPixelBufferUtilities : NSObject
{
}

+ (id)coreImageForPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;	// IMP=0x000000000004888f
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2 copyMemory:(_Bool)arg3;	// IMP=0x0000000000048696
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1 colorSpace:(struct CGColorSpace *)arg2;	// IMP=0x000000000004867e
+ (struct CGImage *)createImageWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0000000000048637

@end

