//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect
{
    CIImage *inputImage;	// 72 = 0x48
}

+ (id)customAttributes;	// IMP=0x0000000000102b10
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (int)_maxVersion;	// IMP=0x000000000010314c
- (id)outputImage;	// IMP=0x0000000000102e53
- (id)cubeColorSpaceName;	// IMP=0x0000000000102e43
- (id)cubePath;	// IMP=0x0000000000102de0
- (id)cubeName;	// IMP=0x0000000000102d3a
- (int)_defaultVersion;	// IMP=0x0000000000102d32
- (void)setDefaults;	// IMP=0x0000000000102cb5
- (id)init;	// IMP=0x0000000000102c2d

@end

