//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

@interface _UILegibilityImageSet : NSObject
{
    UIImage *_image;	// 8 = 0x8
    UIImage *_shadowImage;	// 16 = 0x10
}

+ (id)imageFromImage:(id)arg1 withShadowImage:(id)arg2;	// IMP=0x00000000008505b0
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)dealloc;	// IMP=0x00000000008507d2
- (id)imageSetWithOrientation:(long long)arg1;	// IMP=0x00000000008506de
- (id)imageSetFlippedForRightToLeft;	// IMP=0x0000000000850660
- (id)initWithImage:(id)arg1 shadowImage:(id)arg2;	// IMP=0x00000000008505eb

@end

