//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface PILevelsFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    NSNumber *_inputBlackSrcRGB;	// 80 = 0x50
    NSNumber *_inputBlackDstRGB;	// 88 = 0x58
    NSNumber *_inputShadowSrcRGB;	// 96 = 0x60
    NSNumber *_inputShadowDstRGB;	// 104 = 0x68
    NSNumber *_inputMidSrcRGB;	// 112 = 0x70
    NSNumber *_inputMidDstRGB;	// 120 = 0x78
    NSNumber *_inputHilightSrcRGB;	// 128 = 0x80
    NSNumber *_inputHilightDstRGB;	// 136 = 0x88
    NSNumber *_inputWhiteSrcRGB;	// 144 = 0x90
    NSNumber *_inputWhiteDstRGB;	// 152 = 0x98
    NSNumber *_inputBlackSrcRed;	// 160 = 0xa0
    NSNumber *_inputBlackDstRed;	// 168 = 0xa8
    NSNumber *_inputShadowSrcRed;	// 176 = 0xb0
    NSNumber *_inputShadowDstRed;	// 184 = 0xb8
    NSNumber *_inputMidSrcRed;	// 192 = 0xc0
    NSNumber *_inputMidDstRed;	// 200 = 0xc8
    NSNumber *_inputHilightSrcRed;	// 208 = 0xd0
    NSNumber *_inputHilightDstRed;	// 216 = 0xd8
    NSNumber *_inputWhiteSrcRed;	// 224 = 0xe0
    NSNumber *_inputWhiteDstRed;	// 232 = 0xe8
    NSNumber *_inputBlackSrcGreen;	// 240 = 0xf0
    NSNumber *_inputBlackDstGreen;	// 248 = 0xf8
    NSNumber *_inputShadowSrcGreen;	// 256 = 0x100
    NSNumber *_inputShadowDstGreen;	// 264 = 0x108
    NSNumber *_inputMidSrcGreen;	// 272 = 0x110
    NSNumber *_inputMidDstGreen;	// 280 = 0x118
    NSNumber *_inputHilightSrcGreen;	// 288 = 0x120
    NSNumber *_inputHilightDstGreen;	// 296 = 0x128
    NSNumber *_inputWhiteSrcGreen;	// 304 = 0x130
    NSNumber *_inputWhiteDstGreen;	// 312 = 0x138
    NSNumber *_inputBlackSrcBlue;	// 320 = 0x140
    NSNumber *_inputBlackDstBlue;	// 328 = 0x148
    NSNumber *_inputShadowSrcBlue;	// 336 = 0x150
    NSNumber *_inputShadowDstBlue;	// 344 = 0x158
    NSNumber *_inputMidSrcBlue;	// 352 = 0x160
    NSNumber *_inputMidDstBlue;	// 360 = 0x168
    NSNumber *_inputHilightSrcBlue;	// 368 = 0x170
    NSNumber *_inputHilightDstBlue;	// 376 = 0x178
    NSNumber *_inputWhiteSrcBlue;	// 384 = 0x180
    NSNumber *_inputWhiteDstBlue;	// 392 = 0x188
    NSString *_inputColorSpace;	// 400 = 0x190
}

+ (id)customAttributes;	// IMP=0x00000000000a2146
+ (id)_customAttributesForKey:(id)arg1;	// IMP=0x00000000000a2071
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x00000000000a1ede
+ (id)P3Kernel;	// IMP=0x00000000000a1eae
- (void).cxx_destruct;	// IMP=0x00000000000a586e
@property(retain, nonatomic) NSString *inputColorSpace; // @synthesize inputColorSpace=_inputColorSpace;
@property(retain, nonatomic) NSNumber *inputWhiteDstBlue; // @synthesize inputWhiteDstBlue=_inputWhiteDstBlue;
@property(retain, nonatomic) NSNumber *inputWhiteSrcBlue; // @synthesize inputWhiteSrcBlue=_inputWhiteSrcBlue;
@property(retain, nonatomic) NSNumber *inputHilightDstBlue; // @synthesize inputHilightDstBlue=_inputHilightDstBlue;
@property(retain, nonatomic) NSNumber *inputHilightSrcBlue; // @synthesize inputHilightSrcBlue=_inputHilightSrcBlue;
@property(retain, nonatomic) NSNumber *inputMidDstBlue; // @synthesize inputMidDstBlue=_inputMidDstBlue;
@property(retain, nonatomic) NSNumber *inputMidSrcBlue; // @synthesize inputMidSrcBlue=_inputMidSrcBlue;
@property(retain, nonatomic) NSNumber *inputShadowDstBlue; // @synthesize inputShadowDstBlue=_inputShadowDstBlue;
@property(retain, nonatomic) NSNumber *inputShadowSrcBlue; // @synthesize inputShadowSrcBlue=_inputShadowSrcBlue;
@property(retain, nonatomic) NSNumber *inputBlackDstBlue; // @synthesize inputBlackDstBlue=_inputBlackDstBlue;
@property(retain, nonatomic) NSNumber *inputBlackSrcBlue; // @synthesize inputBlackSrcBlue=_inputBlackSrcBlue;
@property(retain, nonatomic) NSNumber *inputWhiteDstGreen; // @synthesize inputWhiteDstGreen=_inputWhiteDstGreen;
@property(retain, nonatomic) NSNumber *inputWhiteSrcGreen; // @synthesize inputWhiteSrcGreen=_inputWhiteSrcGreen;
@property(retain, nonatomic) NSNumber *inputHilightDstGreen; // @synthesize inputHilightDstGreen=_inputHilightDstGreen;
@property(retain, nonatomic) NSNumber *inputHilightSrcGreen; // @synthesize inputHilightSrcGreen=_inputHilightSrcGreen;
@property(retain, nonatomic) NSNumber *inputMidDstGreen; // @synthesize inputMidDstGreen=_inputMidDstGreen;
@property(retain, nonatomic) NSNumber *inputMidSrcGreen; // @synthesize inputMidSrcGreen=_inputMidSrcGreen;
@property(retain, nonatomic) NSNumber *inputShadowDstGreen; // @synthesize inputShadowDstGreen=_inputShadowDstGreen;
@property(retain, nonatomic) NSNumber *inputShadowSrcGreen; // @synthesize inputShadowSrcGreen=_inputShadowSrcGreen;
@property(retain, nonatomic) NSNumber *inputBlackDstGreen; // @synthesize inputBlackDstGreen=_inputBlackDstGreen;
@property(retain, nonatomic) NSNumber *inputBlackSrcGreen; // @synthesize inputBlackSrcGreen=_inputBlackSrcGreen;
@property(retain, nonatomic) NSNumber *inputWhiteDstRed; // @synthesize inputWhiteDstRed=_inputWhiteDstRed;
@property(retain, nonatomic) NSNumber *inputWhiteSrcRed; // @synthesize inputWhiteSrcRed=_inputWhiteSrcRed;
@property(retain, nonatomic) NSNumber *inputHilightDstRed; // @synthesize inputHilightDstRed=_inputHilightDstRed;
@property(retain, nonatomic) NSNumber *inputHilightSrcRed; // @synthesize inputHilightSrcRed=_inputHilightSrcRed;
@property(retain, nonatomic) NSNumber *inputMidDstRed; // @synthesize inputMidDstRed=_inputMidDstRed;
@property(retain, nonatomic) NSNumber *inputMidSrcRed; // @synthesize inputMidSrcRed=_inputMidSrcRed;
@property(retain, nonatomic) NSNumber *inputShadowDstRed; // @synthesize inputShadowDstRed=_inputShadowDstRed;
@property(retain, nonatomic) NSNumber *inputShadowSrcRed; // @synthesize inputShadowSrcRed=_inputShadowSrcRed;
@property(retain, nonatomic) NSNumber *inputBlackDstRed; // @synthesize inputBlackDstRed=_inputBlackDstRed;
@property(retain, nonatomic) NSNumber *inputBlackSrcRed; // @synthesize inputBlackSrcRed=_inputBlackSrcRed;
@property(retain, nonatomic) NSNumber *inputWhiteDstRGB; // @synthesize inputWhiteDstRGB=_inputWhiteDstRGB;
@property(retain, nonatomic) NSNumber *inputWhiteSrcRGB; // @synthesize inputWhiteSrcRGB=_inputWhiteSrcRGB;
@property(retain, nonatomic) NSNumber *inputHilightDstRGB; // @synthesize inputHilightDstRGB=_inputHilightDstRGB;
@property(retain, nonatomic) NSNumber *inputHilightSrcRGB; // @synthesize inputHilightSrcRGB=_inputHilightSrcRGB;
@property(retain, nonatomic) NSNumber *inputMidDstRGB; // @synthesize inputMidDstRGB=_inputMidDstRGB;
@property(retain, nonatomic) NSNumber *inputMidSrcRGB; // @synthesize inputMidSrcRGB=_inputMidSrcRGB;
@property(retain, nonatomic) NSNumber *inputShadowDstRGB; // @synthesize inputShadowDstRGB=_inputShadowDstRGB;
@property(retain, nonatomic) NSNumber *inputShadowSrcRGB; // @synthesize inputShadowSrcRGB=_inputShadowSrcRGB;
@property(retain, nonatomic) NSNumber *inputBlackDstRGB; // @synthesize inputBlackDstRGB=_inputBlackDstRGB;
@property(retain, nonatomic) NSNumber *inputBlackSrcRGB; // @synthesize inputBlackSrcRGB=_inputBlackSrcRGB;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x00000000000a4f8e
- (id)_LUTImage;	// IMP=0x00000000000a2f24
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 clearIfNotDefault:(_Bool *)arg3;	// IMP=0x00000000000a2eb2
- (void)setDefaults;	// IMP=0x00000000000a29d2

@end
