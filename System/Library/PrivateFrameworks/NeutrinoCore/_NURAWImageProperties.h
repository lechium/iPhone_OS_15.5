//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURAWImageProperties-Protocol.h>

@class CIFilter, NSArray, NSString, _NURAWCameraSpaceProperties, _NURAWToneCurveProperties;
@protocol NURAWNoiseReductionProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>
{
    NSString *_decoderVersion;	// 8 = 0x8
    NSArray *_availableDecoderVersions;	// 16 = 0x10
    double _temperature;	// 24 = 0x18
    double _tint;	// 32 = 0x20
    CIFilter *_rawConvert;	// 40 = 0x28
    id <NURAWNoiseReductionProperties> _noiseReductionProperties;	// 48 = 0x30
    _NURAWCameraSpaceProperties *_rawCameraSpaceProperties;	// 56 = 0x38
    _NURAWToneCurveProperties *_rawToneCurveProperties;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000008b8c
@property(retain) _NURAWToneCurveProperties *rawToneCurveProperties; // @synthesize rawToneCurveProperties=_rawToneCurveProperties;
@property(retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties; // @synthesize rawCameraSpaceProperties=_rawCameraSpaceProperties;
@property(retain) id <NURAWNoiseReductionProperties> noiseReductionProperties; // @synthesize noiseReductionProperties=_noiseReductionProperties;
@property(retain) CIFilter *rawConvert; // @synthesize rawConvert=_rawConvert;
@property double tint; // @synthesize tint=_tint;
@property double temperature; // @synthesize temperature=_temperature;
@property(retain) NSArray *availableDecoderVersions; // @synthesize availableDecoderVersions=_availableDecoderVersions;
@property(retain) NSString *decoderVersion; // @synthesize decoderVersion=_decoderVersion;
@property(readonly, copy) NSString *description;
- (id)inputNeutralXYFromRGB:(const double *)arg1;	// IMP=0x0000000000008833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
