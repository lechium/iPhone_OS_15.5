//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCHardwareSettings : NSObject
{
    _Bool _supportVCPEncoderInitialized;	// 8 = 0x8
    _Bool _supportVCPEncoder;	// 9 = 0x9
    NSMutableDictionary *_hardwareUsageModeSettings;	// 16 = 0x10
    NSMutableSet *_pixelFormatCollections;	// 24 = 0x18
    _Bool _vcpSupportsHEVCEncoder;	// 32 = 0x20
}

+ (unsigned int)maxVCPSupportedTemporalLayers;	// IMP=0x00000000003a0e01
+ (_Bool)preferPresentationTimestamp;	// IMP=0x00000000003a0df9
+ (_Bool)supportsPortraitCameraCapture;	// IMP=0x00000000003a0df1
+ (_Bool)isVideoRenderingSupported;	// IMP=0x00000000003a0de9
+ (unsigned int)maxActiveVideoDecoders;	// IMP=0x00000000003a0de1
+ (unsigned int)maxActiveVideoEncoders;	// IMP=0x00000000003a0dd9
+ (long long)screenShareCapabilities;	// IMP=0x00000000003a0dd1
+ (float)previewPreferredAspectRatio;	// IMP=0x00000000003a0dc3
+ (_Bool)disableMLScalarDuringSharing;	// IMP=0x00000000003a0dbb
+ (_Bool)supportsDedicatedSystemAudioStream;	// IMP=0x00000000003a0db3
+ (_Bool)limitCameraDownlinkBitrateDuringSharing;	// IMP=0x00000000003a0dab
+ (id)supportedVideoPayloads;	// IMP=0x00000000003a0da3
+ (unsigned int)maxMultiwayFramerateSupported;	// IMP=0x00000000003a0d98
+ (unsigned int)maxOneToOneFramerateSupported;	// IMP=0x00000000003a0d8d
+ (_Bool)supportsHEVCDecoding;	// IMP=0x00000000003a0d85
+ (_Bool)supportsHEVCEncoding;	// IMP=0x00000000003a0d7d
+ (_Bool)supportsHEIFEncoding;	// IMP=0x00000000003a0d75
+ (_Bool)isCaptureSIFRPreferred;	// IMP=0x00000000003a0c80
+ (_Bool)isSpatialAudioSupported;	// IMP=0x00000000003a0a71
+ (_Bool)isDisplayPortrait;	// IMP=0x00000000003a0a69
+ (unsigned int)maxFrameRateSupportedBackgroundBlur;	// IMP=0x00000000003a0a5e
+ (unsigned int)maxActiveScreenEncoders;	// IMP=0x00000000003a0a56
+ (_Bool)shouldEnforceScreenFrameRateLimit;	// IMP=0x00000000003a0a4e
+ (unsigned int)maxFrameRateSupportedScreenShare;	// IMP=0x00000000003a0a46
+ (unsigned long long)maxScreenEncodingSizeSupported;	// IMP=0x00000000003a0a3e
+ (unsigned int)screenHeightForDisplayID:(unsigned int)arg1;	// IMP=0x00000000003a0a36
+ (unsigned int)screenWidthForDisplayID:(unsigned int)arg1;	// IMP=0x00000000003a0a2e
+ (unsigned int)screenHeight;	// IMP=0x00000000003a0a26
+ (unsigned int)screenWidth;	// IMP=0x00000000003a0a1e
+ (_Bool)shouldOverrideGPUMuxing;	// IMP=0x00000000003a0a16
+ (_Bool)disableViewPointCorrectionForSharing;	// IMP=0x00000000003a09e9
+ (unsigned int)maxFpsCameraCaptureDuringSharing;	// IMP=0x00000000003a09d3
+ (unsigned int)maxRemoteParticipants30fps;	// IMP=0x00000000003a09c8
+ (unsigned int)builtinMicCount;	// IMP=0x00000000003a09c0
+ (long long)deviceClass;	// IMP=0x00000000003a09b3
@property(readonly, nonatomic) NSSet *pixelFormatCollections; // @synthesize pixelFormatCollections=_pixelFormatCollections;
@property(readonly, nonatomic) _Bool vcpSupportsHEVCEncoder; // @synthesize vcpSupportsHEVCEncoder=_vcpSupportsHEVCEncoder;
@property(readonly, nonatomic) _Bool isVideoRenderingSupported;
- (unsigned int)maxNetworkBitrateMultiwayVideoOnWifi:(_Bool)arg1;	// IMP=0x00000000003a0953
- (unsigned int)maxNetworkBitrateMultiwayAudioOnWifi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;	// IMP=0x00000000003a08e8
- (_Bool)storeHardwareSettingsForAllOperatingModes;	// IMP=0x00000000003a0709
- (unsigned int)tilesPerVideoFrame:(int)arg1 hdrMode:(unsigned long long)arg2;	// IMP=0x00000000003a06b4
- (unsigned int)tilesPerVideoFrame:(int)arg1;	// IMP=0x00000000003a066c
- (id)featureListStringForHEVC:(int)arg1;	// IMP=0x00000000003a0626
- (id)featureListStringForH264:(int)arg1;	// IMP=0x00000000003a05e0
- (void)dealloc;	// IMP=0x00000000003a0573
- (id)init;	// IMP=0x00000000003a04a6

@end

