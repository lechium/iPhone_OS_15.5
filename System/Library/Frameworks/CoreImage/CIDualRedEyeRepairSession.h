//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIContext, CIDualRedEyeRepairTuning, CIImage, CIRenderDestination, NSArray, NSDate, NSDictionary;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLTexture;

@interface CIDualRedEyeRepairSession : NSObject
{
    struct __CVBuffer *_primary;	// 8 = 0x8
    struct __CVBuffer *_secondary;	// 16 = 0x10
    struct __CVBuffer *_output;	// 24 = 0x18
    CIContext *context;	// 32 = 0x20
    NSArray *observations;	// 40 = 0x28
    CIRenderDestination *destination;	// 48 = 0x30
    CIImage *primaryImage;	// 56 = 0x38
    CIImage *secondaryImage;	// 64 = 0x40
    NSDictionary *metadata;	// 72 = 0x48
    NSDictionary *imageProperties;	// 80 = 0x50
    NSArray *faces;	// 88 = 0x58
    CIDualRedEyeRepairTuning *tuning;	// 96 = 0x60
    NSDate *timestamp;	// 104 = 0x68
    NSDictionary *tuningParametersByPortType;	// 112 = 0x70
    id <MTLCommandQueue> commandQueue;	// 120 = 0x78
    id <MTLTexture> primaryTexture;	// 128 = 0x80
    id <MTLTexture> secondaryTexture;	// 136 = 0x88
    id <MTLTexture> outputTexture;	// 144 = 0x90
    id <MTLCommandBuffer> commandBuffer;	// 152 = 0x98
}

+ (id)_contextRGBAh;	// IMP=0x000000000007b411
@property(retain, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer;
@property(retain, nonatomic) id <MTLTexture> outputTexture; // @synthesize outputTexture;
@property(retain, nonatomic) id <MTLTexture> secondaryTexture; // @synthesize secondaryTexture;
@property(retain, nonatomic) id <MTLTexture> primaryTexture; // @synthesize primaryTexture;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue;
@property(retain, nonatomic) NSDictionary *tuningParametersByPortType; // @synthesize tuningParametersByPortType;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp;
@property(retain, nonatomic) CIDualRedEyeRepairTuning *tuning; // @synthesize tuning;
@property(retain, nonatomic) NSArray *faces; // @synthesize faces;
@property(retain, nonatomic) NSDictionary *imageProperties; // @synthesize imageProperties;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata;
@property(retain, nonatomic) CIImage *secondaryImage; // @synthesize secondaryImage;
@property(retain, nonatomic) CIImage *primaryImage; // @synthesize primaryImage;
@property(retain, nonatomic) CIRenderDestination *destination; // @synthesize destination;
@property(retain, nonatomic) NSArray *observations; // @synthesize observations;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (void)dumpObservation:(id)arg1 index:(int)arg2;	// IMP=0x000000000008120f
- (void)dumpSecondary;	// IMP=0x00000000000810ef
- (_Bool)_repairPrimaryWithSecondary:(struct __CVBuffer *)arg1 to:(struct __CVBuffer *)arg2;	// IMP=0x000000000008031f
- (_Bool)repairPrimaryWithSecondary:(struct __CVBuffer *)arg1;	// IMP=0x0000000000080309
- (_Bool)setPrimary:(struct __CVBuffer *)arg1 observations:(id)arg2 metadata:(id)arg3;	// IMP=0x000000000007f46e
- (_Bool)repairFace:(id)arg1 filter:(id)arg2;	// IMP=0x000000000007ede8
- (void)customizeRepairFilter:(id)arg1 forFace:(id)arg2;	// IMP=0x000000000007eaa0
- (id)redEyeFaceFromObservation:(id)arg1 exifOrientation:(int)arg2;	// IMP=0x000000000007d181
- (int)validateRepair;	// IMP=0x000000000007cf55
- (int)validateSetPrimary;	// IMP=0x000000000007cb2b
- (_Bool)validateRenderState;	// IMP=0x000000000007ca88
- (void)dumpInputs;	// IMP=0x000000000007c94a
- (_Bool)renderUsingProvidedCommandQueue;	// IMP=0x000000000007c8e2
- (_Bool)renderUsingPixelBuffers;	// IMP=0x000000000007c8c4
- (_Bool)prepareRepairWithTuningParametersByPortType:(id)arg1;	// IMP=0x000000000007c896
- (_Bool)prepareRepair;	// IMP=0x000000000007c84b
- (_Bool)prewarm;	// IMP=0x000000000007b6c7
- (void)cleanupState;	// IMP=0x000000000007b635
- (void)dealloc;	// IMP=0x000000000007b5a5
- (id)init;	// IMP=0x000000000007b52b

@end

