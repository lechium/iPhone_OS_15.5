//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject
{
    TSDImageAdjustments *mImageAdjustments;	// 8 = 0x8
}

- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;	// IMP=0x0000000000132d99
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;	// IMP=0x0000000000131f42
- (void)dealloc;	// IMP=0x0000000000131f07
- (id)initWithImageAdjustments:(id)arg1;	// IMP=0x0000000000131eb7
- (id)init;	// IMP=0x0000000000131de5

@end
