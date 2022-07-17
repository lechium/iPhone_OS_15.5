//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject
{
    NSCache *_cachedBackgroundImages;	// 8 = 0x8
    UIColor *_defaultBackgroundColor;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000223ac
+ (struct CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;	// IMP=0x000000000002231a
- (void).cxx_destruct;	// IMP=0x00000000000222f2
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) NSCache *cachedBackgroundImages; // @synthesize cachedBackgroundImages=_cachedBackgroundImages;
- (id)imageNamed:(id)arg1;	// IMP=0x0000000000022238
- (id)_fetchAndCacheBackgroundImageWithName:(id)arg1;	// IMP=0x000000000002213a
- (struct CGImage *)newImage:(struct CGImage *)arg1 croppedToAspectRatio:(struct CGSize)arg2;	// IMP=0x0000000000022038
- (struct CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(_Bool)arg3;	// IMP=0x0000000000021ec1
- (double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;	// IMP=0x0000000000021df0
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;	// IMP=0x0000000000021d01
- (id)_thumbnailShadowForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;	// IMP=0x0000000000021c2c
- (struct CGSize)backgroundImageSizeForPopoverAnnotation;	// IMP=0x0000000000021bcb
- (struct CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;	// IMP=0x0000000000021b2b
- (id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1;	// IMP=0x0000000000021686
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;	// IMP=0x0000000000021622
- (id)createPopoverImageForGeotaggable:(id)arg1 withImage:(struct CGImage *)arg2 imageType:(unsigned long long)arg3 imageOptions:(unsigned long long)arg4 usingTraitCollection:(id)arg5;	// IMP=0x00000000000211de
- (id)init;	// IMP=0x0000000000021188

@end
