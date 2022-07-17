//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAMSemanticStyle, CAMVideoThumbnailOutputConfiguration, NSArray;

@interface CAMCaptureGraphConfiguration : NSObject
{
    _Bool _enableAutoFPSVideo;	// 8 = 0x8
    _Bool _videoHDRSuspended;	// 9 = 0x9
    _Bool _enableHDR10BitVideoIfSupported;	// 10 = 0xa
    _Bool _captureMirrored;	// 11 = 0xb
    _Bool _enableRAWCaptureIfSupported;	// 12 = 0xc
    _Bool _enableContentAwareDistortionCorrection;	// 13 = 0xd
    _Bool _enableResponsiveShutter;	// 14 = 0xe
    long long _mode;	// 16 = 0x10
    long long _device;	// 24 = 0x18
    long long _videoConfiguration;	// 32 = 0x20
    long long _audioConfiguration;	// 40 = 0x28
    unsigned long long _previewConfiguration;	// 48 = 0x30
    long long _previewSampleBufferVideoFormat;	// 56 = 0x38
    NSArray *_previewFilters;	// 64 = 0x40
    CAMVideoThumbnailOutputConfiguration *_videoThumbnailOutputConfiguration;	// 72 = 0x48
    long long _photoEncodingBehavior;	// 80 = 0x50
    long long _videoEncodingBehavior;	// 88 = 0x58
    long long _aspectRatioCrop;	// 96 = 0x60
    long long _photoQualityPrioritization;	// 104 = 0x68
    unsigned long long _semanticStyleSupport;	// 112 = 0x70
    CAMSemanticStyle *_previewSemanticStyle;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000487d6
@property(readonly, nonatomic) _Bool enableResponsiveShutter; // @synthesize enableResponsiveShutter=_enableResponsiveShutter;
@property(readonly, nonatomic) _Bool enableContentAwareDistortionCorrection; // @synthesize enableContentAwareDistortionCorrection=_enableContentAwareDistortionCorrection;
@property(readonly, nonatomic) CAMSemanticStyle *previewSemanticStyle; // @synthesize previewSemanticStyle=_previewSemanticStyle;
@property(readonly, nonatomic) unsigned long long semanticStyleSupport; // @synthesize semanticStyleSupport=_semanticStyleSupport;
@property(readonly, nonatomic) _Bool enableRAWCaptureIfSupported; // @synthesize enableRAWCaptureIfSupported=_enableRAWCaptureIfSupported;
@property(readonly, nonatomic, getter=isCaptureMirrored) _Bool captureMirrored; // @synthesize captureMirrored=_captureMirrored;
@property(readonly, nonatomic) _Bool enableHDR10BitVideoIfSupported; // @synthesize enableHDR10BitVideoIfSupported=_enableHDR10BitVideoIfSupported;
@property(readonly, nonatomic) long long photoQualityPrioritization; // @synthesize photoQualityPrioritization=_photoQualityPrioritization;
@property(readonly, nonatomic) long long aspectRatioCrop; // @synthesize aspectRatioCrop=_aspectRatioCrop;
@property(readonly, nonatomic, getter=isVideoHDRSuspended) _Bool videoHDRSuspended; // @synthesize videoHDRSuspended=_videoHDRSuspended;
@property(readonly, nonatomic) _Bool enableAutoFPSVideo; // @synthesize enableAutoFPSVideo=_enableAutoFPSVideo;
@property(readonly, nonatomic) long long videoEncodingBehavior; // @synthesize videoEncodingBehavior=_videoEncodingBehavior;
@property(readonly, nonatomic) long long photoEncodingBehavior; // @synthesize photoEncodingBehavior=_photoEncodingBehavior;
@property(readonly, nonatomic) CAMVideoThumbnailOutputConfiguration *videoThumbnailOutputConfiguration; // @synthesize videoThumbnailOutputConfiguration=_videoThumbnailOutputConfiguration;
@property(readonly, nonatomic) NSArray *previewFilters; // @synthesize previewFilters=_previewFilters;
@property(readonly, nonatomic) long long previewSampleBufferVideoFormat; // @synthesize previewSampleBufferVideoFormat=_previewSampleBufferVideoFormat;
@property(readonly, nonatomic) unsigned long long previewConfiguration; // @synthesize previewConfiguration=_previewConfiguration;
@property(readonly, nonatomic) long long audioConfiguration; // @synthesize audioConfiguration=_audioConfiguration;
@property(readonly, nonatomic) long long videoConfiguration; // @synthesize videoConfiguration=_videoConfiguration;
@property(readonly, nonatomic) long long device; // @synthesize device=_device;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (id)description;	// IMP=0x000000000004b221
- (id)completeDescription;	// IMP=0x000000000004b234
- (id)shortDescription;	// IMP=0x00000000001aa786
@property(readonly, nonatomic) long long devicePosition;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 previewConfiguration:(unsigned long long)arg5 previewSampleBufferVideoFormat:(long long)arg6 previewFilters:(id)arg7 videoThumbnailOutputConfiguration:(id)arg8 photoEncodingBehavior:(long long)arg9 videoEncodingBehavior:(long long)arg10 enableAutoFPSVideo:(_Bool)arg11 videoHDRSuspended:(_Bool)arg12 aspectRatioCrop:(long long)arg13 photoQualityPrioritization:(long long)arg14 enableHDR10BitVideoIfSupported:(_Bool)arg15 captureMirrored:(_Bool)arg16 enableRAWCaptureIfSupported:(_Bool)arg17 semanticStyleSupport:(unsigned long long)arg18 previewSemanticStyle:(id)arg19 enableContentAwareDistortionCorrection:(_Bool)arg20 enableResponsiveShutter:(_Bool)arg21;	// IMP=0x00000000001aa5ec

@end
