//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/PTRenderState-Protocol.h>

@class MISSING_TYPE, NSString, PTRenderPipelineDescriptor;
@protocol RenderingIntegration;

@interface PTRenderPipelineState : NSObject <PTRenderState>
{
    PTRenderPipelineDescriptor *_desc;	// 8 = 0x8
    id <RenderingIntegration> _renderIntegration;	// 16 = 0x10
    struct CGSize _colorOutputSizeCropped;	// 24 = 0x18
    int _quality;	// 40 = 0x28
    unsigned long long _renderingVersion;	// 48 = 0x30
    int quality;	// 56 = 0x38
    float focalLenIn35mmFilm;	// 60 = 0x3c
    int conversionGain;	// 64 = 0x40
    int readNoise_1x;	// 68 = 0x44
    int readNoise_8x;	// 72 = 0x48
    int rawSensorHeight;	// 76 = 0x4c
    int rawSensorWidth;	// 80 = 0x50
    int sensorID;	// 84 = 0x54
    int sourceColorBitDepth;	// 88 = 0x58
    NSString *description;	// 96 = 0x60
    MISSING_TYPE *visCropFactor;	// 104 = 0x68
    struct CGRect totalSensorCrop;	// 112 = 0x70
}

+ (Class)classForVersion:(unsigned long long)arg1;	// IMP=0x0000000000038137
- (void).cxx_destruct;	// IMP=0x0000000000038a7c
@property(nonatomic) int sourceColorBitDepth; // @synthesize sourceColorBitDepth;
@property(nonatomic) int sensorID; // @synthesize sensorID;
@property(nonatomic) MISSING_TYPE *visCropFactor; // @synthesize visCropFactor;
@property(nonatomic) struct CGRect totalSensorCrop; // @synthesize totalSensorCrop;
@property(nonatomic) int rawSensorWidth; // @synthesize rawSensorWidth;
@property(nonatomic) int rawSensorHeight; // @synthesize rawSensorHeight;
@property(nonatomic) int readNoise_8x; // @synthesize readNoise_8x;
@property(nonatomic) int readNoise_1x; // @synthesize readNoise_1x;
@property(nonatomic) int conversionGain; // @synthesize conversionGain;
@property(nonatomic) float focalLenIn35mmFilm; // @synthesize focalLenIn35mmFilm;
@property(readonly, copy) NSString *description; // @synthesize description;
@property(readonly) int quality; // @synthesize quality;
- (int)encodeRenderTo:(id)arg1 withRenderRequest:(id)arg2;	// IMP=0x000000000003882d
- (void)adjustScissorRect:(id)arg1;	// IMP=0x00000000000385e4
- (_Bool)prepareForRendering;	// IMP=0x0000000000038295
@property(nonatomic) unsigned long long renderingVersion;
- (id)initWithPipelineDescriptor:(id)arg1 quality:(int)arg2;	// IMP=0x0000000000037fa2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
