//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPhotoEffect3D
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputDepthMap;	// 80 = 0x50
    NSNumber *inputThreshold;	// 88 = 0x58
    NSNumber *inputGrainAmount;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00000000001031f3
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputGrainAmount; // @synthesize inputGrainAmount;
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) CIImage *inputDepthMap; // @synthesize inputDepthMap;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (int)_maxVersionBG;	// IMP=0x00000000001040aa
- (int)_maxVersion;	// IMP=0x00000000001040a2
- (id)outputImage;	// IMP=0x0000000000103c77
- (id)applyCubeWithName:(id)arg1 toImage:(id)arg2;	// IMP=0x00000000001038f9
- (id)cubeColorSpaceName;	// IMP=0x00000000001038e9
- (id)backgroundCubePath;	// IMP=0x0000000000103886
- (id)cubePath;	// IMP=0x0000000000103823
- (id)backgroundCubeName;	// IMP=0x000000000010375e
- (id)cubeName;	// IMP=0x00000000001036b8
- (id)_CIPhotoEffectDepthBlend;	// IMP=0x0000000000103698
- (int)_defaultVersion;	// IMP=0x0000000000103690
- (void)setDefaults;	// IMP=0x0000000000103613
- (id)init;	// IMP=0x000000000010358b

@end
