//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal *_internal;	// 8 = 0x8
}

+ (id)layerWithSessionWithNoConnection:(id)arg1;	// IMP=0x000000000007c27b
+ (id)layerWithSession:(id)arg1;	// IMP=0x000000000007c244
+ (void)initialize;	// IMP=0x000000000007c040
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000081183
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;	// IMP=0x000000000008105b
- (void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x0000000000080eb4
- (_Bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(_Bool)arg2 exceptionReason:(id *)arg3;	// IMP=0x0000000000080ce5
- (_Bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000080a9c
- (void)_updateSemanticStyleRenderingSupported;	// IMP=0x00000000000808b8
- (void)_updateDepthDataDeliverySupported;	// IMP=0x000000000008076c
- (void)_updatePreviewTransforms;	// IMP=0x0000000000080236
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;	// IMP=0x00000000000800b3
- (void)_updateCaptureDeviceTransform;	// IMP=0x0000000000080043
- (void)setCaptureDeviceTransformNeedsUpdate;	// IMP=0x000000000007fff7
- (void)_setSensorAndEstimatedPreviewSizes;	// IMP=0x000000000007fe6a
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;	// IMP=0x000000000007fdbf
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;	// IMP=0x000000000007fcd7
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;	// IMP=0x000000000007fbb3
- (id)_input;	// IMP=0x000000000007fb02
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;	// IMP=0x000000000007fa7a
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;	// IMP=0x000000000007f9ac
- (id)weakReference;	// IMP=0x000000000007f994
- (void)setSinkID:(id)arg1;	// IMP=0x000000000007f94c
- (id)sinkID;	// IMP=0x000000000007f92a
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f8a8
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000007f79b
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000007f6e1
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000007f4bf
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;	// IMP=0x000000000007f414
- (void)bumpChangeSeed;	// IMP=0x000000000007f3be
- (int)changeSeed;	// IMP=0x000000000007f3a7
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;	// IMP=0x000000000007f329
- (void)removeConnection:(id)arg1;	// IMP=0x000000000007f0ed
- (id)addConnection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007ef2b
- (id)connectionMediaTypes;	// IMP=0x000000000007eed0
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000007ee67
- (unsigned int)imageQueueSlot;	// IMP=0x000000000007ee2b
- (void)setSemanticStyle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000007eb1d
- (id)semanticStyle;	// IMP=0x000000000007eb05
- (void)setSemanticStyleRenderingEnabled:(_Bool)arg1;	// IMP=0x000000000007e9ce
- (_Bool)isSemanticStyleRenderingEnabled;	// IMP=0x000000000007e9b7
- (_Bool)isSemanticStyleRenderingSupported;	// IMP=0x000000000007e9a0
- (void)setUnoptimizedFilterRenderingEnabled:(_Bool)arg1;	// IMP=0x000000000007e8a2
- (_Bool)isUnoptimizedFilterRenderingEnabled;	// IMP=0x000000000007e863
- (void)setVideoPreviewFilters:(id)arg1;	// IMP=0x000000000007e7c0
- (id)videoPreviewFilters;	// IMP=0x000000000007e758
- (void)setFilterRenderingEnabled:(_Bool)arg1;	// IMP=0x000000000007e6f0
- (_Bool)isFilterRenderingEnabled;	// IMP=0x000000000007e6b1
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;	// IMP=0x000000000007e5b3
- (_Bool)isDepthDataDeliveryEnabled;	// IMP=0x000000000007e574
- (_Bool)isDepthDataDeliverySupported;	// IMP=0x000000000007e535
- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;	// IMP=0x000000000007e45d
- (_Bool)isChromaNoiseReductionEnabled;	// IMP=0x000000000007e41e
- (_Bool)isChromaNoiseReductionSupported;	// IMP=0x000000000007e3c4
- (void)setPaused:(_Bool)arg1;	// IMP=0x000000000007e3be
- (_Bool)isPaused;	// IMP=0x000000000007e37f
@property(nonatomic, getter=isMirrored) _Bool mirrored;
- (_Bool)_isMirrored;	// IMP=0x000000000007e103
@property(nonatomic) _Bool automaticallyAdjustsMirroring;
- (_Bool)_automaticallyAdjustsMirroring;	// IMP=0x000000000007de55
@property(readonly, nonatomic, getter=isMirroringSupported) _Bool mirroringSupported;
@property(nonatomic) long long orientation;
- (long long)_orientation;	// IMP=0x000000000007dab9
@property(readonly, nonatomic, getter=isOrientationSupported) _Bool orientationSupported;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000007cf77
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000007cf49
- (void)layoutSublayers;	// IMP=0x000000000007cdb4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000007cd50
@property(readonly, nonatomic, getter=isPreviewing) _Bool previewing;
- (void)setSessionWithNoConnection:(id)arg1;	// IMP=0x000000000007cc11
@property(retain, nonatomic) AVCaptureSession *session;
@property(readonly, nonatomic) AVCaptureConnection *connection;
- (void)dealloc;	// IMP=0x000000000007c8ca
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000007c679
- (double)previewRotationDegrees;	// IMP=0x000000000007c633
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;	// IMP=0x000000000007c2f1
- (id)initWithSessionWithNoConnection:(id)arg1;	// IMP=0x000000000007c2dd
- (id)initWithSession:(id)arg1;	// IMP=0x000000000007c2c6
- (id)init;	// IMP=0x000000000007c2b2
- (void)centerSublayer:(long long)arg1;	// IMP=0x000000000007c084

@end
