//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIRenditionKey, CUIRenditionMetrics, CUIRenditionSliceInformation, CUIStructuredThemeStore;

__attribute__((visibility("hidden")))
@interface _CUIInternalLinkRendition
{
    unsigned int _nimages;	// 216 = 0xd8
    struct CGRect _imageRect[16];	// 224 = 0xe0
    struct CGImage *_image[16];	// 736 = 0x2e0
    struct CGImage *_unslicedImage;	// 864 = 0x360
    CUIRenditionMetrics *_renditionMetrics;	// 872 = 0x368
    CUIRenditionSliceInformation *_sliceInformation;	// 880 = 0x370
    struct CGRect _frame;	// 888 = 0x378
    CUIStructuredThemeStore *_sourceProvider;	// 920 = 0x398
    CUIRenditionKey *_referenceKey;	// 928 = 0x3a0
    struct CGSize _originalUncroppedSize;	// 936 = 0x3a8
    struct CGRect _alphaCroppedFrame;	// 952 = 0x3b8
}

- (void).cxx_destruct;	// IMP=0x00000000000647b9
- (struct CGRect)alphaCroppedRect;	// IMP=0x0000000000064799
- (struct CGSize)originalUncroppedSize;	// IMP=0x0000000000064781
- (_Bool)edgesOnly;	// IMP=0x0000000000064737
- (_Bool)isTiled;	// IMP=0x000000000006467c
- (id)maskForSliceIndex:(long long)arg1;	// IMP=0x0000000000064546
- (id)imageForSliceIndex:(long long)arg1;	// IMP=0x0000000000064511
- (id)properties;	// IMP=0x00000000000643b2
- (id)data;	// IMP=0x0000000000064387
- (struct CGImage *)unslicedImage;	// IMP=0x0000000000064121
- (id)_sourceRendition;	// IMP=0x00000000000640d1
- (_Bool)isScaled;	// IMP=0x0000000000064060
- (id)metrics;	// IMP=0x0000000000064042
- (id)sliceInformation;	// IMP=0x0000000000064031
- (struct CGSize)unslicedSize;	// IMP=0x0000000000063fba
- (struct CGRect)_destinationFrame;	// IMP=0x0000000000063f9a
- (id)linkingToRendition;	// IMP=0x0000000000063f89
- (_Bool)isInternalLink;	// IMP=0x0000000000063f81
- (int)pixelFormat;	// IMP=0x0000000000063f56
- (_Bool)isOpaque;	// IMP=0x0000000000063f2b
- (int)bitmapEncoding;	// IMP=0x0000000000063f00
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;	// IMP=0x000000000006341c
- (void)_setStructuredThemeStore:(id)arg1;	// IMP=0x0000000000063408
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;	// IMP=0x00000000000633f6
- (void)dealloc;	// IMP=0x000000000006334c

@end
