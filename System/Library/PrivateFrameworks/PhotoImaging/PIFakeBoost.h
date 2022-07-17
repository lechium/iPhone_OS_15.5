//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSString;

@interface PIFakeBoost : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    double _inputBoost;	// 80 = 0x50
    NSString *_inputVersion;	// 88 = 0x58
    NSArray *_inputParams;	// 96 = 0x60
}

+ (id)boostParametersFromRawProperties:(id)arg1;	// IMP=0x000000000006447e
+ (id)currentVersion;	// IMP=0x0000000000064471
+ (id)kernelFB3;	// IMP=0x0000000000064114
+ (id)kernelFB0;	// IMP=0x0000000000063db7
- (void).cxx_destruct;	// IMP=0x0000000000065c78
@property(copy) NSArray *inputParams; // @synthesize inputParams=_inputParams;
@property(copy) NSString *inputVersion; // @synthesize inputVersion=_inputVersion;
@property double inputBoost; // @synthesize inputBoost=_inputBoost;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImageFB3;	// IMP=0x0000000000064e4d
- (id)outputImageFB0;	// IMP=0x000000000006499f
- (id)outputImage;	// IMP=0x0000000000064941

@end
