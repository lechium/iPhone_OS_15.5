//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CUINamedImage
{
    double _scale;	// 56 = 0x38
    struct _cuiniproperties {
        unsigned int isVectorBased:1;
        unsigned int hasSliceInformation:1;
        unsigned int hasAlignmentInformation:1;
        unsigned int resizingMode:2;
        unsigned int templateRenderingMode:3;
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isFlippable:1;
        unsigned int isTintable:1;
        unsigned int preservedVectorRepresentation:1;
        unsigned int _reserved:16;
    } _imageProperties;	// 64 = 0x40
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;	// IMP=0x0000000000075588
- (struct CGSize)originalUncroppedSize;	// IMP=0x0000000000075572
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;	// IMP=0x00000000000754fb
- (id)baseKey;	// IMP=0x00000000000754cb
- (id)description;	// IMP=0x00000000000751d2
@property(readonly, nonatomic) _Bool isAlphaCropped;
@property(readonly, nonatomic) int exifOrientation;
@property(readonly, nonatomic) _Bool preservedVectorRepresentation;
@property(readonly, nonatomic) _Bool isFlippable;
@property(readonly, nonatomic) _Bool isStructured;
@property(readonly, nonatomic) long long templateRenderingMode;
@property(readonly, nonatomic) _Bool isTemplate;
@property(readonly, nonatomic) _Bool isVectorBased;
@property(readonly, nonatomic) _Bool hasAlignmentInformation;
@property(readonly, nonatomic) _Bool hasSliceInformation;
- (long long)resizingModeWithSubtype:(long long)arg1;	// IMP=0x00000000000750ab
@property(readonly, nonatomic) long long resizingMode;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) CDStruct_3c058996 alignmentEdgeInsets;
@property(readonly, nonatomic) CDStruct_3c058996 edgeInsets;
- (double)positionOfSliceBoundary:(unsigned int)arg1;	// IMP=0x0000000000074e05
@property(readonly, nonatomic) long long imageType;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *croppedImage;
@property(readonly, nonatomic) struct CGImage *image;
- (_Bool)_cacheRenditionProperties;	// IMP=0x0000000000074a56
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;	// IMP=0x00000000000749c7

@end

