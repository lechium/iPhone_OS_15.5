//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/CAMBurstIdentifierProvider-Protocol.h>
#import <CameraUI/CAMBurstRequest-Protocol.h>
#import <CameraUI/CAMCaptureAdjustmentProvider-Protocol.h>
#import <CameraUI/CAMIrisRequest-Protocol.h>
#import <CameraUI/CAMTimelapseRequest-Protocol.h>
#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSMutableCopying-Protocol.h>

@class CAMSemanticStyle, CAMTextRegionResult, NSArray, NSString, NSURL;
@protocol CAMStillImageCaptureRequestDelegate;

@interface CAMStillImageCaptureRequest <CAMCaptureAdjustmentProvider, CAMBurstIdentifierProvider, NSCopying, NSMutableCopying, CAMBurstRequest, CAMIrisRequest, CAMTimelapseRequest>
{
    NSString *_timelapseIdentifier;	// 168 = 0xa8
    NSString *_EV0PersistenceUUID;	// 176 = 0xb0
    long long _effectFilterType;	// 184 = 0xb8
    long long _lightingEffectType;	// 192 = 0xc0
    long long _aspectRatioCrop;	// 200 = 0xc8
    unsigned long long _maximumBurstLength;	// 208 = 0xd0
    long long _flashMode;	// 216 = 0xd8
    long long _hdrMode;	// 224 = 0xe0
    long long _irisMode;	// 232 = 0xe8
    long long _ctmCaptureType;	// 240 = 0xf0
    _Bool _wantsSpatialOverCapture;	// 248 = 0xf8
    _Bool _wantsPortraitEffect;	// 249 = 0xf9
    NSArray *_adjustmentFilters;	// 256 = 0x100
    NSArray *_originalFilters;	// 264 = 0x108
    long long _photoQualityPrioritization;	// 272 = 0x110
    _Bool _wantsAutoDualCameraFusion;	// 280 = 0x118
    _Bool _wantsSemanticSceneFilter;	// 281 = 0x119
    _Bool _wantsAudioForCapture;	// 282 = 0x11a
    _Bool _wantsSquareCrop;	// 283 = 0x11b
    long long _lowLightMode;	// 288 = 0x120
    CAMSemanticStyle *_semanticStyle;	// 296 = 0x128
    long long _aspectRatio;	// 304 = 0x130
    _Bool _wantsHighResolutionStills;	// 312 = 0x138
    _Bool _stillDuringVideo;	// 313 = 0x139
    NSString *_textAnalysisIdentifier;	// 320 = 0x140
    CAMTextRegionResult *_textAnalysisRegion;	// 328 = 0x148
    struct CGSize _desiredPreviewSize;	// 336 = 0x150
    NSString *_burstIdentifier;	// 352 = 0x160
    NSString *_irisIdentifier;	// 360 = 0x168
    NSURL *_localVideoDestinationURL;	// 368 = 0x170
    NSURL *_localCTMVideoDestinationURL;	// 376 = 0x178
    NSURL *_localSpatialOverCaptureVideoDestinationURL;	// 384 = 0x180
    NSURL *_localCTMSpatialOverCaptureVideoDestinationURL;	// 392 = 0x188
    NSString *_videoPersistenceUUID;	// 400 = 0x190
    NSString *_EV0IrisIdentifier;	// 408 = 0x198
    NSURL *_EV0LocalVideoDestinationURL;	// 416 = 0x1a0
    NSURL *_EV0LocalSpatialOverCaptureVideoDestinationURL;	// 424 = 0x1a8
    NSString *_EV0VideoPersistenceUUID;	// 432 = 0x1b0
    unsigned long long _userInitiationTime;	// 440 = 0x1b8
    double _loggingVideoZoomFactor;	// 448 = 0x1c0
    long long _loggingZoomInteractionType;	// 456 = 0x1c8
    id <CAMStillImageCaptureRequestDelegate> _delegate;	// 464 = 0x1d0
}

- (void).cxx_destruct;	// IMP=0x0000000000053eb5
@property(readonly, nonatomic) unsigned long long maximumBurstLength; // @synthesize maximumBurstLength=_maximumBurstLength;
@property(readonly, nonatomic) long long aspectRatioCrop; // @synthesize aspectRatioCrop=_aspectRatioCrop;
@property(readonly, nonatomic) long long lightingEffectType; // @synthesize lightingEffectType=_lightingEffectType;
@property(readonly, nonatomic) long long effectFilterType; // @synthesize effectFilterType=_effectFilterType;
@property(readonly, copy, nonatomic) NSString *EV0PersistenceUUID; // @synthesize EV0PersistenceUUID=_EV0PersistenceUUID;
@property(readonly, copy, nonatomic) NSString *timelapseIdentifier; // @synthesize timelapseIdentifier=_timelapseIdentifier;
@property(readonly, nonatomic) __weak id <CAMStillImageCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long loggingZoomInteractionType; // @synthesize loggingZoomInteractionType=_loggingZoomInteractionType;
@property(readonly, nonatomic) double loggingVideoZoomFactor; // @synthesize loggingVideoZoomFactor=_loggingVideoZoomFactor;
@property(readonly, nonatomic) unsigned long long userInitiationTime; // @synthesize userInitiationTime=_userInitiationTime;
@property(readonly, copy, nonatomic) NSString *EV0VideoPersistenceUUID; // @synthesize EV0VideoPersistenceUUID=_EV0VideoPersistenceUUID;
@property(readonly, copy, nonatomic) NSURL *EV0LocalSpatialOverCaptureVideoDestinationURL; // @synthesize EV0LocalSpatialOverCaptureVideoDestinationURL=_EV0LocalSpatialOverCaptureVideoDestinationURL;
@property(readonly, copy, nonatomic) NSURL *EV0LocalVideoDestinationURL; // @synthesize EV0LocalVideoDestinationURL=_EV0LocalVideoDestinationURL;
@property(readonly, copy, nonatomic) NSString *EV0IrisIdentifier; // @synthesize EV0IrisIdentifier=_EV0IrisIdentifier;
@property(readonly, copy, nonatomic) NSString *videoPersistenceUUID; // @synthesize videoPersistenceUUID=_videoPersistenceUUID;
@property(readonly, copy, nonatomic) NSURL *localCTMSpatialOverCaptureVideoDestinationURL; // @synthesize localCTMSpatialOverCaptureVideoDestinationURL=_localCTMSpatialOverCaptureVideoDestinationURL;
@property(readonly, copy, nonatomic) NSURL *localSpatialOverCaptureVideoDestinationURL; // @synthesize localSpatialOverCaptureVideoDestinationURL=_localSpatialOverCaptureVideoDestinationURL;
@property(readonly, copy, nonatomic) NSURL *localCTMVideoDestinationURL; // @synthesize localCTMVideoDestinationURL=_localCTMVideoDestinationURL;
@property(readonly, copy, nonatomic) NSURL *localVideoDestinationURL; // @synthesize localVideoDestinationURL=_localVideoDestinationURL;
@property(readonly, copy, nonatomic) CAMTextRegionResult *textAnalysisRegion; // @synthesize textAnalysisRegion=_textAnalysisRegion;
@property(readonly, copy, nonatomic) NSString *textAnalysisIdentifier; // @synthesize textAnalysisIdentifier=_textAnalysisIdentifier;
@property(readonly, copy, nonatomic) NSString *irisIdentifier; // @synthesize irisIdentifier=_irisIdentifier;
@property(readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(readonly, nonatomic) struct CGSize desiredPreviewSize; // @synthesize desiredPreviewSize=_desiredPreviewSize;
@property(readonly, nonatomic) CAMSemanticStyle *semanticStyle; // @synthesize semanticStyle=_semanticStyle;
@property(readonly, nonatomic) long long lowLightMode; // @synthesize lowLightMode=_lowLightMode;
@property(readonly, nonatomic) _Bool wantsSpatialOverCapture; // @synthesize wantsSpatialOverCapture=_wantsSpatialOverCapture;
@property(readonly, nonatomic) long long ctmCaptureType; // @synthesize ctmCaptureType=_ctmCaptureType;
@property(readonly, nonatomic) _Bool stillDuringVideo; // @synthesize stillDuringVideo=_stillDuringVideo;
@property(readonly, nonatomic) _Bool wantsHighResolutionStills; // @synthesize wantsHighResolutionStills=_wantsHighResolutionStills;
@property(readonly, nonatomic) _Bool wantsSquareCrop; // @synthesize wantsSquareCrop=_wantsSquareCrop;
@property(readonly, nonatomic) _Bool wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property(readonly, nonatomic) _Bool wantsSemanticSceneFilter; // @synthesize wantsSemanticSceneFilter=_wantsSemanticSceneFilter;
@property(readonly, nonatomic) _Bool wantsAutoDualCameraFusion; // @synthesize wantsAutoDualCameraFusion=_wantsAutoDualCameraFusion;
@property(readonly, nonatomic) long long photoQualityPrioritization; // @synthesize photoQualityPrioritization=_photoQualityPrioritization;
@property(readonly, nonatomic) NSArray *originalFilters; // @synthesize originalFilters=_originalFilters;
@property(readonly, nonatomic) NSArray *adjustmentFilters; // @synthesize adjustmentFilters=_adjustmentFilters;
@property(readonly, nonatomic) _Bool wantsPortraitEffect; // @synthesize wantsPortraitEffect=_wantsPortraitEffect;
@property(readonly, nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(readonly, nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (_Bool)hasAdjustments;	// IMP=0x0000000000184b30
@property(readonly, nonatomic, getter=isCTMVideo) _Bool CTMVideo;
- (_Bool)shouldProtectPersistenceForVideo;	// IMP=0x0000000000184add
- (_Bool)isLocalSpatialOverCaptureVideoDestinationURL:(id)arg1;	// IMP=0x0000000000184a2f
- (_Bool)isEV0LocalVideoDestinationURL:(id)arg1;	// IMP=0x000000000018497d
- (id)irisLocalSpatialOverCaptureVideoDestinationForEV0:(_Bool)arg1;	// IMP=0x000000000018494b
- (id)irisLocalVideoDestinationURLForEV0:(_Bool)arg1;	// IMP=0x0000000000053de7
- (id)irisVideoPersistenceUUIDForEV0:(_Bool)arg1;	// IMP=0x0000000000053e19
- (id)irisStillImagePersistenceUUIDForEV0:(_Bool)arg1;	// IMP=0x0000000000184919
- (id)irisIdentifierForEV0:(_Bool)arg1;	// IMP=0x00000000001848e7
- (id)captureRequest;	// IMP=0x000000000005a7dc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001848b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001848a6
- (id)initWithRequest:(id)arg1 distinctPersistence:(_Bool)arg2 includeAnalytics:(_Bool)arg3;	// IMP=0x00000000001841a9
- (id)init;	// IMP=0x000000000005232e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

