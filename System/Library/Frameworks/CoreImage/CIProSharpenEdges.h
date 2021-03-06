//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIProSharpenEdges
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputFalloff;	// 80 = 0x50
    NSNumber *inputSharpness;	// 88 = 0x58
    NSNumber *inputEdgeScale;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00000000001591be
- (id)outputImage;	// IMP=0x00000000001589e1
- (id)_CISharpenCombineEdges;	// IMP=0x00000000001589c1
- (id)_CIFindEdges;	// IMP=0x00000000001589a1
- (id)_CIEdgesPrep;	// IMP=0x0000000000158981
- (id)_CIBlur4;	// IMP=0x0000000000158961
- (id)_CIBlur2;	// IMP=0x0000000000158941
- (id)_CIBlur1;	// IMP=0x0000000000158921
- (id)_CIConvertRGBtoY;	// IMP=0x0000000000158901

@end

