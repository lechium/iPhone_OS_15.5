//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMImageNode
{
}

+ (id)title;	// IMP=0x00000000000aef28
+ (_Bool)isSupported;	// IMP=0x00000000000aef20
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aef18
- (void)triggerWithImageAssetLocalIdentifier:(id)arg1 wellKnownPHPhotoLibraryIdentifier:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000afaa4
- (void)triggerWithPixelBuffer:(struct __CVBuffer *)arg1 exifOrientation:(unsigned int)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000af878
- (void)triggerWithImageURL:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000af603
- (void)triggerWithImageURL:(id)arg1 assetLocalIdentifier:(id)arg2 wellKnownPHPhotoLibraryIdentifier:(long long)arg3 options:(id)arg4 cacheKey:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000af36b
- (void)triggerWithImage:(id)arg1 options:(id)arg2 cacheKey:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000af163
- (void)produceImage:(id)arg1;	// IMP=0x00000000000aef35

@end
