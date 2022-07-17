//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparitySmoothing
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputNumIterations;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x000000000006d9e4
@property(copy) NSNumber *inputNumIterations; // @synthesize inputNumIterations;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000006dd6a
- (id)outputImageMetal;	// IMP=0x000000000006dc00
- (id)_customBoxBlur5Kernel;	// IMP=0x000000000006dba3

@end
