//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPSceneProcessingImageManager : NSObject
{
    NSMutableDictionary *_pixelBufferPools;	// 8 = 0x8
}

+ (id)imageManager;	// IMP=0x00000000000b9d34
- (void).cxx_destruct;	// IMP=0x00000000000bad72
- (int)scalePixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer **)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000000bac6f
- (int)loadFullPixelBuffer:(struct __CVBuffer **)arg1 scaledPixelBuffer299:(struct __CVBuffer **)arg2 scaledPixelBuffer360:(struct __CVBuffer **)arg3 fromImageURL:(id)arg4 abnormalDimension:(unsigned long long)arg5;	// IMP=0x00000000000ba895
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withColorSpace:(struct CGColorSpace *)arg2 fromPixelBuffer:(struct __CVBuffer *)arg3;	// IMP=0x00000000000ba58b
- (int)fullPixelBuffer:(struct __CVBuffer *)arg1 toScaledBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000ba1ca
- (int)_pooledPixelBuffer:(struct __CVBuffer **)arg1 withDimension:(unsigned long long)arg2;	// IMP=0x00000000000b9f6d
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withMinorDimension:(unsigned long long)arg2 fromFullPixelBuffer:(struct __CVBuffer *)arg3;	// IMP=0x00000000000b9ed2
- (int)_createPixelBuffer:(struct __CVBuffer **)arg1 withWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3;	// IMP=0x00000000000b9e0b
- (void)dealloc;	// IMP=0x00000000000b9d4e
- (id)init;	// IMP=0x00000000000b9cb0

@end
