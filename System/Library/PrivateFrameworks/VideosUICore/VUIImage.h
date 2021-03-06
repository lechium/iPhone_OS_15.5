//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface VUIImage : NSObject
{
    struct CGImage *_image;	// 8 = 0x8
    struct CGImageSource *_imageSource;	// 16 = 0x10
    double _imageWidth;	// 24 = 0x18
    double _imageHeight;	// 32 = 0x20
    int _imageOrientation;	// 40 = 0x28
    _Bool _enableCache;	// 44 = 0x2c
    _Bool _cacheImmediately;	// 45 = 0x2d
    NSURL *_imageURL;	// 48 = 0x30
    NSData *_imageData;	// 56 = 0x38
    NSString *_imageType;	// 64 = 0x40
    _Bool _imageBufferInMemory;	// 72 = 0x48
    _Bool _rotationEnabled;	// 73 = 0x49
}

+ (long long)imageOrientationForExifOrientation:(int)arg1;	// IMP=0x000000000002c982
+ (int)exifOrientationForImageOrientation:(long long)arg1;	// IMP=0x000000000002c962
+ (id)imageWithRotationFromPath:(id)arg1;	// IMP=0x000000000002bc2c
+ (id)imageWithRotationFromURL:(id)arg1;	// IMP=0x000000000002bbb9
+ (id)imageWithCGImageRef:(struct CGImage *)arg1 imageOrientation:(long long)arg2 preserveAlpha:(_Bool)arg3;	// IMP=0x000000000002bb69
+ (id)imageWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;	// IMP=0x000000000002bb52
+ (id)imageWithData:(id)arg1;	// IMP=0x000000000002bb00
+ (id)imageWithPath:(id)arg1 cacheImmediately:(_Bool)arg2;	// IMP=0x000000000002ba64
+ (id)imageWithPath:(id)arg1;	// IMP=0x000000000002ba50
+ (id)imageWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;	// IMP=0x000000000002b9ee
+ (id)imageWithURL:(id)arg1;	// IMP=0x000000000002b9da
- (void).cxx_destruct;	// IMP=0x000000000002d185
@property(nonatomic) _Bool rotationEnabled; // @synthesize rotationEnabled=_rotationEnabled;
@property(readonly, nonatomic) int orientation; // @synthesize orientation=_imageOrientation;
- (void)_initializeCGImageWithRotation;	// IMP=0x000000000002cb55
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource *)arg1;	// IMP=0x000000000002c9a1
- (long long)_uiImageOrientation;	// IMP=0x000000000002c91e
- (_Bool)isImageBufferInMemory;	// IMP=0x000000000002c915
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1;	// IMP=0x000000000002c81d
- (struct CGRect)largestSquareRect;	// IMP=0x000000000002c73e
- (_Bool)enableCache;	// IMP=0x000000000002c735
- (void)setEnableCache:(_Bool)arg1;	// IMP=0x000000000002c71e
- (_Bool)sourceRequiresRotation;	// IMP=0x000000000002c70c
- (_Bool)isPowerOfTwo;	// IMP=0x000000000002c6a8
- (float)aspectRatio;	// IMP=0x000000000002c67b
- (struct CGSize)pixelBounds;	// IMP=0x000000000002c66b
- (_Bool)hasAlpha;	// IMP=0x000000000002c64b
- (id)imageType;	// IMP=0x000000000002c63d
- (struct CGImage *)image;	// IMP=0x000000000002c5dc
- (id)uiImage;	// IMP=0x000000000002c52b
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;	// IMP=0x000000000002c4fc
- (void)dealloc;	// IMP=0x000000000002c47c
- (id)initWithData:(id)arg1;	// IMP=0x000000000002c1fa
- (id)initWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;	// IMP=0x000000000002bf34
- (id)initWithURL:(id)arg1;	// IMP=0x000000000002bf20
- (id)initWithCGImageRef:(struct CGImage *)arg1 exifOrientation:(int)arg2 preserveAlpha:(_Bool)arg3;	// IMP=0x000000000002bdf6
- (id)initWithCGImageRef:(struct CGImage *)arg1 imageOrientation:(long long)arg2 preserveAlpha:(_Bool)arg3;	// IMP=0x000000000002bcb2
- (id)initWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;	// IMP=0x000000000002bc9b

@end

